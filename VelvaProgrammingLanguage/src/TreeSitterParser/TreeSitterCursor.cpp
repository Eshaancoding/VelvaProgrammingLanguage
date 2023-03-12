#include "TreeSitterCursor.hpp"

std::string TreeSitterCursor::getSourceStr() {
    auto node = currentNode();

    TSPoint start = ts_node_start_point(node);
    TSPoint end = ts_node_end_point(node);

    std::string line_ret;
    bool parsing = false;
    int lineNum = 0;
    
    // convert to buffer
    std::istringstream ss(source);

    for (std::string line; std::getline(ss, line, '\n');) {
        for (int i = 0; i < line.length(); i++) {
            char ch = line.c_str()[i];

            if (start.row == lineNum && start.column == i) {
                parsing = true;
            }

            if (parsing)
                line_ret += ch;

            if (end.row == lineNum && end.column == i) {
                parsing = false;
            }
        }
        if (parsing)
            line_ret += "\n";
        lineNum += 1;
    }

    return line_ret;
}

TreeSitterCursor::TreeSitterCursor (TSTree *tree, std::string src) {
    cursor = ts_tree_cursor_new(ts_tree_root_node(tree));
    source = src; 
}
    
TSNode TreeSitterCursor::currentNode () {
    return ts_tree_cursor_current_node(&cursor);
}
    
int TreeSitterCursor::getNumChilds (bool noName) {
    auto node = currentNode();
    if (noName) {
        return ts_node_child_count(node);
    }
    else {
        return ts_node_named_child_count(node);
    }
}
    
std::optional<TSNode> TreeSitterCursor::goToParent () {
    bool result = ts_tree_cursor_goto_parent(&cursor);
    if (result) return currentNode();
    else return std::nullopt; 
}

std::optional<TSNode> TreeSitterCursor::goToChild (bool noName) {
    // this entire code basically skips until it gets a named node (expr, primitive_type, binary_expression, etc.)
    bool result = ts_tree_cursor_goto_first_child(&cursor);
    if (!result) return std::nullopt;
    if (noName) return currentNode();
    while (true) {
        auto cn = currentNode();
        if (ts_node_is_named(cn)) return cn;
        else {
            bool result = ts_tree_cursor_goto_next_sibling(&cursor);
            if (!result) return std::nullopt;
        }
    }
}

std::optional<TSNode> TreeSitterCursor::goToSibling (bool noName) {
    // this entire code basically skips until it gets a named node (expr, primitive_type, binary_expression, etc.)
    bool result = ts_tree_cursor_goto_next_sibling(&cursor);
    if (!result) return std::nullopt;
    if (noName) return currentNode();
    while (true) {
        auto cn = currentNode();
        if (ts_node_is_named(cn)) return cn;
        else {
            bool result = ts_tree_cursor_goto_next_sibling(&cursor);
            if (!result) return std::nullopt;
        }
    }
}
void TreeSitterCursor::reset (TSNode node) {
    ts_tree_cursor_reset(&cursor, node);
}

std::string TreeSitterCursor::getType () {
    return std::string(ts_node_type(currentNode()));
}

void TreeSitterCursor::printNode() {
    auto node = currentNode();
    TSPoint start = ts_node_start_point(node);
    TSPoint end = ts_node_end_point(node);

    const char *string = ts_node_type(node);
    printf("%s: start: %d %d end %d %d\n", string, start.row, start.column, end.row, end.column);
} 