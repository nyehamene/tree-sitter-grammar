;; Tag queries for the grammar language

;; Definitions
(rule          name:     (ident) @name) @definition.method
(binding       name:     (ident) @name) @reference.class
(member_access object:   (ident) @name) @reference.class
(member_access property: (ident) @name) @reference.call
((ident) @name)                         @reference.call
