#include "TreeSitterCursor.hpp"

std::string TreeSitterCursor::getSourceStr() {
    auto node = currentNode();

    TSPoint start = ts_node_start_point(node);
    TSPoint end = ts_node_end_point(node);

    printf("Start: %d %d\n", start.row, start.column); 
    printf("End: %d %d\n", end.row, end.column);
    printf("Source: %s\n", source.c_str());

    std::string line_ret;
    bool parsing = false;
    int lineNum = 0;
    
    // convert to buffer
    std::istringstream ss(source);

    for (std::string line; std::getline(ss, line, '\n');)
    {
        for (int i = 0; i < line.length(); i++)
        {
            char ch = line.c_str()[i];

            if (start.row == lineNum && start.column == i)
            {
                parsing = true;
            }

            if (parsing)
                line_ret += ch;

            if (end.row == lineNum && end.column == i)
            {
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