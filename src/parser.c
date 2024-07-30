#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_identifier = 1,
  aux_sym_string_token1 = 2,
  anon_sym_DQUOTE = 3,
  aux_sym_string_char_token1 = 4,
  aux_sym_number_token1 = 5,
  aux_sym_number_token2 = 6,
  sym_comment = 7,
  sym_assign = 8,
  sym_obrace = 9,
  sym_cbrace = 10,
  sym_opar = 11,
  sym_cpar = 12,
  sym_vbar = 13,
  sym_comma = 14,
  sym_cdb = 15,
  sym_expression = 16,
  sym_exp_var = 17,
  sym_exp_cast = 18,
  sym_exp_cast_scalar = 19,
  sym_exp_block = 20,
  sym_variable = 21,
  sym_scalar = 22,
  sym_vector = 23,
  sym_matrix = 24,
  sym_block = 25,
  sym_string = 26,
  sym_string_char = 27,
  sym_number = 28,
  aux_sym_cdb_repeat1 = 29,
  aux_sym_vector_repeat1 = 30,
  aux_sym_matrix_repeat1 = 31,
  aux_sym_string_char_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
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
  [sym_identifier] = sym_identifier,
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
  [sym_identifier] = {
    .visible = true,
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
  [19] = 16,
  [20] = 15,
  [21] = 17,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 14,
  [28] = 13,
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
  [41] = 39,
  [42] = 31,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '"', 13,
        '(', 26,
        ')', 27,
        ',', 29,
        '/', 3,
        '0', 17,
        '=', 23,
        '{', 24,
        '|', 28,
        '}', 25,
        '$', 11,
        '+', 11,
        '_', 11,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == ',') ADVANCE(29);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_string_char_token1);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_string_char_token1);
      if (lookahead == '/') ADVANCE(22);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_string_char_token1);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(14);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_assign);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_obrace);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_cbrace);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_opar);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_cpar);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_vbar);
      END_STATE();
    case 29:
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
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
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
    [sym_cdb] = STATE(47),
    [sym_expression] = STATE(10),
    [sym_exp_var] = STATE(40),
    [sym_exp_cast] = STATE(40),
    [sym_exp_cast_scalar] = STATE(40),
    [sym_exp_block] = STATE(40),
    [aux_sym_cdb_repeat1] = STATE(10),
    [sym_identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_expression] = STATE(12),
    [sym_exp_var] = STATE(40),
    [sym_exp_cast] = STATE(40),
    [sym_exp_cast_scalar] = STATE(40),
    [sym_exp_block] = STATE(40),
    [sym_scalar] = STATE(18),
    [sym_vector] = STATE(30),
    [sym_string] = STATE(13),
    [sym_string_char] = STATE(15),
    [sym_number] = STATE(13),
    [aux_sym_cdb_repeat1] = STATE(12),
    [aux_sym_vector_repeat1] = STATE(7),
    [aux_sym_matrix_repeat1] = STATE(26),
    [sym_identifier] = ACTIONS(7),
    [aux_sym_string_token1] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [aux_sym_number_token1] = ACTIONS(13),
    [aux_sym_number_token2] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [sym_obrace] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_string_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    ACTIONS(25), 1,
      aux_sym_number_token2,
    ACTIONS(27), 1,
      sym_obrace,
    ACTIONS(29), 1,
      sym_opar,
    STATE(20), 1,
      sym_string_char,
    STATE(34), 1,
      sym_block,
    STATE(38), 1,
      sym_variable,
    STATE(28), 2,
      sym_string,
      sym_number,
    STATE(35), 3,
      sym_scalar,
      sym_vector,
      sym_matrix,
  [40] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      aux_sym_number_token1,
    ACTIONS(15), 1,
      aux_sym_number_token2,
    ACTIONS(17), 1,
      sym_obrace,
    ACTIONS(31), 1,
      aux_sym_string_token1,
    STATE(7), 1,
      aux_sym_vector_repeat1,
    STATE(15), 1,
      sym_string_char,
    STATE(18), 1,
      sym_scalar,
    STATE(26), 1,
      aux_sym_matrix_repeat1,
    STATE(30), 1,
      sym_vector,
    STATE(13), 2,
      sym_string,
      sym_number,
  [78] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_string_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    ACTIONS(25), 1,
      aux_sym_number_token2,
    ACTIONS(33), 1,
      sym_obrace,
    STATE(20), 1,
      sym_string_char,
    STATE(36), 1,
      sym_variable,
    STATE(28), 2,
      sym_string,
      sym_number,
    STATE(35), 3,
      sym_scalar,
      sym_vector,
      sym_matrix,
  [112] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_string_token1,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      aux_sym_number_token1,
    ACTIONS(44), 1,
      aux_sym_number_token2,
    ACTIONS(47), 1,
      sym_cbrace,
    STATE(6), 1,
      aux_sym_vector_repeat1,
    STATE(15), 1,
      sym_string_char,
    STATE(18), 1,
      sym_scalar,
    STATE(13), 2,
      sym_string,
      sym_number,
  [144] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      aux_sym_number_token1,
    ACTIONS(15), 1,
      aux_sym_number_token2,
    ACTIONS(31), 1,
      aux_sym_string_token1,
    ACTIONS(49), 1,
      sym_cbrace,
    STATE(6), 1,
      aux_sym_vector_repeat1,
    STATE(15), 1,
      sym_string_char,
    STATE(18), 1,
      sym_scalar,
    STATE(13), 2,
      sym_string,
      sym_number,
  [176] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_cbrace,
    STATE(8), 2,
      sym_expression,
      aux_sym_cdb_repeat1,
    STATE(40), 4,
      sym_exp_var,
      sym_exp_cast,
      sym_exp_cast_scalar,
      sym_exp_block,
  [197] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      aux_sym_number_token1,
    ACTIONS(15), 1,
      aux_sym_number_token2,
    ACTIONS(31), 1,
      aux_sym_string_token1,
    STATE(7), 1,
      aux_sym_vector_repeat1,
    STATE(15), 1,
      sym_string_char,
    STATE(18), 1,
      sym_scalar,
    STATE(13), 2,
      sym_string,
      sym_number,
  [226] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(8), 2,
      sym_expression,
      aux_sym_cdb_repeat1,
    STATE(40), 4,
      sym_exp_var,
      sym_exp_cast,
      sym_exp_cast_scalar,
      sym_exp_block,
  [246] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_string_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      aux_sym_number_token1,
    ACTIONS(25), 1,
      aux_sym_number_token2,
    STATE(20), 1,
      sym_string_char,
    STATE(45), 1,
      sym_scalar,
    STATE(28), 2,
      sym_string,
      sym_number,
  [272] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(58), 1,
      sym_cbrace,
    STATE(8), 2,
      sym_expression,
      aux_sym_cdb_repeat1,
    STATE(40), 4,
      sym_exp_var,
      sym_exp_cast,
      sym_exp_cast_scalar,
      sym_exp_block,
  [292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      aux_sym_number_token1,
    ACTIONS(60), 5,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
  [306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      aux_sym_number_token1,
    ACTIONS(64), 5,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
  [320] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      aux_sym_number_token1,
    ACTIONS(68), 5,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
  [334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      aux_sym_number_token1,
    ACTIONS(72), 5,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
  [348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      aux_sym_number_token1,
    ACTIONS(76), 5,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
  [362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 1,
      aux_sym_number_token1,
    ACTIONS(84), 1,
      sym_comma,
    ACTIONS(80), 4,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
  [378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      sym_identifier,
      sym_cbrace,
      sym_cpar,
      sym_vbar,
  [389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      sym_identifier,
      sym_cbrace,
      sym_cpar,
      sym_vbar,
  [400] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 5,
      ts_builtin_sym_end,
      sym_identifier,
      sym_cbrace,
      sym_cpar,
      sym_vbar,
  [411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 5,
      ts_builtin_sym_end,
      sym_identifier,
      sym_obrace,
      sym_cbrace,
      sym_comma,
  [422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      aux_sym_number_token1,
    ACTIONS(47), 4,
      aux_sym_string_token1,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
  [435] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      aux_sym_string_token1,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_string_char,
    STATE(44), 1,
      sym_string,
  [451] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_obrace,
    ACTIONS(93), 1,
      sym_cbrace,
    STATE(25), 1,
      aux_sym_matrix_repeat1,
    STATE(30), 1,
      sym_vector,
  [467] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_obrace,
    ACTIONS(95), 1,
      sym_cbrace,
    STATE(25), 1,
      aux_sym_matrix_repeat1,
    STATE(30), 1,
      sym_vector,
  [483] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 4,
      ts_builtin_sym_end,
      sym_identifier,
      sym_cbrace,
      sym_cpar,
  [493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 4,
      ts_builtin_sym_end,
      sym_identifier,
      sym_cbrace,
      sym_cpar,
  [503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      sym_identifier,
      sym_cbrace,
  [512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      sym_comma,
    ACTIONS(99), 2,
      sym_obrace,
      sym_cbrace,
  [523] = 4,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      aux_sym_string_char_token1,
    ACTIONS(107), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_string_char_repeat1,
  [536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      ts_builtin_sym_end,
      sym_identifier,
      sym_cbrace,
  [545] = 4,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      aux_sym_string_char_token1,
    STATE(33), 1,
      aux_sym_string_char_repeat1,
  [558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      sym_identifier,
      sym_cbrace,
  [567] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      sym_identifier,
      sym_cbrace,
  [576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 3,
      ts_builtin_sym_end,
      sym_identifier,
      sym_cbrace,
  [585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      sym_identifier,
      sym_cbrace,
  [594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 3,
      ts_builtin_sym_end,
      sym_identifier,
      sym_cbrace,
  [603] = 4,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      aux_sym_string_char_token1,
    STATE(31), 1,
      aux_sym_string_char_repeat1,
  [616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      sym_identifier,
      sym_cbrace,
  [625] = 4,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      aux_sym_string_char_token1,
    STATE(42), 1,
      aux_sym_string_char_repeat1,
  [638] = 4,
    ACTIONS(105), 1,
      aux_sym_string_char_token1,
    ACTIONS(107), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      aux_sym_string_char_repeat1,
  [651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 2,
      sym_obrace,
      sym_cbrace,
  [659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_cpar,
    ACTIONS(140), 1,
      sym_vbar,
  [669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_cpar,
  [676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym_assign,
  [683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 144,
  [SMALL_STATE(8)] = 176,
  [SMALL_STATE(9)] = 197,
  [SMALL_STATE(10)] = 226,
  [SMALL_STATE(11)] = 246,
  [SMALL_STATE(12)] = 272,
  [SMALL_STATE(13)] = 292,
  [SMALL_STATE(14)] = 306,
  [SMALL_STATE(15)] = 320,
  [SMALL_STATE(16)] = 334,
  [SMALL_STATE(17)] = 348,
  [SMALL_STATE(18)] = 362,
  [SMALL_STATE(19)] = 378,
  [SMALL_STATE(20)] = 389,
  [SMALL_STATE(21)] = 400,
  [SMALL_STATE(22)] = 411,
  [SMALL_STATE(23)] = 422,
  [SMALL_STATE(24)] = 435,
  [SMALL_STATE(25)] = 451,
  [SMALL_STATE(26)] = 467,
  [SMALL_STATE(27)] = 483,
  [SMALL_STATE(28)] = 493,
  [SMALL_STATE(29)] = 503,
  [SMALL_STATE(30)] = 512,
  [SMALL_STATE(31)] = 523,
  [SMALL_STATE(32)] = 536,
  [SMALL_STATE(33)] = 545,
  [SMALL_STATE(34)] = 558,
  [SMALL_STATE(35)] = 567,
  [SMALL_STATE(36)] = 576,
  [SMALL_STATE(37)] = 585,
  [SMALL_STATE(38)] = 594,
  [SMALL_STATE(39)] = 603,
  [SMALL_STATE(40)] = 616,
  [SMALL_STATE(41)] = 625,
  [SMALL_STATE(42)] = 638,
  [SMALL_STATE(43)] = 651,
  [SMALL_STATE(44)] = 659,
  [SMALL_STATE(45)] = 669,
  [SMALL_STATE(46)] = 676,
  [SMALL_STATE(47)] = 683,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cdb_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cdb_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdb, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_char, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_char, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_char, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_char, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matrix_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_repeat1, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_repeat1, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix, 3, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_char_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_char_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp_block, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp_cast, 6, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp_cast_scalar, 7, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp_var, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [146] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
