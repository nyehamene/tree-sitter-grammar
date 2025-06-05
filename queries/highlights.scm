(production_definition
  name: (identifier) @entity.name.function
  ) @function

(regexp
  ; open: "/" @punctuation.definition.regexp.begin
  ; close: "/" @punctuation.definition.regexp.end
  ) @string.regexp

(string
  ; open: "\"" @punctuation.definition.string.begin
  ; close: "\"" @punctuation.definition.string.end
  ) @string.quoted.double

(identifier !open) @variable.function

(identifier open: "$") @variable.function.global

(comment) @comment
