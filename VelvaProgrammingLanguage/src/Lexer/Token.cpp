#include "Token.hpp"

// Default values
bool Token::isEOF() {return false;}
bool Token::isErr() {return false;}
bool Token::isIntIdent() {return false;}
bool Token::isFloatIdent() {return false;}
bool Token::isIdent() {return false;}
bool Token::isChar() {return false;}

// is_value true
bool EOFToken::isEOF() {return true;}
bool ERRToken::isErr() {return true;}
bool IntegerToken::isIntIdent() {return true;}
bool FloatToken::isFloatIdent() {return true;}
bool IdentifierToken::isIdent() {return true;}
bool CharacterToken::isChar() {return true;}

// to string
std::string Token::to_str() {return "Default Token";}
std::string EOFToken::to_str() {return "End of File Token";}
std::string ERRToken::to_str() {return "Error Token";}
std::string IntegerToken::to_str() {return "Int Identifier Token with value: " + std::to_string(value);}
std::string FloatToken::to_str() {return "Float Identifier Token with value: " + std::to_string(value);}
std::string IdentifierToken::to_str() {return "Identifier Token with name: " + name;}
std::string CharacterToken::to_str() {return std::string("Character toekn with char: ") + character;}

// Constructors
EOFToken::EOFToken () { token_id = -1; }
ERRToken::ERRToken () { token_id = -2; }
IntegerToken::IntegerToken (int value) { 
    token_id = -3; 
    this->value = value;    
}

FloatToken::FloatToken (float value) {
    token_id = -4; 
    this->value = value;
}

IdentifierToken::IdentifierToken(std::string name) {
    token_id = -5;
    this->name = name;
}

CharacterToken::CharacterToken (char character) {
    token_id = -6;
    this->character = character;
}

// Accessor methods
int IntegerToken::getValue () { return value; }
float FloatToken::getValue () { return value; }
std::string IdentifierToken::getName () { return name; }
char CharacterToken::getCharacter () { return character; }