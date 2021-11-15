module.exports = grammar({
  name: "kmonad",

  extras: $ => [/\s/, $.line_comment, $.block_comment],

  rules: {
    source_file: $ => repeat($._context),

    line_comment: $ => seq(";;", optional(/.+/), "\n"),
    _unbroken_line_comment: $ => seq(";;", optional(/.+/)),
    block_comment: $ => seq("#|", optional(/([^|]|(\|[^#]))+/), "|#\n"),

    _context: $ => choice($.defcfg, $.defsrc, $.defalias, $.deflayer),

    defcfg: $ => seq("(", "defcfg", repeat(choice($.assignment, $._expression)), ")"),
    defsrc: $ => seq("(", "defsrc", repeat($._expression), ")"),
    defalias: $ => seq("(", "defalias", repeat(choice($.assignment, $._expression)), ")"),
    deflayer: $ => seq("(", "deflayer", $.identifier, repeat($._expression), ")"),

    _expression: $ => choice($.function_call, $.string, $.boolean, $._value),

    function_call: $ => seq("(", $.identifier, repeat(seq(/[ \t]/, $._expression)), ")"),
    assignment: $ => seq($.identifier, /[ \t]+/, $._expression),

    identifier: $ => /[-\w]+/,
    string: $ => seq('"', /([^"]|(\\"))*/, '"'),
    boolean: $ => choice("true", "false"),
    _value: $ => choice($.value, $.fallthrough, $.escaped_value, $.alias),
    value: $ => choice("/", "*", /[\w\d+-=\[\]\\']+/),
    alias: $ => /@[-\w]+/,
    escaped_value: $ => choice("\\(", "\\)"),
    fallthrough: $ => "_",
  }
});
