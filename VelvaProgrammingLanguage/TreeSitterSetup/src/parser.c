#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 213
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 73
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_for = 1,
  anon_sym_LPAREN = 2,
  anon_sym_SEMI = 3,
  anon_sym_RPAREN = 4,
  anon_sym_while = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_if = 8,
  anon_sym_auto = 9,
  anon_sym_EQ = 10,
  anon_sym_BANG = 11,
  anon_sym_DASH = 12,
  anon_sym_PLUS_PLUS = 13,
  anon_sym_DASH_DASH = 14,
  anon_sym_STAR = 15,
  anon_sym_SLASH = 16,
  anon_sym_PLUS = 17,
  anon_sym_int = 18,
  anon_sym_float = 19,
  anon_sym_bool = 20,
  anon_sym_string = 21,
  anon_sym_COMMA = 22,
  anon_sym_pure = 23,
  anon_sym_func = 24,
  anon_sym_LF = 25,
  anon_sym_else = 26,
  anon_sym_EQ_EQ = 27,
  anon_sym_BANG_EQ = 28,
  anon_sym_LT = 29,
  anon_sym_GT = 30,
  anon_sym_LT_EQ = 31,
  anon_sym_GT_EQ = 32,
  anon_sym_return = 33,
  anon_sym_DQUOTE = 34,
  anon_sym_BSLASH = 35,
  sym_anyVal = 36,
  sym_identifier = 37,
  sym_number = 38,
  anon_sym_true = 39,
  anon_sym_false = 40,
  sym_file = 41,
  sym__statement = 42,
  sym_for = 43,
  sym_while = 44,
  sym_block = 45,
  sym_if_statement = 46,
  sym_var_declaration = 47,
  sym_expression = 48,
  sym__unary_expression = 49,
  sym_not = 50,
  sym_negative = 51,
  sym_assignment = 52,
  sym_inc_dec = 53,
  sym_binary_expression = 54,
  sym_primitive_type = 55,
  sym_parameter = 56,
  sym_parameter_list = 57,
  sym_function_declare = 58,
  sym_func_call = 59,
  sym__if_continuation = 60,
  sym_else = 61,
  sym_else_if = 62,
  sym_condition = 63,
  sym_comparison_op = 64,
  sym_return_statement = 65,
  sym_string = 66,
  sym_escape = 67,
  sym_boolean = 68,
  aux_sym_file_repeat1 = 69,
  aux_sym_parameter_list_repeat1 = 70,
  aux_sym_func_call_repeat1 = 71,
  aux_sym_string_repeat1 = 72,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [anon_sym_BANG] = "!",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_int] = "int",
  [anon_sym_float] = "float",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_COMMA] = ",",
  [anon_sym_pure] = "pure",
  [anon_sym_func] = "func",
  [anon_sym_LF] = "\n",
  [anon_sym_else] = "else",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_return] = "return",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH] = "\\",
  [sym_anyVal] = "anyVal",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_file] = "file",
  [sym__statement] = "_statement",
  [sym_for] = "for",
  [sym_while] = "while",
  [sym_block] = "block",
  [sym_if_statement] = "if_statement",
  [sym_var_declaration] = "var_declaration",
  [sym_expression] = "expression",
  [sym__unary_expression] = "_unary_expression",
  [sym_not] = "not",
  [sym_negative] = "negative",
  [sym_assignment] = "assignment",
  [sym_inc_dec] = "inc_dec",
  [sym_binary_expression] = "binary_expression",
  [sym_primitive_type] = "primitive_type",
  [sym_parameter] = "parameter",
  [sym_parameter_list] = "parameter_list",
  [sym_function_declare] = "function_declare",
  [sym_func_call] = "func_call",
  [sym__if_continuation] = "_if_continuation",
  [sym_else] = "else",
  [sym_else_if] = "else_if",
  [sym_condition] = "condition",
  [sym_comparison_op] = "comparison_op",
  [sym_return_statement] = "return_statement",
  [sym_string] = "string",
  [sym_escape] = "escape",
  [sym_boolean] = "boolean",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_func_call_repeat1] = "func_call_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_pure] = anon_sym_pure,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [sym_anyVal] = sym_anyVal,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_file] = sym_file,
  [sym__statement] = sym__statement,
  [sym_for] = sym_for,
  [sym_while] = sym_while,
  [sym_block] = sym_block,
  [sym_if_statement] = sym_if_statement,
  [sym_var_declaration] = sym_var_declaration,
  [sym_expression] = sym_expression,
  [sym__unary_expression] = sym__unary_expression,
  [sym_not] = sym_not,
  [sym_negative] = sym_negative,
  [sym_assignment] = sym_assignment,
  [sym_inc_dec] = sym_inc_dec,
  [sym_binary_expression] = sym_binary_expression,
  [sym_primitive_type] = sym_primitive_type,
  [sym_parameter] = sym_parameter,
  [sym_parameter_list] = sym_parameter_list,
  [sym_function_declare] = sym_function_declare,
  [sym_func_call] = sym_func_call,
  [sym__if_continuation] = sym__if_continuation,
  [sym_else] = sym_else,
  [sym_else_if] = sym_else_if,
  [sym_condition] = sym_condition,
  [sym_comparison_op] = sym_comparison_op,
  [sym_return_statement] = sym_return_statement,
  [sym_string] = sym_string,
  [sym_escape] = sym_escape,
  [sym_boolean] = sym_boolean,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_func_call_repeat1] = aux_sym_func_call_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
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
  [anon_sym_GT] = {
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
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_anyVal] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
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
  [sym_inc_dec] = {
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
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_func_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 1},
  [1] =
    {field_name, 1},
    {field_type, 0},
    {field_value, 3},
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 5,
  [8] = 6,
  [9] = 5,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 6,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 5,
  [19] = 6,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 22,
  [26] = 24,
  [27] = 23,
  [28] = 28,
  [29] = 28,
  [30] = 2,
  [31] = 31,
  [32] = 3,
  [33] = 13,
  [34] = 34,
  [35] = 10,
  [36] = 11,
  [37] = 37,
  [38] = 38,
  [39] = 20,
  [40] = 12,
  [41] = 4,
  [42] = 38,
  [43] = 34,
  [44] = 21,
  [45] = 31,
  [46] = 37,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 50,
  [54] = 54,
  [55] = 49,
  [56] = 52,
  [57] = 54,
  [58] = 51,
  [59] = 59,
  [60] = 59,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 63,
  [67] = 67,
  [68] = 67,
  [69] = 61,
  [70] = 70,
  [71] = 59,
  [72] = 65,
  [73] = 59,
  [74] = 61,
  [75] = 64,
  [76] = 76,
  [77] = 62,
  [78] = 67,
  [79] = 61,
  [80] = 59,
  [81] = 61,
  [82] = 59,
  [83] = 61,
  [84] = 62,
  [85] = 85,
  [86] = 76,
  [87] = 87,
  [88] = 88,
  [89] = 65,
  [90] = 90,
  [91] = 22,
  [92] = 92,
  [93] = 88,
  [94] = 64,
  [95] = 92,
  [96] = 96,
  [97] = 23,
  [98] = 98,
  [99] = 99,
  [100] = 98,
  [101] = 101,
  [102] = 85,
  [103] = 65,
  [104] = 90,
  [105] = 24,
  [106] = 96,
  [107] = 64,
  [108] = 87,
  [109] = 99,
  [110] = 101,
  [111] = 28,
  [112] = 112,
  [113] = 112,
  [114] = 23,
  [115] = 38,
  [116] = 22,
  [117] = 24,
  [118] = 23,
  [119] = 22,
  [120] = 24,
  [121] = 23,
  [122] = 22,
  [123] = 24,
  [124] = 28,
  [125] = 28,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 128,
  [130] = 130,
  [131] = 28,
  [132] = 127,
  [133] = 133,
  [134] = 134,
  [135] = 133,
  [136] = 38,
  [137] = 137,
  [138] = 138,
  [139] = 37,
  [140] = 38,
  [141] = 38,
  [142] = 31,
  [143] = 138,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 146,
  [148] = 145,
  [149] = 144,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 150,
  [155] = 155,
  [156] = 152,
  [157] = 157,
  [158] = 158,
  [159] = 157,
  [160] = 160,
  [161] = 155,
  [162] = 158,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 165,
  [170] = 170,
  [171] = 171,
  [172] = 170,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 168,
  [177] = 174,
  [178] = 175,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 180,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 181,
  [194] = 192,
  [195] = 182,
  [196] = 184,
  [197] = 197,
  [198] = 198,
  [199] = 191,
  [200] = 187,
  [201] = 191,
  [202] = 202,
  [203] = 189,
  [204] = 204,
  [205] = 205,
  [206] = 202,
  [207] = 180,
  [208] = 186,
  [209] = 205,
  [210] = 197,
  [211] = 198,
  [212] = 204,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'p') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == 'w') ADVANCE(161);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == '+') ADVANCE(6);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '"') ADVANCE(103);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '+') ADVANCE(6);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(151);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(60);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(61);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(91);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 11:
      if (lookahead == 'g') ADVANCE(77);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 29:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(29)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 32:
      if (eof) ADVANCE(34);
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(40);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '+') ADVANCE(66);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == ';') ADVANCE(38);
      if (lookahead == '<') ADVANCE(93);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(95);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(174);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'p') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == 'w') ADVANCE(161);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '+') ADVANCE(4);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '=') ADVANCE(53);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(174);
      if (lookahead == 'e') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'p') ADVANCE(189);
      if (lookahead == 'r') ADVANCE(158);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == 'w') ADVANCE(161);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_for);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_for);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_while);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_while);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_if);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_if);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_auto);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_auto);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_auto);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(89);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(91);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_int);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_int);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_float);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_float);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_string);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_pure);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_pure);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_func);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_func);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_else);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_return);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_return);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == '!') ADVANCE(112);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '<') ADVANCE(94);
      if (lookahead == '=') ADVANCE(113);
      if (lookahead == '>') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == ';') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 's') ADVANCE(140);
      if (lookahead == 'w') ADVANCE(121);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 's') ADVANCE(140);
      if (lookahead == 'w') ADVANCE(121);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == '=') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'a') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'c') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'e') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'e') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'e') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'f') ADVANCE(49);
      if (lookahead == 'n') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'g') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'h') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'i') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'i') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'l') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 'u') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'l') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'n') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'n') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'n') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'o') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'o') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'o') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'o') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'r') ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'r') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'r') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'r') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 't') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 't') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 't') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 't') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 't') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'u') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'u') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead == 'u') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_anyVal);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_anyVal);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_anyVal);
      if (eof) ADVANCE(34);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(59);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(105);
      if (lookahead == 'a') ADVANCE(143);
      if (lookahead == 'b') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'p') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(118);
      if (lookahead == 's') ADVANCE(140);
      if (lookahead == 'w') ADVANCE(121);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(168);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 'u') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(48);
      if (lookahead == 'n') ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 'u') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(194);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 32},
  [19] = {.lex_state = 32},
  [20] = {.lex_state = 32},
  [21] = {.lex_state = 32},
  [22] = {.lex_state = 110},
  [23] = {.lex_state = 148},
  [24] = {.lex_state = 148},
  [25] = {.lex_state = 148},
  [26] = {.lex_state = 110},
  [27] = {.lex_state = 110},
  [28] = {.lex_state = 110},
  [29] = {.lex_state = 148},
  [30] = {.lex_state = 32},
  [31] = {.lex_state = 32},
  [32] = {.lex_state = 32},
  [33] = {.lex_state = 32},
  [34] = {.lex_state = 33},
  [35] = {.lex_state = 32},
  [36] = {.lex_state = 32},
  [37] = {.lex_state = 32},
  [38] = {.lex_state = 32},
  [39] = {.lex_state = 32},
  [40] = {.lex_state = 32},
  [41] = {.lex_state = 32},
  [42] = {.lex_state = 32},
  [43] = {.lex_state = 33},
  [44] = {.lex_state = 32},
  [45] = {.lex_state = 32},
  [46] = {.lex_state = 32},
  [47] = {.lex_state = 32},
  [48] = {.lex_state = 32},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 33},
  [65] = {.lex_state = 33},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 33},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 33},
  [76] = {.lex_state = 32},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 32},
  [86] = {.lex_state = 32},
  [87] = {.lex_state = 32},
  [88] = {.lex_state = 32},
  [89] = {.lex_state = 32},
  [90] = {.lex_state = 32},
  [91] = {.lex_state = 106},
  [92] = {.lex_state = 32},
  [93] = {.lex_state = 32},
  [94] = {.lex_state = 32},
  [95] = {.lex_state = 32},
  [96] = {.lex_state = 32},
  [97] = {.lex_state = 106},
  [98] = {.lex_state = 32},
  [99] = {.lex_state = 32},
  [100] = {.lex_state = 32},
  [101] = {.lex_state = 32},
  [102] = {.lex_state = 32},
  [103] = {.lex_state = 32},
  [104] = {.lex_state = 32},
  [105] = {.lex_state = 106},
  [106] = {.lex_state = 32},
  [107] = {.lex_state = 32},
  [108] = {.lex_state = 32},
  [109] = {.lex_state = 32},
  [110] = {.lex_state = 32},
  [111] = {.lex_state = 106},
  [112] = {.lex_state = 32},
  [113] = {.lex_state = 32},
  [114] = {.lex_state = 107},
  [115] = {.lex_state = 32},
  [116] = {.lex_state = 107},
  [117] = {.lex_state = 107},
  [118] = {.lex_state = 109},
  [119] = {.lex_state = 109},
  [120] = {.lex_state = 109},
  [121] = {.lex_state = 108},
  [122] = {.lex_state = 108},
  [123] = {.lex_state = 108},
  [124] = {.lex_state = 107},
  [125] = {.lex_state = 108},
  [126] = {.lex_state = 3},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 109},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 3},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 33},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 33},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 33},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 29},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 33},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 29},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 33},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 33},
  [181] = {.lex_state = 29},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 29},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 29},
  [188] = {.lex_state = 33},
  [189] = {.lex_state = 29},
  [190] = {.lex_state = 29},
  [191] = {.lex_state = 29},
  [192] = {.lex_state = 29},
  [193] = {.lex_state = 29},
  [194] = {.lex_state = 29},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 29},
  [200] = {.lex_state = 29},
  [201] = {.lex_state = 29},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 29},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 33},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_pure] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(183),
    [sym__statement] = STATE(15),
    [sym_for] = STATE(15),
    [sym_while] = STATE(15),
    [sym_block] = STATE(15),
    [sym_if_statement] = STATE(15),
    [sym_var_declaration] = STATE(15),
    [sym_assignment] = STATE(15),
    [sym_inc_dec] = STATE(85),
    [sym_primitive_type] = STATE(194),
    [sym_function_declare] = STATE(15),
    [sym_func_call] = STATE(15),
    [sym_return_statement] = STATE(15),
    [aux_sym_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_for] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_auto] = ACTIONS(13),
    [anon_sym_int] = ACTIONS(15),
    [anon_sym_float] = ACTIONS(15),
    [anon_sym_bool] = ACTIONS(15),
    [anon_sym_string] = ACTIONS(15),
    [anon_sym_pure] = ACTIONS(17),
    [anon_sym_func] = ACTIONS(19),
    [anon_sym_return] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(27), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_return,
      sym_identifier,
  [35] = 2,
    ACTIONS(25), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(27), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_return,
      sym_identifier,
  [67] = 2,
    ACTIONS(31), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(33), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_return,
      sym_identifier,
  [99] = 14,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      anon_sym_auto,
    ACTIONS(47), 1,
      anon_sym_pure,
    ACTIONS(49), 1,
      anon_sym_func,
    ACTIONS(51), 1,
      anon_sym_return,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(102), 1,
      sym_inc_dec,
    STATE(192), 1,
      sym_primitive_type,
    ACTIONS(15), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
    STATE(19), 11,
      sym__statement,
      sym_for,
      sym_while,
      sym_block,
      sym_if_statement,
      sym_var_declaration,
      sym_assignment,
      sym_function_declare,
      sym_func_call,
      sym_return_statement,
      aux_sym_file_repeat1,
  [155] = 14,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      anon_sym_auto,
    ACTIONS(47), 1,
      anon_sym_pure,
    ACTIONS(49), 1,
      anon_sym_func,
    ACTIONS(51), 1,
      anon_sym_return,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      sym_inc_dec,
    STATE(192), 1,
      sym_primitive_type,
    ACTIONS(15), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
    STATE(17), 11,
      sym__statement,
      sym_for,
      sym_while,
      sym_block,
      sym_if_statement,
      sym_var_declaration,
      sym_assignment,
      sym_function_declare,
      sym_func_call,
      sym_return_statement,
      aux_sym_file_repeat1,
  [211] = 14,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      anon_sym_auto,
    ACTIONS(47), 1,
      anon_sym_pure,
    ACTIONS(49), 1,
      anon_sym_func,
    ACTIONS(51), 1,
      anon_sym_return,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      sym_inc_dec,
    STATE(192), 1,
      sym_primitive_type,
    ACTIONS(15), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
    STATE(6), 11,
      sym__statement,
      sym_for,
      sym_while,
      sym_block,
      sym_if_statement,
      sym_var_declaration,
      sym_assignment,
      sym_function_declare,
      sym_func_call,
      sym_return_statement,
      aux_sym_file_repeat1,
  [267] = 14,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      anon_sym_auto,
    ACTIONS(47), 1,
      anon_sym_pure,
    ACTIONS(49), 1,
      anon_sym_func,
    ACTIONS(51), 1,
      anon_sym_return,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      sym_inc_dec,
    STATE(192), 1,
      sym_primitive_type,
    ACTIONS(15), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
    STATE(17), 11,
      sym__statement,
      sym_for,
      sym_while,
      sym_block,
      sym_if_statement,
      sym_var_declaration,
      sym_assignment,
      sym_function_declare,
      sym_func_call,
      sym_return_statement,
      aux_sym_file_repeat1,
  [323] = 14,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      anon_sym_auto,
    ACTIONS(47), 1,
      anon_sym_pure,
    ACTIONS(49), 1,
      anon_sym_func,
    ACTIONS(51), 1,
      anon_sym_return,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      sym_inc_dec,
    STATE(192), 1,
      sym_primitive_type,
    ACTIONS(15), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
    STATE(8), 11,
      sym__statement,
      sym_for,
      sym_while,
      sym_block,
      sym_if_statement,
      sym_var_declaration,
      sym_assignment,
      sym_function_declare,
      sym_func_call,
      sym_return_statement,
      aux_sym_file_repeat1,
  [379] = 2,
    ACTIONS(63), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(65), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_return,
      sym_identifier,
  [411] = 2,
    ACTIONS(67), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(69), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_return,
      sym_identifier,
  [443] = 2,
    ACTIONS(71), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(73), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_return,
      sym_identifier,
  [475] = 2,
    ACTIONS(75), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(77), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_return,
      sym_identifier,
  [507] = 14,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      anon_sym_auto,
    ACTIONS(47), 1,
      anon_sym_pure,
    ACTIONS(49), 1,
      anon_sym_func,
    ACTIONS(51), 1,
      anon_sym_return,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      sym_inc_dec,
    STATE(192), 1,
      sym_primitive_type,
    ACTIONS(15), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
    STATE(17), 11,
      sym__statement,
      sym_for,
      sym_while,
      sym_block,
      sym_if_statement,
      sym_var_declaration,
      sym_assignment,
      sym_function_declare,
      sym_func_call,
      sym_return_statement,
      aux_sym_file_repeat1,
  [563] = 14,
    ACTIONS(5), 1,
      anon_sym_for,
    ACTIONS(7), 1,
      anon_sym_while,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_auto,
    ACTIONS(17), 1,
      anon_sym_pure,
    ACTIONS(19), 1,
      anon_sym_func,
    ACTIONS(21), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(85), 1,
      sym_inc_dec,
    STATE(194), 1,
      sym_primitive_type,
    ACTIONS(15), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
    STATE(16), 11,
      sym__statement,
      sym_for,
      sym_while,
      sym_block,
      sym_if_statement,
      sym_var_declaration,
      sym_assignment,
      sym_function_declare,
      sym_func_call,
      sym_return_statement,
      aux_sym_file_repeat1,
  [619] = 14,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(85), 1,
      anon_sym_for,
    ACTIONS(88), 1,
      anon_sym_while,
    ACTIONS(91), 1,
      anon_sym_LBRACE,
    ACTIONS(94), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      anon_sym_auto,
    ACTIONS(103), 1,
      anon_sym_pure,
    ACTIONS(106), 1,
      anon_sym_func,
    ACTIONS(109), 1,
      anon_sym_return,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(85), 1,
      sym_inc_dec,
    STATE(194), 1,
      sym_primitive_type,
    ACTIONS(100), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
    STATE(16), 11,
      sym__statement,
      sym_for,
      sym_while,
      sym_block,
      sym_if_statement,
      sym_var_declaration,
      sym_assignment,
      sym_function_declare,
      sym_func_call,
      sym_return_statement,
      aux_sym_file_repeat1,
  [675] = 14,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      anon_sym_for,
    ACTIONS(118), 1,
      anon_sym_while,
    ACTIONS(121), 1,
      anon_sym_LBRACE,
    ACTIONS(124), 1,
      anon_sym_if,
    ACTIONS(127), 1,
      anon_sym_auto,
    ACTIONS(130), 1,
      anon_sym_pure,
    ACTIONS(133), 1,
      anon_sym_func,
    ACTIONS(136), 1,
      anon_sym_return,
    ACTIONS(139), 1,
      sym_identifier,
    STATE(102), 1,
      sym_inc_dec,
    STATE(192), 1,
      sym_primitive_type,
    ACTIONS(100), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
    STATE(17), 11,
      sym__statement,
      sym_for,
      sym_while,
      sym_block,
      sym_if_statement,
      sym_var_declaration,
      sym_assignment,
      sym_function_declare,
      sym_func_call,
      sym_return_statement,
      aux_sym_file_repeat1,
  [731] = 14,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      anon_sym_auto,
    ACTIONS(47), 1,
      anon_sym_pure,
    ACTIONS(49), 1,
      anon_sym_func,
    ACTIONS(51), 1,
      anon_sym_return,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      sym_inc_dec,
    STATE(192), 1,
      sym_primitive_type,
    ACTIONS(15), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
    STATE(14), 11,
      sym__statement,
      sym_for,
      sym_while,
      sym_block,
      sym_if_statement,
      sym_var_declaration,
      sym_assignment,
      sym_function_declare,
      sym_func_call,
      sym_return_statement,
      aux_sym_file_repeat1,
  [787] = 14,
    ACTIONS(35), 1,
      anon_sym_for,
    ACTIONS(37), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(43), 1,
      anon_sym_if,
    ACTIONS(45), 1,
      anon_sym_auto,
    ACTIONS(47), 1,
      anon_sym_pure,
    ACTIONS(49), 1,
      anon_sym_func,
    ACTIONS(51), 1,
      anon_sym_return,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(102), 1,
      sym_inc_dec,
    STATE(192), 1,
      sym_primitive_type,
    ACTIONS(15), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
    STATE(17), 11,
      sym__statement,
      sym_for,
      sym_while,
      sym_block,
      sym_if_statement,
      sym_var_declaration,
      sym_assignment,
      sym_function_declare,
      sym_func_call,
      sym_return_statement,
      aux_sym_file_repeat1,
  [843] = 2,
    ACTIONS(146), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(148), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_return,
      sym_identifier,
  [875] = 2,
    ACTIONS(150), 13,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(152), 14,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_return,
      sym_identifier,
  [907] = 4,
    ACTIONS(156), 1,
      anon_sym_BSLASH,
    ACTIONS(158), 1,
      sym_anyVal,
    STATE(27), 2,
      sym_escape,
      aux_sym_string_repeat1,
    ACTIONS(154), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [938] = 5,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 1,
      anon_sym_BSLASH,
    ACTIONS(167), 1,
      sym_anyVal,
    STATE(23), 2,
      sym_escape,
      aux_sym_string_repeat1,
    ACTIONS(162), 17,
      anon_sym_for,
      anon_sym_while,
      anon_sym_LBRACE,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [971] = 5,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    ACTIONS(174), 1,
      anon_sym_BSLASH,
    ACTIONS(176), 1,
      sym_anyVal,
    STATE(25), 2,
      sym_escape,
      aux_sym_string_repeat1,
    ACTIONS(172), 17,
      anon_sym_for,
      anon_sym_while,
      anon_sym_LBRACE,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1004] = 5,
    ACTIONS(174), 1,
      anon_sym_BSLASH,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      sym_anyVal,
    STATE(23), 2,
      sym_escape,
      aux_sym_string_repeat1,
    ACTIONS(154), 17,
      anon_sym_for,
      anon_sym_while,
      anon_sym_LBRACE,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1037] = 4,
    ACTIONS(156), 1,
      anon_sym_BSLASH,
    ACTIONS(182), 1,
      sym_anyVal,
    STATE(22), 2,
      sym_escape,
      aux_sym_string_repeat1,
    ACTIONS(172), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1068] = 4,
    ACTIONS(184), 1,
      anon_sym_BSLASH,
    ACTIONS(187), 1,
      sym_anyVal,
    STATE(27), 2,
      sym_escape,
      aux_sym_string_repeat1,
    ACTIONS(162), 18,
      anon_sym_for,
      anon_sym_while,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1099] = 1,
    ACTIONS(190), 20,
      anon_sym_for,
      anon_sym_while,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      anon_sym_BSLASH,
      sym_anyVal,
      sym_identifier,
  [1122] = 2,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 19,
      anon_sym_for,
      anon_sym_while,
      anon_sym_LBRACE,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      anon_sym_BSLASH,
      sym_anyVal,
      sym_identifier,
  [1147] = 3,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(27), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1173] = 4,
    ACTIONS(196), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    ACTIONS(200), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(202), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(198), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1200] = 2,
    ACTIONS(25), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(27), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1223] = 2,
    ACTIONS(75), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(77), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1246] = 4,
    ACTIONS(208), 1,
      anon_sym_else,
    ACTIONS(204), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    STATE(92), 3,
      sym__if_continuation,
      sym_else,
      sym_else_if,
    ACTIONS(206), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1273] = 2,
    ACTIONS(63), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(65), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1296] = 2,
    ACTIONS(67), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(69), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1319] = 4,
    ACTIONS(212), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(216), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(210), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1346] = 3,
    ACTIONS(216), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(146), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(148), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1371] = 2,
    ACTIONS(146), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(148), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1394] = 2,
    ACTIONS(71), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(73), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1417] = 2,
    ACTIONS(31), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(33), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1440] = 3,
    ACTIONS(202), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(146), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(148), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1465] = 4,
    ACTIONS(218), 1,
      anon_sym_else,
    ACTIONS(204), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    STATE(95), 3,
      sym__if_continuation,
      sym_else,
      sym_else_if,
    ACTIONS(206), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1492] = 2,
    ACTIONS(150), 6,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
    ACTIONS(152), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1515] = 4,
    ACTIONS(196), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(216), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(198), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1542] = 4,
    ACTIONS(200), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(202), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    ACTIONS(210), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1569] = 4,
    ACTIONS(214), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(216), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(222), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(220), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1596] = 4,
    ACTIONS(200), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(202), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(222), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    ACTIONS(220), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [1623] = 9,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(230), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    STATE(128), 1,
      sym_expression,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [1658] = 9,
    ACTIONS(238), 1,
      anon_sym_BANG,
    ACTIONS(240), 1,
      anon_sym_DASH,
    ACTIONS(242), 1,
      anon_sym_LF,
    ACTIONS(244), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(248), 1,
      sym_number,
    STATE(47), 1,
      sym_expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [1693] = 9,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_expression,
    STATE(182), 1,
      sym_condition,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [1728] = 9,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      sym_expression,
    STATE(186), 1,
      sym_condition,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [1763] = 9,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_BANG,
    ACTIONS(256), 1,
      anon_sym_LF,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      sym_number,
    STATE(48), 1,
      sym_expression,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [1798] = 9,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_expression,
    STATE(184), 1,
      sym_condition,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [1833] = 9,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(230), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      sym_expression,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [1868] = 9,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      sym_expression,
    STATE(208), 1,
      sym_condition,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [1903] = 9,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_expression,
    STATE(196), 1,
      sym_condition,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [1938] = 9,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    STATE(112), 1,
      sym_expression,
    STATE(195), 1,
      sym_condition,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [1973] = 8,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_expression,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2005] = 8,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_expression,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2037] = 8,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    STATE(42), 1,
      sym_expression,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2069] = 8,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      sym_expression,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2101] = 8,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      sym_expression,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2133] = 2,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    ACTIONS(272), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_else,
      anon_sym_return,
      sym_identifier,
  [2153] = 2,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    ACTIONS(276), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_else,
      anon_sym_return,
      sym_identifier,
  [2173] = 8,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      sym_expression,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2205] = 8,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    STATE(142), 1,
      sym_expression,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2237] = 8,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym_expression,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2269] = 8,
    ACTIONS(240), 1,
      anon_sym_DASH,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(278), 1,
      anon_sym_BANG,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_number,
    STATE(38), 1,
      sym_expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2301] = 8,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(230), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    STATE(134), 1,
      sym_expression,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2333] = 8,
    ACTIONS(240), 1,
      anon_sym_DASH,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(278), 1,
      anon_sym_BANG,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_number,
    STATE(39), 1,
      sym_expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2365] = 2,
    ACTIONS(274), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(276), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_else,
      anon_sym_return,
      sym_identifier,
  [2385] = 8,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_expression,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2417] = 8,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(252), 1,
      anon_sym_DQUOTE,
    STATE(115), 1,
      sym_expression,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2449] = 2,
    ACTIONS(270), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(272), 13,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_else,
      anon_sym_return,
      sym_identifier,
  [2469] = 2,
    ACTIONS(284), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
    ACTIONS(286), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [2489] = 8,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(266), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      sym_expression,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2521] = 8,
    ACTIONS(240), 1,
      anon_sym_DASH,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(278), 1,
      anon_sym_BANG,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_number,
    STATE(45), 1,
      sym_expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2553] = 8,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(230), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    STATE(136), 1,
      sym_expression,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2585] = 8,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(230), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    STATE(20), 1,
      sym_expression,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2617] = 8,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(140), 1,
      sym_expression,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2649] = 8,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_expression,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2681] = 8,
    ACTIONS(226), 1,
      anon_sym_BANG,
    ACTIONS(228), 1,
      anon_sym_DASH,
    ACTIONS(232), 1,
      sym_identifier,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(264), 1,
      anon_sym_DQUOTE,
    STATE(141), 1,
      sym_expression,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(3), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2713] = 8,
    ACTIONS(240), 1,
      anon_sym_DASH,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(278), 1,
      anon_sym_BANG,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_number,
    STATE(37), 1,
      sym_expression,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(32), 7,
      sym__unary_expression,
      sym_not,
      sym_negative,
      sym_binary_expression,
      sym_func_call,
      sym_string,
      sym_boolean,
  [2745] = 2,
    ACTIONS(288), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
    ACTIONS(290), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [2765] = 2,
    ACTIONS(284), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(286), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [2784] = 2,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    ACTIONS(294), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [2803] = 2,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    ACTIONS(298), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [2822] = 2,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    ACTIONS(276), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [2841] = 2,
    ACTIONS(222), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    ACTIONS(220), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [2860] = 4,
    ACTIONS(300), 1,
      anon_sym_BSLASH,
    ACTIONS(302), 1,
      sym_anyVal,
    STATE(97), 2,
      sym_escape,
      aux_sym_string_repeat1,
    ACTIONS(154), 10,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2883] = 2,
    ACTIONS(304), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    ACTIONS(306), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [2902] = 2,
    ACTIONS(296), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(298), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [2921] = 2,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    ACTIONS(272), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [2940] = 2,
    ACTIONS(304), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(306), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [2959] = 2,
    ACTIONS(310), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(308), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [2978] = 4,
    ACTIONS(312), 1,
      anon_sym_BSLASH,
    ACTIONS(315), 1,
      sym_anyVal,
    STATE(97), 2,
      sym_escape,
      aux_sym_string_repeat1,
    ACTIONS(162), 10,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3001] = 2,
    ACTIONS(318), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    ACTIONS(320), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [3020] = 2,
    ACTIONS(322), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    ACTIONS(324), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [3039] = 2,
    ACTIONS(318), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(320), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [3058] = 2,
    ACTIONS(326), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    ACTIONS(328), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [3077] = 2,
    ACTIONS(288), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(290), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [3096] = 2,
    ACTIONS(274), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(276), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [3115] = 2,
    ACTIONS(222), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(220), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [3134] = 4,
    ACTIONS(300), 1,
      anon_sym_BSLASH,
    ACTIONS(330), 1,
      sym_anyVal,
    STATE(91), 2,
      sym_escape,
      aux_sym_string_repeat1,
    ACTIONS(172), 10,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3157] = 2,
    ACTIONS(310), 2,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
    ACTIONS(308), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [3176] = 2,
    ACTIONS(270), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(272), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [3195] = 2,
    ACTIONS(292), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(294), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [3214] = 2,
    ACTIONS(322), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(324), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [3233] = 2,
    ACTIONS(326), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(328), 12,
      anon_sym_for,
      anon_sym_while,
      anon_sym_if,
      anon_sym_auto,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_pure,
      anon_sym_func,
      anon_sym_return,
      sym_identifier,
  [3252] = 1,
    ACTIONS(190), 12,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_BSLASH,
      sym_anyVal,
  [3267] = 5,
    STATE(63), 1,
      sym_comparison_op,
    ACTIONS(332), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(334), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3289] = 5,
    STATE(66), 1,
      sym_comparison_op,
    ACTIONS(332), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(334), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(338), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(336), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3311] = 4,
    ACTIONS(340), 1,
      anon_sym_BSLASH,
    ACTIONS(343), 1,
      sym_anyVal,
    STATE(114), 2,
      sym_escape,
      aux_sym_string_repeat1,
    ACTIONS(162), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_COMMA,
  [3330] = 3,
    ACTIONS(148), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(334), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(146), 6,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [3347] = 4,
    ACTIONS(346), 1,
      anon_sym_BSLASH,
    ACTIONS(348), 1,
      sym_anyVal,
    STATE(114), 2,
      sym_escape,
      aux_sym_string_repeat1,
    ACTIONS(154), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_COMMA,
  [3366] = 4,
    ACTIONS(346), 1,
      anon_sym_BSLASH,
    ACTIONS(350), 1,
      sym_anyVal,
    STATE(116), 2,
      sym_escape,
      aux_sym_string_repeat1,
    ACTIONS(172), 6,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_COMMA,
  [3385] = 4,
    ACTIONS(352), 1,
      anon_sym_BSLASH,
    ACTIONS(355), 1,
      sym_anyVal,
    STATE(118), 2,
      sym_escape,
      aux_sym_string_repeat1,
    ACTIONS(162), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [3403] = 4,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    ACTIONS(360), 1,
      sym_anyVal,
    STATE(118), 2,
      sym_escape,
      aux_sym_string_repeat1,
    ACTIONS(154), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [3421] = 4,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    ACTIONS(362), 1,
      sym_anyVal,
    STATE(119), 2,
      sym_escape,
      aux_sym_string_repeat1,
    ACTIONS(172), 5,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [3439] = 4,
    ACTIONS(364), 1,
      anon_sym_BSLASH,
    ACTIONS(367), 1,
      sym_anyVal,
    STATE(121), 2,
      sym_escape,
      aux_sym_string_repeat1,
    ACTIONS(162), 5,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [3457] = 4,
    ACTIONS(370), 1,
      anon_sym_BSLASH,
    ACTIONS(372), 1,
      sym_anyVal,
    STATE(121), 2,
      sym_escape,
      aux_sym_string_repeat1,
    ACTIONS(154), 5,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [3475] = 4,
    ACTIONS(370), 1,
      anon_sym_BSLASH,
    ACTIONS(374), 1,
      sym_anyVal,
    STATE(122), 2,
      sym_escape,
      aux_sym_string_repeat1,
    ACTIONS(172), 5,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
  [3493] = 1,
    ACTIONS(190), 8,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_COMMA,
      anon_sym_BSLASH,
      sym_anyVal,
  [3504] = 1,
    ACTIONS(190), 7,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_BSLASH,
      sym_anyVal,
  [3514] = 4,
    ACTIONS(376), 1,
      anon_sym_RPAREN,
    STATE(164), 1,
      sym_parameter,
    STATE(185), 1,
      sym_primitive_type,
    ACTIONS(378), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
  [3530] = 4,
    ACTIONS(380), 1,
      anon_sym_auto,
    STATE(199), 1,
      sym_primitive_type,
    STATE(210), 1,
      sym_var_declaration,
    ACTIONS(378), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
  [3546] = 5,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_func_call_repeat1,
    ACTIONS(384), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(386), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3564] = 5,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      anon_sym_RPAREN,
    STATE(155), 1,
      aux_sym_func_call_repeat1,
    ACTIONS(384), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(386), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3582] = 2,
    ACTIONS(392), 3,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      sym_number,
    ACTIONS(394), 4,
      anon_sym_DASH,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [3594] = 1,
    ACTIONS(190), 7,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_BSLASH,
      sym_anyVal,
  [3604] = 4,
    ACTIONS(380), 1,
      anon_sym_auto,
    STATE(197), 1,
      sym_var_declaration,
    STATE(199), 1,
      sym_primitive_type,
    ACTIONS(378), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
  [3620] = 3,
    ACTIONS(396), 1,
      anon_sym_func,
    STATE(203), 1,
      sym_primitive_type,
    ACTIONS(378), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
  [3633] = 3,
    ACTIONS(384), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(386), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(398), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3646] = 3,
    ACTIONS(400), 1,
      anon_sym_func,
    STATE(189), 1,
      sym_primitive_type,
    ACTIONS(378), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
  [3659] = 2,
    ACTIONS(386), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(146), 4,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_COMMA,
  [3670] = 3,
    STATE(166), 1,
      sym_parameter,
    STATE(185), 1,
      sym_primitive_type,
    ACTIONS(378), 4,
      anon_sym_int,
      anon_sym_float,
      anon_sym_bool,
      anon_sym_string,
  [3683] = 3,
    ACTIONS(402), 1,
      anon_sym_SEMI,
    ACTIONS(404), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(406), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3695] = 3,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3707] = 2,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(146), 3,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3717] = 2,
    ACTIONS(406), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(146), 3,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
  [3727] = 3,
    ACTIONS(196), 1,
      anon_sym_SEMI,
    ACTIONS(404), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(406), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3739] = 3,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    ACTIONS(408), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(410), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [3751] = 4,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(412), 1,
      anon_sym_if,
    STATE(100), 1,
      sym_block,
    STATE(108), 1,
      sym_if_statement,
  [3764] = 3,
    ACTIONS(194), 1,
      anon_sym_LPAREN,
    ACTIONS(414), 1,
      anon_sym_EQ,
    ACTIONS(416), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [3775] = 3,
    ACTIONS(418), 1,
      sym_identifier,
    STATE(41), 1,
      sym_boolean,
    ACTIONS(250), 2,
      anon_sym_true,
      anon_sym_false,
  [3786] = 3,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(4), 1,
      sym_boolean,
    ACTIONS(236), 2,
      anon_sym_true,
      anon_sym_false,
  [3797] = 3,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(422), 1,
      anon_sym_EQ,
    ACTIONS(424), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [3808] = 4,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    ACTIONS(426), 1,
      anon_sym_if,
    STATE(87), 1,
      sym_if_statement,
    STATE(98), 1,
      sym_block,
  [3821] = 3,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    ACTIONS(430), 1,
      anon_sym_EQ,
    STATE(157), 1,
      sym_parameter_list,
  [3831] = 3,
    ACTIONS(432), 1,
      anon_sym_RPAREN,
    ACTIONS(434), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym_parameter_list_repeat1,
  [3841] = 3,
    ACTIONS(436), 1,
      sym_identifier,
    STATE(85), 1,
      sym_inc_dec,
    STATE(211), 1,
      sym_assignment,
  [3851] = 3,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_func_call_repeat1,
  [3861] = 3,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      anon_sym_EQ,
    STATE(159), 1,
      sym_parameter_list,
  [3871] = 3,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_func_call_repeat1,
  [3881] = 3,
    ACTIONS(436), 1,
      sym_identifier,
    STATE(85), 1,
      sym_inc_dec,
    STATE(198), 1,
      sym_assignment,
  [3891] = 3,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
    ACTIONS(447), 1,
      anon_sym_LF,
    STATE(96), 1,
      sym_block,
  [3901] = 3,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
    ACTIONS(449), 1,
      anon_sym_LF,
    STATE(93), 1,
      sym_block,
  [3911] = 3,
    ACTIONS(451), 1,
      anon_sym_LBRACE,
    ACTIONS(453), 1,
      anon_sym_LF,
    STATE(106), 1,
      sym_block,
  [3921] = 2,
    ACTIONS(455), 1,
      anon_sym_EQ,
    ACTIONS(424), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [3929] = 3,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_func_call_repeat1,
  [3939] = 3,
    ACTIONS(451), 1,
      anon_sym_LBRACE,
    ACTIONS(459), 1,
      anon_sym_LF,
    STATE(88), 1,
      sym_block,
  [3949] = 3,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    STATE(163), 1,
      aux_sym_parameter_list_repeat1,
  [3959] = 3,
    ACTIONS(434), 1,
      anon_sym_COMMA,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      aux_sym_parameter_list_repeat1,
  [3969] = 2,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      sym_parameter_list,
  [3976] = 1,
    ACTIONS(461), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [3981] = 2,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    ACTIONS(470), 1,
      anon_sym_LF,
  [3988] = 2,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_block,
  [3995] = 2,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    STATE(158), 1,
      sym_parameter_list,
  [4002] = 2,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    STATE(159), 1,
      sym_parameter_list,
  [4009] = 2,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    ACTIONS(474), 1,
      anon_sym_LF,
  [4016] = 2,
    ACTIONS(428), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym_parameter_list,
  [4023] = 1,
    ACTIONS(476), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [4028] = 2,
    ACTIONS(9), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_block,
  [4035] = 2,
    ACTIONS(478), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_block,
  [4042] = 2,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    STATE(110), 1,
      sym_block,
  [4049] = 2,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    STATE(109), 1,
      sym_block,
  [4056] = 2,
    ACTIONS(480), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
  [4063] = 2,
    ACTIONS(482), 1,
      anon_sym_LBRACE,
    ACTIONS(484), 1,
      anon_sym_LF,
  [4070] = 1,
    ACTIONS(486), 1,
      anon_sym_EQ,
  [4074] = 1,
    ACTIONS(488), 1,
      sym_identifier,
  [4078] = 1,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
  [4082] = 1,
    ACTIONS(492), 1,
      ts_builtin_sym_end,
  [4086] = 1,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
  [4090] = 1,
    ACTIONS(496), 1,
      sym_identifier,
  [4094] = 1,
    ACTIONS(498), 1,
      anon_sym_SEMI,
  [4098] = 1,
    ACTIONS(500), 1,
      sym_identifier,
  [4102] = 1,
    ACTIONS(441), 1,
      anon_sym_EQ,
  [4106] = 1,
    ACTIONS(502), 1,
      sym_identifier,
  [4110] = 1,
    ACTIONS(504), 1,
      sym_identifier,
  [4114] = 1,
    ACTIONS(506), 1,
      sym_identifier,
  [4118] = 1,
    ACTIONS(508), 1,
      sym_identifier,
  [4122] = 1,
    ACTIONS(510), 1,
      sym_identifier,
  [4126] = 1,
    ACTIONS(512), 1,
      sym_identifier,
  [4130] = 1,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
  [4134] = 1,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
  [4138] = 1,
    ACTIONS(518), 1,
      anon_sym_SEMI,
  [4142] = 1,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
  [4146] = 1,
    ACTIONS(522), 1,
      sym_identifier,
  [4150] = 1,
    ACTIONS(524), 1,
      sym_identifier,
  [4154] = 1,
    ACTIONS(526), 1,
      sym_identifier,
  [4158] = 1,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
  [4162] = 1,
    ACTIONS(530), 1,
      sym_identifier,
  [4166] = 1,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
  [4170] = 1,
    ACTIONS(534), 1,
      anon_sym_LPAREN,
  [4174] = 1,
    ACTIONS(536), 1,
      anon_sym_LPAREN,
  [4178] = 1,
    ACTIONS(430), 1,
      anon_sym_EQ,
  [4182] = 1,
    ACTIONS(538), 1,
      anon_sym_SEMI,
  [4186] = 1,
    ACTIONS(540), 1,
      anon_sym_LPAREN,
  [4190] = 1,
    ACTIONS(542), 1,
      anon_sym_SEMI,
  [4194] = 1,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
  [4198] = 1,
    ACTIONS(546), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 67,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 155,
  [SMALL_STATE(7)] = 211,
  [SMALL_STATE(8)] = 267,
  [SMALL_STATE(9)] = 323,
  [SMALL_STATE(10)] = 379,
  [SMALL_STATE(11)] = 411,
  [SMALL_STATE(12)] = 443,
  [SMALL_STATE(13)] = 475,
  [SMALL_STATE(14)] = 507,
  [SMALL_STATE(15)] = 563,
  [SMALL_STATE(16)] = 619,
  [SMALL_STATE(17)] = 675,
  [SMALL_STATE(18)] = 731,
  [SMALL_STATE(19)] = 787,
  [SMALL_STATE(20)] = 843,
  [SMALL_STATE(21)] = 875,
  [SMALL_STATE(22)] = 907,
  [SMALL_STATE(23)] = 938,
  [SMALL_STATE(24)] = 971,
  [SMALL_STATE(25)] = 1004,
  [SMALL_STATE(26)] = 1037,
  [SMALL_STATE(27)] = 1068,
  [SMALL_STATE(28)] = 1099,
  [SMALL_STATE(29)] = 1122,
  [SMALL_STATE(30)] = 1147,
  [SMALL_STATE(31)] = 1173,
  [SMALL_STATE(32)] = 1200,
  [SMALL_STATE(33)] = 1223,
  [SMALL_STATE(34)] = 1246,
  [SMALL_STATE(35)] = 1273,
  [SMALL_STATE(36)] = 1296,
  [SMALL_STATE(37)] = 1319,
  [SMALL_STATE(38)] = 1346,
  [SMALL_STATE(39)] = 1371,
  [SMALL_STATE(40)] = 1394,
  [SMALL_STATE(41)] = 1417,
  [SMALL_STATE(42)] = 1440,
  [SMALL_STATE(43)] = 1465,
  [SMALL_STATE(44)] = 1492,
  [SMALL_STATE(45)] = 1515,
  [SMALL_STATE(46)] = 1542,
  [SMALL_STATE(47)] = 1569,
  [SMALL_STATE(48)] = 1596,
  [SMALL_STATE(49)] = 1623,
  [SMALL_STATE(50)] = 1658,
  [SMALL_STATE(51)] = 1693,
  [SMALL_STATE(52)] = 1728,
  [SMALL_STATE(53)] = 1763,
  [SMALL_STATE(54)] = 1798,
  [SMALL_STATE(55)] = 1833,
  [SMALL_STATE(56)] = 1868,
  [SMALL_STATE(57)] = 1903,
  [SMALL_STATE(58)] = 1938,
  [SMALL_STATE(59)] = 1973,
  [SMALL_STATE(60)] = 2005,
  [SMALL_STATE(61)] = 2037,
  [SMALL_STATE(62)] = 2069,
  [SMALL_STATE(63)] = 2101,
  [SMALL_STATE(64)] = 2133,
  [SMALL_STATE(65)] = 2153,
  [SMALL_STATE(66)] = 2173,
  [SMALL_STATE(67)] = 2205,
  [SMALL_STATE(68)] = 2237,
  [SMALL_STATE(69)] = 2269,
  [SMALL_STATE(70)] = 2301,
  [SMALL_STATE(71)] = 2333,
  [SMALL_STATE(72)] = 2365,
  [SMALL_STATE(73)] = 2385,
  [SMALL_STATE(74)] = 2417,
  [SMALL_STATE(75)] = 2449,
  [SMALL_STATE(76)] = 2469,
  [SMALL_STATE(77)] = 2489,
  [SMALL_STATE(78)] = 2521,
  [SMALL_STATE(79)] = 2553,
  [SMALL_STATE(80)] = 2585,
  [SMALL_STATE(81)] = 2617,
  [SMALL_STATE(82)] = 2649,
  [SMALL_STATE(83)] = 2681,
  [SMALL_STATE(84)] = 2713,
  [SMALL_STATE(85)] = 2745,
  [SMALL_STATE(86)] = 2765,
  [SMALL_STATE(87)] = 2784,
  [SMALL_STATE(88)] = 2803,
  [SMALL_STATE(89)] = 2822,
  [SMALL_STATE(90)] = 2841,
  [SMALL_STATE(91)] = 2860,
  [SMALL_STATE(92)] = 2883,
  [SMALL_STATE(93)] = 2902,
  [SMALL_STATE(94)] = 2921,
  [SMALL_STATE(95)] = 2940,
  [SMALL_STATE(96)] = 2959,
  [SMALL_STATE(97)] = 2978,
  [SMALL_STATE(98)] = 3001,
  [SMALL_STATE(99)] = 3020,
  [SMALL_STATE(100)] = 3039,
  [SMALL_STATE(101)] = 3058,
  [SMALL_STATE(102)] = 3077,
  [SMALL_STATE(103)] = 3096,
  [SMALL_STATE(104)] = 3115,
  [SMALL_STATE(105)] = 3134,
  [SMALL_STATE(106)] = 3157,
  [SMALL_STATE(107)] = 3176,
  [SMALL_STATE(108)] = 3195,
  [SMALL_STATE(109)] = 3214,
  [SMALL_STATE(110)] = 3233,
  [SMALL_STATE(111)] = 3252,
  [SMALL_STATE(112)] = 3267,
  [SMALL_STATE(113)] = 3289,
  [SMALL_STATE(114)] = 3311,
  [SMALL_STATE(115)] = 3330,
  [SMALL_STATE(116)] = 3347,
  [SMALL_STATE(117)] = 3366,
  [SMALL_STATE(118)] = 3385,
  [SMALL_STATE(119)] = 3403,
  [SMALL_STATE(120)] = 3421,
  [SMALL_STATE(121)] = 3439,
  [SMALL_STATE(122)] = 3457,
  [SMALL_STATE(123)] = 3475,
  [SMALL_STATE(124)] = 3493,
  [SMALL_STATE(125)] = 3504,
  [SMALL_STATE(126)] = 3514,
  [SMALL_STATE(127)] = 3530,
  [SMALL_STATE(128)] = 3546,
  [SMALL_STATE(129)] = 3564,
  [SMALL_STATE(130)] = 3582,
  [SMALL_STATE(131)] = 3594,
  [SMALL_STATE(132)] = 3604,
  [SMALL_STATE(133)] = 3620,
  [SMALL_STATE(134)] = 3633,
  [SMALL_STATE(135)] = 3646,
  [SMALL_STATE(136)] = 3659,
  [SMALL_STATE(137)] = 3670,
  [SMALL_STATE(138)] = 3683,
  [SMALL_STATE(139)] = 3695,
  [SMALL_STATE(140)] = 3707,
  [SMALL_STATE(141)] = 3717,
  [SMALL_STATE(142)] = 3727,
  [SMALL_STATE(143)] = 3739,
  [SMALL_STATE(144)] = 3751,
  [SMALL_STATE(145)] = 3764,
  [SMALL_STATE(146)] = 3775,
  [SMALL_STATE(147)] = 3786,
  [SMALL_STATE(148)] = 3797,
  [SMALL_STATE(149)] = 3808,
  [SMALL_STATE(150)] = 3821,
  [SMALL_STATE(151)] = 3831,
  [SMALL_STATE(152)] = 3841,
  [SMALL_STATE(153)] = 3851,
  [SMALL_STATE(154)] = 3861,
  [SMALL_STATE(155)] = 3871,
  [SMALL_STATE(156)] = 3881,
  [SMALL_STATE(157)] = 3891,
  [SMALL_STATE(158)] = 3901,
  [SMALL_STATE(159)] = 3911,
  [SMALL_STATE(160)] = 3921,
  [SMALL_STATE(161)] = 3929,
  [SMALL_STATE(162)] = 3939,
  [SMALL_STATE(163)] = 3949,
  [SMALL_STATE(164)] = 3959,
  [SMALL_STATE(165)] = 3969,
  [SMALL_STATE(166)] = 3976,
  [SMALL_STATE(167)] = 3981,
  [SMALL_STATE(168)] = 3988,
  [SMALL_STATE(169)] = 3995,
  [SMALL_STATE(170)] = 4002,
  [SMALL_STATE(171)] = 4009,
  [SMALL_STATE(172)] = 4016,
  [SMALL_STATE(173)] = 4023,
  [SMALL_STATE(174)] = 4028,
  [SMALL_STATE(175)] = 4035,
  [SMALL_STATE(176)] = 4042,
  [SMALL_STATE(177)] = 4049,
  [SMALL_STATE(178)] = 4056,
  [SMALL_STATE(179)] = 4063,
  [SMALL_STATE(180)] = 4070,
  [SMALL_STATE(181)] = 4074,
  [SMALL_STATE(182)] = 4078,
  [SMALL_STATE(183)] = 4082,
  [SMALL_STATE(184)] = 4086,
  [SMALL_STATE(185)] = 4090,
  [SMALL_STATE(186)] = 4094,
  [SMALL_STATE(187)] = 4098,
  [SMALL_STATE(188)] = 4102,
  [SMALL_STATE(189)] = 4106,
  [SMALL_STATE(190)] = 4110,
  [SMALL_STATE(191)] = 4114,
  [SMALL_STATE(192)] = 4118,
  [SMALL_STATE(193)] = 4122,
  [SMALL_STATE(194)] = 4126,
  [SMALL_STATE(195)] = 4130,
  [SMALL_STATE(196)] = 4134,
  [SMALL_STATE(197)] = 4138,
  [SMALL_STATE(198)] = 4142,
  [SMALL_STATE(199)] = 4146,
  [SMALL_STATE(200)] = 4150,
  [SMALL_STATE(201)] = 4154,
  [SMALL_STATE(202)] = 4158,
  [SMALL_STATE(203)] = 4162,
  [SMALL_STATE(204)] = 4166,
  [SMALL_STATE(205)] = 4170,
  [SMALL_STATE(206)] = 4174,
  [SMALL_STATE(207)] = 4178,
  [SMALL_STATE(208)] = 4182,
  [SMALL_STATE(209)] = 4186,
  [SMALL_STATE(210)] = 4190,
  [SMALL_STATE(211)] = 4194,
  [SMALL_STATE(212)] = 4198,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_not, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_not, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(204),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(209),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(5),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(202),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(201),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(190),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(135),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(187),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(53),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(148),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(212),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(205),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(18),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(206),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(191),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(133),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(200),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(50),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(145),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_call, 5),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func_call, 5),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, .production_id = 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(29),
  [167] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(23),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, .production_id = 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(28),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(27),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escape, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_declaration, 4, .production_id = 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_declaration, 4, .production_id = 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inc_dec, 2),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inc_dec, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 1),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if, 2),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declare, 5),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declare, 5),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declare, 4),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declare, 4),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(111),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(97),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while, 5),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while, 5),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for, 9),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for, 9),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [340] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(124),
  [343] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(114),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(131),
  [355] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(118),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(125),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(121),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_op, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comparison_op, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_func_call_repeat1, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 3),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [438] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_func_call_repeat1, 2), SHIFT_REPEAT(70),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(137),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 4),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [492] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
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
