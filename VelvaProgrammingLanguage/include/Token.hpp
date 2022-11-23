#ifndef TOKEN
#define TOKEN

#include <string>

class Token {
protected:
    int token_id;
public: 
    Token () : token_id(0) {};
    
    // check 
    virtual bool isEOF() { return false; };
    virtual bool isErr() { return false; };
    virtual bool isIntIdent() { return false; };
    virtual bool isFloatIdent() { return false; };
    virtual bool isIdent() { return false; };
    virtual bool isChar() { return false; };

    // print
    virtual std::string to_str ();

    // id 
    int return_id ();

    // emtpy declaration used in child classes
    virtual std::string getName();
    virtual char getCharacter();
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
    char character; 
public:
    CharacterToken(char character);
    bool isChar () override;
    std::string to_str() override;
    char getCharacter() override;
};

#endif