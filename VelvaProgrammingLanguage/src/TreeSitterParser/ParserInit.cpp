#include "TreeSitterParser.hpp"

std::string Parser::getStartingEnding (TSPoint start, TSPoint end) {
    auto ss = std::stringstream{src};

    std::string line_ret;
    bool parsing = false;
    int lineNum = 0;
    for (std::string line; std::getline(ss, line, '\n');) {
        for (int i = 0; i < line.length(); i++) {
            char ch = line.c_str()[i];

            if (start.row == lineNum && start.column == i) {
                parsing = true;
            }

            if (parsing)
                line_ret += ch;            

            if (end.row == lineNum) {
                parsing = false;
            }
        }
        if (parsing) line_ret += "\n";
        lineNum += 1; 
    }

    return line_ret; 

}


Parser::Parser (const char* filename) {
    std::ifstream ifs(filename);
    std::string content((std::istreambuf_iterator<char>(ifs)),
                        (std::istreambuf_iterator<char>()));

    const char *source_code = content.c_str();
    src = std::string(source_code);

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

// convert this to ts tree cursor later
void Parser::printTree (std::optional<TSNode> nodeInp, int lvl) {
    TSNode node;
    if (!nodeInp) node = ts_tree_root_node(tree);
    else node = *nodeInp;

    TSPoint start = ts_node_start_point(node);
    TSPoint end = ts_node_end_point(node);
    const char *string = ts_node_type(node);
    std::string str_in_file = getStartingEnding(start, end);
    // for (int i = 0; i < lvl; i++) printf(" ");
    // printf("%s\n", string);

    // printf("=============================================\n");
    printf("Start: %d %d End: %d %d\n", start.column, start.row, end.column, end.row);
    printf("Contents: %s\n", str_in_file.c_str());
    printf("=============================================\n");

    int len = ts_node_child_count(node);
    for (int i = 0; i < len; i++) {
        printTree(ts_node_child(node, i), ++lvl);
    }
    
}