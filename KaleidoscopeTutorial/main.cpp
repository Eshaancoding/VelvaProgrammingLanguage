#include "Parser.cpp"
#include "AST.hpp"
#include "AST.cpp"

int main() {
  // 1 is lowest precedence.
  BinopPrecedence['<'] = 10;
  BinopPrecedence['+'] = 20;
  BinopPrecedence['-'] = 20;
  BinopPrecedence['*'] = 40; // highest.
  BinopPrecedence['/'] = 40; // highest.

  // Prime the first token.
  fprintf(stderr, "ready> ");
  getNextToken();

  // make the IR generation context with context builder and module
  InitializeModule();

  // Run the main "interpreter loop" now.
  MainLoop();
}