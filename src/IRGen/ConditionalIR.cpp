#include "AST.hpp"

optional<Value*> BranchExpr::codegen (CompilationContext &ctx)  {
    auto *main = ctx.builder->GetInsertBlock();
    auto *f = main->getParent();

    BasicBlock *endingBlock = BasicBlock::Create(*ctx.context, ctx.names.use("if_end"), f);
    bool didInsertFrame = false;

    for (const auto &block : ifMap) {
        auto originalInsert = ctx.builder->GetInsertBlock();

        if (get<0>(block).has_value()) {
            // first create conditional
            auto condV = (*get<0>(block))->codegen(ctx);
            if (!condV) return nullopt;
            if (didInsertFrame) ctx.popFrame();

            // add the then basic block
            ctx.pushFrame(false);
            BasicBlock *thenBB = BasicBlock::Create(*ctx.context, ctx.names.use("then"), f);
            ctx.builder->SetInsertPoint(thenBB);
            get<1>(block)->codegen(ctx);
            ctx.builder->CreateBr(endingBlock);
            ctx.popFrame();

            // then add else block

            BasicBlock *elseBB;
            if (block == ifMap.back()) {
                didInsertFrame = false;
                elseBB = endingBlock;
            } else {
                ctx.pushFrame(false);
                didInsertFrame = true;
                elseBB = BasicBlock::Create(*ctx.context, ctx.names.use("else"), f);
            }

            // go back to the main block and then insert the cond br
            ctx.builder->SetInsertPoint(originalInsert);
            ctx.builder->CreateCondBr(*condV, thenBB, elseBB);

            // point back to next if/else statement or ending block
            ctx.builder->SetInsertPoint(elseBB);
        } else {
            // parsing an else conditional
            get<1>(block)->codegen(ctx);
            ctx.builder->CreateBr(endingBlock);
            ctx.builder->SetInsertPoint(endingBlock);
            ctx.popFrame();
        }
    }

    return nullopt;
}

optional<Value*> TernaryExpr::codegen(CompilationContext &ctx) {
    if (!_if) return nullopt;
    if (!then) return nullopt;
    if (!_else) return nullopt;

    auto if_Codegen = _if->codegen(ctx);
    if (!if_Codegen) return nullopt;
    auto then_Codegen = then->codegen(ctx);
    if (!then_Codegen) return nullopt;
    auto else_Codegen = _else->codegen(ctx);
    if (!else_Codegen) return nullopt;

    auto thenRetType = then->return_type();
    auto elseRetType = _else->return_type();
    
    bool isIntBool = (thenRetType == "bool" && elseRetType == "int") || (thenRetType == "int" && elseRetType == "bool");
    if (isIntBool) retType = "bool";
    else if (thenRetType == elseRetType) {
        retType = thenRetType;
    }
    else {
        string returnArg = "Invalid return type when parsing ternary statements; first expr: ";
        returnArg += thenRetType;
        returnArg += " second expr: ";
        returnArg += elseRetType;
        throw invalid_argument(returnArg);
    }

    return ctx.builder->CreateSelect(*if_Codegen, *then_Codegen, *else_Codegen);
}



// not really a conditional but it's fairly prelevant in conditions so
optional<Value*> ReturnExpr::codegen (CompilationContext &ctx) {
    if (!val) return ctx.builder->CreateRetVoid(); 
    auto codegen = (*val)->codegen(ctx);
    if (codegen)
        return ctx.builder->CreateRet(*codegen);
    else 
        throw invalid_argument("Cannot return unsuccessful value codegen");
}