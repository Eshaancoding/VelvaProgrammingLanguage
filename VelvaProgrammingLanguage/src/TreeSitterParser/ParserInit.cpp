#include "TreeSitterParser.hpp"
#include <cassert>


Parser::Parser(const char *filename)
{
    auto is = std::ifstream(filename);
    
    assert(is);
    // get length of file:
    std::string str(std::istreambuf_iterator<char>{is}, {}) ;

    // ...buffer contains the entire file...
    parser = ts_parser_new();
    assert(parser);
    auto velva = tree_sitter_Velva();
    if (velva == nullptr)
    {
        throw invalid_argument("aw shucks");
    }

    ts_parser_set_language(parser, velva);
    tree = ts_parser_parse_string(
        parser,
        NULL,
        str.c_str(),
        strlen(str.c_str())
    );

    cursor = TreeSitterCursor(tree, str);
}

Parser::~Parser()
{
    ts_tree_delete(tree);
    ts_parser_delete(parser);
}

// convert this to ts tree cursor later
void Parser::printTree(std::optional<TSNode> nodeInp, int lvl)
{
    TSNode node;
    if (!nodeInp)
        node = ts_tree_root_node(tree);
    else
        node = *nodeInp;

    TSPoint start = ts_node_start_point(node);
    TSPoint end = ts_node_end_point(node);

    const char *string = ts_node_type(node);
    for (int i = 0; i < lvl; i++)
        printf(" ");
    printf("%s: start: %d %d end %d %d\n", string, start.row, start.column, end.row, end.column);

    // printf("=============================================\n");
    // printf("Start: %d %d End: %d %d\n", start.column, start.row, end.column, end.row);
    // printf("Contents: %s\n", str_in_file.c_str());
    // printf("=============================================\n");

    int len = ts_node_named_child_count(node);
    for (int i = 0; i < len; i++)
    {
        printTree(ts_node_named_child(node, i), lvl+1);
    }
}