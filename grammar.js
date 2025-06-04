/**
 * @file Grammar grammar for tree-sitter
 * @author hnyehamene <nhcdeveloper@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "grammar",

  word: $ => $.identifier,

  extras: $ => [$.comment, /\s/],

  rules: {
    source_file: $ => repeat($.production_definition),

    production_definition: $ => prec.right(seq(
      field("name", $.identifier),
      token(":"),
      alias($._production, $.body)
    )),

    _production: $ => repeat1($._option),
    
    _option: $ => choice(
      seq("[", alias(repeat1($._repeatition), $.option), "]"),
      $._repeatition,
    ),

    _repeatition: $ => choice(
      seq("{", alias(repeat1($._group), $.repeatition ), "}"),
      $._group,
    ),

    _group: $ => choice(
      alias(seq("(", $._alternative, ")"), $.group),
      $._alternative
    ),

    _alternative: $ => prec.left(choice(
      alias(seq($._option, "|", $._option), $.alternative),
      $._terminal,
      $._nonterminal
    )),

    _terminal: $ => choice($.string, $.regexp),

    string: _ => token(
      seq(
        field("open", '"'),
        /[^"]*/,
        field("close", '"')
      )
    ),

    regexp: _ => token(
      seq(
        field("open", "/"),
        /[^//]*/,
        field("close", "/")
      )
    ),

    _nonterminal: $ => choice($.identifier),

    identifier: _ => token(seq(optional(field("open", "$")), /[a-z][A-Za-z_0-9]*/)),

    comment: _ => token(
      seq(field("open", "//"),
      /[^\n]*/, "\n")
     ),
  }
});
