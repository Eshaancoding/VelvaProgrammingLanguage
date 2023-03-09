#include <tree_sitter/parser.h>
#include <tree_sitter/api.h>
#include <string>
#include <optional>

// REALLY GENERIC wrapper class around cursor tree sitter
class TreeSitterCursor {
private:
    TSTreeCursor cursor; 
    std::string src; 

    
public: 
    TreeSitterCursor() = default;
    TreeSitterCursor(TSTree *tree, std::string source);
    
    std::string sourceStr ();
    TSNode currentNode ();
    std::string getType ();
    std::optional<TSNode> goToParent ();
    std::optional<TSNode> goToChild ();
    std::optional<TSNode> goToSibling ();
    void reset (TSNode node);

};