#include <TreeSitterParser.hpp>

unique_ptr<Expr> Parser::ParseClass () {
    bool isPublic = true;
    vector<VarTemplate> variables;
    vector<FuncTemplate> functions;
    string funcName;

    int numChilds = cursor.getNumChilds();
    cursor.goToChild();

    // get name
    funcName = cursor.getSourceStr();
    cursor.goToSibling();

    printf("Praseing class\n");

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

        cursor.printNode();
    }

    return make_unique<ClassExpr>(variables, move(functions));
}