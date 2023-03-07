#include <fstream>
#include <string>
#include "tree_sitter/api.h"
#include <cassert>
#include <cstring>
using namespace std;

int main(int argc, const char **argv) {
    ifstream file_read(name);
    string dat = file_read.get();

    TSParser *parser = ts_parser_new();
    ts_parser_set_language(parser, tree_sitter_json());
    
    TSTree *tree = ts_parser_parse_string(
        parser,
        NULL,
        dat.c_str(),
        dat.length()
    );

    TSNode root_node = ts_tree_root_node(tree);
    assert(strcmp(ts_node_type(root_node), "file") == 0);



}

   