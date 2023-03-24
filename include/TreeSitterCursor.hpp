#include <tree_sitter/parser.h>
#include <tree_sitter/api.h>
#include <string>
#include <optional>
#include <sstream>

// REALLY GENERIC wrapper class around cursor tree sitter
class TreeSitterCursor {
private:
    TSTreeCursor cursor; 
    std::string source; 
public: 
    TreeSitterCursor() = default;
    TreeSitterCursor(TSTree *tree, std::string src);
    
    int getNumChilds (bool noName=false);
    void printNode (std::string name="");
    std::string getSourceStr (TSNode* nodeArg=nullptr);
    std::string getFieldContents (std::string field);
    TSNode currentNode ();
    std::string getType ();
    std::optional<TSNode> goToParent ();
    std::optional<TSNode> goToChild (bool noName=false);
    std::optional<TSNode> goToSibling (bool noName=false);
    void reset (TSNode node);

};