#include "AST.hpp"
#include "CompilationContext.hpp"

std::string determineType (std::string firstType, std::string secondType) {
    if (firstType == "string") return "string"; 
    if (firstType == "float" && secondType == "float") return "float";
    if (firstType == "int" && secondType == "int") return "int";
    if (firstType == "bool" && secondType == "bool") return "bool";

    if (firstType == "float" && secondType == "int") return "float";
    if (firstType == "int" && secondType == "float") return "float";
    if (firstType == "bool" && secondType == "int") return "int"; // bool is just going to be treated as a number
    if (firstType == "bool" && secondType == "float") return "float"; // bool is going to be treated as a number
    if (firstType == "int" && secondType == "bool") return "int"; // bool is just going to be treated as a number
    if (firstType == "float" && secondType == "bool") return "int"; // bool is just going to be treated as a number
    throw invalid_argument((std::string("Unsupported type ") + firstType + " " + secondType + " types.").c_str());
}

optional<Value*> BinaryOpExpr::codegen (CompilationContext &ctx) {
    if (asTypeOp != "")  {
        retType = asTypeOp;
        if (retType == "int")
            return ctx.builder->CreateIntCast(*(LHS->codegen(ctx)), ctx.convertToLLVMType(asTypeOp), false);
        if (retType == "float" || retType == "double")
            return ctx.builder->CreateFPCast(*(LHS->codegen(ctx)), ctx.convertToLLVMType(asTypeOp));
        if (retType.substr(0, 4) == "ptr<") 
            return ctx.builder->CreatePointerCast(*(LHS->codegen(ctx)), ctx.convertToLLVMType(asTypeOp));

        // more casts????
    }

    retType = "bool";
    if (op == "and") {
        // expr1 ? expr2 : false
        auto tn = TernaryExpr(move(LHS), move(RHS), make_unique<IntExpr>(IntExpr(0, 1)));
        return tn.codegen(ctx);
    } else if (op == "or") {
        //expr1 ? true : expr2
        auto tn = TernaryExpr(move(LHS), make_unique<IntExpr>(IntExpr(1, 1)), move(RHS));
        return tn.codegen(ctx);
    }

    auto LHSVal = *(LHS->codegen(ctx));
    auto RHSVal = *(RHS->codegen(ctx));
    
    retType = determineType(LHS->return_type(), RHS->return_type());
    
    // to be implemented
    if (op == "+") {
        return ctx.builder->CreateAdd(LHSVal, RHSVal); //currently assumes everything is an int
    } else if (op == "*") {
        return ctx.builder->CreateMul(LHSVal, RHSVal);
    } else if (op == ">") {
        retType = "bool";
        return ctx.builder->CreateICmpSGT(LHSVal, RHSVal);
    } else if (op == "<") {
        retType = "bool";
        return ctx.builder->CreateICmpSLT(LHSVal, RHSVal);
    } else if (op == ">=") {
        retType = "bool";
        return ctx.builder->CreateICmpSGE(LHSVal, RHSVal);
    } else if(op == "<=") {
        retType = "bool";
        return ctx.builder->CreateICmpSLE(LHSVal, RHSVal);
    } else if (op == "-") {
        return ctx.builder->CreateSub(LHSVal, RHSVal);
    } else if (op == "/") {
        return ctx.builder->CreateSDiv(LHSVal, RHSVal);
    } else if (op == "%") {
        return ctx.builder->CreateICmpEQ(LHSVal, RHSVal);
    } else if (op == "==") {
        retType = "bool";
        return ctx.builder->CreateICmpEQ(LHSVal, RHSVal);
    }
    else {
        return nullopt;
    }
}