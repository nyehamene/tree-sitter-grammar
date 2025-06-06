; """ @punctuation.string
; "$" @punctuation.function.global
; "//" @punctuation.comment
; "/" @punctuation.regexp

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket

[ ":" ";" ] @punctuation.delimiter

(regexp) @string.regexp

(string) @string.quoted.double

(identifier) @variable.function

((identifier) @variable.function.global
 (#match? @variable.function.global "^\\$.*")) 

(comment) @comment

(production_definition
  name: (identifier) @function.definition)

(production_definition) @meta.function
