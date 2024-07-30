package tree_sitter_MARTe_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-MARTe"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_MARTe.Language())
	if language == nil {
		t.Errorf("Error loading MarTe grammar")
	}
}
