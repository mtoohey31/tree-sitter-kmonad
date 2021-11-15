#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 82
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI_SEMI = 1,
  aux_sym_line_comment_token1 = 2,
  anon_sym_LF = 3,
  anon_sym_POUND_PIPE = 4,
  aux_sym_block_comment_token1 = 5,
  anon_sym_PIPE_POUND_LF = 6,
  anon_sym_LPAREN = 7,
  anon_sym_defcfg = 8,
  anon_sym_RPAREN = 9,
  anon_sym_defsrc = 10,
  anon_sym_defalias = 11,
  anon_sym_deflayer = 12,
  aux_sym_function_call_token1 = 13,
  aux_sym_assignment_token1 = 14,
  sym_identifier = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_string_token1 = 17,
  anon_sym_true = 18,
  anon_sym_false = 19,
  anon_sym_SLASH = 20,
  anon_sym_STAR = 21,
  aux_sym_value_token1 = 22,
  sym_alias = 23,
  anon_sym_BSLASH_LPAREN = 24,
  anon_sym_BSLASH_RPAREN = 25,
  sym_fallthrough = 26,
  sym_source_file = 27,
  sym_line_comment = 28,
  sym_block_comment = 29,
  sym__context = 30,
  sym_defcfg = 31,
  sym_defsrc = 32,
  sym_defalias = 33,
  sym_deflayer = 34,
  sym__expression = 35,
  sym_function_call = 36,
  sym_assignment = 37,
  sym_string = 38,
  sym_boolean = 39,
  sym__value = 40,
  sym_value = 41,
  sym_escaped_value = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_defcfg_repeat1 = 44,
  aux_sym_defsrc_repeat1 = 45,
  aux_sym_function_call_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI_SEMI] = ";;",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_POUND_PIPE] = "#|",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_PIPE_POUND_LF] = "|#\n",
  [anon_sym_LPAREN] = "(",
  [anon_sym_defcfg] = "defcfg",
  [anon_sym_RPAREN] = ")",
  [anon_sym_defsrc] = "defsrc",
  [anon_sym_defalias] = "defalias",
  [anon_sym_deflayer] = "deflayer",
  [aux_sym_function_call_token1] = "function_call_token1",
  [aux_sym_assignment_token1] = "assignment_token1",
  [sym_identifier] = "identifier",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SLASH] = "/",
  [anon_sym_STAR] = "*",
  [aux_sym_value_token1] = "value_token1",
  [sym_alias] = "alias",
  [anon_sym_BSLASH_LPAREN] = "\\(",
  [anon_sym_BSLASH_RPAREN] = "\\)",
  [sym_fallthrough] = "fallthrough",
  [sym_source_file] = "source_file",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym__context] = "_context",
  [sym_defcfg] = "defcfg",
  [sym_defsrc] = "defsrc",
  [sym_defalias] = "defalias",
  [sym_deflayer] = "deflayer",
  [sym__expression] = "_expression",
  [sym_function_call] = "function_call",
  [sym_assignment] = "assignment",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym__value] = "_value",
  [sym_value] = "value",
  [sym_escaped_value] = "escaped_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_defcfg_repeat1] = "defcfg_repeat1",
  [aux_sym_defsrc_repeat1] = "defsrc_repeat1",
  [aux_sym_function_call_repeat1] = "function_call_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI_SEMI] = anon_sym_SEMI_SEMI,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_POUND_PIPE] = anon_sym_POUND_PIPE,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_PIPE_POUND_LF] = anon_sym_PIPE_POUND_LF,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_defcfg] = anon_sym_defcfg,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_defsrc] = anon_sym_defsrc,
  [anon_sym_defalias] = anon_sym_defalias,
  [anon_sym_deflayer] = anon_sym_deflayer,
  [aux_sym_function_call_token1] = aux_sym_function_call_token1,
  [aux_sym_assignment_token1] = aux_sym_assignment_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [sym_alias] = sym_alias,
  [anon_sym_BSLASH_LPAREN] = anon_sym_BSLASH_LPAREN,
  [anon_sym_BSLASH_RPAREN] = anon_sym_BSLASH_RPAREN,
  [sym_fallthrough] = sym_fallthrough,
  [sym_source_file] = sym_source_file,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym__context] = sym__context,
  [sym_defcfg] = sym_defcfg,
  [sym_defsrc] = sym_defsrc,
  [sym_defalias] = sym_defalias,
  [sym_deflayer] = sym_deflayer,
  [sym__expression] = sym__expression,
  [sym_function_call] = sym_function_call,
  [sym_assignment] = sym_assignment,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym__value] = sym__value,
  [sym_value] = sym_value,
  [sym_escaped_value] = sym_escaped_value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_defcfg_repeat1] = aux_sym_defcfg_repeat1,
  [aux_sym_defsrc_repeat1] = aux_sym_defsrc_repeat1,
  [aux_sym_function_call_repeat1] = aux_sym_function_call_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_POUND_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defcfg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defsrc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defalias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deflayer] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_function_call_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_fallthrough] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__context] = {
    .visible = false,
    .named = true,
  },
  [sym_defcfg] = {
    .visible = true,
    .named = true,
  },
  [sym_defsrc] = {
    .visible = true,
    .named = true,
  },
  [sym_defalias] = {
    .visible = true,
    .named = true,
  },
  [sym_deflayer] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defcfg_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_defsrc_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_call_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '/') ADVANCE(89);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(12);
      if (lookahead == '_') ADVANCE(105);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '|') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '_') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead == 't') ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('\'' <= lookahead && lookahead <= ',') ||
          lookahead == '.' ||
          (':' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(101);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(77);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '/') ADVANCE(90);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '@') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(92);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('\'' <= lookahead && lookahead <= '=') ||
          ('A' <= lookahead && lookahead <= ']') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(1);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(1);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == ';') ADVANCE(56);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 12:
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(104);
      END_STATE();
    case 13:
      if (lookahead == ';') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(61);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 35:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == '|') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(58);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(81);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      if (lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '=') ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SEMI_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == ';') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == ';') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '|') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(81);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(48);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_POUND_PIPE);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(58);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == ';') ADVANCE(56);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == ';') ADVANCE(42);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '|') ADVANCE(54);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '|') ADVANCE(38);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PIPE_POUND_LF);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_defcfg);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_defsrc);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_defalias);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_deflayer);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_function_call_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_assignment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == '\'' ||
          lookahead == '+' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(101);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == '\'' ||
          lookahead == '+' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(101);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == '\'' ||
          lookahead == '+' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(101);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead == '\'' ||
          lookahead == '+' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(101);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(74);
      if (lookahead == '\'' ||
          lookahead == '+' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(101);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead == '\'' ||
          lookahead == '+' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(101);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == '\'' ||
          lookahead == '+' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(101);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\'' ||
          lookahead == '+' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(101);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == ';') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '|') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '\'' ||
          lookahead == '+' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(101);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '=') ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '\'' ||
          lookahead == '+' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(101);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '=') ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '=') ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '=') ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '=') ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '=') ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'e') ADVANCE(85);
      if (lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '=') ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'e') ADVANCE(88);
      if (lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '=') ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'l') ADVANCE(99);
      if (lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '=') ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '=') ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '=') ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == 'u') ADVANCE(95);
      if (lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '=') ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '=') ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_alias);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BSLASH_LPAREN);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_BSLASH_RPAREN);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_fallthrough);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_fallthrough);
      if (lookahead == '\'' ||
          lookahead == '+' ||
          lookahead == ',' ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '=') ||
          ('[' <= lookahead && lookahead <= ']')) ADVANCE(101);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_fallthrough);
      if (lookahead == '\'' ||
          ('+' <= lookahead && lookahead <= '=') ||
          ('A' <= lookahead && lookahead <= ']') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 78},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 78},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 78},
  [78] = {(TSStateId)(-1)},
  [79] = {(TSStateId)(-1)},
  [80] = {(TSStateId)(-1)},
  [81] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [sym_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI_SEMI] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_PIPE_POUND_LF] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_defcfg] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_defsrc] = ACTIONS(1),
    [anon_sym_defalias] = ACTIONS(1),
    [anon_sym_deflayer] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_alias] = ACTIONS(1),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(1),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(1),
    [sym_fallthrough] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(71),
    [sym_line_comment] = STATE(1),
    [sym_block_comment] = STATE(1),
    [sym__context] = STATE(51),
    [sym_defcfg] = STATE(54),
    [sym_defsrc] = STATE(54),
    [sym_defalias] = STATE(54),
    [sym_deflayer] = STATE(54),
    [aux_sym_source_file_repeat1] = STATE(34),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_SEMI_SEMI] = ACTIONS(3),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(9),
  },
  [2] = {
    [sym_line_comment] = STATE(2),
    [sym_block_comment] = STATE(2),
    [sym__expression] = STATE(17),
    [sym_function_call] = STATE(16),
    [sym_assignment] = STATE(17),
    [sym_string] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym__value] = STATE(16),
    [sym_value] = STATE(19),
    [sym_escaped_value] = STATE(19),
    [aux_sym_defcfg_repeat1] = STATE(3),
    [anon_sym_SEMI_SEMI] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(15),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [aux_sym_value_token1] = ACTIONS(23),
    [sym_alias] = ACTIONS(27),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(29),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(29),
    [sym_fallthrough] = ACTIONS(31),
  },
  [3] = {
    [sym_line_comment] = STATE(3),
    [sym_block_comment] = STATE(3),
    [sym__expression] = STATE(17),
    [sym_function_call] = STATE(16),
    [sym_assignment] = STATE(17),
    [sym_string] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym__value] = STATE(16),
    [sym_value] = STATE(19),
    [sym_escaped_value] = STATE(19),
    [aux_sym_defcfg_repeat1] = STATE(3),
    [anon_sym_SEMI_SEMI] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(36),
    [sym_identifier] = ACTIONS(38),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(44),
    [anon_sym_false] = ACTIONS(44),
    [anon_sym_SLASH] = ACTIONS(47),
    [anon_sym_STAR] = ACTIONS(50),
    [aux_sym_value_token1] = ACTIONS(47),
    [sym_alias] = ACTIONS(53),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(56),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(56),
    [sym_fallthrough] = ACTIONS(59),
  },
  [4] = {
    [sym_line_comment] = STATE(4),
    [sym_block_comment] = STATE(4),
    [sym__expression] = STATE(17),
    [sym_function_call] = STATE(16),
    [sym_assignment] = STATE(17),
    [sym_string] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym__value] = STATE(16),
    [sym_value] = STATE(19),
    [sym_escaped_value] = STATE(19),
    [aux_sym_defcfg_repeat1] = STATE(5),
    [anon_sym_SEMI_SEMI] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(62),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [aux_sym_value_token1] = ACTIONS(23),
    [sym_alias] = ACTIONS(27),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(29),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(29),
    [sym_fallthrough] = ACTIONS(31),
  },
  [5] = {
    [sym_line_comment] = STATE(5),
    [sym_block_comment] = STATE(5),
    [sym__expression] = STATE(17),
    [sym_function_call] = STATE(16),
    [sym_assignment] = STATE(17),
    [sym_string] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym__value] = STATE(16),
    [sym_value] = STATE(19),
    [sym_escaped_value] = STATE(19),
    [aux_sym_defcfg_repeat1] = STATE(3),
    [anon_sym_SEMI_SEMI] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(64),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [aux_sym_value_token1] = ACTIONS(23),
    [sym_alias] = ACTIONS(27),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(29),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(29),
    [sym_fallthrough] = ACTIONS(31),
  },
  [6] = {
    [sym_line_comment] = STATE(6),
    [sym_block_comment] = STATE(6),
    [sym__expression] = STATE(17),
    [sym_function_call] = STATE(16),
    [sym_assignment] = STATE(17),
    [sym_string] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym__value] = STATE(16),
    [sym_value] = STATE(19),
    [sym_escaped_value] = STATE(19),
    [aux_sym_defcfg_repeat1] = STATE(2),
    [anon_sym_SEMI_SEMI] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(66),
    [sym_identifier] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_STAR] = ACTIONS(25),
    [aux_sym_value_token1] = ACTIONS(23),
    [sym_alias] = ACTIONS(27),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(29),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(29),
    [sym_fallthrough] = ACTIONS(31),
  },
  [7] = {
    [sym_line_comment] = STATE(7),
    [sym_block_comment] = STATE(7),
    [sym__expression] = STATE(28),
    [sym_function_call] = STATE(30),
    [sym_string] = STATE(30),
    [sym_boolean] = STATE(30),
    [sym__value] = STATE(30),
    [sym_value] = STATE(27),
    [sym_escaped_value] = STATE(27),
    [aux_sym_defsrc_repeat1] = STATE(7),
    [anon_sym_SEMI_SEMI] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(68),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(76),
    [anon_sym_false] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_STAR] = ACTIONS(82),
    [aux_sym_value_token1] = ACTIONS(79),
    [sym_alias] = ACTIONS(85),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(88),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(88),
    [sym_fallthrough] = ACTIONS(91),
  },
  [8] = {
    [sym_line_comment] = STATE(8),
    [sym_block_comment] = STATE(8),
    [sym__expression] = STATE(28),
    [sym_function_call] = STATE(30),
    [sym_string] = STATE(30),
    [sym_boolean] = STATE(30),
    [sym__value] = STATE(30),
    [sym_value] = STATE(27),
    [sym_escaped_value] = STATE(27),
    [aux_sym_defsrc_repeat1] = STATE(11),
    [anon_sym_SEMI_SEMI] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(104),
    [aux_sym_value_token1] = ACTIONS(102),
    [sym_alias] = ACTIONS(106),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(108),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(108),
    [sym_fallthrough] = ACTIONS(110),
  },
  [9] = {
    [sym_line_comment] = STATE(9),
    [sym_block_comment] = STATE(9),
    [sym__expression] = STATE(28),
    [sym_function_call] = STATE(30),
    [sym_string] = STATE(30),
    [sym_boolean] = STATE(30),
    [sym__value] = STATE(30),
    [sym_value] = STATE(27),
    [sym_escaped_value] = STATE(27),
    [aux_sym_defsrc_repeat1] = STATE(10),
    [anon_sym_SEMI_SEMI] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(104),
    [aux_sym_value_token1] = ACTIONS(102),
    [sym_alias] = ACTIONS(106),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(108),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(108),
    [sym_fallthrough] = ACTIONS(110),
  },
  [10] = {
    [sym_line_comment] = STATE(10),
    [sym_block_comment] = STATE(10),
    [sym__expression] = STATE(28),
    [sym_function_call] = STATE(30),
    [sym_string] = STATE(30),
    [sym_boolean] = STATE(30),
    [sym__value] = STATE(30),
    [sym_value] = STATE(27),
    [sym_escaped_value] = STATE(27),
    [aux_sym_defsrc_repeat1] = STATE(7),
    [anon_sym_SEMI_SEMI] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(104),
    [aux_sym_value_token1] = ACTIONS(102),
    [sym_alias] = ACTIONS(106),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(108),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(108),
    [sym_fallthrough] = ACTIONS(110),
  },
  [11] = {
    [sym_line_comment] = STATE(11),
    [sym_block_comment] = STATE(11),
    [sym__expression] = STATE(28),
    [sym_function_call] = STATE(30),
    [sym_string] = STATE(30),
    [sym_boolean] = STATE(30),
    [sym__value] = STATE(30),
    [sym_value] = STATE(27),
    [sym_escaped_value] = STATE(27),
    [aux_sym_defsrc_repeat1] = STATE(7),
    [anon_sym_SEMI_SEMI] = ACTIONS(11),
    [anon_sym_POUND_PIPE] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [anon_sym_true] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(104),
    [aux_sym_value_token1] = ACTIONS(102),
    [sym_alias] = ACTIONS(106),
    [anon_sym_BSLASH_LPAREN] = ACTIONS(108),
    [anon_sym_BSLASH_RPAREN] = ACTIONS(108),
    [sym_fallthrough] = ACTIONS(110),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_STAR,
    ACTIONS(27), 1,
      sym_alias,
    ACTIONS(31), 1,
      sym_fallthrough,
    STATE(23), 1,
      sym__expression,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(23), 2,
      anon_sym_SLASH,
      aux_sym_value_token1,
    ACTIONS(29), 2,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
    STATE(12), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(19), 2,
      sym_value,
      sym_escaped_value,
    STATE(16), 4,
      sym_function_call,
      sym_string,
      sym_boolean,
      sym__value,
  [51] = 14,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_STAR,
    ACTIONS(128), 1,
      sym_alias,
    ACTIONS(132), 1,
      sym_fallthrough,
    STATE(53), 1,
      sym__expression,
    ACTIONS(122), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 2,
      anon_sym_SLASH,
      aux_sym_value_token1,
    ACTIONS(130), 2,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
    STATE(13), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(61), 2,
      sym_value,
      sym_escaped_value,
    STATE(59), 4,
      sym_function_call,
      sym_string,
      sym_boolean,
      sym__value,
  [102] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    STATE(14), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(136), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SLASH,
      aux_sym_value_token1,
      sym_fallthrough,
    ACTIONS(134), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_alias,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
  [130] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    STATE(15), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(140), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SLASH,
      aux_sym_value_token1,
      sym_fallthrough,
    ACTIONS(138), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_alias,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
  [158] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    STATE(16), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(144), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SLASH,
      aux_sym_value_token1,
      sym_fallthrough,
    ACTIONS(142), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_alias,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
  [186] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    STATE(17), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(148), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SLASH,
      aux_sym_value_token1,
      sym_fallthrough,
    ACTIONS(146), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_alias,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
  [214] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    STATE(18), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(152), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SLASH,
      aux_sym_value_token1,
      sym_fallthrough,
    ACTIONS(150), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_alias,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
  [242] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    STATE(19), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(156), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SLASH,
      aux_sym_value_token1,
      sym_fallthrough,
    ACTIONS(154), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_alias,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
  [270] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    STATE(20), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(160), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SLASH,
      aux_sym_value_token1,
      sym_fallthrough,
    ACTIONS(158), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_alias,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
  [298] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    STATE(21), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(164), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SLASH,
      aux_sym_value_token1,
      sym_fallthrough,
    ACTIONS(162), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_alias,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
  [326] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    STATE(22), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SLASH,
      aux_sym_value_token1,
      sym_fallthrough,
    ACTIONS(166), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_alias,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
  [354] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    STATE(23), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(172), 6,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SLASH,
      aux_sym_value_token1,
      sym_fallthrough,
    ACTIONS(170), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_alias,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
  [382] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    STATE(24), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(136), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SLASH,
      aux_sym_value_token1,
      sym_fallthrough,
    ACTIONS(134), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_alias,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
  [409] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    STATE(25), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(140), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SLASH,
      aux_sym_value_token1,
      sym_fallthrough,
    ACTIONS(138), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_alias,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
  [436] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    STATE(26), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(160), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SLASH,
      aux_sym_value_token1,
      sym_fallthrough,
    ACTIONS(158), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_alias,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
  [463] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    STATE(27), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(156), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SLASH,
      aux_sym_value_token1,
      sym_fallthrough,
    ACTIONS(154), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_alias,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
  [490] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    STATE(28), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(176), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SLASH,
      aux_sym_value_token1,
      sym_fallthrough,
    ACTIONS(174), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_alias,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
  [517] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    STATE(29), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(152), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SLASH,
      aux_sym_value_token1,
      sym_fallthrough,
    ACTIONS(150), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_alias,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
  [544] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    STATE(30), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(144), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SLASH,
      aux_sym_value_token1,
      sym_fallthrough,
    ACTIONS(142), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_alias,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
  [571] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    STATE(31), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SLASH,
      aux_sym_value_token1,
      sym_fallthrough,
    ACTIONS(166), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_alias,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
  [598] = 5,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    STATE(32), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(164), 5,
      anon_sym_true,
      anon_sym_false,
      anon_sym_SLASH,
      aux_sym_value_token1,
      sym_fallthrough,
    ACTIONS(162), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      anon_sym_STAR,
      sym_alias,
      anon_sym_BSLASH_LPAREN,
      anon_sym_BSLASH_RPAREN,
  [625] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(180), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym__context,
    STATE(33), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_source_file_repeat1,
    STATE(54), 4,
      sym_defcfg,
      sym_defsrc,
      sym_defalias,
      sym_deflayer,
  [652] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      aux_sym_source_file_repeat1,
    STATE(51), 1,
      sym__context,
    STATE(34), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(54), 4,
      sym_defcfg,
      sym_defsrc,
      sym_defalias,
      sym_deflayer,
  [681] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(185), 1,
      anon_sym_defcfg,
    ACTIONS(187), 1,
      anon_sym_defsrc,
    ACTIONS(189), 1,
      anon_sym_defalias,
    ACTIONS(191), 1,
      anon_sym_deflayer,
    STATE(35), 2,
      sym_line_comment,
      sym_block_comment,
  [704] = 6,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    ACTIONS(197), 1,
      aux_sym_function_call_token1,
    STATE(37), 1,
      aux_sym_function_call_repeat1,
    STATE(36), 2,
      sym_line_comment,
      sym_block_comment,
  [724] = 5,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(201), 1,
      aux_sym_function_call_token1,
    STATE(37), 3,
      sym_line_comment,
      sym_block_comment,
      aux_sym_function_call_repeat1,
  [742] = 6,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(197), 1,
      aux_sym_function_call_token1,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_function_call_repeat1,
    STATE(38), 2,
      sym_line_comment,
      sym_block_comment,
  [762] = 6,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(197), 1,
      aux_sym_function_call_token1,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_function_call_repeat1,
    STATE(39), 2,
      sym_line_comment,
      sym_block_comment,
  [782] = 6,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(197), 1,
      aux_sym_function_call_token1,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_function_call_repeat1,
    STATE(40), 2,
      sym_line_comment,
      sym_block_comment,
  [802] = 6,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(197), 1,
      aux_sym_function_call_token1,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_function_call_repeat1,
    STATE(41), 2,
      sym_line_comment,
      sym_block_comment,
  [822] = 6,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(197), 1,
      aux_sym_function_call_token1,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_function_call_repeat1,
    STATE(42), 2,
      sym_line_comment,
      sym_block_comment,
  [842] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(214), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    STATE(43), 2,
      sym_line_comment,
      sym_block_comment,
  [857] = 5,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(162), 1,
      aux_sym_function_call_token1,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    STATE(44), 2,
      sym_line_comment,
      sym_block_comment,
  [874] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(216), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    STATE(45), 2,
      sym_line_comment,
      sym_block_comment,
  [889] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    STATE(46), 2,
      sym_line_comment,
      sym_block_comment,
  [904] = 5,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(220), 1,
      aux_sym_line_comment_token1,
    ACTIONS(222), 1,
      anon_sym_LF,
    STATE(47), 2,
      sym_line_comment,
      sym_block_comment,
  [921] = 5,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(224), 1,
      aux_sym_block_comment_token1,
    ACTIONS(226), 1,
      anon_sym_PIPE_POUND_LF,
    STATE(48), 2,
      sym_line_comment,
      sym_block_comment,
  [938] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(228), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    STATE(49), 2,
      sym_line_comment,
      sym_block_comment,
  [953] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(230), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    STATE(50), 2,
      sym_line_comment,
      sym_block_comment,
  [968] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(232), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    STATE(51), 2,
      sym_line_comment,
      sym_block_comment,
  [983] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    STATE(52), 2,
      sym_line_comment,
      sym_block_comment,
  [998] = 5,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(236), 1,
      aux_sym_function_call_token1,
    STATE(53), 2,
      sym_line_comment,
      sym_block_comment,
  [1015] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(238), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    STATE(54), 2,
      sym_line_comment,
      sym_block_comment,
  [1030] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(240), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    STATE(55), 2,
      sym_line_comment,
      sym_block_comment,
  [1045] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(242), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    STATE(56), 2,
      sym_line_comment,
      sym_block_comment,
  [1060] = 5,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(166), 1,
      aux_sym_function_call_token1,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    STATE(57), 2,
      sym_line_comment,
      sym_block_comment,
  [1077] = 5,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(134), 1,
      aux_sym_function_call_token1,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    STATE(58), 2,
      sym_line_comment,
      sym_block_comment,
  [1094] = 5,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(142), 1,
      aux_sym_function_call_token1,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    STATE(59), 2,
      sym_line_comment,
      sym_block_comment,
  [1111] = 5,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(150), 1,
      aux_sym_function_call_token1,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    STATE(60), 2,
      sym_line_comment,
      sym_block_comment,
  [1128] = 5,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(154), 1,
      aux_sym_function_call_token1,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    STATE(61), 2,
      sym_line_comment,
      sym_block_comment,
  [1145] = 5,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(158), 1,
      aux_sym_function_call_token1,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    STATE(62), 2,
      sym_line_comment,
      sym_block_comment,
  [1162] = 5,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(138), 1,
      aux_sym_function_call_token1,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    STATE(63), 2,
      sym_line_comment,
      sym_block_comment,
  [1179] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(244), 1,
      anon_sym_LF,
    STATE(64), 2,
      sym_line_comment,
      sym_block_comment,
  [1193] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(246), 1,
      anon_sym_PIPE_POUND_LF,
    STATE(65), 2,
      sym_line_comment,
      sym_block_comment,
  [1207] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(66), 2,
      sym_line_comment,
      sym_block_comment,
  [1221] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(250), 1,
      sym_identifier,
    STATE(67), 2,
      sym_line_comment,
      sym_block_comment,
  [1235] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(252), 1,
      aux_sym_assignment_token1,
    STATE(68), 2,
      sym_line_comment,
      sym_block_comment,
  [1249] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    STATE(69), 2,
      sym_line_comment,
      sym_block_comment,
  [1263] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(256), 1,
      aux_sym_string_token1,
    STATE(70), 2,
      sym_line_comment,
      sym_block_comment,
  [1277] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    STATE(71), 2,
      sym_line_comment,
      sym_block_comment,
  [1291] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(72), 2,
      sym_line_comment,
      sym_block_comment,
  [1305] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(262), 1,
      anon_sym_DQUOTE,
    STATE(73), 2,
      sym_line_comment,
      sym_block_comment,
  [1319] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(264), 1,
      sym_identifier,
    STATE(74), 2,
      sym_line_comment,
      sym_block_comment,
  [1333] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(266), 1,
      aux_sym_string_token1,
    STATE(75), 2,
      sym_line_comment,
      sym_block_comment,
  [1347] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(5), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(268), 1,
      sym_identifier,
    STATE(76), 2,
      sym_line_comment,
      sym_block_comment,
  [1361] = 4,
    ACTIONS(11), 1,
      anon_sym_SEMI_SEMI,
    ACTIONS(193), 1,
      anon_sym_POUND_PIPE,
    ACTIONS(270), 1,
      aux_sym_string_token1,
    STATE(77), 2,
      sym_line_comment,
      sym_block_comment,
  [1375] = 1,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
  [1379] = 1,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
  [1383] = 1,
    ACTIONS(276), 1,
      ts_builtin_sym_end,
  [1387] = 1,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 51,
  [SMALL_STATE(14)] = 102,
  [SMALL_STATE(15)] = 130,
  [SMALL_STATE(16)] = 158,
  [SMALL_STATE(17)] = 186,
  [SMALL_STATE(18)] = 214,
  [SMALL_STATE(19)] = 242,
  [SMALL_STATE(20)] = 270,
  [SMALL_STATE(21)] = 298,
  [SMALL_STATE(22)] = 326,
  [SMALL_STATE(23)] = 354,
  [SMALL_STATE(24)] = 382,
  [SMALL_STATE(25)] = 409,
  [SMALL_STATE(26)] = 436,
  [SMALL_STATE(27)] = 463,
  [SMALL_STATE(28)] = 490,
  [SMALL_STATE(29)] = 517,
  [SMALL_STATE(30)] = 544,
  [SMALL_STATE(31)] = 571,
  [SMALL_STATE(32)] = 598,
  [SMALL_STATE(33)] = 625,
  [SMALL_STATE(34)] = 652,
  [SMALL_STATE(35)] = 681,
  [SMALL_STATE(36)] = 704,
  [SMALL_STATE(37)] = 724,
  [SMALL_STATE(38)] = 742,
  [SMALL_STATE(39)] = 762,
  [SMALL_STATE(40)] = 782,
  [SMALL_STATE(41)] = 802,
  [SMALL_STATE(42)] = 822,
  [SMALL_STATE(43)] = 842,
  [SMALL_STATE(44)] = 857,
  [SMALL_STATE(45)] = 874,
  [SMALL_STATE(46)] = 889,
  [SMALL_STATE(47)] = 904,
  [SMALL_STATE(48)] = 921,
  [SMALL_STATE(49)] = 938,
  [SMALL_STATE(50)] = 953,
  [SMALL_STATE(51)] = 968,
  [SMALL_STATE(52)] = 983,
  [SMALL_STATE(53)] = 998,
  [SMALL_STATE(54)] = 1015,
  [SMALL_STATE(55)] = 1030,
  [SMALL_STATE(56)] = 1045,
  [SMALL_STATE(57)] = 1060,
  [SMALL_STATE(58)] = 1077,
  [SMALL_STATE(59)] = 1094,
  [SMALL_STATE(60)] = 1111,
  [SMALL_STATE(61)] = 1128,
  [SMALL_STATE(62)] = 1145,
  [SMALL_STATE(63)] = 1162,
  [SMALL_STATE(64)] = 1179,
  [SMALL_STATE(65)] = 1193,
  [SMALL_STATE(66)] = 1207,
  [SMALL_STATE(67)] = 1221,
  [SMALL_STATE(68)] = 1235,
  [SMALL_STATE(69)] = 1249,
  [SMALL_STATE(70)] = 1263,
  [SMALL_STATE(71)] = 1277,
  [SMALL_STATE(72)] = 1291,
  [SMALL_STATE(73)] = 1305,
  [SMALL_STATE(74)] = 1319,
  [SMALL_STATE(75)] = 1333,
  [SMALL_STATE(76)] = 1347,
  [SMALL_STATE(77)] = 1361,
  [SMALL_STATE(78)] = 1375,
  [SMALL_STATE(79)] = 1379,
  [SMALL_STATE(80)] = 1383,
  [SMALL_STATE(81)] = 1387,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defcfg_repeat1, 2), SHIFT_REPEAT(67),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defcfg_repeat1, 2),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defcfg_repeat1, 2), SHIFT_REPEAT(68),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defcfg_repeat1, 2), SHIFT_REPEAT(70),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defcfg_repeat1, 2), SHIFT_REPEAT(15),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defcfg_repeat1, 2), SHIFT_REPEAT(20),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defcfg_repeat1, 2), SHIFT_REPEAT(20),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defcfg_repeat1, 2), SHIFT_REPEAT(19),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defcfg_repeat1, 2), SHIFT_REPEAT(18),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defcfg_repeat1, 2), SHIFT_REPEAT(19),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defsrc_repeat1, 2), SHIFT_REPEAT(74),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defsrc_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defsrc_repeat1, 2), SHIFT_REPEAT(75),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defsrc_repeat1, 2), SHIFT_REPEAT(25),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defsrc_repeat1, 2), SHIFT_REPEAT(26),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defsrc_repeat1, 2), SHIFT_REPEAT(26),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defsrc_repeat1, 2), SHIFT_REPEAT(27),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_defsrc_repeat1, 2), SHIFT_REPEAT(29),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_defsrc_repeat1, 2), SHIFT_REPEAT(27),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defcfg_repeat1, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defcfg_repeat1, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped_value, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped_value, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_defsrc_repeat1, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_defsrc_repeat1, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2), SHIFT_REPEAT(13),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defcfg, 4),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deflayer, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defsrc, 4),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defalias, 3),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defsrc, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deflayer, 5),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_call_repeat1, 2),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__context, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defcfg, 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_defalias, 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [258] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_kmonad(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
