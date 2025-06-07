#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 1
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  sym_identifier = 1,
  anon_sym_COLON = 2,
  anon_sym_SEMI = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_PIPE = 10,
  sym_string = 11,
  sym_regexp = 12,
  anon_sym_DOLLAR = 13,
  aux_sym_identifier_extern_token1 = 14,
  sym_comment = 15,
  sym_source_file = 16,
  sym_production_definition = 17,
  aux_sym__production = 18,
  sym_option = 19,
  sym_repeatition = 20,
  sym_group = 21,
  sym_alternative = 22,
  sym__terminal = 23,
  sym__nonterminal = 24,
  sym_identifier_extern = 25,
  aux_sym_source_file_repeat1 = 26,
  anon_alias_sym_id = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PIPE] = "|",
  [sym_string] = "string",
  [sym_regexp] = "regexp",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_identifier_extern_token1] = "identifier_extern_token1",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_production_definition] = "production_definition",
  [aux_sym__production] = "_production",
  [sym_option] = "option",
  [sym_repeatition] = "repeatition",
  [sym_group] = "group",
  [sym_alternative] = "alternative",
  [sym__terminal] = "_terminal",
  [sym__nonterminal] = "_nonterminal",
  [sym_identifier_extern] = "identifier_extern",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [anon_alias_sym_id] = "id",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_string] = sym_string,
  [sym_regexp] = sym_regexp,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_identifier_extern_token1] = aux_sym_identifier_extern_token1,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_production_definition] = sym_production_definition,
  [aux_sym__production] = aux_sym__production,
  [sym_option] = sym_option,
  [sym_repeatition] = sym_repeatition,
  [sym_group] = sym_group,
  [sym_alternative] = sym_alternative,
  [sym__terminal] = sym__terminal,
  [sym__nonterminal] = sym__nonterminal,
  [sym_identifier_extern] = sym_identifier_extern,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [anon_alias_sym_id] = anon_alias_sym_id,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_regexp] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_identifier_extern_token1] = {
    .visible = false,
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
  [sym_production_definition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__production] = {
    .visible = false,
    .named = false,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_repeatition] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_alternative] = {
    .visible = true,
    .named = true,
  },
  [sym__terminal] = {
    .visible = false,
    .named = true,
  },
  [sym__nonterminal] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier_extern] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_id] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_left = 1,
  field_name = 2,
  field_right = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_name] = "name",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_left, 0},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [2] = anon_alias_sym_id,
  },
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
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '|') ADVANCE(20);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(23);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '|') ADVANCE(20);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '|') ADVANCE(20);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '$') ADVANCE(25);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '|') ADVANCE(20);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_regexp);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_regexp);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_identifier_extern_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_identifier_extern_token1);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_identifier_extern_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [aux_sym_identifier_extern_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym_production_definition] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [aux_sym__production] = STATE(3),
    [sym_option] = STATE(3),
    [sym_repeatition] = STATE(3),
    [sym_group] = STATE(3),
    [sym_alternative] = STATE(3),
    [sym__terminal] = STATE(3),
    [sym__nonterminal] = STATE(3),
    [sym_identifier_extern] = STATE(3),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(9),
    [anon_sym_PIPE] = ACTIONS(11),
    [sym_string] = ACTIONS(9),
    [sym_regexp] = ACTIONS(13),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [aux_sym__production] = STATE(3),
    [sym_option] = STATE(3),
    [sym_repeatition] = STATE(3),
    [sym_group] = STATE(3),
    [sym_alternative] = STATE(3),
    [sym__terminal] = STATE(3),
    [sym__nonterminal] = STATE(3),
    [sym_identifier_extern] = STATE(3),
    [sym_identifier] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(18),
    [anon_sym_LBRACK] = ACTIONS(20),
    [anon_sym_RBRACK] = ACTIONS(18),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(18),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(18),
    [anon_sym_PIPE] = ACTIONS(11),
    [sym_string] = ACTIONS(15),
    [sym_regexp] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(32),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [aux_sym__production] = STATE(3),
    [sym_option] = STATE(3),
    [sym_repeatition] = STATE(3),
    [sym_group] = STATE(3),
    [sym_alternative] = STATE(3),
    [sym__terminal] = STATE(3),
    [sym__nonterminal] = STATE(3),
    [sym_identifier_extern] = STATE(3),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(11),
    [sym_string] = ACTIONS(35),
    [sym_regexp] = ACTIONS(45),
    [anon_sym_DOLLAR] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [aux_sym__production] = STATE(3),
    [sym_option] = STATE(3),
    [sym_repeatition] = STATE(3),
    [sym_group] = STATE(3),
    [sym_alternative] = STATE(3),
    [sym__terminal] = STATE(3),
    [sym__nonterminal] = STATE(3),
    [sym_identifier_extern] = STATE(3),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(11),
    [sym_string] = ACTIONS(35),
    [sym_regexp] = ACTIONS(45),
    [anon_sym_DOLLAR] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [aux_sym__production] = STATE(3),
    [sym_option] = STATE(3),
    [sym_repeatition] = STATE(3),
    [sym_group] = STATE(3),
    [sym_alternative] = STATE(3),
    [sym__terminal] = STATE(3),
    [sym__nonterminal] = STATE(3),
    [sym_identifier_extern] = STATE(3),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(11),
    [sym_string] = ACTIONS(35),
    [sym_regexp] = ACTIONS(45),
    [anon_sym_DOLLAR] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [aux_sym__production] = STATE(3),
    [sym_option] = STATE(3),
    [sym_repeatition] = STATE(3),
    [sym_group] = STATE(3),
    [sym_alternative] = STATE(3),
    [sym__terminal] = STATE(3),
    [sym__nonterminal] = STATE(3),
    [sym_identifier_extern] = STATE(3),
    [sym_identifier] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [anon_sym_RPAREN] = ACTIONS(53),
    [anon_sym_PIPE] = ACTIONS(11),
    [sym_string] = ACTIONS(35),
    [sym_regexp] = ACTIONS(45),
    [anon_sym_DOLLAR] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [aux_sym__production] = STATE(5),
    [sym_option] = STATE(5),
    [sym_repeatition] = STATE(5),
    [sym_group] = STATE(5),
    [sym_alternative] = STATE(5),
    [sym__terminal] = STATE(5),
    [sym__nonterminal] = STATE(5),
    [sym_identifier_extern] = STATE(5),
    [sym_identifier] = ACTIONS(55),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [sym_string] = ACTIONS(55),
    [sym_regexp] = ACTIONS(57),
    [anon_sym_DOLLAR] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [aux_sym__production] = STATE(4),
    [sym_option] = STATE(4),
    [sym_repeatition] = STATE(4),
    [sym_group] = STATE(4),
    [sym_alternative] = STATE(4),
    [sym__terminal] = STATE(4),
    [sym__nonterminal] = STATE(4),
    [sym_identifier_extern] = STATE(4),
    [sym_identifier] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [sym_string] = ACTIONS(59),
    [sym_regexp] = ACTIONS(61),
    [anon_sym_DOLLAR] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [aux_sym__production] = STATE(6),
    [sym_option] = STATE(6),
    [sym_repeatition] = STATE(6),
    [sym_group] = STATE(6),
    [sym_alternative] = STATE(6),
    [sym__terminal] = STATE(6),
    [sym__nonterminal] = STATE(6),
    [sym_identifier_extern] = STATE(6),
    [sym_identifier] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [sym_string] = ACTIONS(63),
    [sym_regexp] = ACTIONS(65),
    [anon_sym_DOLLAR] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [aux_sym__production] = STATE(7),
    [sym_option] = STATE(7),
    [sym_repeatition] = STATE(7),
    [sym_group] = STATE(7),
    [sym_alternative] = STATE(7),
    [sym__terminal] = STATE(7),
    [sym__nonterminal] = STATE(7),
    [sym_identifier_extern] = STATE(7),
    [sym_identifier] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [sym_string] = ACTIONS(67),
    [sym_regexp] = ACTIONS(69),
    [anon_sym_DOLLAR] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [aux_sym__production] = STATE(2),
    [sym_option] = STATE(2),
    [sym_repeatition] = STATE(2),
    [sym_group] = STATE(2),
    [sym_alternative] = STATE(2),
    [sym__terminal] = STATE(2),
    [sym__nonterminal] = STATE(2),
    [sym_identifier_extern] = STATE(2),
    [sym_identifier] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(41),
    [anon_sym_LPAREN] = ACTIONS(43),
    [sym_string] = ACTIONS(71),
    [sym_regexp] = ACTIONS(73),
    [anon_sym_DOLLAR] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_regexp,
    ACTIONS(75), 11,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_string,
      sym_identifier,
      anon_sym_DOLLAR,
  [20] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_regexp,
    ACTIONS(79), 11,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_string,
      sym_identifier,
      anon_sym_DOLLAR,
  [40] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_regexp,
    ACTIONS(83), 11,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_string,
      sym_identifier,
      anon_sym_DOLLAR,
  [60] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_regexp,
    ACTIONS(87), 11,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      sym_string,
      sym_identifier,
      anon_sym_DOLLAR,
  [80] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_production_definition,
      aux_sym_source_file_repeat1,
  [94] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(18), 2,
      sym_production_definition,
      aux_sym_source_file_repeat1,
  [108] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      aux_sym_identifier_extern_token1,
  [123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_identifier,
  [130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_COLON,
  [137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 20,
  [SMALL_STATE(15)] = 40,
  [SMALL_STATE(16)] = 60,
  [SMALL_STATE(17)] = 80,
  [SMALL_STATE(18)] = 94,
  [SMALL_STATE(19)] = 108,
  [SMALL_STATE(20)] = 116,
  [SMALL_STATE(21)] = 123,
  [SMALL_STATE(22)] = 130,
  [SMALL_STATE(23)] = 137,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 3, .production_id = 3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternative, 3, .production_id = 3),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__production, 2), SHIFT_REPEAT(3),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__production, 2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__production, 2), SHIFT_REPEAT(9),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__production, 2), SHIFT_REPEAT(10),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__production, 2), SHIFT_REPEAT(11),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__production, 2), SHIFT_REPEAT(3),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__production, 2), SHIFT_REPEAT(20),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeatition, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeatition, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_extern, 3, .production_id = 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier_extern, 3, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_definition, 4, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [106] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_grammar(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
