package tree_sitter_grammar_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_grammar "github.com/tree-sitter/tree-sitter-grammar/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_grammar.Language())
	if language == nil {
		t.Errorf("Error loading Grammar grammar")
	}
}
