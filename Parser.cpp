#include "AST.cpp"
#include "Lexer.cpp"


// damn error still persists.
// Let me check if it still doesn't work 

// Just to track the tokens
static int CurTok;
static void printCurToken() {
  switch (CurTok) {
  case -1:
    printf("Current Token: eof\n");
    break;
  case -2:
    printf("Current Token: def\n");
    break;
  case -3:
    printf("Current Token: extern\n");
    break;
  case -4:
    printf("Current Token: identifier\n");
    break;
  case -5:
    printf("Current Token: number\n");
    break;
  default:
    printf("Current Token with char %c\n", CurTok);
    break;
  }
}
static int getNextToken() {
  CurTok = gettok();
  return CurTok;
}

// ****** ERRORS ******
std::unique_ptr<ExprAST> LogError(const char *Str) {
  fprintf(stderr, "LogError: %s\n", Str);
  return nullptr;
}
std::unique_ptr<PrototypeAST> LogErrorP(const char *Str) {
  LogError(Str);
  return nullptr;
}

// ****** NUMBER ******
// Gets the number from current token (NumVal), and put it into a NumberExprAST
// Assumes token is type Num
static std::unique_ptr<ExprAST> ParseNumberExpr() {
  auto Result = std::make_unique<NumberExprAST>(NumVal);
  getNextToken();
  return std::move(Result);
}

// ************** EXPRESSIONS **************
static std::map<char, int> BinopPrecedence;
static std::unique_ptr<ExprAST>
ParsePrimary(); // We need this function for subsequnet expressions functions,
                // but it will be declared later

// Getting the operation precedence. If not operation, returns -1
static int GetTokPrecedence() {
  if (!isascii(CurTok))
    return -1;

  // make sure it's a declared binop
  int TokPrec = BinopPrecedence[CurTok];
  if (TokPrec <= 0)
    return -1;
  return TokPrec;
}

// it could start LHS as x in expression (x+3+6), which will return just x
// (LHS). If it starts at a +, then it will proceed as a binary operation
static std::unique_ptr<ExprAST> ParseBinOpRHS(int ExprPrec,
                                              std::unique_ptr<ExprAST> LHS) {
  // ExprPrec is the minimal operator precedence
  while (1) {
    int TokPrec = GetTokPrecedence();

    // If this is a binop that binds at least as tightly as the current binop,
    // consume it, otherwise we are done.
    if (TokPrec < ExprPrec)
      return LHS; // Return expression itself if there's no operation

    // We know it is binop, let's get the current token and parse the next token
    int BinOp = CurTok; // Ascii value of the operation
    getNextToken();

    auto RHS = ParsePrimary();
    if (!RHS)
      return nullptr;
    int NextPrec = GetTokPrecedence();
    if (TokPrec < NextPrec) {
      RHS = ParseBinOpRHS(TokPrec + 1, std::move(RHS));
      if (!RHS)
        return nullptr;
    }

    // Merge LHS/RHS
    LHS =
        std::make_unique<BinaryExprAST>(BinOp, std::move(LHS), std::move(RHS));
  }
}

// Starts at the token x in expression (x + 3 + 6)
static std::unique_ptr<ExprAST> ParseExpression() {
  auto LHS = ParsePrimary();
  if (!LHS)
    return nullptr;

  return ParseBinOpRHS(0, std::move(LHS));
}

// ****** PARENTHESIS ******
static std::unique_ptr<ExprAST> ParseParenExpr() {
  getNextToken();             // eat (.
  auto V = ParseExpression(); // this parses whatever is inside the parenthesis
  if (!V)
    return nullptr; // if the expressions is dumb and stupid and bad like you

  if (CurTok != ')')
    return LogError("expected ')'");
  getNextToken(); // eat ).
  return V;
}

