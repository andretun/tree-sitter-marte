#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_app = 1,
  sym_definition = 2,
  aux_sym_attribute_token1 = 3,
  anon_sym_InputSignals = 4,
  anon_sym_OutputSignals = 5,
  anon_sym_DQUOTE = 6,
  aux_sym_string_char_token1 = 7,
  aux_sym_number_token1 = 8,
  aux_sym_number_token2 = 9,
  sym_comment = 10,
  sym_assign = 11,
  sym_obrace = 12,
  sym_cbrace = 13,
  sym_opar = 14,
  sym_cpar = 15,
  sym_vbar = 16,
  sym_comma = 17,
  anon_sym_uint8 = 18,
  anon_sym_uint16 = 19,
  anon_sym_uint32 = 20,
  anon_sym_uint64 = 21,
  anon_sym_int8 = 22,
  anon_sym_int16 = 23,
  anon_sym_int32 = 24,
  anon_sym_int64 = 25,
  anon_sym_float32 = 26,
  anon_sym_float64 = 27,
  anon_sym_char8 = 28,
  sym_cdb = 29,
  sym_expression = 30,
  sym_exp_var = 31,
  sym_exp_cast = 32,
  sym_exp_cast_scalar = 33,
  sym_exp_block = 34,
  sym_variable = 35,
  sym_scalar = 36,
  sym_vector = 37,
  sym_matrix = 38,
  sym_block = 39,
  sym_identifier = 40,
  sym_string = 41,
  sym_attribute = 42,
  sym_property = 43,
  sym_signals = 44,
  sym_string_char = 45,
  sym_number = 46,
  sym_builtintype = 47,
  aux_sym_cdb_repeat1 = 48,
  aux_sym_vector_repeat1 = 49,
  aux_sym_matrix_repeat1 = 50,
  aux_sym_string_char_repeat1 = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_app] = "app",
  [sym_definition] = "definition",
  [aux_sym_attribute_token1] = "attribute_token1",
  [anon_sym_InputSignals] = "InputSignals",
  [anon_sym_OutputSignals] = "OutputSignals",
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
  [anon_sym_uint8] = "uint8",
  [anon_sym_uint16] = "uint16",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_int8] = "int8",
  [anon_sym_int16] = "int16",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_float32] = "float32",
  [anon_sym_float64] = "float64",
  [anon_sym_char8] = "char8",
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
  [sym_identifier] = "identifier",
  [sym_string] = "string",
  [sym_attribute] = "attribute",
  [sym_property] = "property",
  [sym_signals] = "signals",
  [sym_string_char] = "string_char",
  [sym_number] = "number",
  [sym_builtintype] = "builtintype",
  [aux_sym_cdb_repeat1] = "cdb_repeat1",
  [aux_sym_vector_repeat1] = "vector_repeat1",
  [aux_sym_matrix_repeat1] = "matrix_repeat1",
  [aux_sym_string_char_repeat1] = "string_char_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_app] = sym_app,
  [sym_definition] = sym_definition,
  [aux_sym_attribute_token1] = aux_sym_attribute_token1,
  [anon_sym_InputSignals] = anon_sym_InputSignals,
  [anon_sym_OutputSignals] = anon_sym_OutputSignals,
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
  [anon_sym_uint8] = anon_sym_uint8,
  [anon_sym_uint16] = anon_sym_uint16,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_int8] = anon_sym_int8,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_float32] = anon_sym_float32,
  [anon_sym_float64] = anon_sym_float64,
  [anon_sym_char8] = anon_sym_char8,
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
  [sym_identifier] = sym_identifier,
  [sym_string] = sym_string,
  [sym_attribute] = sym_attribute,
  [sym_property] = sym_property,
  [sym_signals] = sym_signals,
  [sym_string_char] = sym_string_char,
  [sym_number] = sym_number,
  [sym_builtintype] = sym_builtintype,
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
  [sym_app] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_attribute_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_InputSignals] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OutputSignals] = {
    .visible = true,
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
  [anon_sym_uint8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char8] = {
    .visible = true,
    .named = false,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_signals] = {
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
  [sym_builtintype] = {
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
  [24] = 13,
  [25] = 17,
  [26] = 19,
  [27] = 27,
  [28] = 15,
  [29] = 14,
  [30] = 16,
  [31] = 12,
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
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 43,
  [47] = 42,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '"', 65,
        '$', 9,
        '(', 78,
        ')', 79,
        '+', 10,
        ',', 81,
        '/', 3,
        '0', 69,
        '=', 75,
        'I', 42,
        'O', 59,
        'c', 35,
        'f', 39,
        'i', 43,
        'u', 37,
        '{', 76,
        '|', 80,
        '}', 77,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 65,
        '(', 78,
        ',', 81,
        '/', 3,
        '0', 69,
        '=', 75,
        'c', 35,
        'f', 39,
        'i', 43,
        'u', 37,
        '{', 76,
        '}', 77,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(74);
      END_STATE();
    case 4:
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(66);
      END_STATE();
    case 5:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 9:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 10:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '$', 9,
        ')', 79,
        '+', 10,
        ',', 81,
        '/', 3,
        'I', 42,
        'O', 59,
        '{', 76,
        '|', 80,
        '}', 77,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_app);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_definition);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '1') ADVANCE(24);
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(21);
      if (lookahead == '8') ADVANCE(86);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '1') ADVANCE(25);
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(22);
      if (lookahead == '8') ADVANCE(82);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '2') ADVANCE(88);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '2') ADVANCE(84);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '2') ADVANCE(90);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(23);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '4') ADVANCE(89);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '4') ADVANCE(85);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '4') ADVANCE(91);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '6') ADVANCE(87);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '6') ADVANCE(83);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '8') ADVANCE(92);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'S') ADVANCE(38);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'a') ADVANCE(40);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'g') ADVANCE(45);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'g') ADVANCE(46);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'h') ADVANCE(29);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'l') ADVANCE(47);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'l') ADVANCE(51);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'l') ADVANCE(52);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'n') ADVANCE(56);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'u') ADVANCE(58);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_InputSignals);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_OutputSignals);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_char_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_string_char_token1);
      if (lookahead == '/') ADVANCE(74);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_string_char_token1);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"') ADVANCE(66);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_assign);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_obrace);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_cbrace);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_opar);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_cpar);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_vbar);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_comma);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_uint8);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_uint16);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_int8);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_int16);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_int32);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_int64);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_float32);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_float64);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_char8);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_app] = ACTIONS(1),
    [sym_definition] = ACTIONS(1),
    [aux_sym_attribute_token1] = ACTIONS(1),
    [anon_sym_InputSignals] = ACTIONS(1),
    [anon_sym_OutputSignals] = ACTIONS(1),
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
    [anon_sym_uint8] = ACTIONS(1),
    [anon_sym_uint16] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_int8] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_float32] = ACTIONS(1),
    [anon_sym_float64] = ACTIONS(1),
    [anon_sym_char8] = ACTIONS(1),
  },
  [1] = {
    [sym_cdb] = STATE(52),
    [sym_expression] = STATE(22),
    [sym_exp_var] = STATE(36),
    [sym_exp_cast] = STATE(36),
    [sym_exp_cast_scalar] = STATE(36),
    [sym_exp_block] = STATE(36),
    [sym_identifier] = STATE(54),
    [sym_property] = STATE(55),
    [sym_signals] = STATE(50),
    [aux_sym_cdb_repeat1] = STATE(22),
    [sym_app] = ACTIONS(5),
    [sym_definition] = ACTIONS(5),
    [aux_sym_attribute_token1] = ACTIONS(7),
    [anon_sym_InputSignals] = ACTIONS(9),
    [anon_sym_OutputSignals] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_expression] = STATE(23),
    [sym_exp_var] = STATE(36),
    [sym_exp_cast] = STATE(36),
    [sym_exp_cast_scalar] = STATE(36),
    [sym_exp_block] = STATE(36),
    [sym_scalar] = STATE(18),
    [sym_vector] = STATE(45),
    [sym_identifier] = STATE(54),
    [sym_string] = STATE(16),
    [sym_attribute] = STATE(17),
    [sym_property] = STATE(55),
    [sym_signals] = STATE(50),
    [sym_string_char] = STATE(17),
    [sym_number] = STATE(16),
    [sym_builtintype] = STATE(17),
    [aux_sym_cdb_repeat1] = STATE(23),
    [aux_sym_vector_repeat1] = STATE(7),
    [aux_sym_matrix_repeat1] = STATE(40),
    [sym_app] = ACTIONS(5),
    [sym_definition] = ACTIONS(5),
    [aux_sym_attribute_token1] = ACTIONS(11),
    [anon_sym_InputSignals] = ACTIONS(9),
    [anon_sym_OutputSignals] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(13),
    [aux_sym_number_token1] = ACTIONS(15),
    [aux_sym_number_token2] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
    [sym_obrace] = ACTIONS(19),
    [anon_sym_uint8] = ACTIONS(21),
    [anon_sym_uint16] = ACTIONS(21),
    [anon_sym_uint32] = ACTIONS(21),
    [anon_sym_uint64] = ACTIONS(21),
    [anon_sym_int8] = ACTIONS(21),
    [anon_sym_int16] = ACTIONS(21),
    [anon_sym_int32] = ACTIONS(21),
    [anon_sym_int64] = ACTIONS(21),
    [anon_sym_float32] = ACTIONS(21),
    [anon_sym_float64] = ACTIONS(21),
    [anon_sym_char8] = ACTIONS(21),
  },
  [3] = {
    [sym_variable] = STATE(34),
    [sym_scalar] = STATE(35),
    [sym_vector] = STATE(35),
    [sym_matrix] = STATE(35),
    [sym_block] = STATE(33),
    [sym_string] = STATE(30),
    [sym_attribute] = STATE(25),
    [sym_string_char] = STATE(25),
    [sym_number] = STATE(30),
    [sym_builtintype] = STATE(25),
    [aux_sym_attribute_token1] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [aux_sym_number_token1] = ACTIONS(27),
    [aux_sym_number_token2] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
    [sym_obrace] = ACTIONS(31),
    [sym_opar] = ACTIONS(33),
    [anon_sym_uint8] = ACTIONS(35),
    [anon_sym_uint16] = ACTIONS(35),
    [anon_sym_uint32] = ACTIONS(35),
    [anon_sym_uint64] = ACTIONS(35),
    [anon_sym_int8] = ACTIONS(35),
    [anon_sym_int16] = ACTIONS(35),
    [anon_sym_int32] = ACTIONS(35),
    [anon_sym_int64] = ACTIONS(35),
    [anon_sym_float32] = ACTIONS(35),
    [anon_sym_float64] = ACTIONS(35),
    [anon_sym_char8] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_number_token1,
    ACTIONS(17), 1,
      aux_sym_number_token2,
    ACTIONS(19), 1,
      sym_obrace,
    ACTIONS(37), 1,
      aux_sym_attribute_token1,
    STATE(7), 1,
      aux_sym_vector_repeat1,
    STATE(18), 1,
      sym_scalar,
    STATE(40), 1,
      aux_sym_matrix_repeat1,
    STATE(45), 1,
      sym_vector,
    STATE(16), 2,
      sym_string,
      sym_number,
    STATE(17), 3,
      sym_attribute,
      sym_string_char,
      sym_builtintype,
    ACTIONS(21), 11,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [53] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_attribute_token1,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_number_token1,
    ACTIONS(29), 1,
      aux_sym_number_token2,
    ACTIONS(39), 1,
      sym_obrace,
    STATE(38), 1,
      sym_variable,
    STATE(30), 2,
      sym_string,
      sym_number,
    STATE(25), 3,
      sym_attribute,
      sym_string_char,
      sym_builtintype,
    STATE(35), 3,
      sym_scalar,
      sym_vector,
      sym_matrix,
    ACTIONS(35), 11,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [102] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      aux_sym_attribute_token1,
    ACTIONS(44), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      aux_sym_number_token1,
    ACTIONS(50), 1,
      aux_sym_number_token2,
    ACTIONS(53), 1,
      sym_cbrace,
    STATE(6), 1,
      aux_sym_vector_repeat1,
    STATE(18), 1,
      sym_scalar,
    STATE(16), 2,
      sym_string,
      sym_number,
    STATE(17), 3,
      sym_attribute,
      sym_string_char,
      sym_builtintype,
    ACTIONS(55), 11,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [149] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_number_token1,
    ACTIONS(17), 1,
      aux_sym_number_token2,
    ACTIONS(37), 1,
      aux_sym_attribute_token1,
    ACTIONS(58), 1,
      sym_cbrace,
    STATE(6), 1,
      aux_sym_vector_repeat1,
    STATE(18), 1,
      sym_scalar,
    STATE(16), 2,
      sym_string,
      sym_number,
    STATE(17), 3,
      sym_attribute,
      sym_string_char,
      sym_builtintype,
    ACTIONS(21), 11,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [196] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      aux_sym_number_token1,
    ACTIONS(17), 1,
      aux_sym_number_token2,
    ACTIONS(37), 1,
      aux_sym_attribute_token1,
    STATE(7), 1,
      aux_sym_vector_repeat1,
    STATE(18), 1,
      sym_scalar,
    STATE(16), 2,
      sym_string,
      sym_number,
    STATE(17), 3,
      sym_attribute,
      sym_string_char,
      sym_builtintype,
    ACTIONS(21), 11,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [240] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_attribute_token1,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_number_token1,
    ACTIONS(29), 1,
      aux_sym_number_token2,
    STATE(51), 1,
      sym_scalar,
    STATE(30), 2,
      sym_string,
      sym_number,
    STATE(25), 3,
      sym_attribute,
      sym_string_char,
      sym_builtintype,
    ACTIONS(35), 11,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [281] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym_assign,
    ACTIONS(62), 4,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
    ACTIONS(60), 13,
      aux_sym_attribute_token1,
      aux_sym_number_token1,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [309] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_attribute_token1,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_string,
    STATE(25), 3,
      sym_attribute,
      sym_string_char,
      sym_builtintype,
    ACTIONS(35), 11,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [340] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 4,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
    ACTIONS(66), 13,
      aux_sym_attribute_token1,
      aux_sym_number_token1,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 4,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
    ACTIONS(60), 13,
      aux_sym_attribute_token1,
      aux_sym_number_token1,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 4,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
    ACTIONS(70), 13,
      aux_sym_attribute_token1,
      aux_sym_number_token1,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [415] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 4,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
    ACTIONS(74), 13,
      aux_sym_attribute_token1,
      aux_sym_number_token1,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 4,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
    ACTIONS(78), 13,
      aux_sym_attribute_token1,
      aux_sym_number_token1,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [465] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 4,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
    ACTIONS(82), 13,
      aux_sym_attribute_token1,
      aux_sym_number_token1,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [490] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_comma,
    ACTIONS(88), 3,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
    ACTIONS(86), 13,
      aux_sym_attribute_token1,
      aux_sym_number_token1,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 4,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
      sym_comma,
    ACTIONS(92), 13,
      aux_sym_attribute_token1,
      aux_sym_number_token1,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [542] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_attribute_token1,
    STATE(50), 1,
      sym_signals,
    STATE(54), 1,
      sym_identifier,
    STATE(55), 1,
      sym_property,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      sym_cbrace,
    ACTIONS(98), 2,
      sym_app,
      sym_definition,
    ACTIONS(104), 2,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
    STATE(20), 2,
      sym_expression,
      aux_sym_cdb_repeat1,
    STATE(36), 4,
      sym_exp_var,
      sym_exp_cast,
      sym_exp_cast_scalar,
      sym_exp_block,
  [580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 3,
      anon_sym_DQUOTE,
      aux_sym_number_token2,
      sym_cbrace,
    ACTIONS(107), 13,
      aux_sym_attribute_token1,
      aux_sym_number_token1,
      anon_sym_uint8,
      anon_sym_uint16,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
      anon_sym_char8,
  [604] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_attribute_token1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_signals,
    STATE(54), 1,
      sym_identifier,
    STATE(55), 1,
      sym_property,
    ACTIONS(5), 2,
      sym_app,
      sym_definition,
    ACTIONS(9), 2,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
    STATE(20), 2,
      sym_expression,
      aux_sym_cdb_repeat1,
    STATE(36), 4,
      sym_exp_var,
      sym_exp_cast,
      sym_exp_cast_scalar,
      sym_exp_block,
  [641] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_attribute_token1,
    ACTIONS(111), 1,
      sym_cbrace,
    STATE(50), 1,
      sym_signals,
    STATE(54), 1,
      sym_identifier,
    STATE(55), 1,
      sym_property,
    ACTIONS(5), 2,
      sym_app,
      sym_definition,
    ACTIONS(9), 2,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
    STATE(20), 2,
      sym_expression,
      aux_sym_cdb_repeat1,
    STATE(36), 4,
      sym_exp_var,
      sym_exp_cast,
      sym_exp_cast_scalar,
      sym_exp_block,
  [678] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 3,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
    ACTIONS(62), 6,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
      sym_cpar,
      sym_vbar,
  [695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 3,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
    ACTIONS(84), 6,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
      sym_cpar,
      sym_vbar,
  [712] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 3,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
    ACTIONS(94), 6,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
      sym_cpar,
      sym_vbar,
  [729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 3,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
    ACTIONS(113), 6,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_obrace,
      sym_cbrace,
      sym_comma,
  [746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 3,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
    ACTIONS(76), 6,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
      sym_cpar,
      sym_vbar,
  [763] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 3,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
      sym_cpar,
      sym_vbar,
  [780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 3,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
      sym_cpar,
  [796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 3,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
      sym_cpar,
  [812] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 3,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
  [827] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 3,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
  [842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 3,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
    ACTIONS(125), 4,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
  [857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 3,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
  [872] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 3,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
    ACTIONS(133), 4,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
  [887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 3,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
    ACTIONS(137), 4,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
  [902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 3,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
    ACTIONS(141), 4,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
  [917] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 3,
      aux_sym_attribute_token1,
      anon_sym_InputSignals,
      anon_sym_OutputSignals,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      sym_app,
      sym_definition,
      sym_cbrace,
  [932] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_obrace,
    ACTIONS(149), 1,
      sym_cbrace,
    STATE(41), 1,
      aux_sym_matrix_repeat1,
    STATE(45), 1,
      sym_vector,
  [948] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_obrace,
    ACTIONS(154), 1,
      sym_cbrace,
    STATE(41), 1,
      aux_sym_matrix_repeat1,
    STATE(45), 1,
      sym_vector,
  [964] = 4,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      aux_sym_string_char_token1,
    ACTIONS(160), 1,
      sym_comment,
    STATE(44), 1,
      aux_sym_string_char_repeat1,
  [977] = 4,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_DQUOTE,
    ACTIONS(164), 1,
      aux_sym_string_char_token1,
    STATE(42), 1,
      aux_sym_string_char_repeat1,
  [990] = 4,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_DQUOTE,
    ACTIONS(168), 1,
      aux_sym_string_char_token1,
    STATE(44), 1,
      aux_sym_string_char_repeat1,
  [1003] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_comma,
    ACTIONS(171), 2,
      sym_obrace,
      sym_cbrace,
  [1014] = 4,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      aux_sym_string_char_token1,
    STATE(47), 1,
      aux_sym_string_char_repeat1,
  [1027] = 4,
    ACTIONS(158), 1,
      aux_sym_string_char_token1,
    ACTIONS(160), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    STATE(44), 1,
      aux_sym_string_char_repeat1,
  [1040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 2,
      sym_obrace,
      sym_cbrace,
  [1048] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_cpar,
    ACTIONS(183), 1,
      sym_vbar,
  [1058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym_assign,
  [1065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_cpar,
  [1072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
  [1079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_assign,
  [1086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym_assign,
  [1093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      sym_assign,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 53,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 149,
  [SMALL_STATE(8)] = 196,
  [SMALL_STATE(9)] = 240,
  [SMALL_STATE(10)] = 281,
  [SMALL_STATE(11)] = 309,
  [SMALL_STATE(12)] = 340,
  [SMALL_STATE(13)] = 365,
  [SMALL_STATE(14)] = 390,
  [SMALL_STATE(15)] = 415,
  [SMALL_STATE(16)] = 440,
  [SMALL_STATE(17)] = 465,
  [SMALL_STATE(18)] = 490,
  [SMALL_STATE(19)] = 517,
  [SMALL_STATE(20)] = 542,
  [SMALL_STATE(21)] = 580,
  [SMALL_STATE(22)] = 604,
  [SMALL_STATE(23)] = 641,
  [SMALL_STATE(24)] = 678,
  [SMALL_STATE(25)] = 695,
  [SMALL_STATE(26)] = 712,
  [SMALL_STATE(27)] = 729,
  [SMALL_STATE(28)] = 746,
  [SMALL_STATE(29)] = 763,
  [SMALL_STATE(30)] = 780,
  [SMALL_STATE(31)] = 796,
  [SMALL_STATE(32)] = 812,
  [SMALL_STATE(33)] = 827,
  [SMALL_STATE(34)] = 842,
  [SMALL_STATE(35)] = 857,
  [SMALL_STATE(36)] = 872,
  [SMALL_STATE(37)] = 887,
  [SMALL_STATE(38)] = 902,
  [SMALL_STATE(39)] = 917,
  [SMALL_STATE(40)] = 932,
  [SMALL_STATE(41)] = 948,
  [SMALL_STATE(42)] = 964,
  [SMALL_STATE(43)] = 977,
  [SMALL_STATE(44)] = 990,
  [SMALL_STATE(45)] = 1003,
  [SMALL_STATE(46)] = 1014,
  [SMALL_STATE(47)] = 1027,
  [SMALL_STATE(48)] = 1040,
  [SMALL_STATE(49)] = 1048,
  [SMALL_STATE(50)] = 1058,
  [SMALL_STATE(51)] = 1065,
  [SMALL_STATE(52)] = 1072,
  [SMALL_STATE(53)] = 1079,
  [SMALL_STATE(54)] = 1086,
  [SMALL_STATE(55)] = 1093,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_char, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_char, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_builtintype, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtintype, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scalar, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scalar, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_char, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_char, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cdb_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cdb_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cdb_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cdb_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vector_repeat1, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cdb, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp_block, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp_block, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp_var, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp_var, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_matrix, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_matrix, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp_cast, 6, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp_cast, 6, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exp_cast_scalar, 7, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_exp_cast_scalar, 7, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_matrix_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_repeat1, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_char_repeat1, 2, 0, 0),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_char_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_matrix_repeat1, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [187] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signals, 1, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
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
