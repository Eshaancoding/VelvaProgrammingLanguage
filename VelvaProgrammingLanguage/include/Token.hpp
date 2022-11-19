#ifndef TOKEN
#define TOKEN

#include <string>

class Token {
protected:
    int token_id;
public: 
    Token () : token_id(0) {};
    
    // check 
    virtual bool isEOF ();
    virtual bool isErr ();
    virtual bool isIntIdent ();
    virtual bool isFloatIdent ();
    virtual bool isIdent ();
    virtual bool isChar ();

    // print
    virtual std::string to_str ();

    // id 
    int return_id ();
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
    int getValue ();
};

class FloatToken : public Token {
private:
    float value;
public: 
    FloatToken(float value);
    bool isFloatIdent () override;
    std::string to_str () override;
    float getValue();
};

class IdentifierToken : public Token {
private:
    std::string name;
public:
    IdentifierToken(std::string name);
    bool isIdent () override;
    std::string to_str() override;
    std::string getName();
};

class CharacterToken : public Token {
private:
    char character; 
public:
    CharacterToken(char character);
    bool isChar () override;
    std::string to_str() override;
    char getCharacter();
};

#endif