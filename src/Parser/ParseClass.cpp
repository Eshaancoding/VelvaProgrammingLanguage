#include <TreeSitterParser.hpp>

unique_ptr<Expr> Parser::ParseClass () {
    bool isPublic = true;
    vector<VarTemplate> variables;
    vector<FuncTemplate> functions;
    string className;
    vector<ConstructTemplate> constructors;

    int numChilds = cursor.getNumChilds();
    cursor.goToChild();

    // get name
    className = cursor.getSourceStr();
    cursor.goToSibling();
    

    for (int i = 1; i < numChilds; i++) {
        string ty = cursor.getType();  

        if (ty == "publicPrivate") {
            if (cursor.getSourceStr() == "public") isPublic = true;
            else isPublic = false;

            cursor.goToSibling();
        }
        else if (ty == "classVarDecl") {
            cursor.goToChild();

            assert(cursor.getType() == "primitive_type");
            string ty = cursor.getSourceStr();
            cursor.goToSibling();

            assert(cursor.getType() == "identifier");
            string name = cursor.getSourceStr();

            cursor.goToParent();

            variables.push_back({ty, name, isPublic});

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
            
            constructors.push_back({params, move(bl)});
        }
    }

    return make_unique<ClassExpr>(className, variables, move(functions), move(constructors));
}