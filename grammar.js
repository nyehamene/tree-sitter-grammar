/**
 * @file Grammar grammar for tree-sitter
 * @author hnyehamene <nhcdeveloper@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const alternativePrec = 2;

module.exports = grammar({
  name: "grammar",

  word: $ => $.identifier,

  extras: $ => [$.comment, /\s/],

  rules: {
    source_file: $ => repeat($.production_definition),

    production_definition: $ => seq(
      field("name", $.identifier),
      token.immediate(":"),
      alias($._production, $.body),
      ";"
    ),

    _production: $ => repeat1(
      choice(
        $.option,
        $.repeatition,
        $.group,
        $.alternative,
        $._terminal,
        $._nonterminal
      )
    ),
    
    option: $ => seq("[", $._production, "]"),

    repeatition: $ => seq("{", $._production, "}"),

    group: $ => seq("(", $._production, ")"),

    alternative: $ => prec.right(
      alternativePrec,
      seq(
        field("left", $._production),
        "|",
        field("right", $._production)
      )
    ),

    _terminal: $ => choice($.string, $.regexp),

    string: _ => token(seq('"', /[^"]*/, '"')),

    regexp: _ => token(seq("/", /[^//]*/, "/")),

    _nonterminal: $ => choice($.identifier, $.identifier_extern),

    identifier: _ => /[a-zA-Z][A-Za-z_0-9]*/,

    identifier_extern: $ => seq("$", token.immediate(/[^\s\n]/), alias($.identifier, "id")),

    comment: _ => token(seq("//", /[^\n]*/, "\n")),
  }
});
