#include "AST.hpp"
#include "Parser.cpp"
using namespace llvm;

void InitializeModule() {
  Context = std::make_unique<LLVMContext>();
  TheModule = std::make_unique<Module>("jit pog", *Context);
  
  Builder = std::make_unique<IRBuilder<>>(*Context);
}

// log errors for values, Value is any IR returned item
Value *LogErrorV(const char *Str) {
  LogError(Str);
  return nullptr;
}

Value *NumberExprAST::codegen() {
  return ConstantFP::get(Context, APFloat(Val))
}

Value *VariableExprAST::codegen() {
  Value *V = NamedValues[Name];
  if(!V) LogErrorV("Unknown Variable Name");
  return V;
}

Value *BinaryExprAST::codegen() {
  Value *L = LHS->codegen();
  Value *R = RHS->codegen();
  if(!L || !R) return nullptr;

  switch (Op) {
    case '+':
      return Builder.CreateFAdd(L, R, "addtmp");
    case '-':
      return Builder.CreateFSub(L, R, "subtmp");
    case '*':
      return Builder.CreateFMul(L, R, "multmp");
    case '<':
      L = Builder.CreateFCmpULT(L, R< "cmptmp");
      // converts bool 1 bit integer to a double
      return Builder.CreateUIToFP(L, Type::getDoubleTy(Context), "booltmp");
    default:
      return LogErrorV("invalid binary operator");
  }
}

Value *CallExprAST::codegen() {
  Function *CalleeF = TheModule->getFunction(Callee);
  if(!CalleeF) return LogErrorV("Unknown function referenced");
  if(CalleeF->arg_size() != Args.size()) return LogErrorV("Incorrect number of arguments");

  std::vector<Value *> ArgsV;
  for(unsigned i=0, e = Args.size(); i != e; ++i) {
    ArgsV.push_back(Args[i]->codegen());
    if(!ArgsV.back()) return nullptr;
  }

  return Builder.CreateCall(CalleeF, ArgsV, "calltmp");
}

Function *PrototypeAST::codegen() {
  // this creates a list of argument types, only doubles for now but we'll have multiple types to extend to later 
  std::vector<Type*> Doubles(Args.size(), Type::getDoubleTy(Context));
  // NOTE: types are unique so you dont use new for a type and use get function to create a new instance
  FunctionType *FT = FunctionType::get(Type::getDoubleTy(Context), Doubles, false);
  // creates IR function from prototype, external linkage checks if function declaration from outside module
  Function *F = Function::Create(FT, Function::ExternalLinkage, Name, TheModule.get());

  // sets argument names in the IR to the names provided in the function prototype
  unsigned Idx = 0;
  for (auto &Arg : F->args()) Arg.setName(Args[Idx++]);

  return F;
}

Function *FunctionAST::codegen() {
  // gets function from previous function declaration table (possibly in extern)
  Function *Func = TheModule->getFunction(Proto->getName());

  // if no previous function declaration exists generate the function IR from the prototype
  if(!Func) Func = Proto->codegen();
  if(!Func) return nullptr;
  if(!Func->empty()) return (Func*) LogErrorV("Function cannot be redefined");

  // basic block: sequential instruction set, creates a sequential execution for a function
  BasicBlock *BB = BasicBlock::Create(Context, "entry", Func);
  // inserts previously created BB instructions to end of the newly created block
  Builder.SetInsertPoint(BB);

  NamedValues.clear();
  for(auto &Arg : Func->args()) NamedValues[Arg.getName()] = &Arg;

  // computes the function and returns a value to see if the fucntion is working properly
  if(Value *RetVal = Body->codegen()) {
    // ret instruction completes the function IR generation
    Builder.CreateRet(RetVal);
    // validates the generated code
    verifyFunction(*Func);
    return Func;
  }

  Func->eraseFromParent();
  return nullptr;
}

