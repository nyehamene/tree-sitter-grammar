; """ @punctuation.string
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

[ ":" ";" "|" ] @punctuation.delimiter

(regexp) @string.regexp

(string) @string.quoted.double

(identifier) @function

(identifier_extern) @function.external

(identifier_extern "$" @punctuation.function.call)

(comment) @comment

(production_definition
  name: (identifier) @function.definition)

(production_definition) @meta.function
