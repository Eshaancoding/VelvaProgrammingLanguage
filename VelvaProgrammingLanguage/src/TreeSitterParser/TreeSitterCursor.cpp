#include "TreeSitterCursor.hpp"



TreeSitterCursor::TreeSitterCursor (TSTree *tree) {
    cursor = ts_tree_cursor_new(ts_tree_root_node(tree));
}
    
TSNode TreeSitterCursor::currentNode () {
    return ts_tree_cursor_current_node(&cursor);
}
    
std::optional<TSNode> TreeSitterCursor::goToParent () {
    bool result = ts_tree_cursor_goto_parent(&cursor);
    if (result) return currentNode();
    else return std::nullopt; 
}

std::optional<TSNode> TreeSitterCursor::goToChild () {
    bool result = ts_tree_cursor_goto_first_child(&cursor);
    if (result) return currentNode();
    else return std::nullopt;
}

std::optional<TSNode> TreeSitterCursor::goToSibling () {
    bool result = ts_tree_cursor_goto_next_sibling(&cursor);
    if (result) return currentNode();
    else return std::nullopt;
}
void TreeSitterCursor::reset (TSNode node) {
    ts_tree_cursor_reset(&cursor, node);
}

std::string TreeSitterCursor::getType () {
    return std::string(ts_node_type(currentNode()));
}