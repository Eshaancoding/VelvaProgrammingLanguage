#include <iostream>
#include <fstream>
#include <string>
#include <tree_sitter/api.h>
#include <tree_sitter/parser.h>
#include <cassert>
#include <memory>
#include <cstring>
using namespace std;

extern "C"
{
    const TSLanguage *tree_sitter_Velva(void);
}

int main(int argc, const char **argv)
{
    // assert that there is a valid argument
    if (argc != 2)
    {
        throw invalid_argument("invalid argument");
    }
    const char *filename = argv[1];

    std::ifstream ifs(filename);
    std::string content((std::istreambuf_iterator<char>(ifs)),
                        (std::istreambuf_iterator<char>()));

    const char *source_code = content.c_str();

    printf("========== Source Code ==========\n");
    std::cout << source_code << std::endl;

    // actually start parsing
    TSParser *parser = ts_parser_new();

    if (tree_sitter_Velva() == nullptr)
    {
        throw invalid_argument("aw shucks");
    }

    ts_parser_set_language(parser, tree_sitter_Velva());
    TSTree *tree = ts_parser_parse_string(
        parser,
        NULL,
        source_code,
        strlen(source_code)
    );

    TSNode root_node = ts_tree_root_node(tree);

    char* dt = ts_node_string(root_node);
    printf("string root: %s", dt);

    free(dt);
    ts_tree_delete(tree);
    ts_parser_delete(parser);
    return 0;
}