// ****** FUNCTION CALLS ******
// Assumes that the current token is the identifier
static std::unique_ptr<ExprAST> ParseIdentifierExpr() {
  std::string IdName = IdentifierStr;

  getNextToken(); // eat identifier.

  if (CurTok != '(') // Simple variable ref.
    return std::make_unique<VariableExprAST>(IdName);

  // Call.
  getNextToken(); // eat (
  std::vector<std::unique_ptr<ExprAST>> Args;
  if (CurTok != ')') {
    while (1) {
      if (auto Arg = ParseExpression())
        Args.push_back(std::move(Arg));
      else
        return nullptr;

      if (CurTok == ')')
        break;

      if (CurTok != ',')
        return LogError("Expected ')' or ',' in argument list");
      getNextToken();
    }
  }

  // Eat the ')'.
  getNextToken();

  return std::make_unique<CallExprAST>(IdName, std::move(Args));
}

// ************** FUNCTIONS **************

// Parses stuff like def a (b, c)
static std::unique_ptr<PrototypeAST> ParsePrototype() {
  if (CurTok != tok_identifier)
    return LogErrorP("Expected function name in prototype");

  std::string FnName = IdentifierStr;
  getNextToken();

  if (CurTok != '(')
    return LogErrorP("Expected '(' in prototype");

  // Read the list of argument names.
  std::vector<std::string> ArgNames;
  while (getNextToken() == tok_identifier)
    ArgNames.push_back(IdentifierStr);
  if (CurTok != ')')
    return LogErrorP("Expected ')' in prototype");

  // success.
  getNextToken(); // eat ')'.

  return std::make_unique<PrototypeAST>(FnName, std::move(ArgNames));
}

/// definition ::= 'def' prototype expression
static std::unique_ptr<FunctionAST> ParseDefinition() {
  getNextToken(); // eat def.
  auto Proto = ParsePrototype();
  if (!Proto)
    return nullptr;

  if (auto E = ParseExpression())
    return std::make_unique<FunctionAST>(std::move(Proto), std::move(E));
  return nullptr;
}

static std::unique_ptr<PrototypeAST> ParseExtern() {
  getNextToken(); // eat extern.
  return ParsePrototype();
}

// Executes top level code, like a "print(a)" without any function
static std::unique_ptr<FunctionAST> ParseTopLevelExpr() {
  if (auto E = ParseExpression()) {
    // Make an anonymous proto.
    auto Proto = std::make_unique<PrototypeAST>("", std::vector<std::string>());
    return std::make_unique<FunctionAST>(std::move(Proto), std::move(E));
  }
  return nullptr;
}

// ************** OUR PRIMARY PARSER **************
// Checks what kind of token it is and then it parses it
static std::unique_ptr<ExprAST> ParsePrimary() {
  switch (CurTok) {
  default:
    return LogError("unknown token when expecting an expression");
  case tok_identifier:
    return ParseIdentifierExpr();
  case tok_number:
    return ParseNumberExpr();
  case '(':
    return ParseParenExpr();
  }
}

// ************** TOP LEVEL PARSING **************
// just calls the corresponding parse function and then gets the next token
static void HandleDefinition() {
  if (ParseDefinition()) {
    fprintf(stderr, "Parsed a function definition.\n");
  } else {
    // Skip token for error recovery.
    getNextToken();
  }
}

static void HandleExtern() {
  if (ParseExtern()) {
    fprintf(stderr, "Parsed an extern\n");
  } else {
    // Skip token for error recovery.
    getNextToken();
  }
}

static void HandleTopLevelExpression() {
  // Evaluate a top-level expression into an anonymous function.
  if (ParseTopLevelExpr()) {
    fprintf(stderr, "Parsed a top-level expr\n");
  } else {
    // Skip token for error recovery.
    getNextToken();
  }
}

// ************** MAIN LOOP **************
static void MainLoop() {
  while (1) {
    fprintf(stderr, "ready> ");
    switch (CurTok) {
    case tok_eof:
      return;
    case ';': // ignore top-level semicolons.
      getNextToken();
      break;
    case tok_def:
      HandleDefinition();
      break;
    case tok_extern:
      HandleExtern();
      break;
    default:
      HandleTopLevelExpression();
      break;
    }
  }
}