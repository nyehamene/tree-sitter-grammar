;; Highlights for the grammar language

;; Operators and punctuation
"=" @operator
"|" @operator
"." @operator ; for member access
";" @punctuation.delimiter
"(" @punctuation.delimiter
")" @punctuation.delimiter
"[" @punctuation.bracket
"]" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket

(directive_ident) @keyword

;; Rule names (as fields, as requested)
(rule
  name: (ident) @variable.other.member)

;; Binding names (as variables, as requested)
(binding
  name: (ident) @namespace)

;; Member access identifiers
(member_access
  object: (ident) @variable)
(member_access
  property: (ident) @variable)

;; Literals
(string) @string
(regexp) @string.regexp
(external_value) @special
(escape_sequence) @constant.character.escape

;; Comments
(comment) @comment
