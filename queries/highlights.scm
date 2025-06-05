(production_definition
  name: (identifier) @entity.name.function @function
  ) @meta.function @function

(regexp
  ; open: "/" @punctuation.definition.regexp.begin
  ; close: "/" @punctuation.definition.regexp.end
  ) @string.regex

(string
  ; open: "\"" @punctuation.definition.string.begin
  ; close: "\"" @punctuation.definition.string.end
  ) @string.quoted.double

(identifier) @variable.function
