#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 411
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 115
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_SLASH_SLASH = 1,
  aux_sym__singleComment_token1 = 2,
  anon_sym_SLASH_STAR = 3,
  aux_sym__multiLineComment_token1 = 4,
  anon_sym_STAR_SLASH = 5,
  anon_sym_QMARK = 6,
  anon_sym_COLON = 7,
  anon_sym_for = 8,
  anon_sym_LPAREN = 9,
  anon_sym_SEMI = 10,
  anon_sym_RPAREN = 11,
  anon_sym_while = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  anon_sym_if = 15,
  anon_sym_auto = 16,
  anon_sym_EQ = 17,
  anon_sym_COMMA = 18,
  anon_sym_AMP = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_BANG = 22,
  anon_sym_DASH = 23,
  anon_sym_PLUS_PLUS = 24,
  anon_sym_DASH_DASH = 25,
  anon_sym_public_COLON = 26,
  anon_sym_private_COLON = 27,
  anon_sym_init = 28,
  anon_sym_DOT = 29,
  anon_sym_class = 30,
  anon_sym_as = 31,
  anon_sym_STAR = 32,
  anon_sym_SLASH = 33,
  anon_sym_PLUS = 34,
  anon_sym_ptr_LT = 35,
  anon_sym_GT = 36,
  anon_sym_ref_LT = 37,
  anon_sym_int = 38,
  anon_sym_float = 39,
  anon_sym_double = 40,
  anon_sym_bool = 41,
  anon_sym_char = 42,
  anon_sym_pure = 43,
  anon_sym_func = 44,
  anon_sym_else = 45,
  anon_sym_and = 46,
  anon_sym_AMP_AMP = 47,
  anon_sym_or = 48,
  anon_sym_PIPE_PIPE = 49,
  anon_sym_EQ_EQ = 50,
  anon_sym_BANG_EQ = 51,
  anon_sym_LT = 52,
  anon_sym_LT_EQ = 53,
  anon_sym_GT_EQ = 54,
  anon_sym_return = 55,
  anon_sym_DQUOTE = 56,
  anon_sym_SQUOTE = 57,
  anon_sym_LF = 58,
  sym_identifier = 59,
  aux_sym_number_token1 = 60,
  anon_sym_f = 61,
  anon_sym_true = 62,
  anon_sym_True = 63,
  anon_sym_false = 64,
  anon_sym_False = 65,
  sym_file = 66,
  sym__statement = 67,
  sym__singleComment = 68,
  sym__multiLineComment = 69,
  sym_ternaryStatement = 70,
  sym_for = 71,
  sym_while = 72,
  sym_block = 73,
  sym_if_statement = 74,
  sym_var_declaration = 75,
  sym_expression = 76,
  sym_pointer = 77,
  sym_accessor = 78,
  sym_parathensisExpr = 79,
  sym__unary_expression = 80,
  sym_not = 81,
  sym_negative = 82,
  sym_assignment = 83,
  sym_publicPrivate = 84,
  sym_constructor = 85,
  sym_classAssign = 86,
  sym_classDecl = 87,
  sym_binary_expression = 88,
  sym_primitive_type = 89,
  sym_parameter = 90,
  sym_parameter_list = 91,
  sym_function_declare = 92,
  sym_func_call = 93,
  sym__if_continuation = 94,
  sym_else = 95,
  sym_else_if = 96,
  sym_and = 97,
  sym_or = 98,
  sym_binary_condition = 99,
  sym_condition = 100,
  sym_comparison_op = 101,
  sym_return_statement = 102,
  sym_string = 103,
  sym_char = 104,
  sym__endLn = 105,
  sym_number = 106,
  sym_true = 107,
  sym_false = 108,
  sym_bool = 109,
  aux_sym_file_repeat1 = 110,
  aux_sym__multiLineComment_repeat1 = 111,
  aux_sym_var_declaration_repeat1 = 112,
  aux_sym_classDecl_repeat1 = 113,
  aux_sym_parameter_list_repeat1 = 114,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym__singleComment_token1] = "_singleComment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym__multiLineComment_token1] = "_multiLineComment_token1",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_QMARK] = "\?",
  [anon_sym_COLON] = ":",
  [anon_sym_for] = "for",
  [anon_sym_LPAREN] = "(",
  [anon_sym_SEMI] = ";",
  [anon_sym_RPAREN] = ")",
  [anon_sym_while] = "while",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_if] = "if",
  [anon_sym_auto] = "auto",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_AMP] = "&",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_BANG] = "!",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_public_COLON] = "public:",
  [anon_sym_private_COLON] = "private:",
  [anon_sym_init] = "init",
  [anon_sym_DOT] = ".",
  [anon_sym_class] = "class",
  [anon_sym_as] = "as",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_ptr_LT] = "ptr<",
  [anon_sym_GT] = ">",
  [anon_sym_ref_LT] = "ref<",
  [anon_sym_int] = "int",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_bool] = "bool",
  [anon_sym_char] = "char",
  [anon_sym_pure] = "pure",
  [anon_sym_func] = "func",
  [anon_sym_else] = "else",
  [anon_sym_and] = "and",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_or] = "or",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_return] = "return",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_LF] = "\n",
  [sym_identifier] = "identifier",
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_f] = "f",
  [anon_sym_true] = "true",
  [anon_sym_True] = "True",
  [anon_sym_false] = "false",
  [anon_sym_False] = "False",
  [sym_file] = "file",
  [sym__statement] = "_statement",
  [sym__singleComment] = "_singleComment",
  [sym__multiLineComment] = "_multiLineComment",
  [sym_ternaryStatement] = "ternaryStatement",
  [sym_for] = "for",
  [sym_while] = "while",
  [sym_block] = "block",
  [sym_if_statement] = "if_statement",
  [sym_var_declaration] = "var_declaration",
  [sym_expression] = "expression",
  [sym_pointer] = "pointer",
  [sym_accessor] = "accessor",
  [sym_parathensisExpr] = "parathensisExpr",
  [sym__unary_expression] = "_unary_expression",
  [sym_not] = "not",
  [sym_negative] = "negative",
  [sym_assignment] = "assignment",
  [sym_publicPrivate] = "publicPrivate",
  [sym_constructor] = "constructor",
  [sym_classAssign] = "classAssign",
  [sym_classDecl] = "classDecl",
  [sym_binary_expression] = "binary_expression",
  [sym_primitive_type] = "primitive_type",
  [sym_parameter] = "parameter",
  [sym_parameter_list] = "parameter_list",
  [sym_function_declare] = "function_declare",
  [sym_func_call] = "func_call",
  [sym__if_continuation] = "_if_continuation",
  [sym_else] = "else",
  [sym_else_if] = "else_if",
  [sym_and] = "and",
  [sym_or] = "or",
  [sym_binary_condition] = "binary_condition",
  [sym_condition] = "condition",
  [sym_comparison_op] = "comparison_op",
  [sym_return_statement] = "return_statement",
  [sym_string] = "string",
  [sym_char] = "char",
  [sym__endLn] = "_endLn",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_bool] = "bool",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym__multiLineComment_repeat1] = "_multiLineComment_repeat1",
  [aux_sym_var_declaration_repeat1] = "var_declaration_repeat1",
  [aux_sym_classDecl_repeat1] = "classDecl_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym__singleComment_token1] = aux_sym__singleComment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym__multiLineComment_token1] = aux_sym__multiLineComment_token1,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_auto] = anon_sym_auto,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_public_COLON] = anon_sym_public_COLON,
  [anon_sym_private_COLON] = anon_sym_private_COLON,
  [anon_sym_init] = anon_sym_init,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_ptr_LT] = anon_sym_ptr_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_ref_LT] = anon_sym_ref_LT,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_pure] = anon_sym_pure,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_LF] = anon_sym_LF,
  [sym_identifier] = sym_identifier,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_f] = anon_sym_f,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_False] = anon_sym_False,
  [sym_file] = sym_file,
  [sym__statement] = sym__statement,
  [sym__singleComment] = sym__singleComment,
  [sym__multiLineComment] = sym__multiLineComment,
  [sym_ternaryStatement] = sym_ternaryStatement,
  [sym_for] = sym_for,
  [sym_while] = sym_while,
  [sym_block] = sym_block,
  [sym_if_statement] = sym_if_statement,
  [sym_var_declaration] = sym_var_declaration,
  [sym_expression] = sym_expression,
  [sym_pointer] = sym_pointer,
  [sym_accessor] = sym_accessor,
  [sym_parathensisExpr] = sym_parathensisExpr,
  [sym__unary_expression] = sym__unary_expression,
  [sym_not] = sym_not,
  [sym_negative] = sym_negative,
  [sym_assignment] = sym_assignment,
  [sym_publicPrivate] = sym_publicPrivate,
  [sym_constructor] = sym_constructor,
  [sym_classAssign] = sym_classAssign,
  [sym_classDecl] = sym_classDecl,
  [sym_binary_expression] = sym_binary_expression,
  [sym_primitive_type] = sym_primitive_type,
  [sym_parameter] = sym_parameter,
  [sym_parameter_list] = sym_parameter_list,
  [sym_function_declare] = sym_function_declare,
  [sym_func_call] = sym_func_call,
  [sym__if_continuation] = sym__if_continuation,
  [sym_else] = sym_else,
  [sym_else_if] = sym_else_if,
  [sym_and] = sym_and,
  [sym_or] = sym_or,
  [sym_binary_condition] = sym_binary_condition,
  [sym_condition] = sym_condition,
  [sym_comparison_op] = sym_comparison_op,
  [sym_return_statement] = sym_return_statement,
  [sym_string] = sym_string,
  [sym_char] = sym_char,
  [sym__endLn] = sym__endLn,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_bool] = sym_bool,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym__multiLineComment_repeat1] = aux_sym__multiLineComment_repeat1,
  [aux_sym_var_declaration_repeat1] = aux_sym_var_declaration_repeat1,
  [aux_sym_classDecl_repeat1] = aux_sym_classDecl_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__singleComment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__multiLineComment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_private_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_init] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptr_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_f] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__singleComment] = {
    .visible = false,
    .named = true,
  },
  [sym__multiLineComment] = {
    .visible = false,
    .named = true,
  },
  [sym_ternaryStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_for] = {
    .visible = true,
    .named = true,
  },
  [sym_while] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_var_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer] = {
    .visible = true,
    .named = true,
  },
  [sym_accessor] = {
    .visible = true,
    .named = true,
  },
  [sym_parathensisExpr] = {
    .visible = true,
    .named = true,
  },
  [sym__unary_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_not] = {
    .visible = true,
    .named = true,
  },
  [sym_negative] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_publicPrivate] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_classAssign] = {
    .visible = true,
    .named = true,
  },
  [sym_classDecl] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declare] = {
    .visible = true,
    .named = true,
  },
  [sym_func_call] = {
    .visible = true,
    .named = true,
  },
  [sym__if_continuation] = {
    .visible = false,
    .named = true,
  },
  [sym_else] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if] = {
    .visible = true,
    .named = true,
  },
  [sym_and] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_op] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym__endLn] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__multiLineComment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_var_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_classDecl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_content = 1,
  field_name = 2,
  field_type = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_name] = "name",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 4},
  [4] = {.index = 7, .length = 5},
  [5] = {.index = 12, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
    {field_type, 0},
  [2] =
    {field_content, 1},
  [3] =
    {field_name, 1},
    {field_type, 0},
    {field_value, 2},
    {field_value, 3},
  [7] =
    {field_name, 1},
    {field_type, 0},
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
  [12] =
    {field_name, 1},
    {field_type, 0},
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
    {field_value, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 10,
  [13] = 11,
  [14] = 10,
  [15] = 15,
  [16] = 11,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 27,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 32,
  [42] = 42,
  [43] = 37,
  [44] = 44,
  [45] = 7,
  [46] = 46,
  [47] = 6,
  [48] = 27,
  [49] = 5,
  [50] = 29,
  [51] = 51,
  [52] = 52,
  [53] = 51,
  [54] = 32,
  [55] = 51,
  [56] = 37,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 65,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 71,
  [76] = 76,
  [77] = 74,
  [78] = 66,
  [79] = 66,
  [80] = 64,
  [81] = 81,
  [82] = 76,
  [83] = 67,
  [84] = 73,
  [85] = 73,
  [86] = 68,
  [87] = 76,
  [88] = 65,
  [89] = 89,
  [90] = 90,
  [91] = 62,
  [92] = 89,
  [93] = 93,
  [94] = 61,
  [95] = 95,
  [96] = 65,
  [97] = 66,
  [98] = 95,
  [99] = 70,
  [100] = 73,
  [101] = 67,
  [102] = 81,
  [103] = 76,
  [104] = 70,
  [105] = 61,
  [106] = 61,
  [107] = 107,
  [108] = 4,
  [109] = 4,
  [110] = 110,
  [111] = 19,
  [112] = 18,
  [113] = 30,
  [114] = 25,
  [115] = 39,
  [116] = 7,
  [117] = 6,
  [118] = 8,
  [119] = 60,
  [120] = 59,
  [121] = 57,
  [122] = 122,
  [123] = 34,
  [124] = 33,
  [125] = 28,
  [126] = 24,
  [127] = 42,
  [128] = 4,
  [129] = 52,
  [130] = 58,
  [131] = 35,
  [132] = 26,
  [133] = 38,
  [134] = 5,
  [135] = 44,
  [136] = 40,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 46,
  [142] = 31,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 23,
  [147] = 22,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 23,
  [154] = 154,
  [155] = 137,
  [156] = 22,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 20,
  [166] = 122,
  [167] = 167,
  [168] = 20,
  [169] = 169,
  [170] = 8,
  [171] = 171,
  [172] = 8,
  [173] = 7,
  [174] = 6,
  [175] = 5,
  [176] = 171,
  [177] = 177,
  [178] = 160,
  [179] = 179,
  [180] = 180,
  [181] = 179,
  [182] = 122,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 183,
  [187] = 152,
  [188] = 164,
  [189] = 189,
  [190] = 189,
  [191] = 189,
  [192] = 169,
  [193] = 180,
  [194] = 183,
  [195] = 184,
  [196] = 196,
  [197] = 177,
  [198] = 143,
  [199] = 199,
  [200] = 137,
  [201] = 180,
  [202] = 184,
  [203] = 179,
  [204] = 150,
  [205] = 23,
  [206] = 206,
  [207] = 19,
  [208] = 208,
  [209] = 209,
  [210] = 208,
  [211] = 18,
  [212] = 212,
  [213] = 22,
  [214] = 214,
  [215] = 20,
  [216] = 206,
  [217] = 31,
  [218] = 218,
  [219] = 46,
  [220] = 44,
  [221] = 24,
  [222] = 222,
  [223] = 218,
  [224] = 28,
  [225] = 42,
  [226] = 33,
  [227] = 34,
  [228] = 30,
  [229] = 218,
  [230] = 38,
  [231] = 222,
  [232] = 40,
  [233] = 26,
  [234] = 39,
  [235] = 35,
  [236] = 222,
  [237] = 25,
  [238] = 58,
  [239] = 212,
  [240] = 209,
  [241] = 57,
  [242] = 52,
  [243] = 214,
  [244] = 218,
  [245] = 60,
  [246] = 59,
  [247] = 247,
  [248] = 169,
  [249] = 249,
  [250] = 160,
  [251] = 251,
  [252] = 252,
  [253] = 252,
  [254] = 249,
  [255] = 152,
  [256] = 143,
  [257] = 249,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 261,
  [264] = 264,
  [265] = 265,
  [266] = 265,
  [267] = 267,
  [268] = 268,
  [269] = 265,
  [270] = 264,
  [271] = 264,
  [272] = 265,
  [273] = 273,
  [274] = 274,
  [275] = 273,
  [276] = 273,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 268,
  [283] = 283,
  [284] = 267,
  [285] = 285,
  [286] = 285,
  [287] = 285,
  [288] = 285,
  [289] = 289,
  [290] = 289,
  [291] = 291,
  [292] = 291,
  [293] = 291,
  [294] = 294,
  [295] = 294,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 298,
  [310] = 306,
  [311] = 311,
  [312] = 307,
  [313] = 301,
  [314] = 314,
  [315] = 315,
  [316] = 304,
  [317] = 317,
  [318] = 318,
  [319] = 317,
  [320] = 320,
  [321] = 307,
  [322] = 320,
  [323] = 323,
  [324] = 311,
  [325] = 325,
  [326] = 320,
  [327] = 303,
  [328] = 323,
  [329] = 298,
  [330] = 314,
  [331] = 299,
  [332] = 301,
  [333] = 318,
  [334] = 303,
  [335] = 300,
  [336] = 336,
  [337] = 317,
  [338] = 336,
  [339] = 339,
  [340] = 314,
  [341] = 306,
  [342] = 311,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 60,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 343,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 352,
  [362] = 350,
  [363] = 30,
  [364] = 364,
  [365] = 344,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 369,
  [371] = 371,
  [372] = 372,
  [373] = 367,
  [374] = 374,
  [375] = 375,
  [376] = 367,
  [377] = 369,
  [378] = 378,
  [379] = 379,
  [380] = 349,
  [381] = 381,
  [382] = 372,
  [383] = 378,
  [384] = 372,
  [385] = 385,
  [386] = 386,
  [387] = 367,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 366,
  [393] = 354,
  [394] = 346,
  [395] = 379,
  [396] = 396,
  [397] = 397,
  [398] = 378,
  [399] = 391,
  [400] = 391,
  [401] = 401,
  [402] = 379,
  [403] = 397,
  [404] = 385,
  [405] = 405,
  [406] = 368,
  [407] = 407,
  [408] = 368,
  [409] = 409,
  [410] = 364,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43471
    ? (c < 4096
      ? (c < 2649
        ? (c < 1791
          ? (c < 891
            ? (c < 186
              ? (c < 's'
                ? (c < 'g'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'h' || (c < 'q'
                    ? (c >= 'j' && c <= 'n')
                    : c <= 'q')))
                : (c <= 's' || (c < 170
                  ? (c < 'x'
                    ? (c >= 'u' && c <= 'v')
                    : c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 736
                ? (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))))))
            : (c <= 893 || (c < 1376
              ? (c < 931
                ? (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))
                : (c <= 1013 || (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))))
              : (c <= 1416 || (c < 1649
                ? (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))))))))
          : (c <= 1791 || (c < 2417
            ? (c < 2088
              ? (c < 2036
                ? (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || (c < 1994
                    ? c == 1969
                    : c <= 2026)))
                : (c <= 2037 || (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || c == 2084))))
              : (c <= 2088 || (c < 2208
                ? (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))))))
            : (c <= 2432 || (c < 2527
              ? (c < 2482
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))))
              : (c <= 2529 || (c < 2579
                ? (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))))))))
        : (c <= 2652 || (c < 3200
          ? (c < 2911
            ? (c < 2784
              ? (c < 2730
                ? (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)))
                : (c <= 2736 || (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || c == 2768))))
              : (c <= 2785 || (c < 2858
                ? (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))))))
            : (c <= 2913 || (c < 2990
              ? (c < 2969
                ? (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)))
                : (c <= 2970 || (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3114
                ? (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))))))))
          : (c <= 3200 || (c < 3517
            ? (c < 3342
              ? (c < 3261
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))
                : (c <= 3261 || (c < 3313
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3423
                ? (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))))))
            : (c <= 3517 || (c < 3751
              ? (c < 3713
                ? (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3760 || (c < 3804
                ? (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))))))))))))
      : (c <= 4138 || (c < 8118
        ? (c < 6016
          ? (c < 4786
            ? (c < 4301
              ? (c < 4206
                ? (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || (c < 4197
                    ? c == 4193
                    : c <= 4198)))
                : (c <= 4208 || (c < 4256
                  ? (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4696
                ? (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))))
            : (c <= 4789 || (c < 5121
              ? (c < 4882
                ? (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))
                : (c <= 4885 || (c < 5024
                  ? (c < 4992
                    ? (c >= 4888 && c <= 4954)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5740 || (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5905 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5937)
                    : c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))))))))
          : (c <= 6067 || (c < 7245
            ? (c < 6576
              ? (c < 6320
                ? (c < 6176
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6264 || (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)))
                : (c <= 6389 || (c < 6512
                  ? (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6981
                ? (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))))))
            : (c <= 7247 || (c < 7680
              ? (c < 7401
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))
              : (c <= 7957 || (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))))))
        : (c <= 8124 || (c < 11736
          ? (c < 8508
            ? (c < 8336
              ? (c < 8160
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)))
                : (c <= 8172 || (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || c == 8319))))
              : (c <= 8348 || (c < 8472
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))))))
            : (c <= 8511 || (c < 11568
              ? (c < 11499
                ? (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))
                : (c <= 11502 || (c < 11559
                  ? (c < 11520
                    ? (c >= 11506 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11696
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))))))
          : (c <= 11742 || (c < 42656
            ? (c < 12704
              ? (c < 12445
                ? (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))
              : (c <= 12735 || (c < 42240
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))))))
            : (c <= 42735 || (c < 43020
              ? (c < 42963
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 43011
                  ? (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))
              : (c <= 43042 || (c < 43261
                ? (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))))))))))))
    : (c <= 43471 || (c < 70656
      ? (c < 66928
        ? (c < 64612
          ? (c < 43808
            ? (c < 43701
              ? (c < 43588
                ? (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)))
                : (c <= 43595 || (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))))
              : (c <= 43702 || (c < 43744
                ? (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))
                : (c <= 43754 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))))))
            : (c <= 43814 || (c < 64275
              ? (c < 55216
                ? (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))))
              : (c <= 64279 || (c < 64318
                ? (c < 64298
                  ? (c < 64287
                    ? c == 64285
                    : c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64605)))))))))
          : (c <= 64829 || (c < 65576
            ? (c < 65313
              ? (c < 65143
                ? (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65139
                    ? c == 65137
                    : c <= 65139)))
                : (c <= 65143 || (c < 65149
                  ? (c < 65147
                    ? c == 65145
                    : c <= 65147)
                  : (c <= 65149 || (c >= 65151 && c <= 65276)))))
              : (c <= 65338 || (c < 65482
                ? (c < 65440
                  ? (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65437)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))))
            : (c <= 65594 || (c < 66384
              ? (c < 65856
                ? (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))
                : (c <= 65908 || (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))))
              : (c <= 66421 || (c < 66560
                ? (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))))))))
        : (c <= 66938 || (c < 68800
          ? (c < 67712
            ? (c < 67456
              ? (c < 66995
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)))
                : (c <= 67001 || (c < 67392
                  ? (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))
              : (c <= 67461 || (c < 67594
                ? (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))))
            : (c <= 67742 || (c < 68192
              ? (c < 68030
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)))
                : (c <= 68031 || (c < 68117
                  ? (c < 68112
                    ? c == 68096
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))
              : (c <= 68220 || (c < 68416
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c >= 68352 && c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))))))
          : (c <= 68850 || (c < 70081
            ? (c < 69745
              ? (c < 69424
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69445 || (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69505)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))))
              : (c <= 69746 || (c < 69956
                ? (c < 69840
                  ? (c < 69763
                    ? c == 69749
                    : c <= 69807)
                  : (c <= 69864 || (c >= 69891 && c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))))
            : (c <= 70084 || (c < 70320
              ? (c < 70272
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70278 || (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c >= 70303 && c <= 70312)))))
              : (c <= 70366 || (c < 70450
                ? (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c >= 70442 && c <= 70448)))
                : (c <= 70451 || (c < 70480
                  ? (c < 70461
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70461)
                  : (c <= 70480 || (c >= 70493 && c <= 70497)))))))))))))
      : (c <= 70708 || (c < 119894
        ? (c < 73056
          ? (c < 71999
            ? (c < 71352
              ? (c < 71040
                ? (c < 70784
                  ? (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70753)
                  : (c <= 70831 || (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)))
                : (c <= 71086 || (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))))
              : (c <= 71352 || (c < 71935
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71494)
                  : (c <= 71723 || (c >= 71840 && c <= 71903)))
                : (c <= 71942 || (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c >= 71960 && c <= 71983)))))))
            : (c <= 71999 || (c < 72349
              ? (c < 72192
                ? (c < 72106
                  ? (c < 72096
                    ? c == 72001
                    : c <= 72103)
                  : (c <= 72144 || (c < 72163
                    ? c == 72161
                    : c <= 72163)))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43494
    ? (c < 4176
      ? (c < 2693
        ? (c < 1869
          ? (c < 904
            ? (c < 248
              ? (c < 170
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'e' || (c < 'u'
                    ? (c >= 'g' && c <= 's')
                    : c <= 'z')))
                : (c <= 170 || (c < 192
                  ? (c < 186
                    ? c == 181
                    : c <= 186)
                  : (c <= 214 || (c >= 216 && c <= 246)))))
              : (c <= 705 || (c < 880
                ? (c < 748
                  ? (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)
                  : (c <= 748 || c == 750))
                : (c <= 884 || (c < 895
                  ? (c < 891
                    ? (c >= 886 && c <= 887)
                    : c <= 893)
                  : (c <= 895 || c == 902))))))
            : (c <= 906 || (c < 1568
              ? (c < 1329
                ? (c < 931
                  ? (c < 910
                    ? c == 908
                    : c <= 929)
                  : (c <= 1013 || (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)))
                : (c <= 1366 || (c < 1488
                  ? (c < 1376
                    ? c == 1369
                    : c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))))
              : (c <= 1610 || (c < 1774
                ? (c < 1749
                  ? (c < 1649
                    ? (c >= 1646 && c <= 1647)
                    : c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))
                : (c <= 1775 || (c < 1808
                  ? (c < 1791
                    ? (c >= 1786 && c <= 1788)
                    : c <= 1791)
                  : (c <= 1808 || (c >= 1810 && c <= 1839)))))))))
          : (c <= 1957 || (c < 2451
            ? (c < 2160
              ? (c < 2074
                ? (c < 2036
                  ? (c < 1994
                    ? c == 1969
                    : c <= 2026)
                  : (c <= 2037 || (c < 2048
                    ? c == 2042
                    : c <= 2069)))
                : (c <= 2074 || (c < 2112
                  ? (c < 2088
                    ? c == 2084
                    : c <= 2088)
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))))
              : (c <= 2183 || (c < 2384
                ? (c < 2308
                  ? (c < 2208
                    ? (c >= 2185 && c <= 2190)
                    : c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2437
                  ? (c < 2417
                    ? (c >= 2392 && c <= 2401)
                    : c <= 2432)
                  : (c <= 2444 || (c >= 2447 && c <= 2448)))))))
            : (c <= 2472 || (c < 2565
              ? (c < 2510
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2544
                  ? (c < 2527
                    ? (c >= 2524 && c <= 2525)
                    : c <= 2529)
                  : (c <= 2545 || c == 2556))))
              : (c <= 2570 || (c < 2613
                ? (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c >= 2610 && c <= 2611)))
                : (c <= 2614 || (c < 2654
                  ? (c < 2649
                    ? (c >= 2616 && c <= 2617)
                    : c <= 2652)
                  : (c <= 2654 || (c >= 2674 && c <= 2676)))))))))))
        : (c <= 2701 || (c < 3214
          ? (c < 2949
            ? (c < 2831
              ? (c < 2749
                ? (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))
                : (c <= 2749 || (c < 2809
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))))
              : (c <= 2832 || (c < 2877
                ? (c < 2866
                  ? (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2929
                  ? (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2913)
                  : (c <= 2929 || c == 2947))))))
            : (c <= 2954 || (c < 3077
              ? (c < 2974
                ? (c < 2969
                  ? (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2990
                  ? (c < 2984
                    ? (c >= 2979 && c <= 2980)
                    : c <= 2986)
                  : (c <= 3001 || c == 3024))))
              : (c <= 3084 || (c < 3160
                ? (c < 3114
                  ? (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3200
                  ? (c < 3168
                    ? c == 3165
                    : c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))))))))
          : (c <= 3216 || (c < 3585
            ? (c < 3389
              ? (c < 3296
                ? (c < 3253
                  ? (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)
                  : (c <= 3257 || (c < 3293
                    ? c == 3261
                    : c <= 3294)))
                : (c <= 3297 || (c < 3342
                  ? (c < 3332
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c >= 3346 && c <= 3386)))))
              : (c <= 3389 || (c < 3461
                ? (c < 3423
                  ? (c < 3412
                    ? c == 3406
                    : c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3517
                  ? (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))))))
            : (c <= 3632 || (c < 3773
              ? (c < 3718
                ? (c < 3713
                  ? (c < 3648
                    ? c == 3634
                    : c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3760 || c == 3762))))
              : (c <= 3773 || (c < 3904
                ? (c < 3804
                  ? (c < 3782
                    ? (c >= 3776 && c <= 3780)
                    : c <= 3782)
                  : (c <= 3807 || c == 3840))
                : (c <= 3911 || (c < 4096
                  ? (c < 3976
                    ? (c >= 3913 && c <= 3948)
                    : c <= 3980)
                  : (c <= 4138 || c == 4159))))))))))))
      : (c <= 4181 || (c < 8130
        ? (c < 6108
          ? (c < 4800
            ? (c < 4348
              ? (c < 4238
                ? (c < 4197
                  ? (c < 4193
                    ? (c >= 4186 && c <= 4189)
                    : c <= 4193)
                  : (c <= 4198 || (c < 4213
                    ? (c >= 4206 && c <= 4208)
                    : c <= 4225)))
                : (c <= 4238 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))))
              : (c <= 4680 || (c < 4704
                ? (c < 4696
                  ? (c < 4688
                    ? (c >= 4682 && c <= 4685)
                    : c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4786
                  ? (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))))))
            : (c <= 4800 || (c < 5761
              ? (c < 4992
                ? (c < 4824
                  ? (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)
                  : (c <= 4880 || (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))))
              : (c <= 5786 || (c < 5952
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))))))))
          : (c <= 6108 || (c < 7296
            ? (c < 6688
              ? (c < 6480
                ? (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c >= 6656 && c <= 6678)))))
              : (c <= 6740 || (c < 7086
                ? (c < 6981
                  ? (c < 6917
                    ? c == 6823
                    : c <= 6963)
                  : (c <= 6988 || (c >= 7043 && c <= 7072)))
                : (c <= 7087 || (c < 7245
                  ? (c < 7168
                    ? (c >= 7098 && c <= 7141)
                    : c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))))))
            : (c <= 7304 || (c < 7968
              ? (c < 7413
                ? (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7680
                  ? (c < 7424
                    ? c == 7418
                    : c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8029
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || c == 8126))))))))))
        : (c <= 8132 || (c < 12321
          ? (c < 8526
            ? (c < 8455
              ? (c < 8182
                ? (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)))
                : (c <= 8188 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || c == 8450))))
              : (c <= 8455 || (c < 8486
                ? (c < 8472
                  ? (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8508
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))))))
            : (c <= 8526 || (c < 11648
              ? (c < 11520
                ? (c < 11499
                  ? (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || c == 11631))))
              : (c <= 11670 || (c < 11712
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11736
                  ? (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)
                  : (c <= 11742 || (c >= 12293 && c <= 12295)))))))))
          : (c <= 12329 || (c < 42786
            ? (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42538
                ? (c < 42240
                  ? (c < 42192
                    ? (c >= 19968 && c <= 42124)
                    : c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42656
                  ? (c < 42623
                    ? (c >= 42560 && c <= 42606)
                    : c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))))))
            : (c <= 42888 || (c < 43138
              ? (c < 42994
                ? (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))
                : (c <= 43009 || (c < 43020
                  ? (c < 43015
                    ? (c >= 43011 && c <= 43013)
                    : c <= 43018)
                  : (c <= 43042 || (c >= 43072 && c <= 43123)))))
              : (c <= 43187 || (c < 43312
                ? (c < 43261
                  ? (c < 43259
                    ? (c >= 43250 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43471
                  ? (c < 43396
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43442)
                  : (c <= 43471 || (c >= 43488 && c <= 43492)))))))))))))))
    : (c <= 43503 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43824
            ? (c < 43712
              ? (c < 43642
                ? (c < 43584
                  ? (c < 43520
                    ? (c >= 43514 && c <= 43518)
                    : c <= 43560)
                  : (c <= 43586 || (c < 43616
                    ? (c >= 43588 && c <= 43595)
                    : c <= 43638)))
                : (c <= 43642 || (c < 43701
                  ? (c < 43697
                    ? (c >= 43646 && c <= 43695)
                    : c <= 43697)
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43777
                ? (c < 43744
                  ? (c < 43739
                    ? c == 43714
                    : c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))))
            : (c <= 43866 || (c < 64287
              ? (c < 63744
                ? (c < 44032
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44002)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43471
    ? (c < 3976
      ? (c < 2616
        ? (c < 1786
          ? (c < 886
            ? (c < 181
              ? (c < 'j'
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'a' || (c < 'g'
                    ? c == 'e'
                    : c <= 'h')))
                : (c <= 'o' || (c < 'u'
                  ? (c < 's'
                    ? c == 'q'
                    : c <= 's')
                  : (c <= 'z' || c == 170))))
              : (c <= 181 || (c < 710
                ? (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 880 && c <= 884)))))))
            : (c <= 887 || (c < 1369
              ? (c < 910
                ? (c < 902
                  ? (c < 895
                    ? (c >= 891 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c < 908
                    ? (c >= 904 && c <= 906)
                    : c <= 908)))
                : (c <= 929 || (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c >= 1329 && c <= 1366)))))
              : (c <= 1369 || (c < 1646
                ? (c < 1519
                  ? (c < 1488
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1765
                  ? (c < 1749
                    ? (c >= 1649 && c <= 1747)
                    : c <= 1749)
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))))))))
          : (c <= 1788 || (c < 2392
            ? (c < 2084
              ? (c < 1994
                ? (c < 1810
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1808)
                  : (c <= 1839 || (c < 1969
                    ? (c >= 1869 && c <= 1957)
                    : c <= 1969)))
                : (c <= 2026 || (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || c == 2074))))
              : (c <= 2084 || (c < 2185
                ? (c < 2144
                  ? (c < 2112
                    ? c == 2088
                    : c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2365
                  ? (c < 2308
                    ? (c >= 2208 && c <= 2249)
                    : c <= 2361)
                  : (c <= 2365 || c == 2384))))))
            : (c <= 2401 || (c < 2524
              ? (c < 2474
                ? (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2432)
                    : c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))
                : (c <= 2480 || (c < 2493
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2493 || c == 2510))))
              : (c <= 2525 || (c < 2575
                ? (c < 2556
                  ? (c < 2544
                    ? (c >= 2527 && c <= 2529)
                    : c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))))))))))
        : (c <= 2617 || (c < 3168
          ? (c < 2908
            ? (c < 2768
              ? (c < 2707
                ? (c < 2674
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2676 || (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)))
                : (c <= 2728 || (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || c == 2749))))
              : (c <= 2768 || (c < 2835
                ? (c < 2821
                  ? (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || c == 2877))))))
            : (c <= 2909 || (c < 2984
              ? (c < 2962
                ? (c < 2947
                  ? (c < 2929
                    ? (c >= 2911 && c <= 2913)
                    : c <= 2929)
                  : (c <= 2947 || (c < 2958
                    ? (c >= 2949 && c <= 2954)
                    : c <= 2960)))
                : (c <= 2965 || (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))))
              : (c <= 2986 || (c < 3090
                ? (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))))))))
          : (c <= 3169 || (c < 3507
            ? (c < 3332
              ? (c < 3253
                ? (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c < 3242
                    ? (c >= 3218 && c <= 3240)
                    : c <= 3251)))
                : (c <= 3257 || (c < 3296
                  ? (c < 3293
                    ? c == 3261
                    : c <= 3294)
                  : (c <= 3297 || (c >= 3313 && c <= 3314)))))
              : (c <= 3340 || (c < 3412
                ? (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))
                : (c <= 3414 || (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))))))
            : (c <= 3515 || (c < 3749
              ? (c < 3648
                ? (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))
                : (c <= 3654 || (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))))
              : (c <= 3749 || (c < 3782
                ? (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))))))))))))
      : (c <= 3980 || (c < 8064
        ? (c < 5998
          ? (c < 4752
            ? (c < 4295
              ? (c < 4197
                ? (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c < 4193
                    ? (c >= 4186 && c <= 4189)
                    : c <= 4193)))
                : (c <= 4198 || (c < 4238
                  ? (c < 4213
                    ? (c >= 4206 && c <= 4208)
                    : c <= 4225)
                  : (c <= 4238 || (c >= 4256 && c <= 4293)))))
              : (c <= 4295 || (c < 4688
                ? (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))))))
            : (c <= 4784 || (c < 5112
              ? (c < 4824
                ? (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)))
                : (c <= 4880 || (c < 4992
                  ? (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))))
              : (c <= 5117 || (c < 5870
                ? (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5952
                  ? (c < 5919
                    ? (c >= 5888 && c <= 5905)
                    : c <= 5937)
                  : (c <= 5969 || (c >= 5984 && c <= 5996)))))))))
          : (c <= 6000 || (c < 7168
            ? (c < 6528
              ? (c < 6314
                ? (c < 6108
                  ? (c < 6103
                    ? (c >= 6016 && c <= 6067)
                    : c <= 6103)
                  : (c <= 6108 || (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)))
                : (c <= 6314 || (c < 6480
                  ? (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))))
              : (c <= 6571 || (c < 6917
                ? (c < 6688
                  ? (c < 6656
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7086
                  ? (c < 7043
                    ? (c >= 6981 && c <= 6988)
                    : c <= 7072)
                  : (c <= 7087 || (c >= 7098 && c <= 7141)))))))
            : (c <= 7203 || (c < 7424
              ? (c < 7357
                ? (c < 7296
                  ? (c < 7258
                    ? (c >= 7245 && c <= 7247)
                    : c <= 7293)
                  : (c <= 7304 || (c >= 7312 && c <= 7354)))
                : (c <= 7359 || (c < 7413
                  ? (c < 7406
                    ? (c >= 7401 && c <= 7404)
                    : c <= 7411)
                  : (c <= 7414 || c == 7418))))
              : (c <= 7615 || (c < 8016
                ? (c < 7968
                  ? (c < 7960
                    ? (c >= 7680 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))
                : (c <= 8023 || (c < 8029
                  ? (c < 8027
                    ? c == 8025
                    : c <= 8027)
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))))))))))
        : (c <= 8116 || (c < 11736
          ? (c < 8490
            ? (c < 8319
              ? (c < 8150
                ? (c < 8130
                  ? (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)
                  : (c <= 8132 || (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)))
                : (c <= 8155 || (c < 8182
                  ? (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)
                  : (c <= 8188 || c == 8305))))
              : (c <= 8319 || (c < 8469
                ? (c < 8455
                  ? (c < 8450
                    ? (c >= 8336 && c <= 8348)
                    : c <= 8450)
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))
                : (c <= 8469 || (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || c == 8488))))))
            : (c <= 8505 || (c < 11568
              ? (c < 11499
                ? (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))
                : (c <= 11502 || (c < 11559
                  ? (c < 11520
                    ? (c >= 11506 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11696
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))))))
          : (c <= 11742 || (c < 42656
            ? (c < 12704
              ? (c < 12445
                ? (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))
              : (c <= 12735 || (c < 42240
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))))))
            : (c <= 42735 || (c < 43020
              ? (c < 42963
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 43011
                  ? (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))
              : (c <= 43042 || (c < 43261
                ? (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))))))))))))
    : (c <= 43471 || (c < 70656
      ? (c < 66928
        ? (c < 64612
          ? (c < 43808
            ? (c < 43701
              ? (c < 43588
                ? (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)))
                : (c <= 43595 || (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))))
              : (c <= 43702 || (c < 43744
                ? (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))
                : (c <= 43754 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))))))
            : (c <= 43814 || (c < 64275
              ? (c < 55216
                ? (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))))
              : (c <= 64279 || (c < 64318
                ? (c < 64298
                  ? (c < 64287
                    ? c == 64285
                    : c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64605)))))))))
          : (c <= 64829 || (c < 65576
            ? (c < 65313
              ? (c < 65143
                ? (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65139
                    ? c == 65137
                    : c <= 65139)))
                : (c <= 65143 || (c < 65149
                  ? (c < 65147
                    ? c == 65145
                    : c <= 65147)
                  : (c <= 65149 || (c >= 65151 && c <= 65276)))))
              : (c <= 65338 || (c < 65482
                ? (c < 65440
                  ? (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65437)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))))
            : (c <= 65594 || (c < 66384
              ? (c < 65856
                ? (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))
                : (c <= 65908 || (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))))
              : (c <= 66421 || (c < 66560
                ? (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))))))))
        : (c <= 66938 || (c < 68800
          ? (c < 67712
            ? (c < 67456
              ? (c < 66995
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)))
                : (c <= 67001 || (c < 67392
                  ? (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))
              : (c <= 67461 || (c < 67594
                ? (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))))
            : (c <= 67742 || (c < 68192
              ? (c < 68030
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)))
                : (c <= 68031 || (c < 68117
                  ? (c < 68112
                    ? c == 68096
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))
              : (c <= 68220 || (c < 68416
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c >= 68352 && c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))))))
          : (c <= 68850 || (c < 70081
            ? (c < 69745
              ? (c < 69424
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69445 || (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69505)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))))
              : (c <= 69746 || (c < 69956
                ? (c < 69840
                  ? (c < 69763
                    ? c == 69749
                    : c <= 69807)
                  : (c <= 69864 || (c >= 69891 && c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))))
            : (c <= 70084 || (c < 70320
              ? (c < 70272
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70278 || (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c >= 70303 && c <= 70312)))))
              : (c <= 70366 || (c < 70450
                ? (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c >= 70442 && c <= 70448)))
                : (c <= 70451 || (c < 70480
                  ? (c < 70461
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70461)
                  : (c <= 70480 || (c >= 70493 && c <= 70497)))))))))))))
      : (c <= 70708 || (c < 119894
        ? (c < 73056
          ? (c < 71999
            ? (c < 71352
              ? (c < 71040
                ? (c < 70784
                  ? (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70753)
                  : (c <= 70831 || (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)))
                : (c <= 71086 || (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))))
              : (c <= 71352 || (c < 71935
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71494)
                  : (c <= 71723 || (c >= 71840 && c <= 71903)))
                : (c <= 71942 || (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c >= 71960 && c <= 71983)))))))
            : (c <= 71999 || (c < 72349
              ? (c < 72192
                ? (c < 72106
                  ? (c < 72096
                    ? c == 72001
                    : c <= 72103)
                  : (c <= 72144 || (c < 72163
                    ? c == 72161
                    : c <= 72163)))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 43494
    ? (c < 4186
      ? (c < 2703
        ? (c < 1969
          ? (c < 908
            ? (c < 710
              ? (c < 181
                ? (c < 'b'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'n' || (c < 170
                    ? (c >= 'p' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 216
                  ? (c < 192
                    ? c == 186
                    : c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))))
              : (c <= 721 || (c < 886
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 902
                  ? (c < 895
                    ? (c >= 891 && c <= 893)
                    : c <= 895)
                  : (c <= 902 || (c >= 904 && c <= 906)))))))
            : (c <= 908 || (c < 1646
              ? (c < 1369
                ? (c < 1015
                  ? (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)
                  : (c <= 1153 || (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)))
                : (c <= 1369 || (c < 1519
                  ? (c < 1488
                    ? (c >= 1376 && c <= 1416)
                    : c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))))
              : (c <= 1647 || (c < 1786
                ? (c < 1765
                  ? (c < 1749
                    ? (c >= 1649 && c <= 1747)
                    : c <= 1749)
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1810
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1808)
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))))))))
          : (c <= 1969 || (c < 2474
            ? (c < 2185
              ? (c < 2084
                ? (c < 2042
                  ? (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)))
                : (c <= 2084 || (c < 2144
                  ? (c < 2112
                    ? c == 2088
                    : c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))))
              : (c <= 2190 || (c < 2392
                ? (c < 2365
                  ? (c < 2308
                    ? (c >= 2208 && c <= 2249)
                    : c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2432)
                    : c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))))))
            : (c <= 2480 || (c < 2575
              ? (c < 2524
                ? (c < 2493
                  ? (c < 2486
                    ? c == 2482
                    : c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2556
                  ? (c < 2544
                    ? (c >= 2527 && c <= 2529)
                    : c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))))
              : (c <= 2576 || (c < 2616
                ? (c < 2610
                  ? (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)
                  : (c <= 2611 || (c >= 2613 && c <= 2614)))
                : (c <= 2617 || (c < 2674
                  ? (c < 2654
                    ? (c >= 2649 && c <= 2652)
                    : c <= 2654)
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))))))))))
        : (c <= 2705 || (c < 3218
          ? (c < 2958
            ? (c < 2835
              ? (c < 2768
                ? (c < 2738
                  ? (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)
                  : (c <= 2739 || (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)))
                : (c <= 2768 || (c < 2821
                  ? (c < 2809
                    ? (c >= 2784 && c <= 2785)
                    : c <= 2809)
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))))
              : (c <= 2856 || (c < 2908
                ? (c < 2869
                  ? (c < 2866
                    ? (c >= 2858 && c <= 2864)
                    : c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2947
                  ? (c < 2929
                    ? (c >= 2911 && c <= 2913)
                    : c <= 2929)
                  : (c <= 2947 || (c >= 2949 && c <= 2954)))))))
            : (c <= 2960 || (c < 3086
              ? (c < 2979
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 3024
                  ? (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))))
              : (c <= 3088 || (c < 3165
                ? (c < 3133
                  ? (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3205
                  ? (c < 3200
                    ? (c >= 3168 && c <= 3169)
                    : c <= 3200)
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))))))))
          : (c <= 3240 || (c < 3634
            ? (c < 3406
              ? (c < 3313
                ? (c < 3261
                  ? (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)
                  : (c <= 3261 || (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)))
                : (c <= 3314 || (c < 3346
                  ? (c < 3342
                    ? (c >= 3332 && c <= 3340)
                    : c <= 3344)
                  : (c <= 3386 || c == 3389))))
              : (c <= 3406 || (c < 3482
                ? (c < 3450
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3414)
                    : c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3520
                  ? (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))))))
            : (c <= 3634 || (c < 3776
              ? (c < 3724
                ? (c < 3716
                  ? (c < 3713
                    ? (c >= 3648 && c <= 3654)
                    : c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3762
                  ? (c < 3751
                    ? c == 3749
                    : c <= 3760)
                  : (c <= 3762 || c == 3773))))
              : (c <= 3780 || (c < 3913
                ? (c < 3840
                  ? (c < 3804
                    ? c == 3782
                    : c <= 3807)
                  : (c <= 3840 || (c >= 3904 && c <= 3911)))
                : (c <= 3948 || (c < 4159
                  ? (c < 4096
                    ? (c >= 3976 && c <= 3980)
                    : c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))))))))))))
      : (c <= 4189 || (c < 8130
        ? (c < 6108
          ? (c < 4802
            ? (c < 4682
              ? (c < 4256
                ? (c < 4206
                  ? (c < 4197
                    ? c == 4193
                    : c <= 4198)
                  : (c <= 4208 || (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))))
              : (c <= 4685 || (c < 4746
                ? (c < 4698
                  ? (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4792
                  ? (c < 4786
                    ? (c >= 4752 && c <= 4784)
                    : c <= 4789)
                  : (c <= 4798 || c == 4800))))))
            : (c <= 4805 || (c < 5761
              ? (c < 4992
                ? (c < 4882
                  ? (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5121
                  ? (c < 5112
                    ? (c >= 5024 && c <= 5109)
                    : c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))))
              : (c <= 5786 || (c < 5952
                ? (c < 5888
                  ? (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
                : (c <= 5969 || (c < 6016
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6067 || c == 6103))))))))
          : (c <= 6108 || (c < 7296
            ? (c < 6688
              ? (c < 6480
                ? (c < 6314
                  ? (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6312)
                  : (c <= 6314 || (c < 6400
                    ? (c >= 6320 && c <= 6389)
                    : c <= 6430)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c >= 6656 && c <= 6678)))))
              : (c <= 6740 || (c < 7086
                ? (c < 6981
                  ? (c < 6917
                    ? c == 6823
                    : c <= 6963)
                  : (c <= 6988 || (c >= 7043 && c <= 7072)))
                : (c <= 7087 || (c < 7245
                  ? (c < 7168
                    ? (c >= 7098 && c <= 7141)
                    : c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))))))
            : (c <= 7304 || (c < 7968
              ? (c < 7413
                ? (c < 7401
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7680
                  ? (c < 7424
                    ? c == 7418
                    : c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8029
                ? (c < 8025
                  ? (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)
                  : (c <= 8025 || c == 8027))
                : (c <= 8029 || (c < 8118
                  ? (c < 8064
                    ? (c >= 8031 && c <= 8061)
                    : c <= 8116)
                  : (c <= 8124 || c == 8126))))))))))
        : (c <= 8132 || (c < 12321
          ? (c < 8526
            ? (c < 8455
              ? (c < 8182
                ? (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)))
                : (c <= 8188 || (c < 8336
                  ? (c < 8319
                    ? c == 8305
                    : c <= 8319)
                  : (c <= 8348 || c == 8450))))
              : (c <= 8455 || (c < 8486
                ? (c < 8472
                  ? (c < 8469
                    ? (c >= 8458 && c <= 8467)
                    : c <= 8469)
                  : (c <= 8477 || c == 8484))
                : (c <= 8486 || (c < 8508
                  ? (c < 8490
                    ? c == 8488
                    : c <= 8505)
                  : (c <= 8511 || (c >= 8517 && c <= 8521)))))))
            : (c <= 8526 || (c < 11648
              ? (c < 11520
                ? (c < 11499
                  ? (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || c == 11631))))
              : (c <= 11670 || (c < 11712
                ? (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11736
                  ? (c < 11728
                    ? (c >= 11720 && c <= 11726)
                    : c <= 11734)
                  : (c <= 11742 || (c >= 12293 && c <= 12295)))))))))
          : (c <= 12329 || (c < 42786
            ? (c < 13312
              ? (c < 12540
                ? (c < 12353
                  ? (c < 12344
                    ? (c >= 12337 && c <= 12341)
                    : c <= 12348)
                  : (c <= 12438 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))
                : (c <= 12543 || (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))))
              : (c <= 19903 || (c < 42538
                ? (c < 42240
                  ? (c < 42192
                    ? (c >= 19968 && c <= 42124)
                    : c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42656
                  ? (c < 42623
                    ? (c >= 42560 && c <= 42606)
                    : c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))))))
            : (c <= 42888 || (c < 43138
              ? (c < 42994
                ? (c < 42963
                  ? (c < 42960
                    ? (c >= 42891 && c <= 42954)
                    : c <= 42961)
                  : (c <= 42963 || (c >= 42965 && c <= 42969)))
                : (c <= 43009 || (c < 43020
                  ? (c < 43015
                    ? (c >= 43011 && c <= 43013)
                    : c <= 43018)
                  : (c <= 43042 || (c >= 43072 && c <= 43123)))))
              : (c <= 43187 || (c < 43312
                ? (c < 43261
                  ? (c < 43259
                    ? (c >= 43250 && c <= 43255)
                    : c <= 43259)
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43471
                  ? (c < 43396
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43442)
                  : (c <= 43471 || (c >= 43488 && c <= 43492)))))))))))))))
    : (c <= 43503 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43824
            ? (c < 43712
              ? (c < 43642
                ? (c < 43584
                  ? (c < 43520
                    ? (c >= 43514 && c <= 43518)
                    : c <= 43560)
                  : (c <= 43586 || (c < 43616
                    ? (c >= 43588 && c <= 43595)
                    : c <= 43638)))
                : (c <= 43642 || (c < 43701
                  ? (c < 43697
                    ? (c >= 43646 && c <= 43695)
                    : c <= 43697)
                  : (c <= 43702 || (c >= 43705 && c <= 43709)))))
              : (c <= 43712 || (c < 43777
                ? (c < 43744
                  ? (c < 43739
                    ? c == 43714
                    : c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43808
                  ? (c < 43793
                    ? (c >= 43785 && c <= 43790)
                    : c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))))))
            : (c <= 43866 || (c < 64287
              ? (c < 63744
                ? (c < 44032
                  ? (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44002)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 43471
    ? (c < 4096
      ? (c < 2649
        ? (c < 1791
          ? (c < 891
            ? (c < 186
              ? (c < 'j'
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'a' || (c < 'g'
                    ? c == 'e'
                    : c <= 'h')))
                : (c <= 'o' || (c < 170
                  ? (c < 's'
                    ? c == 'q'
                    : c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 736
                ? (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))))))
            : (c <= 893 || (c < 1376
              ? (c < 931
                ? (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))
                : (c <= 1013 || (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))))
              : (c <= 1416 || (c < 1649
                ? (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))))))))
          : (c <= 1791 || (c < 2417
            ? (c < 2088
              ? (c < 2036
                ? (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || (c < 1994
                    ? c == 1969
                    : c <= 2026)))
                : (c <= 2037 || (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || c == 2084))))
              : (c <= 2088 || (c < 2208
                ? (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))))))
            : (c <= 2432 || (c < 2527
              ? (c < 2482
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))))
              : (c <= 2529 || (c < 2579
                ? (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))))))))
        : (c <= 2652 || (c < 3200
          ? (c < 2911
            ? (c < 2784
              ? (c < 2730
                ? (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)))
                : (c <= 2736 || (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || c == 2768))))
              : (c <= 2785 || (c < 2858
                ? (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))))))
            : (c <= 2913 || (c < 2990
              ? (c < 2969
                ? (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)))
                : (c <= 2970 || (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3114
                ? (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))))))))
          : (c <= 3200 || (c < 3517
            ? (c < 3342
              ? (c < 3261
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))
                : (c <= 3261 || (c < 3313
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3423
                ? (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))))))
            : (c <= 3517 || (c < 3751
              ? (c < 3713
                ? (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3760 || (c < 3804
                ? (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))))))))))))
      : (c <= 4138 || (c < 8118
        ? (c < 6016
          ? (c < 4786
            ? (c < 4301
              ? (c < 4206
                ? (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || (c < 4197
                    ? c == 4193
                    : c <= 4198)))
                : (c <= 4208 || (c < 4256
                  ? (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4696
                ? (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))))
            : (c <= 4789 || (c < 5121
              ? (c < 4882
                ? (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))
                : (c <= 4885 || (c < 5024
                  ? (c < 4992
                    ? (c >= 4888 && c <= 4954)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5740 || (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5905 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5937)
                    : c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))))))))
          : (c <= 6067 || (c < 7245
            ? (c < 6576
              ? (c < 6320
                ? (c < 6176
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6264 || (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)))
                : (c <= 6389 || (c < 6512
                  ? (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6981
                ? (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))))))
            : (c <= 7247 || (c < 7680
              ? (c < 7401
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))
              : (c <= 7957 || (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))))))
        : (c <= 8124 || (c < 11736
          ? (c < 8508
            ? (c < 8336
              ? (c < 8160
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)))
                : (c <= 8172 || (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || c == 8319))))
              : (c <= 8348 || (c < 8472
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))))))
            : (c <= 8511 || (c < 11568
              ? (c < 11499
                ? (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))
                : (c <= 11502 || (c < 11559
                  ? (c < 11520
                    ? (c >= 11506 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11696
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))))))
          : (c <= 11742 || (c < 42656
            ? (c < 12704
              ? (c < 12445
                ? (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))
              : (c <= 12735 || (c < 42240
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))))))
            : (c <= 42735 || (c < 43020
              ? (c < 42963
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 43011
                  ? (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))
              : (c <= 43042 || (c < 43261
                ? (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))))))))))))
    : (c <= 43471 || (c < 70656
      ? (c < 66928
        ? (c < 64612
          ? (c < 43808
            ? (c < 43701
              ? (c < 43588
                ? (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)))
                : (c <= 43595 || (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))))
              : (c <= 43702 || (c < 43744
                ? (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))
                : (c <= 43754 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))))))
            : (c <= 43814 || (c < 64275
              ? (c < 55216
                ? (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))))
              : (c <= 64279 || (c < 64318
                ? (c < 64298
                  ? (c < 64287
                    ? c == 64285
                    : c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64605)))))))))
          : (c <= 64829 || (c < 65576
            ? (c < 65313
              ? (c < 65143
                ? (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65139
                    ? c == 65137
                    : c <= 65139)))
                : (c <= 65143 || (c < 65149
                  ? (c < 65147
                    ? c == 65145
                    : c <= 65147)
                  : (c <= 65149 || (c >= 65151 && c <= 65276)))))
              : (c <= 65338 || (c < 65482
                ? (c < 65440
                  ? (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65437)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))))
            : (c <= 65594 || (c < 66384
              ? (c < 65856
                ? (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))
                : (c <= 65908 || (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))))
              : (c <= 66421 || (c < 66560
                ? (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))))))))
        : (c <= 66938 || (c < 68800
          ? (c < 67712
            ? (c < 67456
              ? (c < 66995
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)))
                : (c <= 67001 || (c < 67392
                  ? (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))
              : (c <= 67461 || (c < 67594
                ? (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))))
            : (c <= 67742 || (c < 68192
              ? (c < 68030
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)))
                : (c <= 68031 || (c < 68117
                  ? (c < 68112
                    ? c == 68096
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))
              : (c <= 68220 || (c < 68416
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c >= 68352 && c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))))))
          : (c <= 68850 || (c < 70081
            ? (c < 69745
              ? (c < 69424
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69445 || (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69505)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))))
              : (c <= 69746 || (c < 69956
                ? (c < 69840
                  ? (c < 69763
                    ? c == 69749
                    : c <= 69807)
                  : (c <= 69864 || (c >= 69891 && c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))))
            : (c <= 70084 || (c < 70320
              ? (c < 70272
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70278 || (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c >= 70303 && c <= 70312)))))
              : (c <= 70366 || (c < 70450
                ? (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c >= 70442 && c <= 70448)))
                : (c <= 70451 || (c < 70480
                  ? (c < 70461
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70461)
                  : (c <= 70480 || (c >= 70493 && c <= 70497)))))))))))))
      : (c <= 70708 || (c < 119894
        ? (c < 73056
          ? (c < 71999
            ? (c < 71352
              ? (c < 71040
                ? (c < 70784
                  ? (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70753)
                  : (c <= 70831 || (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)))
                : (c <= 71086 || (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))))
              : (c <= 71352 || (c < 71935
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71494)
                  : (c <= 71723 || (c >= 71840 && c <= 71903)))
                : (c <= 71942 || (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c >= 71960 && c <= 71983)))))))
            : (c <= 71999 || (c < 72349
              ? (c < 72192
                ? (c < 72106
                  ? (c < 72096
                    ? c == 72001
                    : c <= 72103)
                  : (c <= 72144 || (c < 72163
                    ? c == 72161
                    : c <= 72163)))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 43488
    ? (c < 4159
      ? (c < 2654
        ? (c < 1808
          ? (c < 895
            ? (c < 192
              ? (c < 'q'
                ? (c < 'e'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'e' || (c < 'j'
                    ? (c >= 'g' && c <= 'h')
                    : c <= 'o')))
                : (c <= 'q' || (c < 181
                  ? (c < 170
                    ? (c >= 's' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || c == 186))))
              : (c <= 214 || (c < 748
                ? (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))))))
            : (c <= 895 || (c < 1488
              ? (c < 1015
                ? (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))
                : (c <= 1153 || (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))))
              : (c <= 1514 || (c < 1749
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1808 || (c < 2437
            ? (c < 2112
              ? (c < 2042
                ? (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)))
                : (c <= 2042 || (c < 2084
                  ? (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)
                  : (c <= 2084 || c == 2088))))
              : (c <= 2136 || (c < 2308
                ? (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))
                : (c <= 2361 || (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))))))
            : (c <= 2444 || (c < 2544
              ? (c < 2486
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))))
              : (c <= 2545 || (c < 2602
                ? (c < 2575
                  ? (c < 2565
                    ? c == 2556
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))))))))))
        : (c <= 2654 || (c < 3205
          ? (c < 2929
            ? (c < 2809
              ? (c < 2738
                ? (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)))
                : (c <= 2739 || (c < 2768
                  ? (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))))
              : (c <= 2809 || (c < 2866
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))))))
            : (c <= 2929 || (c < 3024
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))))
              : (c <= 3024 || (c < 3133
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3077 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3133 || (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3169 || c == 3200))))))))
          : (c <= 3212 || (c < 3520
            ? (c < 3346
              ? (c < 3293
                ? (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)))
                : (c <= 3294 || (c < 3332
                  ? (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))))
              : (c <= 3386 || (c < 3450
                ? (c < 3412
                  ? (c < 3406
                    ? c == 3389
                    : c <= 3406)
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))
                : (c <= 3455 || (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || c == 3517))))))
            : (c <= 3526 || (c < 3762
              ? (c < 3716
                ? (c < 3648
                  ? (c < 3634
                    ? (c >= 3585 && c <= 3632)
                    : c <= 3634)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))))
              : (c <= 3762 || (c < 3840
                ? (c < 3782
                  ? (c < 3776
                    ? c == 3773
                    : c <= 3780)
                  : (c <= 3782 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3976
                  ? (c < 3913
                    ? (c >= 3904 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))))))))))))
      : (c <= 4159 || (c < 8126
        ? (c < 6103
          ? (c < 4792
            ? (c < 4304
              ? (c < 4213
                ? (c < 4193
                  ? (c < 4186
                    ? (c >= 4176 && c <= 4181)
                    : c <= 4189)
                  : (c <= 4193 || (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)))
                : (c <= 4225 || (c < 4295
                  ? (c < 4256
                    ? c == 4238
                    : c <= 4293)
                  : (c <= 4295 || c == 4301))))
              : (c <= 4346 || (c < 4698
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4752
                  ? (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))))
            : (c <= 4798 || (c < 5743
              ? (c < 4888
                ? (c < 4808
                  ? (c < 4802
                    ? c == 4800
                    : c <= 4805)
                  : (c <= 4822 || (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)))
                : (c <= 4954 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))))
              : (c <= 5759 || (c < 5919
                ? (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5969)
                    : c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))))))))
          : (c <= 6103 || (c < 7258
            ? (c < 6656
              ? (c < 6400
                ? (c < 6272
                  ? (c < 6176
                    ? c == 6108
                    : c <= 6264)
                  : (c <= 6312 || (c < 6320
                    ? c == 6314
                    : c <= 6389)))
                : (c <= 6430 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))
              : (c <= 6678 || (c < 7043
                ? (c < 6917
                  ? (c < 6823
                    ? (c >= 6688 && c <= 6740)
                    : c <= 6823)
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7168
                  ? (c < 7098
                    ? (c >= 7086 && c <= 7087)
                    : c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))))))
            : (c <= 7293 || (c < 7960
              ? (c < 7406
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7424
                  ? (c < 7418
                    ? (c >= 7413 && c <= 7414)
                    : c <= 7418)
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8027
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))))))))
        : (c <= 8126 || (c < 12293
          ? (c < 8517
            ? (c < 8450
              ? (c < 8178
                ? (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))
                : (c <= 8180 || (c < 8319
                  ? (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)
                  : (c <= 8319 || (c >= 8336 && c <= 8348)))))
              : (c <= 8450 || (c < 8484
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c >= 8472 && c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))
            : (c <= 8521 || (c < 11631
              ? (c < 11506
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))
              : (c <= 11631 || (c < 11704
                ? (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))))))
          : (c <= 12295 || (c < 42775
            ? (c < 12784
              ? (c < 12449
                ? (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12348 || (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)))
                : (c <= 12538 || (c < 12593
                  ? (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))))
              : (c <= 12799 || (c < 42512
                ? (c < 42192
                  ? (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42623
                  ? (c < 42560
                    ? (c >= 42538 && c <= 42539)
                    : c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))))))
            : (c <= 42783 || (c < 43072
              ? (c < 42965
                ? (c < 42960
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43015
                  ? (c < 43011
                    ? (c >= 42994 && c <= 43009)
                    : c <= 43013)
                  : (c <= 43018 || (c >= 43020 && c <= 43042)))))
              : (c <= 43123 || (c < 43274
                ? (c < 43259
                  ? (c < 43250
                    ? (c >= 43138 && c <= 43187)
                    : c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43396
                  ? (c < 43360
                    ? (c >= 43312 && c <= 43334)
                    : c <= 43388)
                  : (c <= 43442 || c == 43471))))))))))))))
    : (c <= 43492 || (c < 70656
      ? (c < 66940
        ? (c < 64848
          ? (c < 43816
            ? (c < 43705
              ? (c < 43616
                ? (c < 43520
                  ? (c < 43514
                    ? (c >= 43494 && c <= 43503)
                    : c <= 43518)
                  : (c <= 43560 || (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)))
                : (c <= 43638 || (c < 43697
                  ? (c < 43646
                    ? c == 43642
                    : c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))))
              : (c <= 43709 || (c < 43762
                ? (c < 43739
                  ? (c < 43714
                    ? c == 43712
                    : c <= 43714)
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43793
                  ? (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))))))
            : (c <= 43822 || (c < 64285
              ? (c < 55243
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44002 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))
                : (c <= 55291 || (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))
              : (c <= 64285 || (c < 64320
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64287 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64467
                  ? (c < 64326
                    ? (c >= 64323 && c <= 64324)
                    : c <= 64433)
                  : (c <= 64605 || (c >= 64612 && c <= 64829)))))))))
          : (c <= 64911 || (c < 65596
            ? (c < 65345
              ? (c < 65145
                ? (c < 65137
                  ? (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65017)
                  : (c <= 65137 || (c < 65143
                    ? c == 65139
                    : c <= 65143)))
                : (c <= 65145 || (c < 65151
                  ? (c < 65149
                    ? c == 65147
                    : c <= 65149)
                  : (c <= 65276 || (c >= 65313 && c <= 65338)))))
              : (c <= 65370 || (c < 65490
                ? (c < 65474
                  ? (c < 65440
                    ? (c >= 65382 && c <= 65437)
                    : c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c >= 65856 && c <= 65908)))
                : (c <= 66204 || (c < 66349
                  ? (c < 66304
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66335)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))))))))))
        : (c <= 66954 || (c < 68800
          ? (c < 67808
            ? (c < 67463
              ? (c < 67003
                ? (c < 66967
                  ? (c < 66964
                    ? (c >= 66956 && c <= 66962)
                    : c <= 66965)
                  : (c <= 66977 || (c < 66995
                    ? (c >= 66979 && c <= 66993)
                    : c <= 67001)))
                : (c <= 67004 || (c < 67424
                  ? (c < 67392
                    ? (c >= 67072 && c <= 67382)
                    : c <= 67413)
                  : (c <= 67431 || (c >= 67456 && c <= 67461)))))
              : (c <= 67504 || (c < 67639
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c >= 67712 && c <= 67742)))))))
            : (c <= 67826 || (c < 68192
              ? (c < 68030
                ? (c < 67872
                  ? (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68117
                  ? (c < 68112
                    ? c == 68096
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))
              : (c <= 68220 || (c < 68416
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c >= 68352 && c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))))))
          : (c <= 68850 || (c < 70081
            ? (c < 69745
              ? (c < 69424
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69445 || (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69505)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))))
              : (c <= 69746 || (c < 69956
                ? (c < 69840
                  ? (c < 69763
                    ? c == 69749
                    : c <= 69807)
                  : (c <= 69864 || (c >= 69891 && c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))))
            : (c <= 70084 || (c < 70320
              ? (c < 70272
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70278 || (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c >= 70303 && c <= 70312)))))
              : (c <= 70366 || (c < 70450
                ? (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c >= 70442 && c <= 70448)))
                : (c <= 70451 || (c < 70480
                  ? (c < 70461
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70461)
                  : (c <= 70480 || (c >= 70493 && c <= 70497)))))))))))))
      : (c <= 70708 || (c < 119894
        ? (c < 73056
          ? (c < 71999
            ? (c < 71352
              ? (c < 71040
                ? (c < 70784
                  ? (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70753)
                  : (c <= 70831 || (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)))
                : (c <= 71086 || (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))))
              : (c <= 71352 || (c < 71935
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71494)
                  : (c <= 71723 || (c >= 71840 && c <= 71903)))
                : (c <= 71942 || (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c >= 71960 && c <= 71983)))))))
            : (c <= 71999 || (c < 72349
              ? (c < 72192
                ? (c < 72106
                  ? (c < 72096
                    ? c == 72001
                    : c <= 72103)
                  : (c <= 72144 || (c < 72163
                    ? c == 72161
                    : c <= 72163)))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 43471
    ? (c < 4096
      ? (c < 2649
        ? (c < 1791
          ? (c < 891
            ? (c < 186
              ? (c < 'q'
                ? (c < 'e'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'e' || (c < 'j'
                    ? (c >= 'g' && c <= 'h')
                    : c <= 'n')))
                : (c <= 'q' || (c < 170
                  ? (c < 'x'
                    ? (c >= 's' && c <= 'v')
                    : c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 736
                ? (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))))))
            : (c <= 893 || (c < 1376
              ? (c < 931
                ? (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))
                : (c <= 1013 || (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))))
              : (c <= 1416 || (c < 1649
                ? (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))))))))
          : (c <= 1791 || (c < 2417
            ? (c < 2088
              ? (c < 2036
                ? (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || (c < 1994
                    ? c == 1969
                    : c <= 2026)))
                : (c <= 2037 || (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || c == 2084))))
              : (c <= 2088 || (c < 2208
                ? (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))))))
            : (c <= 2432 || (c < 2527
              ? (c < 2482
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))))
              : (c <= 2529 || (c < 2579
                ? (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))))))))
        : (c <= 2652 || (c < 3200
          ? (c < 2911
            ? (c < 2784
              ? (c < 2730
                ? (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)))
                : (c <= 2736 || (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || c == 2768))))
              : (c <= 2785 || (c < 2858
                ? (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))))))
            : (c <= 2913 || (c < 2990
              ? (c < 2969
                ? (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)))
                : (c <= 2970 || (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3114
                ? (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))))))))
          : (c <= 3200 || (c < 3517
            ? (c < 3342
              ? (c < 3261
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))
                : (c <= 3261 || (c < 3313
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3423
                ? (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))))))
            : (c <= 3517 || (c < 3751
              ? (c < 3713
                ? (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3760 || (c < 3804
                ? (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))))))))))))
      : (c <= 4138 || (c < 8118
        ? (c < 6016
          ? (c < 4786
            ? (c < 4301
              ? (c < 4206
                ? (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || (c < 4197
                    ? c == 4193
                    : c <= 4198)))
                : (c <= 4208 || (c < 4256
                  ? (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4696
                ? (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))))
            : (c <= 4789 || (c < 5121
              ? (c < 4882
                ? (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))
                : (c <= 4885 || (c < 5024
                  ? (c < 4992
                    ? (c >= 4888 && c <= 4954)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5740 || (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5905 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5937)
                    : c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))))))))
          : (c <= 6067 || (c < 7245
            ? (c < 6576
              ? (c < 6320
                ? (c < 6176
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6264 || (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)))
                : (c <= 6389 || (c < 6512
                  ? (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6981
                ? (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))))))
            : (c <= 7247 || (c < 7680
              ? (c < 7401
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))
              : (c <= 7957 || (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))))))
        : (c <= 8124 || (c < 11736
          ? (c < 8508
            ? (c < 8336
              ? (c < 8160
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)))
                : (c <= 8172 || (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || c == 8319))))
              : (c <= 8348 || (c < 8472
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))))))
            : (c <= 8511 || (c < 11568
              ? (c < 11499
                ? (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))
                : (c <= 11502 || (c < 11559
                  ? (c < 11520
                    ? (c >= 11506 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11696
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))))))
          : (c <= 11742 || (c < 42656
            ? (c < 12704
              ? (c < 12445
                ? (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))
              : (c <= 12735 || (c < 42240
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))))))
            : (c <= 42735 || (c < 43020
              ? (c < 42963
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 43011
                  ? (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))
              : (c <= 43042 || (c < 43261
                ? (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))))))))))))
    : (c <= 43471 || (c < 70656
      ? (c < 66928
        ? (c < 64612
          ? (c < 43808
            ? (c < 43701
              ? (c < 43588
                ? (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)))
                : (c <= 43595 || (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))))
              : (c <= 43702 || (c < 43744
                ? (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))
                : (c <= 43754 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))))))
            : (c <= 43814 || (c < 64275
              ? (c < 55216
                ? (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))))
              : (c <= 64279 || (c < 64318
                ? (c < 64298
                  ? (c < 64287
                    ? c == 64285
                    : c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64605)))))))))
          : (c <= 64829 || (c < 65576
            ? (c < 65313
              ? (c < 65143
                ? (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65139
                    ? c == 65137
                    : c <= 65139)))
                : (c <= 65143 || (c < 65149
                  ? (c < 65147
                    ? c == 65145
                    : c <= 65147)
                  : (c <= 65149 || (c >= 65151 && c <= 65276)))))
              : (c <= 65338 || (c < 65482
                ? (c < 65440
                  ? (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65437)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))))
            : (c <= 65594 || (c < 66384
              ? (c < 65856
                ? (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))
                : (c <= 65908 || (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))))
              : (c <= 66421 || (c < 66560
                ? (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))))))))
        : (c <= 66938 || (c < 68800
          ? (c < 67712
            ? (c < 67456
              ? (c < 66995
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)))
                : (c <= 67001 || (c < 67392
                  ? (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))
              : (c <= 67461 || (c < 67594
                ? (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))))
            : (c <= 67742 || (c < 68192
              ? (c < 68030
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)))
                : (c <= 68031 || (c < 68117
                  ? (c < 68112
                    ? c == 68096
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))
              : (c <= 68220 || (c < 68416
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c >= 68352 && c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))))))
          : (c <= 68850 || (c < 70081
            ? (c < 69745
              ? (c < 69424
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69445 || (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69505)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))))
              : (c <= 69746 || (c < 69956
                ? (c < 69840
                  ? (c < 69763
                    ? c == 69749
                    : c <= 69807)
                  : (c <= 69864 || (c >= 69891 && c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))))
            : (c <= 70084 || (c < 70320
              ? (c < 70272
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70278 || (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c >= 70303 && c <= 70312)))))
              : (c <= 70366 || (c < 70450
                ? (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c >= 70442 && c <= 70448)))
                : (c <= 70451 || (c < 70480
                  ? (c < 70461
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70461)
                  : (c <= 70480 || (c >= 70493 && c <= 70497)))))))))))))
      : (c <= 70708 || (c < 119894
        ? (c < 73056
          ? (c < 71999
            ? (c < 71352
              ? (c < 71040
                ? (c < 70784
                  ? (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70753)
                  : (c <= 70831 || (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)))
                : (c <= 71086 || (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))))
              : (c <= 71352 || (c < 71935
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71494)
                  : (c <= 71723 || (c >= 71840 && c <= 71903)))
                : (c <= 71942 || (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c >= 71960 && c <= 71983)))))))
            : (c <= 71999 || (c < 72349
              ? (c < 72192
                ? (c < 72106
                  ? (c < 72096
                    ? c == 72001
                    : c <= 72103)
                  : (c <= 72144 || (c < 72163
                    ? c == 72161
                    : c <= 72163)))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 43471
    ? (c < 4096
      ? (c < 2649
        ? (c < 1791
          ? (c < 891
            ? (c < 186
              ? (c < 'q'
                ? (c < 'e'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'e' || (c < 'j'
                    ? (c >= 'g' && c <= 'h')
                    : c <= 'o')))
                : (c <= 'q' || (c < 170
                  ? (c < 'x'
                    ? (c >= 's' && c <= 'v')
                    : c <= 'z')
                  : (c <= 170 || c == 181))))
              : (c <= 186 || (c < 736
                ? (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))))))
            : (c <= 893 || (c < 1376
              ? (c < 931
                ? (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || (c < 910
                    ? c == 908
                    : c <= 929)))
                : (c <= 1013 || (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))))
              : (c <= 1416 || (c < 1649
                ? (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))))))))
          : (c <= 1791 || (c < 2417
            ? (c < 2088
              ? (c < 2036
                ? (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || (c < 1994
                    ? c == 1969
                    : c <= 2026)))
                : (c <= 2037 || (c < 2074
                  ? (c < 2048
                    ? c == 2042
                    : c <= 2069)
                  : (c <= 2074 || c == 2084))))
              : (c <= 2088 || (c < 2208
                ? (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))
                : (c <= 2249 || (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))))))
            : (c <= 2432 || (c < 2527
              ? (c < 2482
                ? (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))))
              : (c <= 2529 || (c < 2579
                ? (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))))))))
        : (c <= 2652 || (c < 3200
          ? (c < 2911
            ? (c < 2784
              ? (c < 2730
                ? (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)))
                : (c <= 2736 || (c < 2749
                  ? (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)
                  : (c <= 2749 || c == 2768))))
              : (c <= 2785 || (c < 2858
                ? (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))))))
            : (c <= 2913 || (c < 2990
              ? (c < 2969
                ? (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)))
                : (c <= 2970 || (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))))
              : (c <= 3001 || (c < 3114
                ? (c < 3086
                  ? (c < 3077
                    ? c == 3024
                    : c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3165
                  ? (c < 3160
                    ? c == 3133
                    : c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))))))))
          : (c <= 3200 || (c < 3517
            ? (c < 3342
              ? (c < 3261
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))
                : (c <= 3261 || (c < 3313
                  ? (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3423
                ? (c < 3406
                  ? (c < 3389
                    ? (c >= 3346 && c <= 3386)
                    : c <= 3389)
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3482
                  ? (c < 3461
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))))))
            : (c <= 3517 || (c < 3751
              ? (c < 3713
                ? (c < 3634
                  ? (c < 3585
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3632)
                  : (c <= 3634 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3724
                  ? (c < 3718
                    ? c == 3716
                    : c <= 3722)
                  : (c <= 3747 || c == 3749))))
              : (c <= 3760 || (c < 3804
                ? (c < 3776
                  ? (c < 3773
                    ? c == 3762
                    : c <= 3773)
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3913
                  ? (c < 3904
                    ? c == 3840
                    : c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))))))))))))
      : (c <= 4138 || (c < 8118
        ? (c < 6016
          ? (c < 4786
            ? (c < 4301
              ? (c < 4206
                ? (c < 4186
                  ? (c < 4176
                    ? c == 4159
                    : c <= 4181)
                  : (c <= 4189 || (c < 4197
                    ? c == 4193
                    : c <= 4198)))
                : (c <= 4208 || (c < 4256
                  ? (c < 4238
                    ? (c >= 4213 && c <= 4225)
                    : c <= 4238)
                  : (c <= 4293 || c == 4295))))
              : (c <= 4301 || (c < 4696
                ? (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4746
                  ? (c < 4704
                    ? (c >= 4698 && c <= 4701)
                    : c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))))))
            : (c <= 4789 || (c < 5121
              ? (c < 4882
                ? (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))
                : (c <= 4885 || (c < 5024
                  ? (c < 4992
                    ? (c >= 4888 && c <= 4954)
                    : c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))))
              : (c <= 5740 || (c < 5888
                ? (c < 5792
                  ? (c < 5761
                    ? (c >= 5743 && c <= 5759)
                    : c <= 5786)
                  : (c <= 5866 || (c >= 5870 && c <= 5880)))
                : (c <= 5905 || (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5937)
                    : c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))))))))
          : (c <= 6067 || (c < 7245
            ? (c < 6576
              ? (c < 6320
                ? (c < 6176
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6108)
                  : (c <= 6264 || (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)))
                : (c <= 6389 || (c < 6512
                  ? (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)
                  : (c <= 6516 || (c >= 6528 && c <= 6571)))))
              : (c <= 6601 || (c < 6981
                ? (c < 6823
                  ? (c < 6688
                    ? (c >= 6656 && c <= 6678)
                    : c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7098
                  ? (c < 7086
                    ? (c >= 7043 && c <= 7072)
                    : c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))))))
            : (c <= 7247 || (c < 7680
              ? (c < 7401
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7258 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7418
                  ? (c < 7413
                    ? (c >= 7406 && c <= 7411)
                    : c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))))
              : (c <= 7957 || (c < 8025
                ? (c < 8008
                  ? (c < 7968
                    ? (c >= 7960 && c <= 7965)
                    : c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))))))))))
        : (c <= 8124 || (c < 11736
          ? (c < 8508
            ? (c < 8336
              ? (c < 8160
                ? (c < 8134
                  ? (c < 8130
                    ? c == 8126
                    : c <= 8132)
                  : (c <= 8140 || (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)))
                : (c <= 8172 || (c < 8305
                  ? (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)
                  : (c <= 8305 || c == 8319))))
              : (c <= 8348 || (c < 8472
                ? (c < 8458
                  ? (c < 8455
                    ? c == 8450
                    : c <= 8455)
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8488
                  ? (c < 8486
                    ? c == 8484
                    : c <= 8486)
                  : (c <= 8488 || (c >= 8490 && c <= 8505)))))))
            : (c <= 8511 || (c < 11568
              ? (c < 11499
                ? (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c >= 11264 && c <= 11492)))
                : (c <= 11502 || (c < 11559
                  ? (c < 11520
                    ? (c >= 11506 && c <= 11507)
                    : c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11696
                ? (c < 11680
                  ? (c < 11648
                    ? c == 11631
                    : c <= 11670)
                  : (c <= 11686 || (c >= 11688 && c <= 11694)))
                : (c <= 11702 || (c < 11720
                  ? (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))))))))
          : (c <= 11742 || (c < 42656
            ? (c < 12704
              ? (c < 12445
                ? (c < 12337
                  ? (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12329)
                  : (c <= 12341 || (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)))
                : (c <= 12447 || (c < 12549
                  ? (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))))
              : (c <= 12735 || (c < 42240
                ? (c < 19968
                  ? (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42560
                  ? (c < 42538
                    ? (c >= 42512 && c <= 42527)
                    : c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))))))
            : (c <= 42735 || (c < 43020
              ? (c < 42963
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 43011
                  ? (c < 42994
                    ? (c >= 42965 && c <= 42969)
                    : c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))))
              : (c <= 43042 || (c < 43261
                ? (c < 43250
                  ? (c < 43138
                    ? (c >= 43072 && c <= 43123)
                    : c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43360
                  ? (c < 43312
                    ? (c >= 43274 && c <= 43301)
                    : c <= 43334)
                  : (c <= 43388 || (c >= 43396 && c <= 43442)))))))))))))))
    : (c <= 43471 || (c < 70656
      ? (c < 66928
        ? (c < 64612
          ? (c < 43808
            ? (c < 43701
              ? (c < 43588
                ? (c < 43514
                  ? (c < 43494
                    ? (c >= 43488 && c <= 43492)
                    : c <= 43503)
                  : (c <= 43518 || (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)))
                : (c <= 43595 || (c < 43646
                  ? (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)
                  : (c <= 43695 || c == 43697))))
              : (c <= 43702 || (c < 43744
                ? (c < 43714
                  ? (c < 43712
                    ? (c >= 43705 && c <= 43709)
                    : c <= 43712)
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))
                : (c <= 43754 || (c < 43785
                  ? (c < 43777
                    ? (c >= 43762 && c <= 43764)
                    : c <= 43782)
                  : (c <= 43790 || (c >= 43793 && c <= 43798)))))))
            : (c <= 43814 || (c < 64275
              ? (c < 55216
                ? (c < 43868
                  ? (c < 43824
                    ? (c >= 43816 && c <= 43822)
                    : c <= 43866)
                  : (c <= 43881 || (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)))
                : (c <= 55238 || (c < 64112
                  ? (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)
                  : (c <= 64217 || (c >= 64256 && c <= 64262)))))
              : (c <= 64279 || (c < 64318
                ? (c < 64298
                  ? (c < 64287
                    ? c == 64285
                    : c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64605)))))))))
          : (c <= 64829 || (c < 65576
            ? (c < 65313
              ? (c < 65143
                ? (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65139
                    ? c == 65137
                    : c <= 65139)))
                : (c <= 65143 || (c < 65149
                  ? (c < 65147
                    ? c == 65145
                    : c <= 65147)
                  : (c <= 65149 || (c >= 65151 && c <= 65276)))))
              : (c <= 65338 || (c < 65482
                ? (c < 65440
                  ? (c < 65382
                    ? (c >= 65345 && c <= 65370)
                    : c <= 65437)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65536
                  ? (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))))
            : (c <= 65594 || (c < 66384
              ? (c < 65856
                ? (c < 65616
                  ? (c < 65599
                    ? (c >= 65596 && c <= 65597)
                    : c <= 65613)
                  : (c <= 65629 || (c >= 65664 && c <= 65786)))
                : (c <= 65908 || (c < 66304
                  ? (c < 66208
                    ? (c >= 66176 && c <= 66204)
                    : c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66378)))))
              : (c <= 66421 || (c < 66560
                ? (c < 66504
                  ? (c < 66464
                    ? (c >= 66432 && c <= 66461)
                    : c <= 66499)
                  : (c <= 66511 || (c >= 66513 && c <= 66517)))
                : (c <= 66717 || (c < 66816
                  ? (c < 66776
                    ? (c >= 66736 && c <= 66771)
                    : c <= 66811)
                  : (c <= 66855 || (c >= 66864 && c <= 66915)))))))))))
        : (c <= 66938 || (c < 68800
          ? (c < 67712
            ? (c < 67456
              ? (c < 66995
                ? (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)))
                : (c <= 67001 || (c < 67392
                  ? (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))))
              : (c <= 67461 || (c < 67594
                ? (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || c == 67592))
                : (c <= 67637 || (c < 67647
                  ? (c < 67644
                    ? (c >= 67639 && c <= 67640)
                    : c <= 67644)
                  : (c <= 67669 || (c >= 67680 && c <= 67702)))))))
            : (c <= 67742 || (c < 68192
              ? (c < 68030
                ? (c < 67840
                  ? (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)
                  : (c <= 67861 || (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)))
                : (c <= 68031 || (c < 68117
                  ? (c < 68112
                    ? c == 68096
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))
              : (c <= 68220 || (c < 68416
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c >= 68352 && c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))))))
          : (c <= 68850 || (c < 70081
            ? (c < 69745
              ? (c < 69424
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69445 || (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69505)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))))
              : (c <= 69746 || (c < 69956
                ? (c < 69840
                  ? (c < 69763
                    ? c == 69749
                    : c <= 69807)
                  : (c <= 69864 || (c >= 69891 && c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))))
            : (c <= 70084 || (c < 70320
              ? (c < 70272
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70278 || (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c >= 70303 && c <= 70312)))))
              : (c <= 70366 || (c < 70450
                ? (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c >= 70442 && c <= 70448)))
                : (c <= 70451 || (c < 70480
                  ? (c < 70461
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70461)
                  : (c <= 70480 || (c >= 70493 && c <= 70497)))))))))))))
      : (c <= 70708 || (c < 119894
        ? (c < 73056
          ? (c < 71999
            ? (c < 71352
              ? (c < 71040
                ? (c < 70784
                  ? (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70753)
                  : (c <= 70831 || (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)))
                : (c <= 71086 || (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))))
              : (c <= 71352 || (c < 71935
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71494)
                  : (c <= 71723 || (c >= 71840 && c <= 71903)))
                : (c <= 71942 || (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c >= 71960 && c <= 71983)))))))
            : (c <= 71999 || (c < 72349
              ? (c < 72192
                ? (c < 72106
                  ? (c < 72096
                    ? c == 72001
                    : c <= 72103)
                  : (c <= 72144 || (c < 72163
                    ? c == 72161
                    : c <= 72163)))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_10(int32_t c) {
  return (c < 43488
    ? (c < 4159
      ? (c < 2654
        ? (c < 1808
          ? (c < 895
            ? (c < 192
              ? (c < 's'
                ? (c < 'g'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'h' || (c < 'q'
                    ? (c >= 'j' && c <= 'o')
                    : c <= 'q')))
                : (c <= 'v' || (c < 181
                  ? (c < 170
                    ? (c >= 'x' && c <= 'z')
                    : c <= 170)
                  : (c <= 181 || c == 186))))
              : (c <= 214 || (c < 748
                ? (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))))))
            : (c <= 895 || (c < 1488
              ? (c < 1015
                ? (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))
                : (c <= 1153 || (c < 1369
                  ? (c < 1329
                    ? (c >= 1162 && c <= 1327)
                    : c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))))
              : (c <= 1514 || (c < 1749
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1610)
                  : (c <= 1647 || (c >= 1649 && c <= 1747)))
                : (c <= 1749 || (c < 1786
                  ? (c < 1774
                    ? (c >= 1765 && c <= 1766)
                    : c <= 1775)
                  : (c <= 1788 || c == 1791))))))))
          : (c <= 1808 || (c < 2437
            ? (c < 2112
              ? (c < 2042
                ? (c < 1969
                  ? (c < 1869
                    ? (c >= 1810 && c <= 1839)
                    : c <= 1957)
                  : (c <= 1969 || (c < 2036
                    ? (c >= 1994 && c <= 2026)
                    : c <= 2037)))
                : (c <= 2042 || (c < 2084
                  ? (c < 2074
                    ? (c >= 2048 && c <= 2069)
                    : c <= 2074)
                  : (c <= 2084 || c == 2088))))
              : (c <= 2136 || (c < 2308
                ? (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))
                : (c <= 2361 || (c < 2392
                  ? (c < 2384
                    ? c == 2365
                    : c <= 2384)
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))))))
            : (c <= 2444 || (c < 2544
              ? (c < 2486
                ? (c < 2474
                  ? (c < 2451
                    ? (c >= 2447 && c <= 2448)
                    : c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2524
                  ? (c < 2510
                    ? c == 2493
                    : c <= 2510)
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))))
              : (c <= 2545 || (c < 2602
                ? (c < 2575
                  ? (c < 2565
                    ? c == 2556
                    : c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2616
                  ? (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))))))))))
        : (c <= 2654 || (c < 3205
          ? (c < 2929
            ? (c < 2809
              ? (c < 2738
                ? (c < 2703
                  ? (c < 2693
                    ? (c >= 2674 && c <= 2676)
                    : c <= 2701)
                  : (c <= 2705 || (c < 2730
                    ? (c >= 2707 && c <= 2728)
                    : c <= 2736)))
                : (c <= 2739 || (c < 2768
                  ? (c < 2749
                    ? (c >= 2741 && c <= 2745)
                    : c <= 2749)
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))))
              : (c <= 2809 || (c < 2866
                ? (c < 2835
                  ? (c < 2831
                    ? (c >= 2821 && c <= 2828)
                    : c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2908
                  ? (c < 2877
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2877)
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))))))
            : (c <= 2929 || (c < 3024
              ? (c < 2972
                ? (c < 2958
                  ? (c < 2949
                    ? c == 2947
                    : c <= 2954)
                  : (c <= 2960 || (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)))
                : (c <= 2972 || (c < 2984
                  ? (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))))
              : (c <= 3024 || (c < 3133
                ? (c < 3090
                  ? (c < 3086
                    ? (c >= 3077 && c <= 3084)
                    : c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3133 || (c < 3168
                  ? (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)
                  : (c <= 3169 || c == 3200))))))))
          : (c <= 3212 || (c < 3520
            ? (c < 3346
              ? (c < 3293
                ? (c < 3242
                  ? (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)
                  : (c <= 3251 || (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)))
                : (c <= 3294 || (c < 3332
                  ? (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))))
              : (c <= 3386 || (c < 3450
                ? (c < 3412
                  ? (c < 3406
                    ? c == 3389
                    : c <= 3406)
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))
                : (c <= 3455 || (c < 3507
                  ? (c < 3482
                    ? (c >= 3461 && c <= 3478)
                    : c <= 3505)
                  : (c <= 3515 || c == 3517))))))
            : (c <= 3526 || (c < 3762
              ? (c < 3716
                ? (c < 3648
                  ? (c < 3634
                    ? (c >= 3585 && c <= 3632)
                    : c <= 3634)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3749
                  ? (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))))
              : (c <= 3762 || (c < 3840
                ? (c < 3782
                  ? (c < 3776
                    ? c == 3773
                    : c <= 3780)
                  : (c <= 3782 || (c >= 3804 && c <= 3807)))
                : (c <= 3840 || (c < 3976
                  ? (c < 3913
                    ? (c >= 3904 && c <= 3911)
                    : c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))))))))))))
      : (c <= 4159 || (c < 8126
        ? (c < 6103
          ? (c < 4792
            ? (c < 4304
              ? (c < 4213
                ? (c < 4193
                  ? (c < 4186
                    ? (c >= 4176 && c <= 4181)
                    : c <= 4189)
                  : (c <= 4193 || (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)))
                : (c <= 4225 || (c < 4295
                  ? (c < 4256
                    ? c == 4238
                    : c <= 4293)
                  : (c <= 4295 || c == 4301))))
              : (c <= 4346 || (c < 4698
                ? (c < 4688
                  ? (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4752
                  ? (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))))))
            : (c <= 4798 || (c < 5743
              ? (c < 4888
                ? (c < 4808
                  ? (c < 4802
                    ? c == 4800
                    : c <= 4805)
                  : (c <= 4822 || (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)))
                : (c <= 4954 || (c < 5112
                  ? (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))))
              : (c <= 5759 || (c < 5919
                ? (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
                : (c <= 5937 || (c < 5998
                  ? (c < 5984
                    ? (c >= 5952 && c <= 5969)
                    : c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))))))))
          : (c <= 6103 || (c < 7258
            ? (c < 6656
              ? (c < 6400
                ? (c < 6272
                  ? (c < 6176
                    ? c == 6108
                    : c <= 6264)
                  : (c <= 6312 || (c < 6320
                    ? c == 6314
                    : c <= 6389)))
                : (c <= 6430 || (c < 6528
                  ? (c < 6512
                    ? (c >= 6480 && c <= 6509)
                    : c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))))
              : (c <= 6678 || (c < 7043
                ? (c < 6917
                  ? (c < 6823
                    ? (c >= 6688 && c <= 6740)
                    : c <= 6823)
                  : (c <= 6963 || (c >= 6981 && c <= 6988)))
                : (c <= 7072 || (c < 7168
                  ? (c < 7098
                    ? (c >= 7086 && c <= 7087)
                    : c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))))))
            : (c <= 7293 || (c < 7960
              ? (c < 7406
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7296 && c <= 7304)
                    : c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7424
                  ? (c < 7418
                    ? (c >= 7413 && c <= 7414)
                    : c <= 7418)
                  : (c <= 7615 || (c >= 7680 && c <= 7957)))))
              : (c <= 7965 || (c < 8027
                ? (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))))))))))
        : (c <= 8126 || (c < 12293
          ? (c < 8517
            ? (c < 8450
              ? (c < 8178
                ? (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))
                : (c <= 8180 || (c < 8319
                  ? (c < 8305
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8305)
                  : (c <= 8319 || (c >= 8336 && c <= 8348)))))
              : (c <= 8450 || (c < 8484
                ? (c < 8469
                  ? (c < 8458
                    ? c == 8455
                    : c <= 8467)
                  : (c <= 8469 || (c >= 8472 && c <= 8477)))
                : (c <= 8484 || (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8505 || (c >= 8508 && c <= 8511)))))))
            : (c <= 8521 || (c < 11631
              ? (c < 11506
                ? (c < 11264
                  ? (c < 8544
                    ? c == 8526
                    : c <= 8584)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))))
              : (c <= 11631 || (c < 11704
                ? (c < 11688
                  ? (c < 11680
                    ? (c >= 11648 && c <= 11670)
                    : c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11728
                  ? (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))))))))
          : (c <= 12295 || (c < 42775
            ? (c < 12784
              ? (c < 12449
                ? (c < 12344
                  ? (c < 12337
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12341)
                  : (c <= 12348 || (c < 12445
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12447)))
                : (c <= 12538 || (c < 12593
                  ? (c < 12549
                    ? (c >= 12540 && c <= 12543)
                    : c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))))
              : (c <= 12799 || (c < 42512
                ? (c < 42192
                  ? (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42623
                  ? (c < 42560
                    ? (c >= 42538 && c <= 42539)
                    : c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42735)))))))
            : (c <= 42783 || (c < 43072
              ? (c < 42965
                ? (c < 42960
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)
                  : (c <= 42961 || c == 42963))
                : (c <= 42969 || (c < 43015
                  ? (c < 43011
                    ? (c >= 42994 && c <= 43009)
                    : c <= 43013)
                  : (c <= 43018 || (c >= 43020 && c <= 43042)))))
              : (c <= 43123 || (c < 43274
                ? (c < 43259
                  ? (c < 43250
                    ? (c >= 43138 && c <= 43187)
                    : c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43396
                  ? (c < 43360
                    ? (c >= 43312 && c <= 43334)
                    : c <= 43388)
                  : (c <= 43442 || c == 43471))))))))))))))
    : (c <= 43492 || (c < 70656
      ? (c < 66940
        ? (c < 64848
          ? (c < 43816
            ? (c < 43705
              ? (c < 43616
                ? (c < 43520
                  ? (c < 43514
                    ? (c >= 43494 && c <= 43503)
                    : c <= 43518)
                  : (c <= 43560 || (c < 43588
                    ? (c >= 43584 && c <= 43586)
                    : c <= 43595)))
                : (c <= 43638 || (c < 43697
                  ? (c < 43646
                    ? c == 43642
                    : c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))))
              : (c <= 43709 || (c < 43762
                ? (c < 43739
                  ? (c < 43714
                    ? c == 43712
                    : c <= 43714)
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43793
                  ? (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)
                  : (c <= 43798 || (c >= 43808 && c <= 43814)))))))
            : (c <= 43822 || (c < 64285
              ? (c < 55243
                ? (c < 43888
                  ? (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)
                  : (c <= 44002 || (c < 55216
                    ? (c >= 44032 && c <= 55203)
                    : c <= 55238)))
                : (c <= 55291 || (c < 64256
                  ? (c < 64112
                    ? (c >= 63744 && c <= 64109)
                    : c <= 64217)
                  : (c <= 64262 || (c >= 64275 && c <= 64279)))))
              : (c <= 64285 || (c < 64320
                ? (c < 64312
                  ? (c < 64298
                    ? (c >= 64287 && c <= 64296)
                    : c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64467
                  ? (c < 64326
                    ? (c >= 64323 && c <= 64324)
                    : c <= 64433)
                  : (c <= 64605 || (c >= 64612 && c <= 64829)))))))))
          : (c <= 64911 || (c < 65596
            ? (c < 65345
              ? (c < 65145
                ? (c < 65137
                  ? (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65017)
                  : (c <= 65137 || (c < 65143
                    ? c == 65139
                    : c <= 65143)))
                : (c <= 65145 || (c < 65151
                  ? (c < 65149
                    ? c == 65147
                    : c <= 65149)
                  : (c <= 65276 || (c >= 65313 && c <= 65338)))))
              : (c <= 65370 || (c < 65490
                ? (c < 65474
                  ? (c < 65440
                    ? (c >= 65382 && c <= 65437)
                    : c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65549
                  ? (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))))))
            : (c <= 65597 || (c < 66432
              ? (c < 66176
                ? (c < 65664
                  ? (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)
                  : (c <= 65786 || (c >= 65856 && c <= 65908)))
                : (c <= 66204 || (c < 66349
                  ? (c < 66304
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66335)
                  : (c <= 66378 || (c >= 66384 && c <= 66421)))))
              : (c <= 66461 || (c < 66736
                ? (c < 66513
                  ? (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66771 || (c < 66864
                  ? (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)
                  : (c <= 66915 || (c >= 66928 && c <= 66938)))))))))))
        : (c <= 66954 || (c < 68800
          ? (c < 67808
            ? (c < 67463
              ? (c < 67003
                ? (c < 66967
                  ? (c < 66964
                    ? (c >= 66956 && c <= 66962)
                    : c <= 66965)
                  : (c <= 66977 || (c < 66995
                    ? (c >= 66979 && c <= 66993)
                    : c <= 67001)))
                : (c <= 67004 || (c < 67424
                  ? (c < 67392
                    ? (c >= 67072 && c <= 67382)
                    : c <= 67413)
                  : (c <= 67431 || (c >= 67456 && c <= 67461)))))
              : (c <= 67504 || (c < 67639
                ? (c < 67592
                  ? (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c >= 67712 && c <= 67742)))))))
            : (c <= 67826 || (c < 68192
              ? (c < 68030
                ? (c < 67872
                  ? (c < 67840
                    ? (c >= 67828 && c <= 67829)
                    : c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68117
                  ? (c < 68112
                    ? c == 68096
                    : c <= 68115)
                  : (c <= 68119 || (c >= 68121 && c <= 68149)))))
              : (c <= 68220 || (c < 68416
                ? (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68324 || (c >= 68352 && c <= 68405)))
                : (c <= 68437 || (c < 68608
                  ? (c < 68480
                    ? (c >= 68448 && c <= 68466)
                    : c <= 68497)
                  : (c <= 68680 || (c >= 68736 && c <= 68786)))))))))
          : (c <= 68850 || (c < 70081
            ? (c < 69745
              ? (c < 69424
                ? (c < 69296
                  ? (c < 69248
                    ? (c >= 68864 && c <= 68899)
                    : c <= 69289)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))
                : (c <= 69445 || (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69505)
                    : c <= 69572)
                  : (c <= 69622 || (c >= 69635 && c <= 69687)))))
              : (c <= 69746 || (c < 69956
                ? (c < 69840
                  ? (c < 69763
                    ? c == 69749
                    : c <= 69807)
                  : (c <= 69864 || (c >= 69891 && c <= 69926)))
                : (c <= 69956 || (c < 70006
                  ? (c < 69968
                    ? c == 69959
                    : c <= 70002)
                  : (c <= 70006 || (c >= 70019 && c <= 70066)))))))
            : (c <= 70084 || (c < 70320
              ? (c < 70272
                ? (c < 70144
                  ? (c < 70108
                    ? c == 70106
                    : c <= 70108)
                  : (c <= 70161 || (c >= 70163 && c <= 70187)))
                : (c <= 70278 || (c < 70287
                  ? (c < 70282
                    ? c == 70280
                    : c <= 70285)
                  : (c <= 70301 || (c >= 70303 && c <= 70312)))))
              : (c <= 70366 || (c < 70450
                ? (c < 70419
                  ? (c < 70415
                    ? (c >= 70405 && c <= 70412)
                    : c <= 70416)
                  : (c <= 70440 || (c >= 70442 && c <= 70448)))
                : (c <= 70451 || (c < 70480
                  ? (c < 70461
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70461)
                  : (c <= 70480 || (c >= 70493 && c <= 70497)))))))))))))
      : (c <= 70708 || (c < 119894
        ? (c < 73056
          ? (c < 71999
            ? (c < 71352
              ? (c < 71040
                ? (c < 70784
                  ? (c < 70751
                    ? (c >= 70727 && c <= 70730)
                    : c <= 70753)
                  : (c <= 70831 || (c < 70855
                    ? (c >= 70852 && c <= 70853)
                    : c <= 70855)))
                : (c <= 71086 || (c < 71236
                  ? (c < 71168
                    ? (c >= 71128 && c <= 71131)
                    : c <= 71215)
                  : (c <= 71236 || (c >= 71296 && c <= 71338)))))
              : (c <= 71352 || (c < 71935
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71424 && c <= 71450)
                    : c <= 71494)
                  : (c <= 71723 || (c >= 71840 && c <= 71903)))
                : (c <= 71942 || (c < 71957
                  ? (c < 71948
                    ? c == 71945
                    : c <= 71955)
                  : (c <= 71958 || (c >= 71960 && c <= 71983)))))))
            : (c <= 71999 || (c < 72349
              ? (c < 72192
                ? (c < 72106
                  ? (c < 72096
                    ? c == 72001
                    : c <= 72103)
                  : (c <= 72144 || (c < 72163
                    ? c == 72161
                    : c <= 72163)))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_11(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_identifier_character_set_12(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(43);
      if (lookahead == '!') ADVANCE(72);
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '&') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '*') ADVANCE(85);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == ',') ADVANCE(67);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(66);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '?') ADVANCE(54);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'T') ADVANCE(175);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(70);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(203);
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'f') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 'p') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == 'w') ADVANCE(149);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '!') ADVANCE(71);
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '&') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'T') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '?') ADVANCE(54);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(71);
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '&') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'T') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == ']') ADVANCE(70);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(203);
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(71);
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '&') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(114);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '+') ADVANCE(16);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == 'F') ADVANCE(124);
      if (lookahead == 'T') ADVANCE(175);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(203);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == 't') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == ',') ADVANCE(67);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == ':') ADVANCE(55);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '?') ADVANCE(54);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == ']') ADVANCE(70);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(207);
      if (lookahead == 'o') ADVANCE(25);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == ',') ADVANCE(67);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '?') ADVANCE(54);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(203);
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(103);
      END_STATE();
    case 11:
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '>') ADVANCE(90);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(203);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == '+') ADVANCE(75);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(76);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 19:
      if (lookahead == 'U') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 20:
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(203);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(166);
      if (lookahead == 'p') ADVANCE(177);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(203);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(159);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(203);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(158);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'p') ADVANCE(194);
      if (lookahead == 'r') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(101);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(23);
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 26:
      if (lookahead == '|') ADVANCE(106);
      END_STATE();
    case 27:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 38:
      if (eof) ADVANCE(43);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '.') ADVANCE(80);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '?') ADVANCE(54);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(203);
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 'w') ADVANCE(149);
      if (lookahead == '|') ADVANCE(26);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      END_STATE();
    case 39:
      if (eof) ADVANCE(43);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(203);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(208);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 'w') ADVANCE(149);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      END_STATE();
    case 40:
      if (eof) ADVANCE(43);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '+') ADVANCE(88);
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead == '<') ADVANCE(109);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(203);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 'w') ADVANCE(149);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(40)
      END_STATE();
    case 41:
      if (eof) ADVANCE(43);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '>') ADVANCE(90);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(203);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'f') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 'w') ADVANCE(149);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(41)
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(203);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'b') ADVANCE(173);
      if (lookahead == 'c') ADVANCE(147);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead == 'f') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead == 'p') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(132);
      if (lookahead == 'w') ADVANCE(149);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__singleComment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__singleComment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__multiLineComment_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym__multiLineComment_token1);
      if (lookahead == '"') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__multiLineComment_token1);
      if (lookahead == '*') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__multiLineComment_token1);
      if (lookahead == '/') ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__multiLineComment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_for);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_auto);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(107);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(108);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_public_COLON);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_private_COLON);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_init);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(53);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(47);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_ptr_LT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(111);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_ref_LT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_float);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_double);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_pure);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_func);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<') ADVANCE(89);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(187);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(203);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(192);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(203);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(196);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(203);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(180);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(203);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(162);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(203);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'l') ADVANCE(174);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(203);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(163);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(203);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(135);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'b') ADVANCE(161);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'c') ADVANCE(99);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'c') ADVANCE(116);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(102);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(145);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(210);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(100);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(98);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(209);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(212);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(60);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(95);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(146);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(211);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(117);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(151);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(190);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(119);
      if (lookahead == 't') ADVANCE(201);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(119);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'h') ADVANCE(123);
      if (lookahead == 'l') ADVANCE(120);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'h') ADVANCE(123);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'h') ADVANCE(153);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(202);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 't') ADVANCE(93);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(130);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(160);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(186);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(96);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(152);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == 'u') ADVANCE(167);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(167);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(174);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(138);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(139);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(188);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(189);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(195);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == 's') ADVANCE(83);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(151);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(129);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(112);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(190);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(64);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(155);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(198);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(171);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(121);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(199);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(105);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(127);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(56);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(118);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(97);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(168);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(135);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(200);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 's') ADVANCE(83);
      if (lookahead == 'u') ADVANCE(195);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 's') ADVANCE(81);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 's') ADVANCE(134);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 's') ADVANCE(185);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 's') ADVANCE(137);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 's') ADVANCE(141);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 't') ADVANCE(93);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 't') ADVANCE(79);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 't') ADVANCE(94);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 't') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(182);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 't') ADVANCE(179);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 't') ADVANCE(170);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 't') ADVANCE(142);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(195);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(128);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(133);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(136);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(181);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'v') ADVANCE(122);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead == 'u') ADVANCE(167);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_True);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_False);
      if (lookahead == '\\') ADVANCE(19);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(203);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 38},
  [5] = {.lex_state = 38},
  [6] = {.lex_state = 38},
  [7] = {.lex_state = 38},
  [8] = {.lex_state = 38},
  [9] = {.lex_state = 41},
  [10] = {.lex_state = 41},
  [11] = {.lex_state = 41},
  [12] = {.lex_state = 41},
  [13] = {.lex_state = 41},
  [14] = {.lex_state = 41},
  [15] = {.lex_state = 41},
  [16] = {.lex_state = 41},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 39},
  [19] = {.lex_state = 40},
  [20] = {.lex_state = 40},
  [21] = {.lex_state = 40},
  [22] = {.lex_state = 40},
  [23] = {.lex_state = 40},
  [24] = {.lex_state = 40},
  [25] = {.lex_state = 40},
  [26] = {.lex_state = 40},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 40},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 40},
  [31] = {.lex_state = 40},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 40},
  [34] = {.lex_state = 40},
  [35] = {.lex_state = 40},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 40},
  [39] = {.lex_state = 40},
  [40] = {.lex_state = 40},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 40},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 40},
  [45] = {.lex_state = 40},
  [46] = {.lex_state = 40},
  [47] = {.lex_state = 40},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 40},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 40},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 40},
  [58] = {.lex_state = 40},
  [59] = {.lex_state = 40},
  [60] = {.lex_state = 40},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 42},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 9},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 42},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 42},
  [138] = {.lex_state = 20},
  [139] = {.lex_state = 20},
  [140] = {.lex_state = 20},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 41},
  [144] = {.lex_state = 41},
  [145] = {.lex_state = 41},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 8},
  [148] = {.lex_state = 41},
  [149] = {.lex_state = 41},
  [150] = {.lex_state = 41},
  [151] = {.lex_state = 41},
  [152] = {.lex_state = 41},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 41},
  [155] = {.lex_state = 41},
  [156] = {.lex_state = 8},
  [157] = {.lex_state = 41},
  [158] = {.lex_state = 41},
  [159] = {.lex_state = 41},
  [160] = {.lex_state = 41},
  [161] = {.lex_state = 41},
  [162] = {.lex_state = 41},
  [163] = {.lex_state = 41},
  [164] = {.lex_state = 41},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 41},
  [167] = {.lex_state = 41},
  [168] = {.lex_state = 8},
  [169] = {.lex_state = 41},
  [170] = {.lex_state = 8},
  [171] = {.lex_state = 8},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 8},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 20},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 20},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 20},
  [188] = {.lex_state = 20},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 20},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 20},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 20},
  [199] = {.lex_state = 20},
  [200] = {.lex_state = 20},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 8},
  [203] = {.lex_state = 8},
  [204] = {.lex_state = 20},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 8},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 8},
  [219] = {.lex_state = 2},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 8},
  [223] = {.lex_state = 8},
  [224] = {.lex_state = 2},
  [225] = {.lex_state = 2},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 2},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 8},
  [230] = {.lex_state = 2},
  [231] = {.lex_state = 8},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 2},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 8},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 2},
  [239] = {.lex_state = 8},
  [240] = {.lex_state = 8},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 8},
  [244] = {.lex_state = 8},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 6},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 8},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 8},
  [253] = {.lex_state = 8},
  [254] = {.lex_state = 8},
  [255] = {.lex_state = 6},
  [256] = {.lex_state = 6},
  [257] = {.lex_state = 8},
  [258] = {.lex_state = 6},
  [259] = {.lex_state = 21},
  [260] = {.lex_state = 12},
  [261] = {.lex_state = 22},
  [262] = {.lex_state = 12},
  [263] = {.lex_state = 22},
  [264] = {.lex_state = 12},
  [265] = {.lex_state = 12},
  [266] = {.lex_state = 12},
  [267] = {.lex_state = 8},
  [268] = {.lex_state = 8},
  [269] = {.lex_state = 12},
  [270] = {.lex_state = 12},
  [271] = {.lex_state = 12},
  [272] = {.lex_state = 12},
  [273] = {.lex_state = 6},
  [274] = {.lex_state = 8},
  [275] = {.lex_state = 6},
  [276] = {.lex_state = 6},
  [277] = {.lex_state = 8},
  [278] = {.lex_state = 8},
  [279] = {.lex_state = 8},
  [280] = {.lex_state = 8},
  [281] = {.lex_state = 11},
  [282] = {.lex_state = 8},
  [283] = {.lex_state = 8},
  [284] = {.lex_state = 8},
  [285] = {.lex_state = 8},
  [286] = {.lex_state = 8},
  [287] = {.lex_state = 8},
  [288] = {.lex_state = 8},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 41},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 3},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 1},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 3},
  [305] = {.lex_state = 4},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 1},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 3},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 1},
  [313] = {.lex_state = 1},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 4},
  [316] = {.lex_state = 4},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 41},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 3},
  [321] = {.lex_state = 1},
  [322] = {.lex_state = 3},
  [323] = {.lex_state = 41},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 3},
  [327] = {.lex_state = 1},
  [328] = {.lex_state = 41},
  [329] = {.lex_state = 3},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 1},
  [333] = {.lex_state = 41},
  [334] = {.lex_state = 1},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 41},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 41},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 11},
  [346] = {.lex_state = 1},
  [347] = {.lex_state = 11},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 1},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 1},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 41},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 11},
  [364] = {.lex_state = 1},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 11},
  [367] = {.lex_state = 41},
  [368] = {.lex_state = 11},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 11},
  [373] = {.lex_state = 41},
  [374] = {.lex_state = 11},
  [375] = {.lex_state = 45},
  [376] = {.lex_state = 41},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 5},
  [379] = {.lex_state = 11},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 11},
  [383] = {.lex_state = 5},
  [384] = {.lex_state = 11},
  [385] = {.lex_state = 11},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 41},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 11},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 11},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 11},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 11},
  [398] = {.lex_state = 5},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 11},
  [402] = {.lex_state = 11},
  [403] = {.lex_state = 11},
  [404] = {.lex_state = 11},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 11},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 11},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_auto] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_public_COLON] = ACTIONS(1),
    [anon_sym_private_COLON] = ACTIONS(1),
    [anon_sym_init] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_ptr_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_ref_LT] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_pure] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_f] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(396),
    [sym__statement] = STATE(15),
    [sym__singleComment] = STATE(15),
    [sym__multiLineComment] = STATE(15),
    [sym_for] = STATE(15),
    [sym_while] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_var_declaration] = STATE(15),
    [sym_assignment] = STATE(302),
    [sym_classAssign] = STATE(15),
    [sym_classDecl] = STATE(15),
    [sym_primitive_type] = STATE(392),
    [sym_function_declare] = STATE(15),
    [sym_func_call] = STATE(302),
    [sym_return_statement] = STATE(15),
    [aux_sym_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SLASH_SLASH] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [anon_sym_for] = ACTIONS(9),
    [anon_sym_while] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_auto] = ACTIONS(15),
    [anon_sym_class] = ACTIONS(17),
    [anon_sym_ptr_LT] = ACTIONS(19),
    [anon_sym_ref_LT] = ACTIONS(19),
    [anon_sym_int] = ACTIONS(21),
    [anon_sym_float] = ACTIONS(21),
    [anon_sym_double] = ACTIONS(21),
    [anon_sym_bool] = ACTIONS(21),
    [anon_sym_char] = ACTIONS(21),
    [anon_sym_pure] = ACTIONS(23),
    [anon_sym_func] = ACTIONS(25),
    [anon_sym_return] = ACTIONS(27),
    [sym_identifier] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(170), 1,
      sym_bool,
    STATE(202), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    STATE(339), 1,
      sym_parameter,
    STATE(390), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 5,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [85] = 22,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(170), 1,
      sym_bool,
    STATE(195), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    STATE(339), 1,
      sym_parameter,
    STATE(390), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    ACTIONS(21), 5,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [170] = 7,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      anon_sym_DOT,
    ACTIONS(67), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(57), 3,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(55), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(59), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [224] = 2,
    ACTIONS(69), 16,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(71), 20,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [265] = 2,
    ACTIONS(73), 16,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(75), 20,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [306] = 2,
    ACTIONS(77), 16,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_QMARK,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(79), 20,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_and,
      anon_sym_or,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [347] = 4,
    ACTIONS(67), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(57), 3,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(55), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(59), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [392] = 17,
    ACTIONS(83), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(86), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(89), 1,
      anon_sym_for,
    ACTIONS(92), 1,
      anon_sym_while,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(98), 1,
      anon_sym_auto,
    ACTIONS(101), 1,
      anon_sym_class,
    ACTIONS(110), 1,
      anon_sym_pure,
    ACTIONS(113), 1,
      anon_sym_func,
    ACTIONS(116), 1,
      anon_sym_return,
    ACTIONS(119), 1,
      sym_identifier,
    STATE(392), 1,
      sym_primitive_type,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(104), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    STATE(302), 2,
      sym_assignment,
      sym_func_call,
    ACTIONS(107), 5,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
    STATE(9), 12,
      sym__statement,
      sym__singleComment,
      sym__multiLineComment,
      sym_for,
      sym_while,
      sym_if_statement,
      sym_var_declaration,
      sym_classAssign,
      sym_classDecl,
      sym_function_declare,
      sym_return_statement,
      aux_sym_file_repeat1,
  [462] = 17,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_for,
    ACTIONS(11), 1,
      anon_sym_while,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_auto,
    ACTIONS(17), 1,
      anon_sym_class,
    ACTIONS(23), 1,
      anon_sym_pure,
    ACTIONS(25), 1,
      anon_sym_func,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    STATE(392), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    STATE(302), 2,
      sym_assignment,
      sym_func_call,
    ACTIONS(21), 5,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
    STATE(16), 12,
      sym__statement,
      sym__singleComment,
      sym__multiLineComment,
      sym_for,
      sym_while,
      sym_if_statement,
      sym_var_declaration,
      sym_classAssign,
      sym_classDecl,
      sym_function_declare,
      sym_return_statement,
      aux_sym_file_repeat1,
  [531] = 17,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_for,
    ACTIONS(11), 1,
      anon_sym_while,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_auto,
    ACTIONS(17), 1,
      anon_sym_class,
    ACTIONS(23), 1,
      anon_sym_pure,
    ACTIONS(25), 1,
      anon_sym_func,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    STATE(392), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    STATE(302), 2,
      sym_assignment,
      sym_func_call,
    ACTIONS(21), 5,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
    STATE(9), 12,
      sym__statement,
      sym__singleComment,
      sym__multiLineComment,
      sym_for,
      sym_while,
      sym_if_statement,
      sym_var_declaration,
      sym_classAssign,
      sym_classDecl,
      sym_function_declare,
      sym_return_statement,
      aux_sym_file_repeat1,
  [600] = 17,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_for,
    ACTIONS(11), 1,
      anon_sym_while,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_auto,
    ACTIONS(17), 1,
      anon_sym_class,
    ACTIONS(23), 1,
      anon_sym_pure,
    ACTIONS(25), 1,
      anon_sym_func,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
    STATE(392), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    STATE(302), 2,
      sym_assignment,
      sym_func_call,
    ACTIONS(21), 5,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
    STATE(13), 12,
      sym__statement,
      sym__singleComment,
      sym__multiLineComment,
      sym_for,
      sym_while,
      sym_if_statement,
      sym_var_declaration,
      sym_classAssign,
      sym_classDecl,
      sym_function_declare,
      sym_return_statement,
      aux_sym_file_repeat1,
  [669] = 17,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_for,
    ACTIONS(11), 1,
      anon_sym_while,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_auto,
    ACTIONS(17), 1,
      anon_sym_class,
    ACTIONS(23), 1,
      anon_sym_pure,
    ACTIONS(25), 1,
      anon_sym_func,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(392), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    STATE(302), 2,
      sym_assignment,
      sym_func_call,
    ACTIONS(21), 5,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
    STATE(9), 12,
      sym__statement,
      sym__singleComment,
      sym__multiLineComment,
      sym_for,
      sym_while,
      sym_if_statement,
      sym_var_declaration,
      sym_classAssign,
      sym_classDecl,
      sym_function_declare,
      sym_return_statement,
      aux_sym_file_repeat1,
  [738] = 17,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_for,
    ACTIONS(11), 1,
      anon_sym_while,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_auto,
    ACTIONS(17), 1,
      anon_sym_class,
    ACTIONS(23), 1,
      anon_sym_pure,
    ACTIONS(25), 1,
      anon_sym_func,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(392), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    STATE(302), 2,
      sym_assignment,
      sym_func_call,
    ACTIONS(21), 5,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
    STATE(11), 12,
      sym__statement,
      sym__singleComment,
      sym__multiLineComment,
      sym_for,
      sym_while,
      sym_if_statement,
      sym_var_declaration,
      sym_classAssign,
      sym_classDecl,
      sym_function_declare,
      sym_return_statement,
      aux_sym_file_repeat1,
  [807] = 17,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_for,
    ACTIONS(11), 1,
      anon_sym_while,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_auto,
    ACTIONS(17), 1,
      anon_sym_class,
    ACTIONS(23), 1,
      anon_sym_pure,
    ACTIONS(25), 1,
      anon_sym_func,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    STATE(392), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    STATE(302), 2,
      sym_assignment,
      sym_func_call,
    ACTIONS(21), 5,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
    STATE(9), 12,
      sym__statement,
      sym__singleComment,
      sym__multiLineComment,
      sym_for,
      sym_while,
      sym_if_statement,
      sym_var_declaration,
      sym_classAssign,
      sym_classDecl,
      sym_function_declare,
      sym_return_statement,
      aux_sym_file_repeat1,
  [876] = 17,
    ACTIONS(5), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      anon_sym_for,
    ACTIONS(11), 1,
      anon_sym_while,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_auto,
    ACTIONS(17), 1,
      anon_sym_class,
    ACTIONS(23), 1,
      anon_sym_pure,
    ACTIONS(25), 1,
      anon_sym_func,
    ACTIONS(27), 1,
      anon_sym_return,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(392), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    STATE(302), 2,
      sym_assignment,
      sym_func_call,
    ACTIONS(21), 5,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
    STATE(9), 12,
      sym__statement,
      sym__singleComment,
      sym__multiLineComment,
      sym_for,
      sym_while,
      sym_if_statement,
      sym_var_declaration,
      sym_classAssign,
      sym_classDecl,
      sym_function_declare,
      sym_return_statement,
      aux_sym_file_repeat1,
  [945] = 20,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_SEMI,
    ACTIONS(140), 1,
      anon_sym_AMP,
    ACTIONS(142), 1,
      anon_sym_BANG,
    ACTIONS(144), 1,
      anon_sym_DASH,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_SQUOTE,
    ACTIONS(150), 1,
      anon_sym_LF,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(154), 1,
      aux_sym_number_token1,
    STATE(149), 1,
      sym__endLn,
    STATE(172), 1,
      sym_bool,
    STATE(185), 1,
      sym_expression,
    STATE(234), 1,
      sym_parathensisExpr,
    STATE(280), 1,
      sym_binary_condition,
    STATE(288), 1,
      sym_condition,
    ACTIONS(156), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(158), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(173), 2,
      sym_true,
      sym_false,
    STATE(232), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [1019] = 3,
    ACTIONS(164), 1,
      anon_sym_f,
    ACTIONS(160), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(162), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [1058] = 6,
    ACTIONS(170), 1,
      anon_sym_as,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(166), 9,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(168), 15,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_SLASH,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1103] = 9,
    ACTIONS(170), 1,
      anon_sym_as,
    ACTIONS(182), 1,
      anon_sym_STAR,
    ACTIONS(184), 1,
      anon_sym_SLASH,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(176), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(178), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1154] = 9,
    ACTIONS(170), 1,
      anon_sym_as,
    ACTIONS(182), 1,
      anon_sym_STAR,
    ACTIONS(184), 1,
      anon_sym_SLASH,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(186), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(188), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1205] = 8,
    ACTIONS(170), 1,
      anon_sym_as,
    ACTIONS(182), 1,
      anon_sym_STAR,
    ACTIONS(184), 1,
      anon_sym_SLASH,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(166), 8,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(168), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1254] = 9,
    ACTIONS(170), 1,
      anon_sym_as,
    ACTIONS(182), 1,
      anon_sym_STAR,
    ACTIONS(184), 1,
      anon_sym_SLASH,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(180), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(192), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1305] = 2,
    ACTIONS(194), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(196), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [1341] = 2,
    ACTIONS(198), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(200), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [1377] = 2,
    ACTIONS(202), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(204), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [1413] = 18,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(170), 1,
      sym_bool,
    STATE(191), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [1481] = 2,
    ACTIONS(210), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(212), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [1517] = 18,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(216), 1,
      anon_sym_RBRACK,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(177), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(286), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [1585] = 2,
    ACTIONS(220), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(222), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [1621] = 2,
    ACTIONS(224), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(226), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [1657] = 18,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(170), 1,
      sym_bool,
    STATE(186), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [1725] = 2,
    ACTIONS(230), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(232), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [1761] = 2,
    ACTIONS(234), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(236), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [1797] = 2,
    ACTIONS(238), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(240), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [1833] = 18,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(242), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(170), 1,
      sym_bool,
    STATE(189), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [1901] = 18,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(170), 1,
      sym_bool,
    STATE(195), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [1969] = 2,
    ACTIONS(166), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(168), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [2005] = 2,
    ACTIONS(246), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(248), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [2041] = 2,
    ACTIONS(55), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(59), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [2077] = 18,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(170), 1,
      sym_bool,
    STATE(194), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [2145] = 2,
    ACTIONS(252), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(254), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [2181] = 18,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(170), 1,
      sym_bool,
    STATE(184), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [2249] = 2,
    ACTIONS(258), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(260), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [2285] = 2,
    ACTIONS(77), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(79), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [2321] = 2,
    ACTIONS(262), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(264), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [2357] = 2,
    ACTIONS(73), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(75), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [2393] = 18,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(170), 1,
      sym_bool,
    STATE(190), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [2461] = 2,
    ACTIONS(69), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(71), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [2497] = 18,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(197), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(286), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [2565] = 18,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(203), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(286), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [2633] = 2,
    ACTIONS(272), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(274), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [2669] = 18,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(276), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(179), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(286), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [2737] = 18,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(170), 1,
      sym_bool,
    STATE(183), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [2805] = 18,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(181), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(286), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [2873] = 18,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(208), 1,
      sym_identifier,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(170), 1,
      sym_bool,
    STATE(202), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [2941] = 2,
    ACTIONS(284), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(286), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [2977] = 2,
    ACTIONS(288), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(290), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [3013] = 2,
    ACTIONS(292), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(294), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [3049] = 2,
    ACTIONS(296), 13,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(298), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_as,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_return,
      sym_identifier,
  [3085] = 17,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_AMP,
    ACTIONS(304), 1,
      anon_sym_BANG,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(310), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(314), 1,
      aux_sym_number_token1,
    STATE(8), 1,
      sym_bool,
    STATE(23), 1,
      sym_expression,
    STATE(39), 1,
      sym_parathensisExpr,
    STATE(280), 1,
      sym_binary_condition,
    STATE(287), 1,
      sym_condition,
    ACTIONS(316), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(318), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(7), 2,
      sym_true,
      sym_false,
    STATE(40), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [3150] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(253), 1,
      sym_expression,
    STATE(267), 1,
      sym_condition,
    STATE(280), 1,
      sym_binary_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [3215] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(253), 1,
      sym_expression,
    STATE(277), 1,
      sym_condition,
    STATE(280), 1,
      sym_binary_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [3280] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(170), 1,
      sym_bool,
    STATE(243), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [3345] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(223), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(286), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [3410] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(165), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(286), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [3475] = 17,
    ACTIONS(144), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_AMP,
    ACTIONS(324), 1,
      anon_sym_BANG,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(330), 1,
      aux_sym_number_token1,
    STATE(172), 1,
      sym_bool,
    STATE(201), 1,
      sym_expression,
    STATE(234), 1,
      sym_parathensisExpr,
    STATE(280), 1,
      sym_binary_condition,
    STATE(288), 1,
      sym_condition,
    ACTIONS(156), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(158), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(173), 2,
      sym_true,
      sym_false,
    STATE(232), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [3540] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(170), 1,
      sym_bool,
    STATE(171), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [3605] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(244), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(286), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [3670] = 18,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(236), 1,
      sym_expression,
    STATE(254), 1,
      sym_binary_expression,
    STATE(274), 1,
      sym_condition,
    STATE(280), 1,
      sym_binary_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 10,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [3737] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(170), 1,
      sym_bool,
    STATE(239), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [3802] = 17,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_AMP,
    ACTIONS(304), 1,
      anon_sym_BANG,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(310), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(314), 1,
      aux_sym_number_token1,
    STATE(8), 1,
      sym_bool,
    STATE(21), 1,
      sym_expression,
    STATE(39), 1,
      sym_parathensisExpr,
    STATE(280), 1,
      sym_binary_condition,
    STATE(287), 1,
      sym_condition,
    ACTIONS(316), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(318), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(7), 2,
      sym_true,
      sym_false,
    STATE(40), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [3867] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(111), 1,
      sym_expression,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(170), 1,
      sym_bool,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [3932] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(210), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(286), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [3997] = 17,
    ACTIONS(144), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_AMP,
    ACTIONS(324), 1,
      anon_sym_BANG,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(330), 1,
      aux_sym_number_token1,
    STATE(172), 1,
      sym_bool,
    STATE(212), 1,
      sym_expression,
    STATE(234), 1,
      sym_parathensisExpr,
    STATE(280), 1,
      sym_binary_condition,
    STATE(288), 1,
      sym_condition,
    ACTIONS(156), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(158), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(173), 2,
      sym_true,
      sym_false,
    STATE(232), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [4062] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(156), 1,
      sym_expression,
    STATE(170), 1,
      sym_bool,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [4127] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(170), 1,
      sym_bool,
    STATE(208), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [4192] = 17,
    ACTIONS(144), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_AMP,
    ACTIONS(324), 1,
      anon_sym_BANG,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(330), 1,
      aux_sym_number_token1,
    STATE(172), 1,
      sym_bool,
    STATE(215), 1,
      sym_expression,
    STATE(234), 1,
      sym_parathensisExpr,
    STATE(280), 1,
      sym_binary_condition,
    STATE(288), 1,
      sym_condition,
    ACTIONS(156), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(158), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(173), 2,
      sym_true,
      sym_false,
    STATE(232), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [4257] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(168), 1,
      sym_expression,
    STATE(170), 1,
      sym_bool,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [4322] = 17,
    ACTIONS(144), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_AMP,
    ACTIONS(324), 1,
      anon_sym_BANG,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(330), 1,
      aux_sym_number_token1,
    STATE(172), 1,
      sym_bool,
    STATE(214), 1,
      sym_expression,
    STATE(234), 1,
      sym_parathensisExpr,
    STATE(280), 1,
      sym_binary_condition,
    STATE(288), 1,
      sym_condition,
    ACTIONS(156), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(158), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(173), 2,
      sym_true,
      sym_false,
    STATE(232), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [4387] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(170), 1,
      sym_bool,
    STATE(240), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [4452] = 17,
    ACTIONS(144), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_AMP,
    ACTIONS(324), 1,
      anon_sym_BANG,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(330), 1,
      aux_sym_number_token1,
    STATE(172), 1,
      sym_bool,
    STATE(213), 1,
      sym_expression,
    STATE(234), 1,
      sym_parathensisExpr,
    STATE(280), 1,
      sym_binary_condition,
    STATE(288), 1,
      sym_condition,
    ACTIONS(156), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(158), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(173), 2,
      sym_true,
      sym_false,
    STATE(232), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [4517] = 17,
    ACTIONS(144), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_AMP,
    ACTIONS(324), 1,
      anon_sym_BANG,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(330), 1,
      aux_sym_number_token1,
    STATE(172), 1,
      sym_bool,
    STATE(180), 1,
      sym_expression,
    STATE(234), 1,
      sym_parathensisExpr,
    STATE(280), 1,
      sym_binary_condition,
    STATE(288), 1,
      sym_condition,
    ACTIONS(156), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(158), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(173), 2,
      sym_true,
      sym_false,
    STATE(232), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [4582] = 17,
    ACTIONS(144), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_AMP,
    ACTIONS(324), 1,
      anon_sym_BANG,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(330), 1,
      aux_sym_number_token1,
    STATE(172), 1,
      sym_bool,
    STATE(207), 1,
      sym_expression,
    STATE(234), 1,
      sym_parathensisExpr,
    STATE(280), 1,
      sym_binary_condition,
    STATE(288), 1,
      sym_condition,
    ACTIONS(156), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(158), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(173), 2,
      sym_true,
      sym_false,
    STATE(232), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [4647] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(111), 1,
      sym_expression,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(280), 1,
      sym_binary_condition,
    STATE(286), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [4712] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(176), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(286), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [4777] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(147), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(286), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [4842] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(229), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(286), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [4907] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(253), 1,
      sym_expression,
    STATE(268), 1,
      sym_condition,
    STATE(280), 1,
      sym_binary_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [4972] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(253), 1,
      sym_expression,
    STATE(279), 1,
      sym_condition,
    STATE(280), 1,
      sym_binary_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [5037] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(252), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(284), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [5102] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(252), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(282), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [5167] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(253), 1,
      sym_expression,
    STATE(278), 1,
      sym_condition,
    STATE(280), 1,
      sym_binary_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [5232] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(146), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(286), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [5297] = 17,
    ACTIONS(144), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_AMP,
    ACTIONS(324), 1,
      anon_sym_BANG,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(330), 1,
      aux_sym_number_token1,
    STATE(172), 1,
      sym_bool,
    STATE(206), 1,
      sym_expression,
    STATE(234), 1,
      sym_parathensisExpr,
    STATE(280), 1,
      sym_binary_condition,
    STATE(288), 1,
      sym_condition,
    ACTIONS(156), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(158), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(173), 2,
      sym_true,
      sym_false,
    STATE(232), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [5362] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(214), 1,
      anon_sym_AMP,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(218), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(286), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [5427] = 17,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_AMP,
    ACTIONS(304), 1,
      anon_sym_BANG,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(310), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(314), 1,
      aux_sym_number_token1,
    STATE(8), 1,
      sym_bool,
    STATE(20), 1,
      sym_expression,
    STATE(39), 1,
      sym_parathensisExpr,
    STATE(280), 1,
      sym_binary_condition,
    STATE(287), 1,
      sym_condition,
    ACTIONS(316), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(318), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(7), 2,
      sym_true,
      sym_false,
    STATE(40), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [5492] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(170), 1,
      sym_bool,
    STATE(216), 1,
      sym_expression,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [5557] = 18,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(222), 1,
      sym_expression,
    STATE(249), 1,
      sym_binary_expression,
    STATE(274), 1,
      sym_condition,
    STATE(280), 1,
      sym_binary_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 10,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [5624] = 17,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_AMP,
    ACTIONS(304), 1,
      anon_sym_BANG,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(310), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(314), 1,
      aux_sym_number_token1,
    STATE(8), 1,
      sym_bool,
    STATE(19), 1,
      sym_expression,
    STATE(39), 1,
      sym_parathensisExpr,
    STATE(280), 1,
      sym_binary_condition,
    STATE(287), 1,
      sym_condition,
    ACTIONS(316), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(318), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(7), 2,
      sym_true,
      sym_false,
    STATE(40), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [5689] = 17,
    ACTIONS(144), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_AMP,
    ACTIONS(324), 1,
      anon_sym_BANG,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(330), 1,
      aux_sym_number_token1,
    STATE(172), 1,
      sym_bool,
    STATE(193), 1,
      sym_expression,
    STATE(234), 1,
      sym_parathensisExpr,
    STATE(280), 1,
      sym_binary_condition,
    STATE(288), 1,
      sym_condition,
    ACTIONS(156), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(158), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(173), 2,
      sym_true,
      sym_false,
    STATE(232), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [5754] = 17,
    ACTIONS(144), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_AMP,
    ACTIONS(324), 1,
      anon_sym_BANG,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(330), 1,
      aux_sym_number_token1,
    STATE(172), 1,
      sym_bool,
    STATE(209), 1,
      sym_expression,
    STATE(234), 1,
      sym_parathensisExpr,
    STATE(280), 1,
      sym_binary_condition,
    STATE(288), 1,
      sym_condition,
    ACTIONS(156), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(158), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(173), 2,
      sym_true,
      sym_false,
    STATE(232), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [5819] = 17,
    ACTIONS(300), 1,
      anon_sym_LPAREN,
    ACTIONS(302), 1,
      anon_sym_AMP,
    ACTIONS(304), 1,
      anon_sym_BANG,
    ACTIONS(306), 1,
      anon_sym_DASH,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(310), 1,
      anon_sym_SQUOTE,
    ACTIONS(312), 1,
      sym_identifier,
    ACTIONS(314), 1,
      aux_sym_number_token1,
    STATE(8), 1,
      sym_bool,
    STATE(22), 1,
      sym_expression,
    STATE(39), 1,
      sym_parathensisExpr,
    STATE(280), 1,
      sym_binary_condition,
    STATE(287), 1,
      sym_condition,
    ACTIONS(316), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(318), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(7), 2,
      sym_true,
      sym_false,
    STATE(40), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [5884] = 18,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(118), 1,
      sym_bool,
    STATE(231), 1,
      sym_expression,
    STATE(257), 1,
      sym_binary_expression,
    STATE(274), 1,
      sym_condition,
    STATE(280), 1,
      sym_binary_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 10,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [5951] = 17,
    ACTIONS(144), 1,
      anon_sym_DASH,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(320), 1,
      anon_sym_LPAREN,
    ACTIONS(322), 1,
      anon_sym_AMP,
    ACTIONS(324), 1,
      anon_sym_BANG,
    ACTIONS(326), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
    ACTIONS(330), 1,
      aux_sym_number_token1,
    STATE(172), 1,
      sym_bool,
    STATE(205), 1,
      sym_expression,
    STATE(234), 1,
      sym_parathensisExpr,
    STATE(280), 1,
      sym_binary_condition,
    STATE(288), 1,
      sym_condition,
    ACTIONS(156), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(158), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(173), 2,
      sym_true,
      sym_false,
    STATE(232), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [6016] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_AMP,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(115), 1,
      sym_parathensisExpr,
    STATE(153), 1,
      sym_expression,
    STATE(170), 1,
      sym_bool,
    STATE(280), 1,
      sym_binary_condition,
    STATE(285), 1,
      sym_condition,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
    STATE(136), 11,
      sym_ternaryStatement,
      sym_pointer,
      sym_accessor,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_char,
      sym_number,
  [6081] = 4,
    ACTIONS(336), 1,
      anon_sym_else,
    STATE(158), 3,
      sym__if_continuation,
      sym_else,
      sym_else_if,
    ACTIONS(332), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(334), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [6114] = 6,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 7,
      anon_sym_QMARK,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(55), 12,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6151] = 6,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 5,
      anon_sym_QMARK,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(55), 12,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6186] = 8,
    ACTIONS(298), 1,
      sym_identifier,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      anon_sym_DOT,
    ACTIONS(67), 2,
      anon_sym_and,
      anon_sym_or,
    ACTIONS(57), 3,
      anon_sym_QMARK,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(59), 3,
      anon_sym_as,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 10,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6225] = 5,
    ACTIONS(344), 1,
      anon_sym_as,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(166), 14,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [6258] = 3,
    ACTIONS(346), 1,
      anon_sym_f,
    ACTIONS(162), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(160), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6287] = 2,
    ACTIONS(222), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(220), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6313] = 2,
    ACTIONS(200), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(198), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6339] = 2,
    ACTIONS(248), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(246), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6365] = 2,
    ACTIONS(79), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(77), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6391] = 2,
    ACTIONS(75), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(73), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6417] = 3,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 7,
      anon_sym_QMARK,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(55), 12,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6445] = 2,
    ACTIONS(298), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(296), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6471] = 2,
    ACTIONS(294), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6497] = 2,
    ACTIONS(286), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6523] = 2,
    ACTIONS(348), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(350), 15,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_else,
      anon_sym_return,
      sym_identifier,
  [6549] = 2,
    ACTIONS(236), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(234), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6575] = 2,
    ACTIONS(232), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(230), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6601] = 2,
    ACTIONS(212), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(210), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6627] = 2,
    ACTIONS(196), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(194), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6653] = 2,
    ACTIONS(254), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6679] = 6,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      anon_sym_DOT,
    ACTIONS(67), 5,
      anon_sym_QMARK,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(59), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6713] = 2,
    ACTIONS(274), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(272), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6739] = 2,
    ACTIONS(290), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6765] = 2,
    ACTIONS(240), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(238), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6791] = 2,
    ACTIONS(204), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(202), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6817] = 2,
    ACTIONS(168), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(166), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6843] = 2,
    ACTIONS(71), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(69), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6869] = 2,
    ACTIONS(260), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(258), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6895] = 2,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6921] = 2,
    ACTIONS(358), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(360), 15,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_else,
      anon_sym_return,
      sym_identifier,
  [6947] = 10,
    ACTIONS(362), 1,
      anon_sym_RBRACE,
    ACTIONS(364), 1,
      anon_sym_auto,
    ACTIONS(368), 1,
      anon_sym_init,
    ACTIONS(370), 1,
      anon_sym_pure,
    ACTIONS(372), 1,
      anon_sym_func,
    STATE(366), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(366), 2,
      anon_sym_public_COLON,
      anon_sym_private_COLON,
    STATE(140), 5,
      sym_var_declaration,
      sym_publicPrivate,
      sym_constructor,
      sym_function_declare,
      aux_sym_classDecl_repeat1,
    ACTIONS(21), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      sym_identifier,
  [6989] = 10,
    ACTIONS(364), 1,
      anon_sym_auto,
    ACTIONS(368), 1,
      anon_sym_init,
    ACTIONS(370), 1,
      anon_sym_pure,
    ACTIONS(372), 1,
      anon_sym_func,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    STATE(366), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(366), 2,
      anon_sym_public_COLON,
      anon_sym_private_COLON,
    STATE(138), 5,
      sym_var_declaration,
      sym_publicPrivate,
      sym_constructor,
      sym_function_declare,
      aux_sym_classDecl_repeat1,
    ACTIONS(21), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      sym_identifier,
  [7031] = 10,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    ACTIONS(378), 1,
      anon_sym_auto,
    ACTIONS(384), 1,
      anon_sym_init,
    ACTIONS(393), 1,
      anon_sym_pure,
    ACTIONS(396), 1,
      anon_sym_func,
    STATE(366), 1,
      sym_primitive_type,
    ACTIONS(381), 2,
      anon_sym_public_COLON,
      anon_sym_private_COLON,
    ACTIONS(387), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    STATE(140), 5,
      sym_var_declaration,
      sym_publicPrivate,
      sym_constructor,
      sym_function_declare,
      aux_sym_classDecl_repeat1,
    ACTIONS(390), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      sym_identifier,
  [7073] = 2,
    ACTIONS(264), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(262), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7099] = 2,
    ACTIONS(226), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(224), 19,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7125] = 2,
    ACTIONS(399), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(401), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7150] = 2,
    ACTIONS(403), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(405), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7175] = 2,
    ACTIONS(407), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(409), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7200] = 7,
    ACTIONS(344), 1,
      anon_sym_as,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(413), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(190), 8,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [7235] = 6,
    ACTIONS(344), 1,
      anon_sym_as,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(413), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(166), 10,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [7268] = 2,
    ACTIONS(415), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(417), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7293] = 2,
    ACTIONS(419), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(421), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7318] = 2,
    ACTIONS(423), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(425), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7343] = 2,
    ACTIONS(427), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(429), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7368] = 2,
    ACTIONS(431), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(433), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7393] = 7,
    ACTIONS(344), 1,
      anon_sym_as,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(190), 8,
      anon_sym_QMARK,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [7428] = 2,
    ACTIONS(439), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(441), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7453] = 2,
    ACTIONS(358), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(360), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7478] = 6,
    ACTIONS(344), 1,
      anon_sym_as,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(166), 10,
      anon_sym_QMARK,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [7511] = 2,
    ACTIONS(443), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(445), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7536] = 2,
    ACTIONS(447), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(449), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7561] = 2,
    ACTIONS(451), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(453), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7586] = 2,
    ACTIONS(455), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(457), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7611] = 2,
    ACTIONS(459), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(461), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7636] = 2,
    ACTIONS(463), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(465), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7661] = 2,
    ACTIONS(467), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(469), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7686] = 2,
    ACTIONS(471), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(473), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7711] = 7,
    ACTIONS(344), 1,
      anon_sym_as,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(413), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(176), 8,
      anon_sym_QMARK,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [7746] = 2,
    ACTIONS(348), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(350), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7771] = 2,
    ACTIONS(475), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(477), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7796] = 7,
    ACTIONS(344), 1,
      anon_sym_as,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(176), 8,
      anon_sym_QMARK,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [7831] = 2,
    ACTIONS(479), 6,
      ts_builtin_sym_end,
      anon_sym_SLASH_SLASH,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(481), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_class,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [7856] = 3,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(57), 5,
      anon_sym_QMARK,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(55), 12,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7882] = 7,
    ACTIONS(344), 1,
      anon_sym_as,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(483), 7,
      anon_sym_QMARK,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [7916] = 3,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(67), 5,
      anon_sym_QMARK,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
    ACTIONS(59), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7941] = 2,
    ACTIONS(77), 1,
      anon_sym_LF,
    ACTIONS(79), 17,
      anon_sym_QMARK,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7964] = 2,
    ACTIONS(73), 1,
      anon_sym_LF,
    ACTIONS(75), 17,
      anon_sym_QMARK,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7987] = 2,
    ACTIONS(69), 1,
      anon_sym_LF,
    ACTIONS(71), 17,
      anon_sym_QMARK,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8010] = 7,
    ACTIONS(344), 1,
      anon_sym_as,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(413), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(483), 5,
      anon_sym_QMARK,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [8042] = 9,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(487), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      sym_comparison_op,
    STATE(300), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(413), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8076] = 2,
    ACTIONS(455), 5,
      anon_sym_RBRACE,
      anon_sym_public_COLON,
      anon_sym_private_COLON,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(457), 10,
      anon_sym_auto,
      anon_sym_init,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      sym_identifier,
  [8096] = 9,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      sym_comparison_op,
    STATE(324), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(413), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8130] = 8,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(495), 1,
      anon_sym_as,
    ACTIONS(499), 1,
      anon_sym_LF,
    STATE(86), 1,
      sym_comparison_op,
    STATE(256), 1,
      sym__endLn,
    ACTIONS(493), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(497), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(172), 6,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8162] = 9,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      sym_comparison_op,
    STATE(342), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(413), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8196] = 2,
    ACTIONS(348), 5,
      anon_sym_RBRACE,
      anon_sym_public_COLON,
      anon_sym_private_COLON,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(350), 10,
      anon_sym_auto,
      anon_sym_init,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      sym_identifier,
  [8216] = 9,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(503), 1,
      anon_sym_RPAREN,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      sym_comparison_op,
    STATE(310), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8250] = 9,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_comparison_op,
    STATE(340), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8284] = 8,
    ACTIONS(495), 1,
      anon_sym_as,
    ACTIONS(509), 1,
      anon_sym_SEMI,
    ACTIONS(511), 1,
      anon_sym_LF,
    STATE(86), 1,
      sym_comparison_op,
    STATE(145), 1,
      sym__endLn,
    ACTIONS(493), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(497), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(172), 6,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8316] = 9,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_comparison_op,
    STATE(306), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8350] = 2,
    ACTIONS(431), 5,
      anon_sym_RBRACE,
      anon_sym_public_COLON,
      anon_sym_private_COLON,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(433), 10,
      anon_sym_auto,
      anon_sym_init,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      sym_identifier,
  [8370] = 2,
    ACTIONS(471), 5,
      anon_sym_RBRACE,
      anon_sym_public_COLON,
      anon_sym_private_COLON,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(473), 10,
      anon_sym_auto,
      anon_sym_init,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      sym_identifier,
  [8390] = 9,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_comparison_op,
    STATE(319), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8424] = 9,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_comparison_op,
    STATE(317), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8458] = 9,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_comparison_op,
    STATE(337), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8492] = 2,
    ACTIONS(479), 5,
      anon_sym_RBRACE,
      anon_sym_public_COLON,
      anon_sym_private_COLON,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(481), 10,
      anon_sym_auto,
      anon_sym_init,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      sym_identifier,
  [8512] = 8,
    ACTIONS(495), 1,
      anon_sym_as,
    ACTIONS(521), 1,
      anon_sym_SEMI,
    ACTIONS(523), 1,
      anon_sym_LF,
    STATE(86), 1,
      sym_comparison_op,
    STATE(198), 1,
      sym__endLn,
    ACTIONS(493), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(497), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(172), 6,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8544] = 9,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_comparison_op,
    STATE(341), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8578] = 9,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_comparison_op,
    STATE(314), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8612] = 2,
    ACTIONS(529), 5,
      anon_sym_RBRACE,
      anon_sym_public_COLON,
      anon_sym_private_COLON,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(531), 10,
      anon_sym_auto,
      anon_sym_init,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      sym_identifier,
  [8632] = 9,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(533), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      sym_comparison_op,
    STATE(335), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(413), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8666] = 2,
    ACTIONS(399), 5,
      anon_sym_RBRACE,
      anon_sym_public_COLON,
      anon_sym_private_COLON,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(401), 10,
      anon_sym_auto,
      anon_sym_init,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      sym_identifier,
  [8686] = 2,
    ACTIONS(535), 5,
      anon_sym_RBRACE,
      anon_sym_public_COLON,
      anon_sym_private_COLON,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(537), 10,
      anon_sym_auto,
      anon_sym_init,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      sym_identifier,
  [8706] = 2,
    ACTIONS(358), 5,
      anon_sym_RBRACE,
      anon_sym_public_COLON,
      anon_sym_private_COLON,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(360), 10,
      anon_sym_auto,
      anon_sym_init,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      sym_identifier,
  [8726] = 8,
    ACTIONS(495), 1,
      anon_sym_as,
    ACTIONS(539), 1,
      anon_sym_SEMI,
    ACTIONS(541), 1,
      anon_sym_LF,
    STATE(86), 1,
      sym_comparison_op,
    STATE(143), 1,
      sym__endLn,
    ACTIONS(493), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(497), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(172), 6,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8758] = 9,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_comparison_op,
    STATE(330), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8792] = 9,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(545), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      sym_comparison_op,
    STATE(311), 1,
      aux_sym_var_declaration_repeat1,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(413), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8826] = 2,
    ACTIONS(423), 5,
      anon_sym_RBRACE,
      anon_sym_public_COLON,
      anon_sym_private_COLON,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(425), 10,
      anon_sym_auto,
      anon_sym_init,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      anon_sym_pure,
      anon_sym_func,
      sym_identifier,
  [8846] = 7,
    ACTIONS(190), 1,
      anon_sym_LF,
    ACTIONS(192), 1,
      anon_sym_SEMI,
    ACTIONS(495), 1,
      anon_sym_as,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(493), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(497), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(172), 6,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8875] = 7,
    ACTIONS(495), 1,
      anon_sym_as,
    ACTIONS(547), 1,
      anon_sym_SEMI,
    ACTIONS(549), 1,
      anon_sym_LF,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(493), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(497), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(172), 6,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8904] = 5,
    ACTIONS(166), 1,
      anon_sym_LF,
    ACTIONS(495), 1,
      anon_sym_as,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(168), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(172), 6,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8929] = 7,
    ACTIONS(344), 1,
      anon_sym_as,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(551), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8958] = 7,
    ACTIONS(495), 1,
      anon_sym_as,
    ACTIONS(553), 1,
      anon_sym_SEMI,
    ACTIONS(555), 1,
      anon_sym_LF,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(493), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(497), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(172), 6,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8987] = 7,
    ACTIONS(344), 1,
      anon_sym_as,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(413), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(551), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9016] = 3,
    ACTIONS(160), 1,
      anon_sym_LF,
    ACTIONS(557), 1,
      anon_sym_f,
    ACTIONS(162), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9037] = 7,
    ACTIONS(495), 1,
      anon_sym_as,
    ACTIONS(559), 1,
      anon_sym_SEMI,
    ACTIONS(561), 1,
      anon_sym_LF,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(493), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(497), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(172), 6,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9066] = 6,
    ACTIONS(166), 1,
      anon_sym_LF,
    ACTIONS(495), 1,
      anon_sym_as,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(497), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(168), 3,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(172), 6,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9093] = 7,
    ACTIONS(495), 1,
      anon_sym_as,
    ACTIONS(563), 1,
      anon_sym_SEMI,
    ACTIONS(565), 1,
      anon_sym_LF,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(493), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(497), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(172), 6,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9122] = 7,
    ACTIONS(176), 1,
      anon_sym_LF,
    ACTIONS(178), 1,
      anon_sym_SEMI,
    ACTIONS(495), 1,
      anon_sym_as,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(493), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(497), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(172), 6,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9151] = 7,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9179] = 2,
    ACTIONS(224), 1,
      anon_sym_LF,
    ACTIONS(226), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9197] = 7,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(567), 1,
      anon_sym_COLON,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(413), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9225] = 2,
    ACTIONS(262), 1,
      anon_sym_LF,
    ACTIONS(264), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9243] = 2,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(260), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9261] = 2,
    ACTIONS(194), 1,
      anon_sym_LF,
    ACTIONS(196), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9279] = 7,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9307] = 7,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(571), 1,
      anon_sym_COLON,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(413), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9335] = 2,
    ACTIONS(210), 1,
      anon_sym_LF,
    ACTIONS(212), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9353] = 2,
    ACTIONS(252), 1,
      anon_sym_LF,
    ACTIONS(254), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9371] = 2,
    ACTIONS(230), 1,
      anon_sym_LF,
    ACTIONS(232), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9389] = 2,
    ACTIONS(234), 1,
      anon_sym_LF,
    ACTIONS(236), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9407] = 2,
    ACTIONS(220), 1,
      anon_sym_LF,
    ACTIONS(222), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9425] = 7,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(573), 1,
      anon_sym_COLON,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(413), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9453] = 2,
    ACTIONS(166), 1,
      anon_sym_LF,
    ACTIONS(168), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9471] = 7,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9499] = 2,
    ACTIONS(55), 1,
      anon_sym_LF,
    ACTIONS(59), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9517] = 2,
    ACTIONS(202), 1,
      anon_sym_LF,
    ACTIONS(204), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9535] = 2,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(248), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9553] = 2,
    ACTIONS(238), 1,
      anon_sym_LF,
    ACTIONS(240), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9571] = 7,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9599] = 2,
    ACTIONS(198), 1,
      anon_sym_LF,
    ACTIONS(200), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9617] = 2,
    ACTIONS(288), 1,
      anon_sym_LF,
    ACTIONS(290), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9635] = 7,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9663] = 7,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9691] = 2,
    ACTIONS(284), 1,
      anon_sym_LF,
    ACTIONS(286), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9709] = 2,
    ACTIONS(272), 1,
      anon_sym_LF,
    ACTIONS(274), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9727] = 7,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(435), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(437), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9755] = 7,
    ACTIONS(344), 1,
      anon_sym_as,
    ACTIONS(579), 1,
      anon_sym_COLON,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(413), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9783] = 2,
    ACTIONS(296), 1,
      anon_sym_LF,
    ACTIONS(298), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9801] = 2,
    ACTIONS(292), 1,
      anon_sym_LF,
    ACTIONS(294), 12,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9819] = 2,
    ACTIONS(581), 6,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_number_token1,
    ACTIONS(583), 6,
      anon_sym_DASH,
      sym_identifier,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
  [9836] = 2,
    ACTIONS(479), 6,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_number_token1,
    ACTIONS(481), 6,
      anon_sym_DASH,
      sym_identifier,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
  [9853] = 3,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 9,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9872] = 2,
    ACTIONS(455), 6,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_number_token1,
    ACTIONS(457), 6,
      anon_sym_DASH,
      sym_identifier,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
  [9889] = 2,
    ACTIONS(585), 6,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_number_token1,
    ACTIONS(587), 6,
      anon_sym_DASH,
      sym_identifier,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
  [9906] = 6,
    ACTIONS(344), 1,
      anon_sym_as,
    STATE(86), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(413), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9931] = 6,
    ACTIONS(344), 1,
      anon_sym_as,
    STATE(68), 1,
      sym_comparison_op,
    ACTIONS(172), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(411), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(413), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(174), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9956] = 3,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 9,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [9975] = 2,
    ACTIONS(431), 6,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_number_token1,
    ACTIONS(433), 6,
      anon_sym_DASH,
      sym_identifier,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
  [9992] = 2,
    ACTIONS(399), 6,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_number_token1,
    ACTIONS(401), 6,
      anon_sym_DASH,
      sym_identifier,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
  [10009] = 3,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(55), 9,
      anon_sym_DASH,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [10028] = 2,
    ACTIONS(589), 6,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_number_token1,
    ACTIONS(591), 6,
      anon_sym_DASH,
      sym_identifier,
      anon_sym_true,
      anon_sym_True,
      anon_sym_false,
      anon_sym_False,
  [10045] = 5,
    ACTIONS(593), 1,
      anon_sym_auto,
    STATE(63), 1,
      sym_var_declaration,
    STATE(379), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(21), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      sym_identifier,
  [10067] = 5,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    STATE(339), 1,
      sym_parameter,
    STATE(390), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(21), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      sym_identifier,
  [10089] = 4,
    ACTIONS(597), 1,
      anon_sym_func,
    STATE(385), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(21), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      sym_identifier,
  [10108] = 4,
    STATE(353), 1,
      sym_parameter,
    STATE(390), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(21), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      sym_identifier,
  [10127] = 4,
    ACTIONS(599), 1,
      anon_sym_func,
    STATE(404), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(21), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      sym_identifier,
  [10146] = 3,
    STATE(38), 1,
      sym_primitive_type,
    ACTIONS(601), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(603), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      sym_identifier,
  [10162] = 3,
    STATE(373), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(21), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      sym_identifier,
  [10178] = 3,
    STATE(376), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(21), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      sym_identifier,
  [10194] = 3,
    STATE(62), 1,
      sym_and,
    STATE(89), 1,
      sym_or,
    ACTIONS(605), 7,
      anon_sym_QMARK,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [10210] = 4,
    STATE(62), 1,
      sym_and,
    STATE(89), 1,
      sym_or,
    ACTIONS(607), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(605), 5,
      anon_sym_QMARK,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [10228] = 3,
    STATE(367), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(21), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      sym_identifier,
  [10244] = 3,
    STATE(230), 1,
      sym_primitive_type,
    ACTIONS(609), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(611), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      sym_identifier,
  [10260] = 3,
    STATE(133), 1,
      sym_primitive_type,
    ACTIONS(613), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(615), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      sym_identifier,
  [10276] = 3,
    STATE(387), 1,
      sym_primitive_type,
    ACTIONS(19), 2,
      anon_sym_ptr_LT,
      anon_sym_ref_LT,
    ACTIONS(21), 6,
      anon_sym_int,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
      anon_sym_char,
      sym_identifier,
  [10292] = 5,
    ACTIONS(617), 1,
      sym_identifier,
    STATE(34), 1,
      sym_bool,
    ACTIONS(619), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(621), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(45), 2,
      sym_true,
      sym_false,
  [10311] = 6,
    ACTIONS(623), 1,
      anon_sym_QMARK,
    ACTIONS(625), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_and,
    STATE(89), 1,
      sym_or,
    ACTIONS(607), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(627), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [10332] = 5,
    ACTIONS(629), 1,
      sym_identifier,
    STATE(227), 1,
      sym_bool,
    ACTIONS(156), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(158), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(173), 2,
      sym_true,
      sym_false,
  [10351] = 5,
    ACTIONS(631), 1,
      sym_identifier,
    STATE(123), 1,
      sym_bool,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_True,
    ACTIONS(51), 2,
      anon_sym_false,
      anon_sym_False,
    STATE(116), 2,
      sym_true,
      sym_false,
  [10370] = 6,
    ACTIONS(633), 1,
      anon_sym_QMARK,
    ACTIONS(635), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      sym_and,
    STATE(89), 1,
      sym_or,
    ACTIONS(607), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(627), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [10391] = 6,
    ACTIONS(633), 1,
      anon_sym_QMARK,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_and,
    STATE(89), 1,
      sym_or,
    ACTIONS(607), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(627), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [10412] = 6,
    ACTIONS(633), 1,
      anon_sym_QMARK,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    STATE(62), 1,
      sym_and,
    STATE(89), 1,
      sym_or,
    ACTIONS(607), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(627), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [10433] = 1,
    ACTIONS(57), 7,
      anon_sym_QMARK,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [10443] = 6,
    ACTIONS(296), 1,
      sym_identifier,
    ACTIONS(641), 1,
      anon_sym_LPAREN,
    ACTIONS(643), 1,
      anon_sym_EQ,
    ACTIONS(645), 1,
      anon_sym_LBRACK,
    ACTIONS(649), 1,
      anon_sym_DOT,
    ACTIONS(647), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [10463] = 4,
    STATE(91), 1,
      sym_and,
    STATE(92), 1,
      sym_or,
    ACTIONS(607), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(605), 3,
      anon_sym_QMARK,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [10479] = 1,
    ACTIONS(483), 7,
      anon_sym_QMARK,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [10489] = 3,
    STATE(91), 1,
      sym_and,
    STATE(92), 1,
      sym_or,
    ACTIONS(605), 5,
      anon_sym_QMARK,
      anon_sym_and,
      anon_sym_AMP_AMP,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [10503] = 5,
    ACTIONS(623), 1,
      anon_sym_QMARK,
    STATE(91), 1,
      sym_and,
    STATE(92), 1,
      sym_or,
    ACTIONS(607), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(627), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [10521] = 5,
    ACTIONS(633), 1,
      anon_sym_QMARK,
    STATE(91), 1,
      sym_and,
    STATE(92), 1,
      sym_or,
    ACTIONS(607), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(627), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [10539] = 5,
    ACTIONS(651), 1,
      anon_sym_QMARK,
    STATE(91), 1,
      sym_and,
    STATE(92), 1,
      sym_or,
    ACTIONS(607), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(627), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [10557] = 5,
    ACTIONS(653), 1,
      anon_sym_QMARK,
    STATE(91), 1,
      sym_and,
    STATE(92), 1,
      sym_or,
    ACTIONS(607), 2,
      anon_sym_and,
      anon_sym_AMP_AMP,
    ACTIONS(627), 2,
      anon_sym_or,
      anon_sym_PIPE_PIPE,
  [10575] = 6,
    ACTIONS(655), 1,
      anon_sym_LPAREN,
    ACTIONS(657), 1,
      anon_sym_SEMI,
    ACTIONS(659), 1,
      anon_sym_EQ,
    ACTIONS(661), 1,
      anon_sym_LF,
    STATE(187), 1,
      sym__endLn,
    STATE(365), 1,
      sym_parameter_list,
  [10594] = 6,
    ACTIONS(663), 1,
      anon_sym_LPAREN,
    ACTIONS(665), 1,
      anon_sym_SEMI,
    ACTIONS(667), 1,
      anon_sym_EQ,
    ACTIONS(669), 1,
      anon_sym_LF,
    STATE(152), 1,
      sym__endLn,
    STATE(344), 1,
      sym_parameter_list,
  [10613] = 5,
    ACTIONS(657), 1,
      anon_sym_SEMI,
    ACTIONS(659), 1,
      anon_sym_EQ,
    ACTIONS(661), 1,
      anon_sym_LF,
    ACTIONS(671), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      sym__endLn,
  [10629] = 5,
    ACTIONS(665), 1,
      anon_sym_SEMI,
    ACTIONS(667), 1,
      anon_sym_EQ,
    ACTIONS(669), 1,
      anon_sym_LF,
    ACTIONS(673), 1,
      anon_sym_LPAREN,
    STATE(152), 1,
      sym__endLn,
  [10645] = 5,
    ACTIONS(675), 1,
      anon_sym_LPAREN,
    ACTIONS(677), 1,
      anon_sym_SEMI,
    ACTIONS(679), 1,
      anon_sym_EQ,
    ACTIONS(681), 1,
      anon_sym_LF,
    STATE(255), 1,
      sym__endLn,
  [10661] = 4,
    ACTIONS(521), 1,
      anon_sym_SEMI,
    ACTIONS(523), 1,
      anon_sym_LF,
    ACTIONS(683), 1,
      anon_sym_LBRACE,
    STATE(198), 1,
      sym__endLn,
  [10674] = 4,
    ACTIONS(539), 1,
      anon_sym_SEMI,
    ACTIONS(541), 1,
      anon_sym_LF,
    ACTIONS(683), 1,
      anon_sym_LBRACE,
    STATE(143), 1,
      sym__endLn,
  [10687] = 3,
    ACTIONS(685), 1,
      anon_sym_EQ,
    ACTIONS(687), 1,
      anon_sym_LBRACK,
    ACTIONS(689), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [10698] = 4,
    ACTIONS(691), 1,
      anon_sym_LBRACE,
    ACTIONS(693), 1,
      anon_sym_if,
    STATE(162), 1,
      sym_if_statement,
    STATE(163), 1,
      sym_block,
  [10711] = 3,
    ACTIONS(695), 1,
      aux_sym__multiLineComment_token1,
    ACTIONS(697), 1,
      anon_sym_DQUOTE,
    STATE(322), 1,
      aux_sym__multiLineComment_repeat1,
  [10721] = 3,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_var_declaration_repeat1,
  [10731] = 3,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(702), 1,
      anon_sym_RBRACK,
    STATE(331), 1,
      aux_sym_var_declaration_repeat1,
  [10741] = 3,
    ACTIONS(704), 1,
      anon_sym_SEMI,
    ACTIONS(706), 1,
      anon_sym_LF,
    STATE(248), 1,
      sym__endLn,
  [10751] = 3,
    ACTIONS(708), 1,
      anon_sym_SEMI,
    ACTIONS(710), 1,
      anon_sym_LF,
    STATE(167), 1,
      sym__endLn,
  [10761] = 3,
    ACTIONS(491), 1,
      anon_sym_SEMI,
    ACTIONS(499), 1,
      anon_sym_LF,
    STATE(256), 1,
      sym__endLn,
  [10771] = 3,
    ACTIONS(712), 1,
      aux_sym__multiLineComment_token1,
    ACTIONS(715), 1,
      anon_sym_DQUOTE,
    STATE(304), 1,
      aux_sym__multiLineComment_repeat1,
  [10781] = 3,
    ACTIONS(717), 1,
      aux_sym__multiLineComment_token1,
    ACTIONS(719), 1,
      anon_sym_STAR_SLASH,
    STATE(316), 1,
      aux_sym__multiLineComment_repeat1,
  [10791] = 3,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      aux_sym_var_declaration_repeat1,
  [10801] = 3,
    ACTIONS(723), 1,
      anon_sym_SEMI,
    ACTIONS(725), 1,
      anon_sym_LF,
    STATE(178), 1,
      sym__endLn,
  [10811] = 3,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    ACTIONS(729), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_parameter_list_repeat1,
  [10821] = 3,
    ACTIONS(732), 1,
      aux_sym__multiLineComment_token1,
    ACTIONS(734), 1,
      anon_sym_DQUOTE,
    STATE(320), 1,
      aux_sym__multiLineComment_repeat1,
  [10831] = 3,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      aux_sym_var_declaration_repeat1,
  [10841] = 3,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(738), 1,
      anon_sym_RBRACK,
    STATE(331), 1,
      aux_sym_var_declaration_repeat1,
  [10851] = 3,
    ACTIONS(740), 1,
      anon_sym_SEMI,
    ACTIONS(742), 1,
      anon_sym_LF,
    STATE(160), 1,
      sym__endLn,
  [10861] = 3,
    ACTIONS(744), 1,
      anon_sym_SEMI,
    ACTIONS(746), 1,
      anon_sym_LF,
    STATE(192), 1,
      sym__endLn,
  [10871] = 3,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      aux_sym_var_declaration_repeat1,
  [10881] = 3,
    ACTIONS(750), 1,
      aux_sym__multiLineComment_token1,
    ACTIONS(752), 1,
      anon_sym_STAR_SLASH,
    STATE(305), 1,
      aux_sym__multiLineComment_repeat1,
  [10891] = 3,
    ACTIONS(715), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(754), 1,
      aux_sym__multiLineComment_token1,
    STATE(316), 1,
      aux_sym__multiLineComment_repeat1,
  [10901] = 3,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_var_declaration_repeat1,
  [10911] = 2,
    ACTIONS(757), 1,
      anon_sym_EQ,
    ACTIONS(759), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [10919] = 3,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_var_declaration_repeat1,
  [10929] = 3,
    ACTIONS(761), 1,
      aux_sym__multiLineComment_token1,
    ACTIONS(763), 1,
      anon_sym_DQUOTE,
    STATE(304), 1,
      aux_sym__multiLineComment_repeat1,
  [10939] = 3,
    ACTIONS(765), 1,
      anon_sym_SEMI,
    ACTIONS(767), 1,
      anon_sym_LF,
    STATE(250), 1,
      sym__endLn,
  [10949] = 3,
    ACTIONS(761), 1,
      aux_sym__multiLineComment_token1,
    ACTIONS(769), 1,
      anon_sym_DQUOTE,
    STATE(304), 1,
      aux_sym__multiLineComment_repeat1,
  [10959] = 2,
    ACTIONS(771), 1,
      anon_sym_EQ,
    ACTIONS(773), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [10967] = 3,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(775), 1,
      anon_sym_RBRACK,
    STATE(331), 1,
      aux_sym_var_declaration_repeat1,
  [10977] = 3,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    STATE(308), 1,
      aux_sym_parameter_list_repeat1,
  [10987] = 3,
    ACTIONS(761), 1,
      aux_sym__multiLineComment_token1,
    ACTIONS(781), 1,
      anon_sym_DQUOTE,
    STATE(304), 1,
      aux_sym__multiLineComment_repeat1,
  [10997] = 3,
    ACTIONS(539), 1,
      anon_sym_SEMI,
    ACTIONS(541), 1,
      anon_sym_LF,
    STATE(143), 1,
      sym__endLn,
  [11007] = 2,
    ACTIONS(783), 1,
      anon_sym_EQ,
    ACTIONS(785), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [11015] = 3,
    ACTIONS(787), 1,
      aux_sym__multiLineComment_token1,
    ACTIONS(789), 1,
      anon_sym_DQUOTE,
    STATE(326), 1,
      aux_sym__multiLineComment_repeat1,
  [11025] = 3,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(791), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      aux_sym_var_declaration_repeat1,
  [11035] = 3,
    ACTIONS(551), 1,
      anon_sym_RBRACK,
    ACTIONS(793), 1,
      anon_sym_COMMA,
    STATE(331), 1,
      aux_sym_var_declaration_repeat1,
  [11045] = 3,
    ACTIONS(796), 1,
      anon_sym_SEMI,
    ACTIONS(798), 1,
      anon_sym_LF,
    STATE(169), 1,
      sym__endLn,
  [11055] = 2,
    ACTIONS(800), 1,
      anon_sym_EQ,
    ACTIONS(802), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [11063] = 3,
    ACTIONS(521), 1,
      anon_sym_SEMI,
    ACTIONS(523), 1,
      anon_sym_LF,
    STATE(198), 1,
      sym__endLn,
  [11073] = 3,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(804), 1,
      anon_sym_RBRACK,
    STATE(331), 1,
      aux_sym_var_declaration_repeat1,
  [11083] = 2,
    ACTIONS(806), 1,
      anon_sym_EQ,
    ACTIONS(808), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [11091] = 3,
    ACTIONS(250), 1,
      anon_sym_RPAREN,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(299), 1,
      aux_sym_var_declaration_repeat1,
  [11101] = 2,
    ACTIONS(810), 1,
      anon_sym_EQ,
    ACTIONS(812), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [11109] = 3,
    ACTIONS(779), 1,
      anon_sym_COMMA,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
    STATE(325), 1,
      aux_sym_parameter_list_repeat1,
  [11119] = 3,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      aux_sym_var_declaration_repeat1,
  [11129] = 3,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(818), 1,
      anon_sym_RPAREN,
    STATE(299), 1,
      aux_sym_var_declaration_repeat1,
  [11139] = 3,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(820), 1,
      anon_sym_RBRACK,
    STATE(331), 1,
      aux_sym_var_declaration_repeat1,
  [11149] = 2,
    ACTIONS(822), 1,
      anon_sym_LPAREN,
    STATE(365), 1,
      sym_parameter_list,
  [11156] = 2,
    ACTIONS(691), 1,
      anon_sym_LBRACE,
    STATE(164), 1,
      sym_block,
  [11163] = 2,
    ACTIONS(824), 1,
      sym_identifier,
    STATE(371), 1,
      sym_assignment,
  [11170] = 2,
    ACTIONS(826), 1,
      anon_sym_SEMI,
    ACTIONS(828), 1,
      anon_sym_LF,
  [11177] = 1,
    ACTIONS(296), 2,
      anon_sym_GT,
      sym_identifier,
  [11182] = 2,
    ACTIONS(691), 1,
      anon_sym_LBRACE,
    STATE(157), 1,
      sym_block,
  [11189] = 2,
    ACTIONS(563), 1,
      anon_sym_SEMI,
    ACTIONS(565), 1,
      anon_sym_LF,
  [11196] = 2,
    ACTIONS(822), 1,
      anon_sym_LPAREN,
    STATE(361), 1,
      sym_parameter_list,
  [11203] = 2,
    ACTIONS(822), 1,
      anon_sym_LPAREN,
    STATE(344), 1,
      sym_parameter_list,
  [11210] = 2,
    ACTIONS(691), 1,
      anon_sym_LBRACE,
    STATE(150), 1,
      sym_block,
  [11217] = 1,
    ACTIONS(727), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11222] = 2,
    ACTIONS(830), 1,
      anon_sym_SEMI,
    ACTIONS(832), 1,
      anon_sym_LF,
  [11229] = 2,
    ACTIONS(822), 1,
      anon_sym_LPAREN,
    STATE(356), 1,
      sym_parameter_list,
  [11236] = 2,
    ACTIONS(834), 1,
      anon_sym_LBRACE,
    STATE(196), 1,
      sym_block,
  [11243] = 2,
    ACTIONS(836), 1,
      anon_sym_LBRACE,
    STATE(107), 1,
      sym_block,
  [11250] = 2,
    ACTIONS(691), 1,
      anon_sym_LBRACE,
    STATE(154), 1,
      sym_block,
  [11257] = 2,
    ACTIONS(838), 1,
      anon_sym_LPAREN,
    ACTIONS(840), 1,
      anon_sym_EQ,
  [11264] = 1,
    ACTIONS(842), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [11269] = 2,
    ACTIONS(834), 1,
      anon_sym_LBRACE,
    STATE(204), 1,
      sym_block,
  [11276] = 2,
    ACTIONS(822), 1,
      anon_sym_LPAREN,
    STATE(352), 1,
      sym_parameter_list,
  [11283] = 1,
    ACTIONS(220), 2,
      anon_sym_GT,
      sym_identifier,
  [11288] = 2,
    ACTIONS(559), 1,
      anon_sym_SEMI,
    ACTIONS(561), 1,
      anon_sym_LF,
  [11295] = 2,
    ACTIONS(834), 1,
      anon_sym_LBRACE,
    STATE(188), 1,
      sym_block,
  [11302] = 1,
    ACTIONS(844), 1,
      sym_identifier,
  [11306] = 1,
    ACTIONS(846), 1,
      anon_sym_GT,
  [11310] = 1,
    ACTIONS(848), 1,
      sym_identifier,
  [11314] = 1,
    ACTIONS(850), 1,
      anon_sym_SQUOTE,
  [11318] = 1,
    ACTIONS(852), 1,
      anon_sym_SQUOTE,
  [11322] = 1,
    ACTIONS(854), 1,
      anon_sym_RPAREN,
  [11326] = 1,
    ACTIONS(856), 1,
      sym_identifier,
  [11330] = 1,
    ACTIONS(858), 1,
      anon_sym_GT,
  [11334] = 1,
    ACTIONS(860), 1,
      sym_identifier,
  [11338] = 1,
    ACTIONS(862), 1,
      aux_sym__singleComment_token1,
  [11342] = 1,
    ACTIONS(864), 1,
      anon_sym_GT,
  [11346] = 1,
    ACTIONS(866), 1,
      anon_sym_SQUOTE,
  [11350] = 1,
    ACTIONS(868), 1,
      aux_sym__multiLineComment_token1,
  [11354] = 1,
    ACTIONS(870), 1,
      sym_identifier,
  [11358] = 1,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
  [11362] = 1,
    ACTIONS(872), 1,
      anon_sym_LBRACE,
  [11366] = 1,
    ACTIONS(874), 1,
      sym_identifier,
  [11370] = 1,
    ACTIONS(876), 1,
      aux_sym__multiLineComment_token1,
  [11374] = 1,
    ACTIONS(878), 1,
      sym_identifier,
  [11378] = 1,
    ACTIONS(880), 1,
      sym_identifier,
  [11382] = 1,
    ACTIONS(882), 1,
      anon_sym_LBRACE,
  [11386] = 1,
    ACTIONS(884), 1,
      anon_sym_GT,
  [11390] = 1,
    ACTIONS(886), 1,
      anon_sym_LBRACE,
  [11394] = 1,
    ACTIONS(888), 1,
      anon_sym_LBRACE,
  [11398] = 1,
    ACTIONS(890), 1,
      sym_identifier,
  [11402] = 1,
    ACTIONS(892), 1,
      anon_sym_LPAREN,
  [11406] = 1,
    ACTIONS(894), 1,
      sym_identifier,
  [11410] = 1,
    ACTIONS(832), 1,
      anon_sym_RPAREN,
  [11414] = 1,
    ACTIONS(828), 1,
      anon_sym_RPAREN,
  [11418] = 1,
    ACTIONS(896), 1,
      sym_identifier,
  [11422] = 1,
    ACTIONS(898), 1,
      ts_builtin_sym_end,
  [11426] = 1,
    ACTIONS(900), 1,
      sym_identifier,
  [11430] = 1,
    ACTIONS(902), 1,
      aux_sym__multiLineComment_token1,
  [11434] = 1,
    ACTIONS(838), 1,
      anon_sym_LPAREN,
  [11438] = 1,
    ACTIONS(904), 1,
      anon_sym_LPAREN,
  [11442] = 1,
    ACTIONS(906), 1,
      sym_identifier,
  [11446] = 1,
    ACTIONS(908), 1,
      sym_identifier,
  [11450] = 1,
    ACTIONS(910), 1,
      sym_identifier,
  [11454] = 1,
    ACTIONS(912), 1,
      sym_identifier,
  [11458] = 1,
    ACTIONS(914), 1,
      anon_sym_LPAREN,
  [11462] = 1,
    ACTIONS(916), 1,
      sym_identifier,
  [11466] = 1,
    ACTIONS(918), 1,
      anon_sym_LPAREN,
  [11470] = 1,
    ACTIONS(920), 1,
      sym_identifier,
  [11474] = 1,
    ACTIONS(922), 1,
      anon_sym_LPAREN,
  [11478] = 1,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 85,
  [SMALL_STATE(4)] = 170,
  [SMALL_STATE(5)] = 224,
  [SMALL_STATE(6)] = 265,
  [SMALL_STATE(7)] = 306,
  [SMALL_STATE(8)] = 347,
  [SMALL_STATE(9)] = 392,
  [SMALL_STATE(10)] = 462,
  [SMALL_STATE(11)] = 531,
  [SMALL_STATE(12)] = 600,
  [SMALL_STATE(13)] = 669,
  [SMALL_STATE(14)] = 738,
  [SMALL_STATE(15)] = 807,
  [SMALL_STATE(16)] = 876,
  [SMALL_STATE(17)] = 945,
  [SMALL_STATE(18)] = 1019,
  [SMALL_STATE(19)] = 1058,
  [SMALL_STATE(20)] = 1103,
  [SMALL_STATE(21)] = 1154,
  [SMALL_STATE(22)] = 1205,
  [SMALL_STATE(23)] = 1254,
  [SMALL_STATE(24)] = 1305,
  [SMALL_STATE(25)] = 1341,
  [SMALL_STATE(26)] = 1377,
  [SMALL_STATE(27)] = 1413,
  [SMALL_STATE(28)] = 1481,
  [SMALL_STATE(29)] = 1517,
  [SMALL_STATE(30)] = 1585,
  [SMALL_STATE(31)] = 1621,
  [SMALL_STATE(32)] = 1657,
  [SMALL_STATE(33)] = 1725,
  [SMALL_STATE(34)] = 1761,
  [SMALL_STATE(35)] = 1797,
  [SMALL_STATE(36)] = 1833,
  [SMALL_STATE(37)] = 1901,
  [SMALL_STATE(38)] = 1969,
  [SMALL_STATE(39)] = 2005,
  [SMALL_STATE(40)] = 2041,
  [SMALL_STATE(41)] = 2077,
  [SMALL_STATE(42)] = 2145,
  [SMALL_STATE(43)] = 2181,
  [SMALL_STATE(44)] = 2249,
  [SMALL_STATE(45)] = 2285,
  [SMALL_STATE(46)] = 2321,
  [SMALL_STATE(47)] = 2357,
  [SMALL_STATE(48)] = 2393,
  [SMALL_STATE(49)] = 2461,
  [SMALL_STATE(50)] = 2497,
  [SMALL_STATE(51)] = 2565,
  [SMALL_STATE(52)] = 2633,
  [SMALL_STATE(53)] = 2669,
  [SMALL_STATE(54)] = 2737,
  [SMALL_STATE(55)] = 2805,
  [SMALL_STATE(56)] = 2873,
  [SMALL_STATE(57)] = 2941,
  [SMALL_STATE(58)] = 2977,
  [SMALL_STATE(59)] = 3013,
  [SMALL_STATE(60)] = 3049,
  [SMALL_STATE(61)] = 3085,
  [SMALL_STATE(62)] = 3150,
  [SMALL_STATE(63)] = 3215,
  [SMALL_STATE(64)] = 3280,
  [SMALL_STATE(65)] = 3345,
  [SMALL_STATE(66)] = 3410,
  [SMALL_STATE(67)] = 3475,
  [SMALL_STATE(68)] = 3540,
  [SMALL_STATE(69)] = 3605,
  [SMALL_STATE(70)] = 3670,
  [SMALL_STATE(71)] = 3737,
  [SMALL_STATE(72)] = 3802,
  [SMALL_STATE(73)] = 3867,
  [SMALL_STATE(74)] = 3932,
  [SMALL_STATE(75)] = 3997,
  [SMALL_STATE(76)] = 4062,
  [SMALL_STATE(77)] = 4127,
  [SMALL_STATE(78)] = 4192,
  [SMALL_STATE(79)] = 4257,
  [SMALL_STATE(80)] = 4322,
  [SMALL_STATE(81)] = 4387,
  [SMALL_STATE(82)] = 4452,
  [SMALL_STATE(83)] = 4517,
  [SMALL_STATE(84)] = 4582,
  [SMALL_STATE(85)] = 4647,
  [SMALL_STATE(86)] = 4712,
  [SMALL_STATE(87)] = 4777,
  [SMALL_STATE(88)] = 4842,
  [SMALL_STATE(89)] = 4907,
  [SMALL_STATE(90)] = 4972,
  [SMALL_STATE(91)] = 5037,
  [SMALL_STATE(92)] = 5102,
  [SMALL_STATE(93)] = 5167,
  [SMALL_STATE(94)] = 5232,
  [SMALL_STATE(95)] = 5297,
  [SMALL_STATE(96)] = 5362,
  [SMALL_STATE(97)] = 5427,
  [SMALL_STATE(98)] = 5492,
  [SMALL_STATE(99)] = 5557,
  [SMALL_STATE(100)] = 5624,
  [SMALL_STATE(101)] = 5689,
  [SMALL_STATE(102)] = 5754,
  [SMALL_STATE(103)] = 5819,
  [SMALL_STATE(104)] = 5884,
  [SMALL_STATE(105)] = 5951,
  [SMALL_STATE(106)] = 6016,
  [SMALL_STATE(107)] = 6081,
  [SMALL_STATE(108)] = 6114,
  [SMALL_STATE(109)] = 6151,
  [SMALL_STATE(110)] = 6186,
  [SMALL_STATE(111)] = 6225,
  [SMALL_STATE(112)] = 6258,
  [SMALL_STATE(113)] = 6287,
  [SMALL_STATE(114)] = 6313,
  [SMALL_STATE(115)] = 6339,
  [SMALL_STATE(116)] = 6365,
  [SMALL_STATE(117)] = 6391,
  [SMALL_STATE(118)] = 6417,
  [SMALL_STATE(119)] = 6445,
  [SMALL_STATE(120)] = 6471,
  [SMALL_STATE(121)] = 6497,
  [SMALL_STATE(122)] = 6523,
  [SMALL_STATE(123)] = 6549,
  [SMALL_STATE(124)] = 6575,
  [SMALL_STATE(125)] = 6601,
  [SMALL_STATE(126)] = 6627,
  [SMALL_STATE(127)] = 6653,
  [SMALL_STATE(128)] = 6679,
  [SMALL_STATE(129)] = 6713,
  [SMALL_STATE(130)] = 6739,
  [SMALL_STATE(131)] = 6765,
  [SMALL_STATE(132)] = 6791,
  [SMALL_STATE(133)] = 6817,
  [SMALL_STATE(134)] = 6843,
  [SMALL_STATE(135)] = 6869,
  [SMALL_STATE(136)] = 6895,
  [SMALL_STATE(137)] = 6921,
  [SMALL_STATE(138)] = 6947,
  [SMALL_STATE(139)] = 6989,
  [SMALL_STATE(140)] = 7031,
  [SMALL_STATE(141)] = 7073,
  [SMALL_STATE(142)] = 7099,
  [SMALL_STATE(143)] = 7125,
  [SMALL_STATE(144)] = 7150,
  [SMALL_STATE(145)] = 7175,
  [SMALL_STATE(146)] = 7200,
  [SMALL_STATE(147)] = 7235,
  [SMALL_STATE(148)] = 7268,
  [SMALL_STATE(149)] = 7293,
  [SMALL_STATE(150)] = 7318,
  [SMALL_STATE(151)] = 7343,
  [SMALL_STATE(152)] = 7368,
  [SMALL_STATE(153)] = 7393,
  [SMALL_STATE(154)] = 7428,
  [SMALL_STATE(155)] = 7453,
  [SMALL_STATE(156)] = 7478,
  [SMALL_STATE(157)] = 7511,
  [SMALL_STATE(158)] = 7536,
  [SMALL_STATE(159)] = 7561,
  [SMALL_STATE(160)] = 7586,
  [SMALL_STATE(161)] = 7611,
  [SMALL_STATE(162)] = 7636,
  [SMALL_STATE(163)] = 7661,
  [SMALL_STATE(164)] = 7686,
  [SMALL_STATE(165)] = 7711,
  [SMALL_STATE(166)] = 7746,
  [SMALL_STATE(167)] = 7771,
  [SMALL_STATE(168)] = 7796,
  [SMALL_STATE(169)] = 7831,
  [SMALL_STATE(170)] = 7856,
  [SMALL_STATE(171)] = 7882,
  [SMALL_STATE(172)] = 7916,
  [SMALL_STATE(173)] = 7941,
  [SMALL_STATE(174)] = 7964,
  [SMALL_STATE(175)] = 7987,
  [SMALL_STATE(176)] = 8010,
  [SMALL_STATE(177)] = 8042,
  [SMALL_STATE(178)] = 8076,
  [SMALL_STATE(179)] = 8096,
  [SMALL_STATE(180)] = 8130,
  [SMALL_STATE(181)] = 8162,
  [SMALL_STATE(182)] = 8196,
  [SMALL_STATE(183)] = 8216,
  [SMALL_STATE(184)] = 8250,
  [SMALL_STATE(185)] = 8284,
  [SMALL_STATE(186)] = 8316,
  [SMALL_STATE(187)] = 8350,
  [SMALL_STATE(188)] = 8370,
  [SMALL_STATE(189)] = 8390,
  [SMALL_STATE(190)] = 8424,
  [SMALL_STATE(191)] = 8458,
  [SMALL_STATE(192)] = 8492,
  [SMALL_STATE(193)] = 8512,
  [SMALL_STATE(194)] = 8544,
  [SMALL_STATE(195)] = 8578,
  [SMALL_STATE(196)] = 8612,
  [SMALL_STATE(197)] = 8632,
  [SMALL_STATE(198)] = 8666,
  [SMALL_STATE(199)] = 8686,
  [SMALL_STATE(200)] = 8706,
  [SMALL_STATE(201)] = 8726,
  [SMALL_STATE(202)] = 8758,
  [SMALL_STATE(203)] = 8792,
  [SMALL_STATE(204)] = 8826,
  [SMALL_STATE(205)] = 8846,
  [SMALL_STATE(206)] = 8875,
  [SMALL_STATE(207)] = 8904,
  [SMALL_STATE(208)] = 8929,
  [SMALL_STATE(209)] = 8958,
  [SMALL_STATE(210)] = 8987,
  [SMALL_STATE(211)] = 9016,
  [SMALL_STATE(212)] = 9037,
  [SMALL_STATE(213)] = 9066,
  [SMALL_STATE(214)] = 9093,
  [SMALL_STATE(215)] = 9122,
  [SMALL_STATE(216)] = 9151,
  [SMALL_STATE(217)] = 9179,
  [SMALL_STATE(218)] = 9197,
  [SMALL_STATE(219)] = 9225,
  [SMALL_STATE(220)] = 9243,
  [SMALL_STATE(221)] = 9261,
  [SMALL_STATE(222)] = 9279,
  [SMALL_STATE(223)] = 9307,
  [SMALL_STATE(224)] = 9335,
  [SMALL_STATE(225)] = 9353,
  [SMALL_STATE(226)] = 9371,
  [SMALL_STATE(227)] = 9389,
  [SMALL_STATE(228)] = 9407,
  [SMALL_STATE(229)] = 9425,
  [SMALL_STATE(230)] = 9453,
  [SMALL_STATE(231)] = 9471,
  [SMALL_STATE(232)] = 9499,
  [SMALL_STATE(233)] = 9517,
  [SMALL_STATE(234)] = 9535,
  [SMALL_STATE(235)] = 9553,
  [SMALL_STATE(236)] = 9571,
  [SMALL_STATE(237)] = 9599,
  [SMALL_STATE(238)] = 9617,
  [SMALL_STATE(239)] = 9635,
  [SMALL_STATE(240)] = 9663,
  [SMALL_STATE(241)] = 9691,
  [SMALL_STATE(242)] = 9709,
  [SMALL_STATE(243)] = 9727,
  [SMALL_STATE(244)] = 9755,
  [SMALL_STATE(245)] = 9783,
  [SMALL_STATE(246)] = 9801,
  [SMALL_STATE(247)] = 9819,
  [SMALL_STATE(248)] = 9836,
  [SMALL_STATE(249)] = 9853,
  [SMALL_STATE(250)] = 9872,
  [SMALL_STATE(251)] = 9889,
  [SMALL_STATE(252)] = 9906,
  [SMALL_STATE(253)] = 9931,
  [SMALL_STATE(254)] = 9956,
  [SMALL_STATE(255)] = 9975,
  [SMALL_STATE(256)] = 9992,
  [SMALL_STATE(257)] = 10009,
  [SMALL_STATE(258)] = 10028,
  [SMALL_STATE(259)] = 10045,
  [SMALL_STATE(260)] = 10067,
  [SMALL_STATE(261)] = 10089,
  [SMALL_STATE(262)] = 10108,
  [SMALL_STATE(263)] = 10127,
  [SMALL_STATE(264)] = 10146,
  [SMALL_STATE(265)] = 10162,
  [SMALL_STATE(266)] = 10178,
  [SMALL_STATE(267)] = 10194,
  [SMALL_STATE(268)] = 10210,
  [SMALL_STATE(269)] = 10228,
  [SMALL_STATE(270)] = 10244,
  [SMALL_STATE(271)] = 10260,
  [SMALL_STATE(272)] = 10276,
  [SMALL_STATE(273)] = 10292,
  [SMALL_STATE(274)] = 10311,
  [SMALL_STATE(275)] = 10332,
  [SMALL_STATE(276)] = 10351,
  [SMALL_STATE(277)] = 10370,
  [SMALL_STATE(278)] = 10391,
  [SMALL_STATE(279)] = 10412,
  [SMALL_STATE(280)] = 10433,
  [SMALL_STATE(281)] = 10443,
  [SMALL_STATE(282)] = 10463,
  [SMALL_STATE(283)] = 10479,
  [SMALL_STATE(284)] = 10489,
  [SMALL_STATE(285)] = 10503,
  [SMALL_STATE(286)] = 10521,
  [SMALL_STATE(287)] = 10539,
  [SMALL_STATE(288)] = 10557,
  [SMALL_STATE(289)] = 10575,
  [SMALL_STATE(290)] = 10594,
  [SMALL_STATE(291)] = 10613,
  [SMALL_STATE(292)] = 10629,
  [SMALL_STATE(293)] = 10645,
  [SMALL_STATE(294)] = 10661,
  [SMALL_STATE(295)] = 10674,
  [SMALL_STATE(296)] = 10687,
  [SMALL_STATE(297)] = 10698,
  [SMALL_STATE(298)] = 10711,
  [SMALL_STATE(299)] = 10721,
  [SMALL_STATE(300)] = 10731,
  [SMALL_STATE(301)] = 10741,
  [SMALL_STATE(302)] = 10751,
  [SMALL_STATE(303)] = 10761,
  [SMALL_STATE(304)] = 10771,
  [SMALL_STATE(305)] = 10781,
  [SMALL_STATE(306)] = 10791,
  [SMALL_STATE(307)] = 10801,
  [SMALL_STATE(308)] = 10811,
  [SMALL_STATE(309)] = 10821,
  [SMALL_STATE(310)] = 10831,
  [SMALL_STATE(311)] = 10841,
  [SMALL_STATE(312)] = 10851,
  [SMALL_STATE(313)] = 10861,
  [SMALL_STATE(314)] = 10871,
  [SMALL_STATE(315)] = 10881,
  [SMALL_STATE(316)] = 10891,
  [SMALL_STATE(317)] = 10901,
  [SMALL_STATE(318)] = 10911,
  [SMALL_STATE(319)] = 10919,
  [SMALL_STATE(320)] = 10929,
  [SMALL_STATE(321)] = 10939,
  [SMALL_STATE(322)] = 10949,
  [SMALL_STATE(323)] = 10959,
  [SMALL_STATE(324)] = 10967,
  [SMALL_STATE(325)] = 10977,
  [SMALL_STATE(326)] = 10987,
  [SMALL_STATE(327)] = 10997,
  [SMALL_STATE(328)] = 11007,
  [SMALL_STATE(329)] = 11015,
  [SMALL_STATE(330)] = 11025,
  [SMALL_STATE(331)] = 11035,
  [SMALL_STATE(332)] = 11045,
  [SMALL_STATE(333)] = 11055,
  [SMALL_STATE(334)] = 11063,
  [SMALL_STATE(335)] = 11073,
  [SMALL_STATE(336)] = 11083,
  [SMALL_STATE(337)] = 11091,
  [SMALL_STATE(338)] = 11101,
  [SMALL_STATE(339)] = 11109,
  [SMALL_STATE(340)] = 11119,
  [SMALL_STATE(341)] = 11129,
  [SMALL_STATE(342)] = 11139,
  [SMALL_STATE(343)] = 11149,
  [SMALL_STATE(344)] = 11156,
  [SMALL_STATE(345)] = 11163,
  [SMALL_STATE(346)] = 11170,
  [SMALL_STATE(347)] = 11177,
  [SMALL_STATE(348)] = 11182,
  [SMALL_STATE(349)] = 11189,
  [SMALL_STATE(350)] = 11196,
  [SMALL_STATE(351)] = 11203,
  [SMALL_STATE(352)] = 11210,
  [SMALL_STATE(353)] = 11217,
  [SMALL_STATE(354)] = 11222,
  [SMALL_STATE(355)] = 11229,
  [SMALL_STATE(356)] = 11236,
  [SMALL_STATE(357)] = 11243,
  [SMALL_STATE(358)] = 11250,
  [SMALL_STATE(359)] = 11257,
  [SMALL_STATE(360)] = 11264,
  [SMALL_STATE(361)] = 11269,
  [SMALL_STATE(362)] = 11276,
  [SMALL_STATE(363)] = 11283,
  [SMALL_STATE(364)] = 11288,
  [SMALL_STATE(365)] = 11295,
  [SMALL_STATE(366)] = 11302,
  [SMALL_STATE(367)] = 11306,
  [SMALL_STATE(368)] = 11310,
  [SMALL_STATE(369)] = 11314,
  [SMALL_STATE(370)] = 11318,
  [SMALL_STATE(371)] = 11322,
  [SMALL_STATE(372)] = 11326,
  [SMALL_STATE(373)] = 11330,
  [SMALL_STATE(374)] = 11334,
  [SMALL_STATE(375)] = 11338,
  [SMALL_STATE(376)] = 11342,
  [SMALL_STATE(377)] = 11346,
  [SMALL_STATE(378)] = 11350,
  [SMALL_STATE(379)] = 11354,
  [SMALL_STATE(380)] = 11358,
  [SMALL_STATE(381)] = 11362,
  [SMALL_STATE(382)] = 11366,
  [SMALL_STATE(383)] = 11370,
  [SMALL_STATE(384)] = 11374,
  [SMALL_STATE(385)] = 11378,
  [SMALL_STATE(386)] = 11382,
  [SMALL_STATE(387)] = 11386,
  [SMALL_STATE(388)] = 11390,
  [SMALL_STATE(389)] = 11394,
  [SMALL_STATE(390)] = 11398,
  [SMALL_STATE(391)] = 11402,
  [SMALL_STATE(392)] = 11406,
  [SMALL_STATE(393)] = 11410,
  [SMALL_STATE(394)] = 11414,
  [SMALL_STATE(395)] = 11418,
  [SMALL_STATE(396)] = 11422,
  [SMALL_STATE(397)] = 11426,
  [SMALL_STATE(398)] = 11430,
  [SMALL_STATE(399)] = 11434,
  [SMALL_STATE(400)] = 11438,
  [SMALL_STATE(401)] = 11442,
  [SMALL_STATE(402)] = 11446,
  [SMALL_STATE(403)] = 11450,
  [SMALL_STATE(404)] = 11454,
  [SMALL_STATE(405)] = 11458,
  [SMALL_STATE(406)] = 11462,
  [SMALL_STATE(407)] = 11466,
  [SMALL_STATE(408)] = 11470,
  [SMALL_STATE(409)] = 11474,
  [SMALL_STATE(410)] = 11478,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(401),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_true, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_true, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_false, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_false, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(375),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(315),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(409),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(407),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(405),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(402),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(401),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(272),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(347),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(261),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(397),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(17),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(281),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternaryStatement, 5),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternaryStatement, 5),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classAssign, 5),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classAssign, 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pointer, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 5),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 3),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 5),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 3),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 4),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_accessor, 4),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_accessor, 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parathensisExpr, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parathensisExpr, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 6),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 6),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, .production_id = 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, .production_id = 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 7),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 7),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [316] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_classDecl_repeat1, 2),
  [378] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_classDecl_repeat1, 2), SHIFT_REPEAT(395),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classDecl_repeat1, 2), SHIFT_REPEAT(199),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_classDecl_repeat1, 2), SHIFT_REPEAT(355),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_classDecl_repeat1, 2), SHIFT_REPEAT(272),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_classDecl_repeat1, 2), SHIFT_REPEAT(347),
  [393] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_classDecl_repeat1, 2), SHIFT_REPEAT(263),
  [396] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_classDecl_repeat1, 2), SHIFT_REPEAT(403),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 5, .production_id = 3),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 5, .production_id = 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiLineComment, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiLineComment, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDecl, 5),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classDecl, 5),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declare, 5),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declare, 5),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_classDecl, 4),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_classDecl, 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 3, .production_id = 1),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 3, .production_id = 1),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 5),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 5),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 8),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 8),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__singleComment, 2),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__singleComment, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 7, .production_id = 5),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 7, .production_id = 5),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiLineComment, 2),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiLineComment, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if, 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declare, 4),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declare, 4),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 6, .production_id = 4),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 6, .production_id = 4),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [521] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor, 3),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constructor, 3),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_publicPrivate, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_publicPrivate, 1),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_declaration_repeat1, 2),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 7),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 7),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 5),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 5),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 6),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 6),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_op, 1),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_op, 1),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_and, 1),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_and, 1),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_or, 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_or, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_condition, 3),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [617] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [629] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [665] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [699] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_declaration_repeat1, 2), SHIFT_REPEAT(77),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [712] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiLineComment_repeat1, 2), SHIFT_REPEAT(304),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__multiLineComment_repeat1, 2),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [729] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(262),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [740] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [750] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [752] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [754] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__multiLineComment_repeat1, 2), SHIFT_REPEAT(316),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [765] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [793] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_declaration_repeat1, 2), SHIFT_REPEAT(74),
  [796] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 2),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 2),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [898] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Velva(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
