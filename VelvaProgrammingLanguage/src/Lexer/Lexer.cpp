#include "Lexer.hpp"

char Lexer::getChar () {
    if (LastChar == '\n' || LastChar == '\r') {
        line_num+=1;
        line = "";
        char_idx = 1;
    } else {
        line += LastChar;
        char_idx += 1;
    }
    return file_read.get();
}

Token *Lexer::getToken() {
    //***************** Skip Whitespace *****************
    while (isspace(LastChar))
        LastChar = getChar();

    //***************** Parse Identifiers *****************
    // basically any keyword
    if (isalpha(LastChar)) { 
        start_char_idx = char_idx;
        std::string IdentifierStr = "";
        IdentifierStr += LastChar;
        while (isalnum((LastChar = getChar())))
            IdentifierStr += LastChar;

        return new IdentifierToken(IdentifierStr);
    }

    //***************** Parse Integers & Floats *****************
    if (isdigit(LastChar)) {
        start_char_idx = char_idx;
        bool is_floating_point = false;
        std::string NumStr;
        while (true) {
            NumStr += LastChar;
            LastChar = getChar();
            if (LastChar == '.') is_floating_point = true;
            else if (!isdigit(LastChar)) break;
        }
        if (is_floating_point) {
            float floatingVal = strtod(NumStr.c_str(), nullptr);
            return new FloatToken(floatingVal);
        } 
        else {
            int integerVal;
            sscanf(NumStr.c_str(), "%d", &integerVal); 
            return new IntegerToken(integerVal);
        }
    }

    //***************** Parse Comments *****************
    if (LastChar == '/')
    {
        start_char_idx = char_idx;
        // Check if the next char is another forward slash
        LastChar = getchar();
        if (LastChar == '/') {
            // skip till the next line
            do
                LastChar = getChar();
            while (LastChar != EOF && LastChar != '\n' && LastChar != '\r');

            if (LastChar != EOF)
                return getToken();
        } else {
            log_err("Expected //, not /");
            return new ERRToken();
        }
    }

    //***************** Parse EOF *****************
    if (LastChar == EOF)
        return new EOFToken();


    //***************** Return char *****************
    start_char_idx = char_idx;
    int ThisChar = LastChar;
    LastChar = getChar();
    return new CharacterToken(ThisChar);
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