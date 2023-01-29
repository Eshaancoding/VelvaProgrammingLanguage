#include "Lexer.hpp"
#include "Token.hpp"

char Lexer::getChar () {
    if (LastChar == '\n' || LastChar == '\r') {
        line_num+=1;
        line = "";
        char_idx = 1;
    } else {
        line += LastChar;
        char_idx += 1;
    }
    LastChar = file_read.get();
    
    return LastChar;
}

// BRUH DANIEL 
// WE HAVE TO REFACTOR LIKE OUR ENTIRE CODEBASE NOW THAT THIS IS A UNIQUE_PTR
// BECAUSE I CONSTANTLY DO CURRENT_TOKEN = LEXER.GETTOKEN()
///...D:
// WHAT DO YOU MEAN .... 
// just because unique ptr exists doesn't mean we have to use it for everything no?

unique_ptr<Token> Lexer::getToken() {
    //***************** Skip Whitespace *****************
    while (isspace(LastChar))
        getChar();

    //***************** Parse Identifiers *****************
    // basically any keyword
    if (isalpha(LastChar)) { 
        start_char_idx = char_idx;
        std::string IdentifierStr = "";
        IdentifierStr += LastChar;
        while (true) {
            getChar();
            if (!isalnum(LastChar)) break;
            if (LastChar == -1) break; // if last char is at the end of the file
            IdentifierStr += LastChar;
        }
        return make_unique<IdentifierToken>(IdentifierStr);
    }

    //***************** Parse Integers & Floats *****************
    if (isdigit(LastChar)) {
        start_char_idx = char_idx;
        bool is_floating_point = false;
        std::string NumStr;
        while (true) {
            NumStr += LastChar;
            getChar();
            if (LastChar == -1) break; // if last char is the end of file
            if (LastChar == '.') is_floating_point = true;
            else if (!isdigit(LastChar)) break;
        }
        if (is_floating_point) {
            float floatingVal = strtod(NumStr.c_str(), nullptr);
            return make_unique<FloatToken>(floatingVal);
        } 
        else {
            int integerVal;
            sscanf(NumStr.c_str(), "%d", &integerVal); 
            return make_unique<IntegerToken>(integerVal);
        }
    }

    //***************** Parse EOF *****************
    if (LastChar == EOF)
        return make_unique<EOFToken>();

    //***************** Parse Characters *****************
    if (!isalpha(LastChar) && !isdigit(LastChar) && !isspace(LastChar)) {
        std::string starting_char_str = "";
        starting_char_str += LastChar;
        while (true) {
            getChar();
            if (LastChar == -1) break; // if last char is the end of file
            if (isalpha(LastChar) || isdigit(LastChar) || isspace(LastChar)) break;
            starting_char_str += LastChar;
        }
        return make_unique<CharacterToken>(starting_char_str);
    }

    //***************** Parse Characters *****************
    log_err("Invalid character: " + to_string(LastChar));
    return make_unique<ERRToken>();
}

void Lexer::log_err (std::string error_msg) {
    // would display:
    /*
    In file main.vtk, line 14:                   (colored white)
    a = 3.234.23                                 (colored white)
        ~~~~~~~~                                 (colored white)
    Error: invalid number                        (colored red)
    */
    printf("In file %s, line %d\n", filename.c_str(), line_num);
    printf("%s\n", line.c_str());
    // print ~ 
    for (int i = 1; i < start_char_idx; i++) {
        printf(" ");
    }
    for (int i = start_char_idx; i < char_idx; i++) {
        printf("~");
    }

    printf("\033[31;1;4m\nError: %s\n\n\033[0m", error_msg.c_str());   
}