module.exports = grammar({
  name: 'boba',

  rules: {
    source_file: $ => repeat(choice(
      $.import,
      $.buffer,
      $.const,
      $.function,
      $.literal,
      $.comment,
    )),

    import: $ => seq(
      'import',
      $.identifier,
    ),

    buffer: $ => seq(
      'buffer',
      $.identifier,
      $.literal,
    ),

    const: $ => seq(
      'const',
      $.identifier,
      $.literal,
    ),

    function: $ => seq(
      choice('to', 'inline'),
      field('name', $.identifier),
      ':',
      repeat(seq($.type, $.identifier, optional(','),)),
      '->',
      $.type,
    ),

    literal: $ => choice(
      $.operator,
      $.type,
      $.identifier,
      $.keyword,
      $.string,
      $.char,
      $.number,
      $.boolean,
    ),

    operator: _ => choice(
      '+', '-', '*', '/',
      '=', '!=', '>', '<',
      '>=', '<='
    ),
    type: _ => choice('int', 'char', 'bool', 'ptr', 'void'),
    identifier: $ => choice(/[a-z_][A-Za-z0-9_.]*/, $.constant),
    keyword: _ => choice(
      'if', 'else', 'elif', 'while',
    ),
    constant: _ => /[A-Za-z_][A-Za-z0-9_.]*/,
    string: _ => /"[^"]*"/,
    char: _ => /'\\?[^']'/,
    number: _ => /[0-9]+/,
    boolean: _ => choice('true', 'false'),
    comment: _ => /#.*/,
  },
});
