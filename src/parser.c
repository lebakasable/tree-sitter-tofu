#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_import = 1,
  anon_sym_buffer = 2,
  anon_sym_const = 3,
  anon_sym_to = 4,
  anon_sym_inline = 5,
  anon_sym_COLON = 6,
  anon_sym_COMMA = 7,
  anon_sym_DASH_GT = 8,
  anon_sym_PLUS = 9,
  anon_sym_DASH = 10,
  anon_sym_STAR = 11,
  anon_sym_SLASH = 12,
  anon_sym_EQ = 13,
  anon_sym_BANG_EQ = 14,
  anon_sym_GT = 15,
  anon_sym_LT = 16,
  anon_sym_GT_EQ = 17,
  anon_sym_LT_EQ = 18,
  anon_sym_int = 19,
  anon_sym_char = 20,
  anon_sym_bool = 21,
  anon_sym_ptr = 22,
  anon_sym_void = 23,
  aux_sym_identifier_token1 = 24,
  anon_sym_if = 25,
  anon_sym_else = 26,
  anon_sym_elif = 27,
  anon_sym_while = 28,
  sym_constant = 29,
  sym_string = 30,
  sym_char = 31,
  sym_number = 32,
  anon_sym_true = 33,
  anon_sym_false = 34,
  sym_comment = 35,
  sym_source_file = 36,
  sym_import = 37,
  sym_buffer = 38,
  sym_const = 39,
  sym_function = 40,
  sym_literal = 41,
  sym_operator = 42,
  sym_type = 43,
  sym_identifier = 44,
  sym_keyword = 45,
  sym_boolean = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_function_repeat1 = 48,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_buffer] = "buffer",
  [anon_sym_const] = "const",
  [anon_sym_to] = "to",
  [anon_sym_inline] = "inline",
  [anon_sym_COLON] = ":",
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_int] = "int",
  [anon_sym_char] = "char",
  [anon_sym_bool] = "bool",
  [anon_sym_ptr] = "ptr",
  [anon_sym_void] = "void",
  [aux_sym_identifier_token1] = "identifier_token1",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_elif] = "elif",
  [anon_sym_while] = "while",
  [sym_constant] = "constant",
  [sym_string] = "string",
  [sym_char] = "char",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_import] = "import",
  [sym_buffer] = "buffer",
  [sym_const] = "const",
  [sym_function] = "function",
  [sym_literal] = "literal",
  [sym_operator] = "operator",
  [sym_type] = "type",
  [sym_identifier] = "identifier",
  [sym_keyword] = "keyword",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_buffer] = anon_sym_buffer,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_inline] = anon_sym_inline,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_ptr] = anon_sym_ptr,
  [anon_sym_void] = anon_sym_void,
  [aux_sym_identifier_token1] = aux_sym_identifier_token1,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_while] = anon_sym_while,
  [sym_constant] = sym_constant,
  [sym_string] = sym_string,
  [sym_char] = sym_char,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_import] = sym_import,
  [sym_buffer] = sym_buffer,
  [sym_const] = sym_const,
  [sym_function] = sym_function,
  [sym_literal] = sym_literal,
  [sym_operator] = sym_operator,
  [sym_type] = sym_type,
  [sym_identifier] = sym_identifier,
  [sym_keyword] = sym_keyword,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_buffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ptr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [sym_constant] = {
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_buffer] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
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
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 4,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 4,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 10,
  [32] = 32,
  [33] = 33,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(23);
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(110);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(82);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 't') ADVANCE(80);
      if (lookahead == 'v') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(6);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '+') ADVANCE(32);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '<') ADVANCE(39);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(83);
      if (lookahead == 'c') ADVANCE(67);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'p') ADVANCE(94);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == 'v') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(106);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(106);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(14);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(3);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 11:
      if (lookahead == 'h') ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 19:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_buffer);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_const);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_to);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_inline);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_char);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_ptr);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_ptr);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_void);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'd') ADVANCE(51);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(101);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(109);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(103);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'm') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(76);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(65);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(53);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'h') ADVANCE(72);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(63);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(71);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(70);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(92);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(69);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == 'u') ADVANCE(64);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(84);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(74);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'p') ADVANCE(85);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(49);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'r') ADVANCE(97);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 's') ADVANCE(57);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == 'u') ADVANCE(56);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_identifier_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_elif);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_constant);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_char);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(99);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 22},
  [28] = {.lex_state = 22},
  [29] = {.lex_state = 22},
  [30] = {.lex_state = 22},
  [31] = {.lex_state = 22},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_buffer] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_ptr] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [aux_sym_identifier_token1] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [sym_constant] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_char] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym_import] = STATE(3),
    [sym_buffer] = STATE(3),
    [sym_const] = STATE(3),
    [sym_function] = STATE(3),
    [sym_literal] = STATE(3),
    [sym_operator] = STATE(12),
    [sym_type] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_keyword] = STATE(12),
    [sym_boolean] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_buffer] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(9),
    [anon_sym_to] = ACTIONS(11),
    [anon_sym_inline] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_int] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [aux_sym_identifier_token1] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_else] = ACTIONS(21),
    [anon_sym_elif] = ACTIONS(21),
    [anon_sym_while] = ACTIONS(21),
    [sym_constant] = ACTIONS(19),
    [sym_string] = ACTIONS(23),
    [sym_char] = ACTIONS(23),
    [sym_number] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_comment] = ACTIONS(27),
  },
  [2] = {
    [sym_import] = STATE(2),
    [sym_buffer] = STATE(2),
    [sym_const] = STATE(2),
    [sym_function] = STATE(2),
    [sym_literal] = STATE(2),
    [sym_operator] = STATE(12),
    [sym_type] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_keyword] = STATE(12),
    [sym_boolean] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_import] = ACTIONS(31),
    [anon_sym_buffer] = ACTIONS(34),
    [anon_sym_const] = ACTIONS(37),
    [anon_sym_to] = ACTIONS(40),
    [anon_sym_inline] = ACTIONS(40),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(43),
    [anon_sym_STAR] = ACTIONS(43),
    [anon_sym_SLASH] = ACTIONS(43),
    [anon_sym_EQ] = ACTIONS(43),
    [anon_sym_BANG_EQ] = ACTIONS(43),
    [anon_sym_GT] = ACTIONS(46),
    [anon_sym_LT] = ACTIONS(46),
    [anon_sym_GT_EQ] = ACTIONS(43),
    [anon_sym_LT_EQ] = ACTIONS(43),
    [anon_sym_int] = ACTIONS(49),
    [anon_sym_char] = ACTIONS(49),
    [anon_sym_bool] = ACTIONS(49),
    [anon_sym_ptr] = ACTIONS(49),
    [anon_sym_void] = ACTIONS(49),
    [aux_sym_identifier_token1] = ACTIONS(52),
    [anon_sym_if] = ACTIONS(55),
    [anon_sym_else] = ACTIONS(55),
    [anon_sym_elif] = ACTIONS(55),
    [anon_sym_while] = ACTIONS(55),
    [sym_constant] = ACTIONS(52),
    [sym_string] = ACTIONS(58),
    [sym_char] = ACTIONS(58),
    [sym_number] = ACTIONS(58),
    [anon_sym_true] = ACTIONS(61),
    [anon_sym_false] = ACTIONS(61),
    [sym_comment] = ACTIONS(64),
  },
  [3] = {
    [sym_import] = STATE(2),
    [sym_buffer] = STATE(2),
    [sym_const] = STATE(2),
    [sym_function] = STATE(2),
    [sym_literal] = STATE(2),
    [sym_operator] = STATE(12),
    [sym_type] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_keyword] = STATE(12),
    [sym_boolean] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_import] = ACTIONS(5),
    [anon_sym_buffer] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(9),
    [anon_sym_to] = ACTIONS(11),
    [anon_sym_inline] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_int] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [aux_sym_identifier_token1] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_else] = ACTIONS(21),
    [anon_sym_elif] = ACTIONS(21),
    [anon_sym_while] = ACTIONS(21),
    [sym_constant] = ACTIONS(19),
    [sym_string] = ACTIONS(23),
    [sym_char] = ACTIONS(23),
    [sym_number] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_comment] = ACTIONS(69),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [anon_sym_import] = ACTIONS(73),
    [anon_sym_buffer] = ACTIONS(73),
    [anon_sym_const] = ACTIONS(73),
    [anon_sym_to] = ACTIONS(73),
    [anon_sym_inline] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(71),
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_int] = ACTIONS(73),
    [anon_sym_char] = ACTIONS(73),
    [anon_sym_bool] = ACTIONS(73),
    [anon_sym_ptr] = ACTIONS(73),
    [anon_sym_void] = ACTIONS(73),
    [aux_sym_identifier_token1] = ACTIONS(73),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_else] = ACTIONS(73),
    [anon_sym_elif] = ACTIONS(73),
    [anon_sym_while] = ACTIONS(73),
    [sym_constant] = ACTIONS(73),
    [sym_string] = ACTIONS(71),
    [sym_char] = ACTIONS(71),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(73),
    [sym_comment] = ACTIONS(71),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [anon_sym_import] = ACTIONS(77),
    [anon_sym_buffer] = ACTIONS(77),
    [anon_sym_const] = ACTIONS(77),
    [anon_sym_to] = ACTIONS(77),
    [anon_sym_inline] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_STAR] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_BANG_EQ] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(75),
    [anon_sym_LT_EQ] = ACTIONS(75),
    [anon_sym_int] = ACTIONS(77),
    [anon_sym_char] = ACTIONS(77),
    [anon_sym_bool] = ACTIONS(77),
    [anon_sym_ptr] = ACTIONS(77),
    [anon_sym_void] = ACTIONS(77),
    [aux_sym_identifier_token1] = ACTIONS(77),
    [anon_sym_if] = ACTIONS(77),
    [anon_sym_else] = ACTIONS(77),
    [anon_sym_elif] = ACTIONS(77),
    [anon_sym_while] = ACTIONS(77),
    [sym_constant] = ACTIONS(77),
    [sym_string] = ACTIONS(75),
    [sym_char] = ACTIONS(75),
    [sym_number] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_false] = ACTIONS(77),
    [sym_comment] = ACTIONS(75),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [anon_sym_import] = ACTIONS(81),
    [anon_sym_buffer] = ACTIONS(81),
    [anon_sym_const] = ACTIONS(81),
    [anon_sym_to] = ACTIONS(81),
    [anon_sym_inline] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_BANG_EQ] = ACTIONS(79),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_GT_EQ] = ACTIONS(79),
    [anon_sym_LT_EQ] = ACTIONS(79),
    [anon_sym_int] = ACTIONS(81),
    [anon_sym_char] = ACTIONS(81),
    [anon_sym_bool] = ACTIONS(81),
    [anon_sym_ptr] = ACTIONS(81),
    [anon_sym_void] = ACTIONS(81),
    [aux_sym_identifier_token1] = ACTIONS(81),
    [anon_sym_if] = ACTIONS(81),
    [anon_sym_else] = ACTIONS(81),
    [anon_sym_elif] = ACTIONS(81),
    [anon_sym_while] = ACTIONS(81),
    [sym_constant] = ACTIONS(81),
    [sym_string] = ACTIONS(79),
    [sym_char] = ACTIONS(79),
    [sym_number] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_comment] = ACTIONS(79),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_import] = ACTIONS(85),
    [anon_sym_buffer] = ACTIONS(85),
    [anon_sym_const] = ACTIONS(85),
    [anon_sym_to] = ACTIONS(85),
    [anon_sym_inline] = ACTIONS(85),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [anon_sym_STAR] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_BANG_EQ] = ACTIONS(83),
    [anon_sym_GT] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(85),
    [anon_sym_GT_EQ] = ACTIONS(83),
    [anon_sym_LT_EQ] = ACTIONS(83),
    [anon_sym_int] = ACTIONS(85),
    [anon_sym_char] = ACTIONS(85),
    [anon_sym_bool] = ACTIONS(85),
    [anon_sym_ptr] = ACTIONS(85),
    [anon_sym_void] = ACTIONS(85),
    [aux_sym_identifier_token1] = ACTIONS(85),
    [anon_sym_if] = ACTIONS(85),
    [anon_sym_else] = ACTIONS(85),
    [anon_sym_elif] = ACTIONS(85),
    [anon_sym_while] = ACTIONS(85),
    [sym_constant] = ACTIONS(85),
    [sym_string] = ACTIONS(83),
    [sym_char] = ACTIONS(83),
    [sym_number] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(85),
    [sym_comment] = ACTIONS(83),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_import] = ACTIONS(89),
    [anon_sym_buffer] = ACTIONS(89),
    [anon_sym_const] = ACTIONS(89),
    [anon_sym_to] = ACTIONS(89),
    [anon_sym_inline] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_BANG_EQ] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(89),
    [anon_sym_GT_EQ] = ACTIONS(87),
    [anon_sym_LT_EQ] = ACTIONS(87),
    [anon_sym_int] = ACTIONS(89),
    [anon_sym_char] = ACTIONS(89),
    [anon_sym_bool] = ACTIONS(89),
    [anon_sym_ptr] = ACTIONS(89),
    [anon_sym_void] = ACTIONS(89),
    [aux_sym_identifier_token1] = ACTIONS(89),
    [anon_sym_if] = ACTIONS(89),
    [anon_sym_else] = ACTIONS(89),
    [anon_sym_elif] = ACTIONS(89),
    [anon_sym_while] = ACTIONS(89),
    [sym_constant] = ACTIONS(89),
    [sym_string] = ACTIONS(87),
    [sym_char] = ACTIONS(87),
    [sym_number] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_comment] = ACTIONS(87),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_import] = ACTIONS(93),
    [anon_sym_buffer] = ACTIONS(93),
    [anon_sym_const] = ACTIONS(93),
    [anon_sym_to] = ACTIONS(93),
    [anon_sym_inline] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_STAR] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(91),
    [anon_sym_BANG_EQ] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT_EQ] = ACTIONS(91),
    [anon_sym_LT_EQ] = ACTIONS(91),
    [anon_sym_int] = ACTIONS(93),
    [anon_sym_char] = ACTIONS(93),
    [anon_sym_bool] = ACTIONS(93),
    [anon_sym_ptr] = ACTIONS(93),
    [anon_sym_void] = ACTIONS(93),
    [aux_sym_identifier_token1] = ACTIONS(93),
    [anon_sym_if] = ACTIONS(93),
    [anon_sym_else] = ACTIONS(93),
    [anon_sym_elif] = ACTIONS(93),
    [anon_sym_while] = ACTIONS(93),
    [sym_constant] = ACTIONS(93),
    [sym_string] = ACTIONS(91),
    [sym_char] = ACTIONS(91),
    [sym_number] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
    [sym_comment] = ACTIONS(91),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_import] = ACTIONS(97),
    [anon_sym_buffer] = ACTIONS(97),
    [anon_sym_const] = ACTIONS(97),
    [anon_sym_to] = ACTIONS(97),
    [anon_sym_inline] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [anon_sym_STAR] = ACTIONS(95),
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_BANG_EQ] = ACTIONS(95),
    [anon_sym_GT] = ACTIONS(97),
    [anon_sym_LT] = ACTIONS(97),
    [anon_sym_GT_EQ] = ACTIONS(95),
    [anon_sym_LT_EQ] = ACTIONS(95),
    [anon_sym_int] = ACTIONS(97),
    [anon_sym_char] = ACTIONS(97),
    [anon_sym_bool] = ACTIONS(97),
    [anon_sym_ptr] = ACTIONS(97),
    [anon_sym_void] = ACTIONS(97),
    [aux_sym_identifier_token1] = ACTIONS(97),
    [anon_sym_if] = ACTIONS(97),
    [anon_sym_else] = ACTIONS(97),
    [anon_sym_elif] = ACTIONS(97),
    [anon_sym_while] = ACTIONS(97),
    [sym_constant] = ACTIONS(97),
    [sym_string] = ACTIONS(95),
    [sym_char] = ACTIONS(95),
    [sym_number] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [sym_comment] = ACTIONS(95),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_import] = ACTIONS(101),
    [anon_sym_buffer] = ACTIONS(101),
    [anon_sym_const] = ACTIONS(101),
    [anon_sym_to] = ACTIONS(101),
    [anon_sym_inline] = ACTIONS(101),
    [anon_sym_PLUS] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(99),
    [anon_sym_STAR] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_BANG_EQ] = ACTIONS(99),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(101),
    [anon_sym_GT_EQ] = ACTIONS(99),
    [anon_sym_LT_EQ] = ACTIONS(99),
    [anon_sym_int] = ACTIONS(101),
    [anon_sym_char] = ACTIONS(101),
    [anon_sym_bool] = ACTIONS(101),
    [anon_sym_ptr] = ACTIONS(101),
    [anon_sym_void] = ACTIONS(101),
    [aux_sym_identifier_token1] = ACTIONS(101),
    [anon_sym_if] = ACTIONS(101),
    [anon_sym_else] = ACTIONS(101),
    [anon_sym_elif] = ACTIONS(101),
    [anon_sym_while] = ACTIONS(101),
    [sym_constant] = ACTIONS(101),
    [sym_string] = ACTIONS(99),
    [sym_char] = ACTIONS(99),
    [sym_number] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(101),
    [anon_sym_false] = ACTIONS(101),
    [sym_comment] = ACTIONS(99),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_import] = ACTIONS(105),
    [anon_sym_buffer] = ACTIONS(105),
    [anon_sym_const] = ACTIONS(105),
    [anon_sym_to] = ACTIONS(105),
    [anon_sym_inline] = ACTIONS(105),
    [anon_sym_PLUS] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [anon_sym_STAR] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(103),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_BANG_EQ] = ACTIONS(103),
    [anon_sym_GT] = ACTIONS(105),
    [anon_sym_LT] = ACTIONS(105),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_int] = ACTIONS(105),
    [anon_sym_char] = ACTIONS(105),
    [anon_sym_bool] = ACTIONS(105),
    [anon_sym_ptr] = ACTIONS(105),
    [anon_sym_void] = ACTIONS(105),
    [aux_sym_identifier_token1] = ACTIONS(105),
    [anon_sym_if] = ACTIONS(105),
    [anon_sym_else] = ACTIONS(105),
    [anon_sym_elif] = ACTIONS(105),
    [anon_sym_while] = ACTIONS(105),
    [sym_constant] = ACTIONS(105),
    [sym_string] = ACTIONS(103),
    [sym_char] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(105),
    [sym_comment] = ACTIONS(103),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_import] = ACTIONS(109),
    [anon_sym_buffer] = ACTIONS(109),
    [anon_sym_const] = ACTIONS(109),
    [anon_sym_to] = ACTIONS(109),
    [anon_sym_inline] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_STAR] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_BANG_EQ] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT_EQ] = ACTIONS(107),
    [anon_sym_LT_EQ] = ACTIONS(107),
    [anon_sym_int] = ACTIONS(109),
    [anon_sym_char] = ACTIONS(109),
    [anon_sym_bool] = ACTIONS(109),
    [anon_sym_ptr] = ACTIONS(109),
    [anon_sym_void] = ACTIONS(109),
    [aux_sym_identifier_token1] = ACTIONS(109),
    [anon_sym_if] = ACTIONS(109),
    [anon_sym_else] = ACTIONS(109),
    [anon_sym_elif] = ACTIONS(109),
    [anon_sym_while] = ACTIONS(109),
    [sym_constant] = ACTIONS(109),
    [sym_string] = ACTIONS(107),
    [sym_char] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [sym_comment] = ACTIONS(107),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_import] = ACTIONS(113),
    [anon_sym_buffer] = ACTIONS(113),
    [anon_sym_const] = ACTIONS(113),
    [anon_sym_to] = ACTIONS(113),
    [anon_sym_inline] = ACTIONS(113),
    [anon_sym_PLUS] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(111),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_SLASH] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(111),
    [anon_sym_BANG_EQ] = ACTIONS(111),
    [anon_sym_GT] = ACTIONS(113),
    [anon_sym_LT] = ACTIONS(113),
    [anon_sym_GT_EQ] = ACTIONS(111),
    [anon_sym_LT_EQ] = ACTIONS(111),
    [anon_sym_int] = ACTIONS(113),
    [anon_sym_char] = ACTIONS(113),
    [anon_sym_bool] = ACTIONS(113),
    [anon_sym_ptr] = ACTIONS(113),
    [anon_sym_void] = ACTIONS(113),
    [aux_sym_identifier_token1] = ACTIONS(113),
    [anon_sym_if] = ACTIONS(113),
    [anon_sym_else] = ACTIONS(113),
    [anon_sym_elif] = ACTIONS(113),
    [anon_sym_while] = ACTIONS(113),
    [sym_constant] = ACTIONS(113),
    [sym_string] = ACTIONS(111),
    [sym_char] = ACTIONS(111),
    [sym_number] = ACTIONS(111),
    [anon_sym_true] = ACTIONS(113),
    [anon_sym_false] = ACTIONS(113),
    [sym_comment] = ACTIONS(111),
  },
  [15] = {
    [sym_literal] = STATE(7),
    [sym_operator] = STATE(12),
    [sym_type] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_keyword] = STATE(12),
    [sym_boolean] = STATE(12),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_int] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [aux_sym_identifier_token1] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_else] = ACTIONS(21),
    [anon_sym_elif] = ACTIONS(21),
    [anon_sym_while] = ACTIONS(21),
    [sym_constant] = ACTIONS(19),
    [sym_string] = ACTIONS(23),
    [sym_char] = ACTIONS(23),
    [sym_number] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
  },
  [16] = {
    [sym_literal] = STATE(8),
    [sym_operator] = STATE(12),
    [sym_type] = STATE(12),
    [sym_identifier] = STATE(12),
    [sym_keyword] = STATE(12),
    [sym_boolean] = STATE(12),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_EQ] = ACTIONS(13),
    [anon_sym_BANG_EQ] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [anon_sym_GT_EQ] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(13),
    [anon_sym_int] = ACTIONS(17),
    [anon_sym_char] = ACTIONS(17),
    [anon_sym_bool] = ACTIONS(17),
    [anon_sym_ptr] = ACTIONS(17),
    [anon_sym_void] = ACTIONS(17),
    [aux_sym_identifier_token1] = ACTIONS(19),
    [anon_sym_if] = ACTIONS(21),
    [anon_sym_else] = ACTIONS(21),
    [anon_sym_elif] = ACTIONS(21),
    [anon_sym_while] = ACTIONS(21),
    [sym_constant] = ACTIONS(19),
    [sym_string] = ACTIONS(23),
    [sym_char] = ACTIONS(23),
    [sym_number] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
  },
  [17] = {
    [anon_sym_PLUS] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [anon_sym_STAR] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_BANG_EQ] = ACTIONS(71),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT_EQ] = ACTIONS(71),
    [anon_sym_LT_EQ] = ACTIONS(71),
    [anon_sym_int] = ACTIONS(73),
    [anon_sym_char] = ACTIONS(73),
    [anon_sym_bool] = ACTIONS(73),
    [anon_sym_ptr] = ACTIONS(73),
    [anon_sym_void] = ACTIONS(73),
    [aux_sym_identifier_token1] = ACTIONS(73),
    [anon_sym_if] = ACTIONS(73),
    [anon_sym_else] = ACTIONS(73),
    [anon_sym_elif] = ACTIONS(73),
    [anon_sym_while] = ACTIONS(73),
    [sym_constant] = ACTIONS(73),
    [sym_string] = ACTIONS(71),
    [sym_char] = ACTIONS(71),
    [sym_number] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(73),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(115), 1,
      anon_sym_DASH_GT,
    STATE(19), 1,
      aux_sym_function_repeat1,
    STATE(28), 1,
      sym_type,
    ACTIONS(117), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_ptr,
      anon_sym_void,
  [17] = 4,
    ACTIONS(119), 1,
      anon_sym_DASH_GT,
    STATE(20), 1,
      aux_sym_function_repeat1,
    STATE(28), 1,
      sym_type,
    ACTIONS(117), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_ptr,
      anon_sym_void,
  [34] = 4,
    ACTIONS(121), 1,
      anon_sym_DASH_GT,
    STATE(20), 1,
      aux_sym_function_repeat1,
    STATE(28), 1,
      sym_type,
    ACTIONS(123), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_ptr,
      anon_sym_void,
  [51] = 2,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    ACTIONS(121), 6,
      anon_sym_DASH_GT,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_ptr,
      anon_sym_void,
  [63] = 1,
    ACTIONS(71), 7,
      anon_sym_COMMA,
      anon_sym_DASH_GT,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_ptr,
      anon_sym_void,
  [73] = 2,
    STATE(6), 1,
      sym_type,
    ACTIONS(128), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_ptr,
      anon_sym_void,
  [84] = 2,
    STATE(5), 1,
      sym_type,
    ACTIONS(128), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_ptr,
      anon_sym_void,
  [95] = 1,
    ACTIONS(130), 6,
      anon_sym_DASH_GT,
      anon_sym_int,
      anon_sym_char,
      anon_sym_bool,
      anon_sym_ptr,
      anon_sym_void,
  [104] = 3,
    ACTIONS(19), 1,
      sym_constant,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    STATE(14), 1,
      sym_identifier,
  [114] = 3,
    ACTIONS(19), 1,
      sym_constant,
    ACTIONS(132), 1,
      aux_sym_identifier_token1,
    STATE(32), 1,
      sym_identifier,
  [124] = 3,
    ACTIONS(134), 1,
      aux_sym_identifier_token1,
    ACTIONS(136), 1,
      sym_constant,
    STATE(21), 1,
      sym_identifier,
  [134] = 3,
    ACTIONS(138), 1,
      aux_sym_identifier_token1,
    ACTIONS(140), 1,
      sym_constant,
    STATE(15), 1,
      sym_identifier,
  [144] = 3,
    ACTIONS(138), 1,
      aux_sym_identifier_token1,
    ACTIONS(140), 1,
      sym_constant,
    STATE(16), 1,
      sym_identifier,
  [154] = 2,
    ACTIONS(95), 1,
      aux_sym_identifier_token1,
    ACTIONS(97), 1,
      sym_constant,
  [161] = 1,
    ACTIONS(142), 1,
      anon_sym_COLON,
  [165] = 1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 17,
  [SMALL_STATE(20)] = 34,
  [SMALL_STATE(21)] = 51,
  [SMALL_STATE(22)] = 63,
  [SMALL_STATE(23)] = 73,
  [SMALL_STATE(24)] = 84,
  [SMALL_STATE(25)] = 95,
  [SMALL_STATE(26)] = 104,
  [SMALL_STATE(27)] = 114,
  [SMALL_STATE(28)] = 124,
  [SMALL_STATE(29)] = 134,
  [SMALL_STATE(30)] = 144,
  [SMALL_STATE(31)] = 154,
  [SMALL_STATE(32)] = 161,
  [SMALL_STATE(33)] = 165,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(13),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 6, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 5, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_buffer, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_buffer, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operator, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operator, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(31),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [144] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_boba(void) {
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
