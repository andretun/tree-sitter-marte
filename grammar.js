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
      $.string,
      $.assign,
      $.variable,
    ),

    exp_cast: $ => seq(
      $.string,
      $.assign,
      $.opar,
      $.string,
      $.cpar,
      $.variable,
    ),

    exp_cast_scalar: $ => seq(
      $.string,
      $.assign,
      $.opar,
      $.string,
      $.vbar,
      $.scalar,
      $.cpar,
    ),

    exp_block: $ => seq(
      $.string,
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

    string: $ => choice(
      /[a-zA-Z_$+][a-zA-Z0-9_.]*/,
      $.string_char,
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
  }
});
