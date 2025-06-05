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
      token(":"),
      alias($._production, $.body),
      token(";")
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
    
    option: $ => seq(
      alias(field("open","["), "open"),
      $._production,
      alias(field("close", "]"), "close")
    ),

    repeatition: $ => seq(
      alias(field("open","{"), "open"),
      $._production,
      alias(field("close","}"), "close"),
    ),

    group: $ => seq(
      alias(field("open","("), "open"),
      $._production,
      alias(field("close",")"), "close"),
    ),

    alternative: $ => prec.right(
      alternativePrec,
      seq(
        field("left", $._production),
        alias("|", "separator"),
        field("right", $._production)
      )
    ),

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
