#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 1
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
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
  sym_comment = 13,
  sym_source_file = 14,
  sym_production_definition = 15,
  aux_sym__production = 16,
  sym_option = 17,
  sym_repeatition = 18,
  sym_group = 19,
  sym_alternative = 20,
  sym__terminal = 21,
  sym__nonterminal = 22,
  aux_sym_source_file_repeat1 = 23,
  alias_sym_body = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACK] = "open",
  [anon_sym_RBRACK] = "close",
  [anon_sym_LBRACE] = "open",
  [anon_sym_RBRACE] = "close",
  [anon_sym_LPAREN] = "open",
  [anon_sym_RPAREN] = "close",
  [anon_sym_PIPE] = "separator",
  [sym_string] = "string",
  [sym_regexp] = "regexp",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [alias_sym_body] = "body",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACK,
  [anon_sym_RBRACE] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LBRACK,
  [anon_sym_RPAREN] = anon_sym_RBRACK,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_string] = sym_string,
  [sym_regexp] = sym_regexp,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [alias_sym_body] = alias_sym_body,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_body] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_close = 1,
  field_left = 2,
  field_name = 3,
  field_open = 4,
  field_right = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_close] = "close",
  [field_left] = "left",
  [field_name] = "name",
  [field_open] = "open",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_close, 2},
    {field_open, 0},
  [3] =
    {field_left, 0},
    {field_right, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_body,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__production, 2,
    aux_sym__production,
    alias_sym_body,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      ADVANCE_MAP(
        '"', 2,
        '$', 5,
        '(', 13,
        ')', 14,
        '/', 3,
        ':', 7,
        ';', 8,
        '[', 9,
        ']', 10,
        '{', 11,
        '|', 15,
        '}', 12,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(16);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(18);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(17);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_regexp);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_regexp);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
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
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
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
    [sym_string] = ACTIONS(1),
    [sym_regexp] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym_production_definition] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [aux_sym__production] = STATE(2),
    [sym_option] = STATE(14),
    [sym_repeatition] = STATE(14),
    [sym_group] = STATE(14),
    [sym_alternative] = STATE(14),
    [sym__terminal] = STATE(14),
    [sym__nonterminal] = STATE(14),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(12),
    [anon_sym_LBRACK] = ACTIONS(14),
    [anon_sym_RBRACK] = ACTIONS(12),
    [anon_sym_LBRACE] = ACTIONS(17),
    [anon_sym_RBRACE] = ACTIONS(12),
    [anon_sym_LPAREN] = ACTIONS(20),
    [anon_sym_RPAREN] = ACTIONS(12),
    [anon_sym_PIPE] = ACTIONS(23),
    [sym_string] = ACTIONS(9),
    [sym_regexp] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [aux_sym__production] = STATE(2),
    [sym_option] = STATE(14),
    [sym_repeatition] = STATE(14),
    [sym_group] = STATE(14),
    [sym_alternative] = STATE(14),
    [sym__terminal] = STATE(14),
    [sym__nonterminal] = STATE(14),
    [sym_identifier] = ACTIONS(28),
    [anon_sym_SEMI] = ACTIONS(28),
    [anon_sym_LBRACK] = ACTIONS(28),
    [anon_sym_RBRACK] = ACTIONS(28),
    [anon_sym_LBRACE] = ACTIONS(28),
    [anon_sym_RBRACE] = ACTIONS(28),
    [anon_sym_LPAREN] = ACTIONS(28),
    [anon_sym_RPAREN] = ACTIONS(28),
    [anon_sym_PIPE] = ACTIONS(23),
    [sym_string] = ACTIONS(28),
    [sym_regexp] = ACTIONS(30),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [aux_sym__production] = STATE(2),
    [sym_option] = STATE(14),
    [sym_repeatition] = STATE(14),
    [sym_group] = STATE(14),
    [sym_alternative] = STATE(14),
    [sym__terminal] = STATE(14),
    [sym__nonterminal] = STATE(14),
    [sym_identifier] = ACTIONS(32),
    [anon_sym_SEMI] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(36),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(23),
    [sym_string] = ACTIONS(32),
    [sym_regexp] = ACTIONS(42),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [aux_sym__production] = STATE(2),
    [sym_option] = STATE(14),
    [sym_repeatition] = STATE(14),
    [sym_group] = STATE(14),
    [sym_alternative] = STATE(14),
    [sym__terminal] = STATE(14),
    [sym__nonterminal] = STATE(14),
    [sym_identifier] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(36),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(44),
    [anon_sym_PIPE] = ACTIONS(23),
    [sym_string] = ACTIONS(32),
    [sym_regexp] = ACTIONS(42),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [aux_sym__production] = STATE(2),
    [sym_option] = STATE(14),
    [sym_repeatition] = STATE(14),
    [sym_group] = STATE(14),
    [sym_alternative] = STATE(14),
    [sym__terminal] = STATE(14),
    [sym__nonterminal] = STATE(14),
    [sym_identifier] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(36),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_RBRACE] = ACTIONS(46),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(23),
    [sym_string] = ACTIONS(32),
    [sym_regexp] = ACTIONS(42),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [aux_sym__production] = STATE(2),
    [sym_option] = STATE(14),
    [sym_repeatition] = STATE(14),
    [sym_group] = STATE(14),
    [sym_alternative] = STATE(14),
    [sym__terminal] = STATE(14),
    [sym__nonterminal] = STATE(14),
    [sym_identifier] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(36),
    [anon_sym_RBRACK] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_PIPE] = ACTIONS(23),
    [sym_string] = ACTIONS(32),
    [sym_regexp] = ACTIONS(42),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [aux_sym__production] = STATE(4),
    [sym_option] = STATE(14),
    [sym_repeatition] = STATE(14),
    [sym_group] = STATE(14),
    [sym_alternative] = STATE(14),
    [sym__terminal] = STATE(14),
    [sym__nonterminal] = STATE(14),
    [sym_identifier] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(36),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(40),
    [sym_string] = ACTIONS(32),
    [sym_regexp] = ACTIONS(42),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [aux_sym__production] = STATE(7),
    [sym_option] = STATE(14),
    [sym_repeatition] = STATE(14),
    [sym_group] = STATE(14),
    [sym_alternative] = STATE(14),
    [sym__terminal] = STATE(14),
    [sym__nonterminal] = STATE(14),
    [sym_identifier] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(36),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(40),
    [sym_string] = ACTIONS(32),
    [sym_regexp] = ACTIONS(42),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [aux_sym__production] = STATE(6),
    [sym_option] = STATE(14),
    [sym_repeatition] = STATE(14),
    [sym_group] = STATE(14),
    [sym_alternative] = STATE(14),
    [sym__terminal] = STATE(14),
    [sym__nonterminal] = STATE(14),
    [sym_identifier] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(36),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(40),
    [sym_string] = ACTIONS(32),
    [sym_regexp] = ACTIONS(42),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [aux_sym__production] = STATE(5),
    [sym_option] = STATE(14),
    [sym_repeatition] = STATE(14),
    [sym_group] = STATE(14),
    [sym_alternative] = STATE(14),
    [sym__terminal] = STATE(14),
    [sym__nonterminal] = STATE(14),
    [sym_identifier] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(36),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(40),
    [sym_string] = ACTIONS(32),
    [sym_regexp] = ACTIONS(42),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [aux_sym__production] = STATE(3),
    [sym_option] = STATE(14),
    [sym_repeatition] = STATE(14),
    [sym_group] = STATE(14),
    [sym_alternative] = STATE(14),
    [sym__terminal] = STATE(14),
    [sym__nonterminal] = STATE(14),
    [sym_identifier] = ACTIONS(32),
    [anon_sym_LBRACK] = ACTIONS(36),
    [anon_sym_LBRACE] = ACTIONS(38),
    [anon_sym_LPAREN] = ACTIONS(40),
    [sym_string] = ACTIONS(32),
    [sym_regexp] = ACTIONS(42),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym_regexp,
    ACTIONS(50), 10,
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
  [19] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      sym_regexp,
    ACTIONS(54), 10,
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
  [38] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      sym_regexp,
    ACTIONS(58), 10,
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
  [57] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym_regexp,
    ACTIONS(62), 10,
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
  [76] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym_production_definition,
      aux_sym_source_file_repeat1,
  [90] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(18), 2,
      sym_production_definition,
      aux_sym_source_file_repeat1,
  [104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym_identifier,
  [112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_COLON,
  [119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 19,
  [SMALL_STATE(15)] = 38,
  [SMALL_STATE(16)] = 57,
  [SMALL_STATE(17)] = 76,
  [SMALL_STATE(18)] = 90,
  [SMALL_STATE(19)] = 104,
  [SMALL_STATE(20)] = 112,
  [SMALL_STATE(21)] = 119,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__production, 2, 0, 0), SHIFT_REPEAT(14),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__production, 2, 0, 0),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__production, 2, 0, 0), SHIFT_REPEAT(9),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__production, 2, 0, 0), SHIFT_REPEAT(10),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__production, 2, 0, 0), SHIFT_REPEAT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__production, 2, 0, 0), SHIFT_REPEAT(14),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternative, 3, 0, 3),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alternative, 3, 0, 3),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeatition, 3, 0, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeatition, 3, 0, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__production, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__production, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3, 0, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3, 0, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 3, 0, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group, 3, 0, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_production_definition, 4, 0, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_grammar(void) {
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
