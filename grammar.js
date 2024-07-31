module.exports = grammar({
  name: 'marte',

  extras: $ => [
    /\s/,      // matches any whitespace character
    $.comment,
  ],
  
  rules: {
    cdb: $ => repeat1($.expression),

    expression: $ => choice(
      $.exp_var,
      $.exp_cast,
      $.exp_cast_scalar,
      $.exp_block,
    ),

    exp_var: $ => seq(
      $.identifier,
      $.assign,
      $.variable,
    ),

    exp_cast: $ => seq(
      $.identifier,
      $.assign,
      $.opar,
      $.string,
      $.cpar,
      $.variable,
    ),

    exp_cast_scalar: $ => seq(
      $.identifier,
      $.assign,
      $.opar,
      $.string,
      $.vbar,
      $.scalar,
      $.cpar,
    ),

    exp_block: $ => seq(
      $.identifier,
      $.assign,
      $.block,
    ),

    variable: $ => choice(
      $.scalar,
      $.vector,
      $.matrix,
    ),

    scalar: $ => choice(
      $.string,
      $.number,
    ),

    vector: $ => seq(
      $.obrace,
      repeat1(
        seq(
          $.scalar,
          optional($.comma),
        ),
      ),
      $.cbrace,
    ),

    matrix: $ => seq(
      $.obrace,
      repeat1(
        seq(
          $.vector,
          optional($.comma),
        ),
      ),
      $.cbrace,
    ),

    block: $ => seq(
      $.obrace,
      repeat1($.expression),
      $.cbrace,
    ),

    identifier: $ => choice(
      $.app,
      $.definition,
      $.property,
    ),

    string: $ => choice(
      $.attribute,
      $.string_literal,
      $.builtintype,
    ),

    app: _ => /[$][a-zA-Z][a-zA-Z0-9_.]*/,

    definition: _ => /[+][a-zA-Z][a-zA-Z0-9_.]*/,

    attribute: _ => /[a-zA-Z][a-zA-Z0-9_.]*/,

    property: $ => choice(
      /[a-zA-Z][a-zA-Z0-9_.]*/,
      $.marte_common,
    ),

    marte_common: $ => choice(
      "InputSignals",
      "OutputSignals",
      "Class",
      "Type",
      "DataSource",
      "NumberOfElements",
      "NumberOfDimensions",
    ),

    string_literal: $ => seq(
      '"',
      repeat(
        choice(
          token.immediate(prec(1, /[^\\"\n]+/)),
          $.escape_sequence,
        ),
      ),
      '"',
    ),

    escape_sequence: _ => token(
      prec(
        1,
        seq(
          '\\',
          choice(
            /[^xuU]/,
            /\d{2,3}/,
            /x[0-9a-fA-F]{2,}/,
            /u[0-9a-fA-F]{4}/,
            /U[0-9a-fA-F]{8}/,
          ),
        ),
      ),
    ),

    number: $ => choice(
      /\d+(\.\d+)?([eE][+-]?\d+)?/,
      /0[xX][0-9a-fA-F]+/,
    ),

    comment: $ => token(
      choice(
        seq(
          '//',
          /.*/,
        ),
        seq(
          '/*',
          /[^*]*\*+([^/*][^*]*\*+)*/,
          '/',
        ),
      ),
    ), 

    assign: _ => '=',

    obrace: _ => '{',

    cbrace: _ => '}',

    opar: _ => '(',

    cpar: _ => ')',

    vbar: _ => '|',

    comma: _ => ',',

    builtintype: $ => choice(
      'uint8',
      'uint16',
      'uint32',
      'uint64',
      'int8',
      'int16',
      'int32',
      'int64',
      'float32',
      'float64',
      'char8',
    ),
  }
});
