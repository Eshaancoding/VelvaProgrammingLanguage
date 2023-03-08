#include "TreeSitterParser.hpp"


Parser::Parser (const char* filename) {
    std::ifstream ifs(filename);
    std::string content((std::istreambuf_iterator<char>(ifs)),
                        (std::istreambuf_iterator<char>()));

    const char *source_code = content.c_str();

    parser = ts_parser_new();

    if (tree_sitter_Velva() == nullptr)
    {
        throw invalid_argument("aw shucks");
    }

    ts_parser_set_language(parser, tree_sitter_Velva());
    tree = ts_parser_parse_string(
        parser,
        NULL,
        source_code,
        strlen(source_code)
    );

    cursor = ts_tree_cursor_new(ts_tree_root_node(tree));
}

Parser::~Parser() {
    ts_tree_delete(tree);
    ts_parser_delete(parser);
    ts_tree_cursor_delete(&cursor);
}

void Parser::printTree (std::optional<TSNode> nodeInp, int lvl) {
    TSNode node;
    if (!nodeInp) node = ts_tree_root_node(tree);
    else node = *nodeInp;

    const char *string = ts_node_type(node);
    for (int i = 0; i < lvl; i++) printf(" ");
    printf("%s\n", string);

    int len = ts_node_child_count(node);
    for (int i = 0; i < len; i++) {
        printTree(ts_node_child(node, i), ++lvl);
    }
    
}