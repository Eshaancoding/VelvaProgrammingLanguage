#include <vector>
#include <string>
#include <memory>
#include <tuple>
#include <optional>
#include "llvm/IR/Value.h"
using namespace std;

// IR generation variables
LLVMContext Context;
IRBuilder<> Builder(Context);
std::unique_ptr<Module> Mod;

// function used to initialize context, builder, module
void InitializeModule();

class Expr {
    public:
        virtual ~Expr();
        virtual Value *codegen();
};

class IntExpr : public Expr {
    public:
        int num;
        IntExpr(int i) : num(i) {};
        Value *codegen() override; 
};

class DecimalExpr : public Expr {
    public:
        double decimal;
        public: DecimalExpr(double d) : decimal(d) {};
        Value *codegen() override;
};

class CallFuncExpr : public Expr {
    public:
        string functionName;
        vector<Expr> params;
        CallFuncExpr(string name, vector<Expr> params) : functionName(name), params(params) {};
        Value *codegen() override;
};

class DeclareFunctionExpr : public Expr {
    public:
        bool isPure;
        string name;
        vector<tuple<unique_ptr<Expr>, string> > params;
        optional<string> returnType;
        DeclareFunctionExpr(bool isPure, string name, vector<tuple<unique_ptr<Expr>, string> > params, optional<string> returnType) : isPure(isPure), name(name), params(params), returnType(returnType) {} ;
        Value *codegen() override;
};

class StringExpr: public Expr {
    public:
        vector<variant<string, unique_ptr<Expr> > text;
        StringExpr(string t) : text(vector<variant<string, unique_ptr<Expr> >(t)) {}
        StringExpr(vector<variant<string, unique_ptr<Expr> > t) : text(t) {}            
        Value *codegen() override;    
};

class VarUseExpr : public Expr {
    public:
        string var;
        VarUseExpr(string var) : var(var) {};
        Value *codegen() override;
};
//didn't we have more mutability types before, we'll add more later.
typedef enum {
    VAR_MUTABILITY_VAR,
    VAR_MUTABILITY_CONST,
} VarMutability;
 
// sorry but protected
class VarDeclareExpr : public Expr {
    public:
        VarMutability mutType;
        optional<string> type;
        string name;
        unique_ptr<Expr> value;
        VarDeclareExpr(VarMutability mutType, string name, unique_ptr<Expr> value, optional<string> type = nullopt) : mutType(mutType), name(name), value(move(value)), type(type) {};
        Value *codegen() override;
};

class AssignExpr {
    public:
        string varName;
        unique_ptr<Expr> value;
        AssignExpr(string name, unique_ptr<Expr> value) : varName(name), value(move(value)) {};
        Value *codegen() override;
}