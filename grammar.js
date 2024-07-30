module.exports = grammar({
  name: 'MARTe',

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
      $.attribute,
    ),

    string: $ => choice(
      $.word,
      $.string_char,
      $.builtintype,
    ),

    app: _ => /[$][a-zA-Z][a-zA-Z0-9_.]*/,

    definition: _ => /[+][a-zA-Z][a-zA-Z0-9_.]*/,

    word: _ => /[a-zA-Z][a-zA-Z0-9_.]*/,

    attribute: $ => choice(
      /[a-zA-Z][a-zA-Z0-9_.]*/,
      $.signals,
    ),

    signals: $ => choice(
      "InputSignals",
      "OutputSignals",
    ),

    string_char: $ => seq(
      '"',
      repeat(/[^"\\\n]|\\"|\\\\/),
      '"'
    ),

    number: $ => choice(
      /\d+(\.\d+)?([eE][+-]?\d+)?/,
      /0[xX][0-9a-fA-F]+/,
    ),

    comment: $ => token(seq(
      '//',
      /.*/,
    )), 

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
    )
  }
});
