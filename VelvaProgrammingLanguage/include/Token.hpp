#ifndef TOKEN
#define TOKEN

#include <string>
using namespace std;

class Token {
protected:
    int token_id;
public: 
    Token () : token_id(0) {};
    
    // check, already declared!
    virtual bool isEOF();
    virtual bool isErr();
    virtual bool isIntIdent();
    virtual bool isFloatIdent();
    virtual bool isIdent();
    virtual bool isChar();

    // print
    virtual std::string to_str ();

    // id 
    int return_id ();

    // emtpy declaration used in child classes
    virtual std::string getName();
    virtual string getCharacters();
    virtual int getIntValue();
    virtual float getFloatValue();
    
};

class EOFToken : public Token {
public: 
    EOFToken();
    bool isEOF () override; 
    std::string to_str () override;
};

class ERRToken : public Token {
public: 
    ERRToken(); 
    bool isErr () override;
    std::string to_str () override; 
};

class IntegerToken : public Token {
private:
    int value;
public: 
    IntegerToken(int value);
    bool isIntIdent () override;
    std::string to_str () override;
    int getIntValue () override;
};

class FloatToken : public Token {
private:
    float value;
public: 
    FloatToken(float value);
    bool isFloatIdent () override;
    std::string to_str () override;
    float getFloatValue() override;
};

class IdentifierToken : public Token {
private:
    std::string name;
public:
    IdentifierToken(std::string name);
    bool isIdent () override;
    std::string to_str() override;
    std::string getName() override;
};

class CharacterToken : public Token {
private:
    string characters;  // we might need to store multiple grouped characters
public:
    CharacterToken(string characters);
    bool isChar () override;
    std::string to_str() override;
    string getCharacters() override;
};

#endif