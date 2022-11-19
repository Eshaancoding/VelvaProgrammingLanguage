#include <map>
#include <vector>
#include <string>
#include <memory>
#include <tuple>
#include <optional>
#include "llvm/IR/Value.h"
#include "llvm/ADT/APFloat.h"
#include "llvm/ADT/APInt.h"
using namespace std;

// IR generation variables

struct CompilationContext {
    LLVMContext context;
    IRBuilder<> builder(contex);
    std::unique_ptr<Module> mod;
    map<string, Value*> namedValues;
    
    public: CompilationContext();
};

class Expr {
    public:
        virtual ~Expr();
        virtual Value *codegen(CompilationContext &ctx) = 0;
        virtual optional<Value*> generate_str(CompilationContext &ctx) = 0;
};

class IntExpr : public Expr {
    public:
        int num;
        IntExpr(int i) : num(i) {};
        Value *codegen(CompilationContext &ctx) override; 
};

class DecimalExpr : public Expr {
    public:
        double decimal;
        public: DecimalExpr(double d) : decimal(d) {};
        Value *codegen(CompilationContext &ctx) override;
};

class CallFuncExpr : public Expr {
    public:
        string functionName;
        vector<Expr> params;
        CallFuncExpr(string name, vector<Expr> params) : functionName(name), params(params) {};
        Value *codegen(CompilationContext &ctx) override;
};

class DeclareFunctionExpr : public Expr {
    public:
        bool isPure;
        string name;
        vector<tuple<unique_ptr<Expr>, string> > params;
        optional<string> returnType;
        DeclareFunctionExpr(bool isPure, string name, vector<tuple<unique_ptr<Expr>, string> > params, optional<string> returnType) : isPure(isPure), name(name), params(params), returnType(returnType) {} ;
        Function *codegen(CompilationContext &ctx) override;
};

class StringExpr: public Expr {
    public:
        vector<variant<string, unique_ptr<Expr> > text;
        StringExpr(string t) : text(vector<variant<string, unique_ptr<Expr> >(t)) {}
        StringExpr(vector<variant<string, unique_ptr<Expr> > t) : text(t) {}            
        Value *codegen(CompilationContext &ctx) override;    
};

class VarUseExpr : public Expr {
    public:
        string var;
        VarUseExpr(string var) : var(var) {};
        Value *codegen(CompilationContext &ctx) override;
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
        Value *codegen(CompilationContext &ctx) override;
};

class AssignExpr {
    public:
        string varName;
        unique_ptr<Expr> value;
        AssignExpr(string name, unique_ptr<Expr> value) : varName(name), value(move(value)) {};
        Value *codegen(CompilationContext &ctx) override;
}