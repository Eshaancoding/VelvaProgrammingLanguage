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

    for (int i = 1; i < numChilds; i++) {
        string ty = cursor.getType();  

        if (ty == "publicPrivate") {
            if (cursor.getSourceStr() == "public") isPublic = true;
            else isPublic = false;
        }
        else if (ty == "var_declaration") {
            auto exp = ParseVarDecl();

            variables.push_back({
                move(exp), 
                isPublic
            });
        }
        else if (ty == "function_declare") {
            auto exp = ParseFunctionDeclare();

            functions.push_back({
                move(exp),
                isPublic
            });
        }
        
        if (i < numChilds-1)
            cursor.goToSibling();
    }

    cursor.goToParent();
}