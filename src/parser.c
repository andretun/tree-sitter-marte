#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_string_token1 = 1,
  anon_sym_DQUOTE = 2,
  aux_sym_string_char_token1 = 3,
  aux_sym_number_token1 = 4,
  aux_sym_number_token2 = 5,
  sym_comment = 6,
  sym_assign = 7,
  sym_obrace = 8,
  sym_cbrace = 9,
  sym_opar = 10,
  sym_cpar = 11,
  sym_vbar = 12,
  sym_comma = 13,
  sym_cdb = 14,
  sym_expression = 15,
  sym_exp_var = 16,
  sym_exp_cast = 17,
  sym_exp_cast_scalar = 18,
  sym_exp_block = 19,
  sym_variable = 20,
  sym_scalar = 21,
  sym_vector = 22,
  sym_matrix = 23,
  sym_block = 24,
  sym_string = 25,
  sym_string_char = 26,
  sym_number = 27,
  aux_sym_cdb_repeat1 = 28,
  aux_sym_vector_repeat1 = 29,
  aux_sym_matrix_repeat1 = 30,
  aux_sym_string_char_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_char_token1] = "string_char_token1",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [sym_comment] = "comment",
  [sym_assign] = "assign",
  [sym_obrace] = "obrace",
  [sym_cbrace] = "cbrace",
  [sym_opar] = "opar",
  [sym_cpar] = "cpar",
  [sym_vbar] = "vbar",
  [sym_comma] = "comma",
  [sym_cdb] = "cdb",
  [sym_expression] = "expression",
  [sym_exp_var] = "exp_var",
  [sym_exp_cast] = "exp_cast",
  [sym_exp_cast_scalar] = "exp_cast_scalar",
  [sym_exp_block] = "exp_block",
  [sym_variable] = "variable",
  [sym_scalar] = "scalar",
  [sym_vector] = "vector",
  [sym_matrix] = "matrix",
  [sym_block] = "block",
  [sym_string] = "string",
  [sym_string_char] = "string_char",
  [sym_number] = "number",
  [aux_sym_cdb_repeat1] = "cdb_repeat1",
  [aux_sym_vector_repeat1] = "vector_repeat1",
  [aux_sym_matrix_repeat1] = "matrix_repeat1",
  [aux_sym_string_char_repeat1] = "string_char_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_char_token1] = aux_sym_string_char_token1,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [sym_comment] = sym_comment,
  [sym_assign] = sym_assign,
  [sym_obrace] = sym_obrace,
  [sym_cbrace] = sym_cbrace,
  [sym_opar] = sym_opar,
  [sym_cpar] = sym_cpar,
  [sym_vbar] = sym_vbar,
  [sym_comma] = sym_comma,
  [sym_cdb] = sym_cdb,
  [sym_expression] = sym_expression,
  [sym_exp_var] = sym_exp_var,
  [sym_exp_cast] = sym_exp_cast,
  [sym_exp_cast_scalar] = sym_exp_cast_scalar,
  [sym_exp_block] = sym_exp_block,
  [sym_variable] = sym_variable,
  [sym_scalar] = sym_scalar,
  [sym_vector] = sym_vector,
  [sym_matrix] = sym_matrix,
  [sym_block] = sym_block,
  [sym_string] = sym_string,
  [sym_string_char] = sym_string_char,
  [sym_number] = sym_number,
  [aux_sym_cdb_repeat1] = aux_sym_cdb_repeat1,
  [aux_sym_vector_repeat1] = aux_sym_vector_repeat1,
  [aux_sym_matrix_repeat1] = aux_sym_matrix_repeat1,
  [aux_sym_string_char_repeat1] = aux_sym_string_char_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_obrace] = {
    .visible = true,
    .named = true,
  },
  [sym_cbrace] = {
    .visible = true,
    .named = true,
  },
  [sym_opar] = {
    .visible = true,
    .named = true,
  },
  [sym_cpar] = {
    .visible = true,
    .named = true,
  },
  [sym_vbar] = {
    .visible = true,
    .named = true,
  },
  [sym_comma] = {
    .visible = true,
    .named = true,
  },
  [sym_cdb] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_exp_var] = {
    .visible = true,
    .named = true,
  },
  [sym_exp_cast] = {
    .visible = true,
    .named = true,
  },
  [sym_exp_cast_scalar] = {
    .visible = true,
    .named = true,
  },
  [sym_exp_block] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_scalar] = {
    .visible = true,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_matrix] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_char] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_cdb_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vector_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_matrix_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_char_repeat1] = {
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
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      ADVANCE_MAP(
        '"', 10,
        '(', 23,
        ')', 24,
        ',', 26,
        '/', 2,
        '0', 14,
        '=', 20,
        '{', 21,
        '|', 25,
        '}', 22,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (lookahead == '$' ||
          lookahead == '+' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_string_char_token1);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_string_char_token1);
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_string_char_token1);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(11);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_assign);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_obrace);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_cbrace);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_opar);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_cpar);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_vbar);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comma);
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
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_assign] = ACTIONS(1),
    [sym_obrace] = ACTIONS(1),
    [sym_cbrace] = ACTIONS(1),
    [sym_opar] = ACTIONS(1),
    [sym_cpar] = ACTIONS(1),
    [sym_vbar] = ACTIONS(1),
    [sym_comma] = ACTIONS(1),
  },
  [1] = {
    [sym_cdb] = STATE(40),
    [sym_expression] = STATE(7),
    [sym_exp_var] = STATE(29),
    [sym_exp_cast] = STATE(29),
    [sym_exp_cast_scalar] = STATE(29),
    [sym_exp_block] = STATE(29),
    [sym_string] = STATE(39),
    [sym_string_char] = STATE(9),
    [aux_sym_cdb_repeat1] = STATE(7),
    [aux_sym_string_token1] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_expression] = STATE(8),
    [sym_exp_var] = STATE(29),
    [sym_exp_cast] = STATE(29),
    [sym_exp_cast_scalar] = STATE(29),
    [sym_exp_block] = STATE(29),
    [sym_scalar] = STATE(19),
    [sym_vector] = STATE(34),
    [sym_string] = STATE(18),
    [sym_string_char] = STATE(9),
    [sym_number] = STATE(15),
    [aux_sym_cdb_repeat1] = STATE(8),
    [aux_sym_vector_repeat1] = STATE(11),
    [aux_sym_matrix_repeat1] = STATE(23),
    [aux_sym_string_token1] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [aux_sym_number_token1] = ACTIONS(9),
    [aux_sym_number_token2] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [sym_obrace] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_string_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      aux_sym_number_token1,
    ACTIONS(11), 1,
      aux_sym_number_token2,
    ACTIONS(15), 1,
      sym_obrace,
    ACTIONS(17), 1,
      sym_opar,
    STATE(9), 1,
      sym_string_char,
    STATE(26), 1,
      sym_block,
    STATE(30), 1,
      sym_variable,
    STATE(15), 2,
      sym_string,
      sym_number,
    STATE(27), 3,
      sym_scalar,
      sym_vector,
      sym_matrix,
  [40] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_string_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      aux_sym_number_token1,
    ACTIONS(11), 1,
      aux_sym_number_token2,
    ACTIONS(13), 1,
      sym_obrace,
    STATE(9), 1,
      sym_string_char,
    STATE(11), 1,
      aux_sym_vector_repeat1,
    STATE(19), 1,
      sym_scalar,
    STATE(23), 1,
      aux_sym_matrix_repeat1,
    STATE(34), 1,
      sym_vector,
    STATE(15), 2,
      sym_string,
      sym_number,
  [78] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_string_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      aux_sym_number_token1,
    ACTIONS(11), 1,
      aux_sym_number_token2,
    ACTIONS(19), 1,
      sym_obrace,
    STATE(9), 1,
      sym_string_char,
    STATE(31), 1,
      sym_variable,
    STATE(15), 2,
      sym_string,
      sym_number,
    STATE(27), 3,
      sym_scalar,
      sym_vector,
      sym_matrix,
  [112] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_string_token1,
    ACTIONS(26), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_string_char,
    STATE(39), 1,
      sym_string,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym_cbrace,
    STATE(6), 2,
      sym_expression,
      aux_sym_cdb_repeat1,
    STATE(29), 4,
      sym_exp_var,
      sym_exp_cast,
      sym_exp_cast_scalar,
      sym_exp_block,
  [142] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_string_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_string_char,
    STATE(39), 1,
      sym_string,
    STATE(6), 2,
      sym_expression,
      aux_sym_cdb_repeat1,
    STATE(29), 4,
      sym_exp_var,
      sym_exp_cast,
      sym_exp_cast_scalar,
      sym_exp_block,
  [171] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_string_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      sym_cbrace,
    STATE(9), 1,
      sym_string_char,
    STATE(39), 1,
      sym_string,
    STATE(6), 2,
      sym_expression,
      aux_sym_cdb_repeat1,
    STATE(29), 4,
      sym_exp_var,
      sym_exp_cast,
      sym_exp_cast_scalar,
      sym_exp_block,
  [200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_number_token1,
    ACTIONS(33), 9,
      ts_builtin_sym_end,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_assign,
      sym_cbrace,
      sym_cpar,
      sym_vbar,
      sym_comma,
  [218] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      aux_sym_string_token1,
    ACTIONS(40), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      aux_sym_number_token1,
    ACTIONS(46), 1,
      aux_sym_number_token2,
    ACTIONS(49), 1,
      sym_cbrace,
    STATE(9), 1,
      sym_string_char,
    STATE(10), 1,
      aux_sym_vector_repeat1,
    STATE(19), 1,
      sym_scalar,
    STATE(15), 2,
      sym_string,
      sym_number,
  [250] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_string_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      aux_sym_number_token1,
    ACTIONS(11), 1,
      aux_sym_number_token2,
    ACTIONS(51), 1,
      sym_cbrace,
    STATE(9), 1,
      sym_string_char,
    STATE(10), 1,
      aux_sym_vector_repeat1,
    STATE(19), 1,
      sym_scalar,
    STATE(15), 2,
      sym_string,
      sym_number,
  [282] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      aux_sym_number_token1,
    ACTIONS(53), 9,
      ts_builtin_sym_end,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_assign,
      sym_cbrace,
      sym_cpar,
      sym_vbar,
      sym_comma,
  [300] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      aux_sym_number_token1,
    ACTIONS(57), 9,
      ts_builtin_sym_end,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_assign,
      sym_cbrace,
      sym_cpar,
      sym_vbar,
      sym_comma,
  [318] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_string_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      aux_sym_number_token1,
    ACTIONS(11), 1,
      aux_sym_number_token2,
    STATE(9), 1,
      sym_string_char,
    STATE(11), 1,
      aux_sym_vector_repeat1,
    STATE(19), 1,
      sym_scalar,
    STATE(15), 2,
      sym_string,
      sym_number,
  [347] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      aux_sym_number_token1,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_cpar,
      sym_comma,
  [363] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_string_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      aux_sym_number_token1,
    ACTIONS(11), 1,
      aux_sym_number_token2,
    STATE(9), 1,
      sym_string_char,
    STATE(41), 1,
      sym_scalar,
    STATE(15), 2,
      sym_string,
      sym_number,
  [389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      aux_sym_number_token1,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_cpar,
      sym_comma,
  [405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      aux_sym_number_token1,
    ACTIONS(69), 1,
      sym_assign,
    ACTIONS(61), 5,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
  [422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      aux_sym_number_token1,
    ACTIONS(75), 1,
      sym_comma,
    ACTIONS(71), 4,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
  [438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      sym_obrace,
      sym_cbrace,
      sym_comma,
  [450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      aux_sym_number_token1,
    ACTIONS(49), 4,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
  [463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      sym_cbrace,
  [473] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_obrace,
    ACTIONS(83), 1,
      sym_cbrace,
    STATE(28), 1,
      aux_sym_matrix_repeat1,
    STATE(34), 1,
      sym_vector,
  [489] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      aux_sym_string_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_string_char,
    STATE(37), 1,
      sym_string,
  [505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      sym_cbrace,
  [515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 4,
      ts_builtin_sym_end,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      sym_cbrace,
  [525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      sym_cbrace,
  [535] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_obrace,
    ACTIONS(94), 1,
      sym_cbrace,
    STATE(28), 1,
      aux_sym_matrix_repeat1,
    STATE(34), 1,
      sym_vector,
  [551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      sym_cbrace,
  [561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      sym_cbrace,
  [571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      sym_cbrace,
  [581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 4,
      ts_builtin_sym_end,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      sym_cbrace,
  [591] = 4,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      aux_sym_string_char_token1,
    ACTIONS(108), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_string_char_repeat1,
  [604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      sym_comma,
    ACTIONS(110), 2,
      sym_obrace,
      sym_cbrace,
  [615] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      aux_sym_string_char_token1,
    STATE(35), 1,
      aux_sym_string_char_repeat1,
  [628] = 4,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      aux_sym_string_char_token1,
    STATE(35), 1,
      aux_sym_string_char_repeat1,
  [641] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_cpar,
    ACTIONS(125), 1,
      sym_vbar,
  [651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 2,
      sym_obrace,
      sym_cbrace,
  [659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_assign,
  [666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_cpar,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 142,
  [SMALL_STATE(8)] = 171,
  [SMALL_STATE(9)] = 200,
  [SMALL_STATE(10)] = 218,
  [SMALL_STATE(11)] = 250,
  [SMALL_STATE(12)] = 282,
  [SMALL_STATE(13)] = 300,
  [SMALL_STATE(14)] = 318,
  [SMALL_STATE(15)] = 347,
  [SMALL_STATE(16)] = 363,
  [SMALL_STATE(17)] = 389,
  [SMALL_STATE(18)] = 405,
  [SMALL_STATE(19)] = 422,
  [SMALL_STATE(20)] = 438,
  [SMALL_STATE(21)] = 450,
  [SMALL_STATE(22)] = 463,
  [SMALL_STATE(23)] = 473,
  [SMALL_STATE(24)] = 489,
  [SMALL_STATE(25)] = 505,
  [SMALL_STATE(26)] = 515,
  [SMALL_STATE(27)] = 525,
  [SMALL_STATE(28)] = 535,
  [SMALL_STATE(29)] = 551,
  [SMALL_STATE(30)] = 561,
  [SMALL_STATE(31)] = 571,
  [SMALL_STATE(32)] = 581,
  [SMALL_STATE(33)] = 591,
  [SMALL_STATE(34)] = 604,
  [SMALL_STATE(35)] = 615,
  [SMALL_STATE(36)] = 628,
  [SMALL_STATE(37)] = 641,
  [SMALL_STATE(38)] = 651,
  [SMALL_STATE(39)] = 659,
  [SMALL_STATE(40)] = 666,
  [SMALL_STATE(41)] = 673,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cdb_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cdb_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cdb_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdb, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_char, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_char, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_char, 3, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_char, 3, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp_block, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matrix_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp_var, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp_cast, 6, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp_cast_scalar, 7, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_repeat1, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_char_repeat1, 2, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_char_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
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

TS_PUBLIC const TSLanguage *tree_sitter_MARTe(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
