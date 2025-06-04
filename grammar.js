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

    production_definition: $ => prec.left(seq(
      field("name", $.identifier),
      token(":"),
      alias($._production, $.body)
    )),

    _production: $ => repeat1($._option),
    
    _option: $ => choice(
      alias(
        seq(
          alias(field("open","["), "open"),
          repeat1($._repeatition),
          alias(field("close", "]"), "close")
        ),
        $.option
      ),
      $._repeatition,
    ),

    _repeatition: $ => choice(
      alias(
        seq(
          alias(field("open","{"), "open"),
          repeat1($._group),
          alias(field("close","}"), "close"),
        ),
        $.repeatition
      ),
      $._group,
    ),

    _group: $ => choice(
      alias(
        seq(
          alias(field("open","("), "open"),
          repeat1($._alternative),
          alias(field("close",")"), "close"),
        ),
        $.group
      ),
      $._alternative
    ),

    _alternative: $ => choice(
      $.alternative,
      $._terminal,
      $._nonterminal
    ),

    alternative: $ => 
        prec.right(
          seq(
            field("left", $._option),
            alias("|", "separator"),
            field("right", $._option)
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
