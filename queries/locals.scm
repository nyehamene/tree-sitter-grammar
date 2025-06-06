(source_file) @local.scope

(production_definition name: (identifier) @local.definition)

((identifier) @name
 (#match? @name "^\$")) @local.reference
