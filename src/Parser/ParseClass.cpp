#include <TreeSitterParser.hpp>

unique_ptr<Expr> Parser::ParseClass () {
    bool isPublic = true;
    vector<VarTemplate> variables;
    vector<FuncTemplate> functions;
    string className;
    vector<ConstructTemplate> constructors;
    map<string, int> variableDefined;

    int numChilds = cursor.getNumChilds();
    cursor.goToChild();

    // get name
    className = cursor.getSourceStr();
    cursor.goToSibling();
    
    for (int i = 1; i < numChilds; i++) {
        string ty = cursor.getType();  

        if (ty == "publicPrivate") {
            if (cursor.getSourceStr() == "public:") isPublic = true;
            else if (cursor.getSourceStr() == "private:") isPublic = false;

            cursor.goToSibling();
        }
        else if (ty == "var_declaration") {
            auto exp = ParseVarDecl();

            if (!exp->typeArg) throw invalid_argument("Cannot declare auto in class decl");

            variableDefined[exp->name] = 1;
            variables.push_back({isPublic, exp.release()});

            cursor.goToSibling();
        }
        else if (ty == "function_declare") {
            auto exp = ParseFunctionDeclare();

            functions.push_back({
                move(exp),
                isPublic
            });
            cursor.goToSibling();
        }
        else if (ty == "constructor") {
            vector<tuple<string, string>> params;

            cursor.goToChild();

            // parse parameter list
            assert(cursor.getType() == "parameter_list");
            int numParameters = cursor.getNumChilds();
            cursor.goToChild();
            for (int i = 0; i < numParameters; i++) {
                cursor.goToChild();
                std::string primitiveType = cursor.getSourceStr();
                cursor.goToSibling();
                std::string identifier = cursor.getSourceStr();

                cursor.goToParent();
                cursor.goToSibling();
                params.push_back({primitiveType, identifier});
            }
            cursor.goToParent();
            cursor.goToSibling();

            // parse block
            assert(cursor.getType() == "block");
            auto bl = ParseBlock();

            cursor.goToParent();
            cursor.goToSibling();

            // add to constructors
            constructors.push_back({params, move(bl)});
        }
    }
    cursor.goToParent();

    return make_unique<ClassExpr>(className, move(variables), move(functions), move(constructors));
}

unique_ptr<ClassVarDecl> Parser::ParseClassVarDeclr () {
    int numChild = cursor.getNumChilds();

    cursor.goToChild();
    
    string className = cursor.getSourceStr();
    
    cursor.goToSibling();
    
    string varName = cursor.getSourceStr();

    vector<unique_ptr<Expr>> params;
    
    for (int i = numChild; i > 2; i--) {
        // parse 
        cursor.goToSibling();
        params.push_back(ParseExpression());
    }
    
    cursor.goToParent();

    return make_unique<ClassVarDecl>(className, varName, move(params));
}

unique_ptr<ClassVarAssign> Parser::ParseClassAssign () {
    cursor.goToChild();
    
    string className = cursor.getSourceStr();
    
    cursor.goToSibling();

    string varName = cursor.getSourceStr();
    
    cursor.goToSibling();
    
    auto expr = ParseExpression();

    cursor.goToParent();
    
    return make_unique<ClassVarAssign>(
        className,
        varName,
        move(expr)
    );
}