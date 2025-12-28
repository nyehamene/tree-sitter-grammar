import io.github.treesitter.jtreesitter.Language;
import io.github.treesitter.jtreesitter.grammar.TreeSitterGrammar;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertDoesNotThrow;

public class TreeSitterGrammarTest {
    @Test
    public void testCanLoadLanguage() {
        assertDoesNotThrow(() -> new Language(TreeSitterGrammar.language()));
    }
}
