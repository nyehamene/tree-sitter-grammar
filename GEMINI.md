# Gemini Code Intelligence File

This file provides context for the Gemini AI code assistant to understand the structure and purpose of this project.

## Project Overview

This project is a Tree-sitter grammar for a custom grammar definition language. The grammar itself is defined in `grammar.js` and the C parser is generated from it. The project is configured to be built and used with multiple programming languages, including Rust, Go, Python, Java, Swift, and Zig, as indicated by the presence of various binding files in the `bindings/` directory.

The grammar defined in `grammar.js` appears to be a meta-grammar for defining other grammars. It includes rules for declarations, bindings, rules, comments, productions, sequences, and various types of terminals and non-terminals. It also supports an `@import` directive to include other grammar files.

## Building and Running

The primary build tool for this project is `make`. The `Makefile` provides several targets for building, testing, and managing the project.

### Building the Grammar

To build the grammar, which includes generating the C parser and compiling it into a shared library, run the following command:

```bash
make
```

This will generate `libtree-sitter-grammar.so` (or `.dylib` on macOS, `.dll` on Windows), `libtree-sitter-grammar.a`, and `tree-sitter-grammar.pc`.

### Running Tests

The project uses `tree-sitter`'s built-in testing functionality. To run the tests, use the following command:

```bash
make test
```

This command will execute the tests defined in the `test/` directory.

### Other Commands

The `package.json` file also defines some npm scripts:

*   `npm run generate`: Generates the parser from `grammar.js`.
*   `npm run build`: A generic build command that runs `tree-sitter build`.
*   `npm test`: An alternative way to run the tests.

## Development Conventions

*   **Grammar Definition:** The main grammar is defined in `grammar.js`.
*   **C Parser:** The C parser is generated from `grammar.js` and is located at `src/parser.c`.
*   **Bindings:** Bindings for different languages are located in the `bindings/` directory.
*   **Testing:** Tests are located in the `test/` directory.
*   **Queries:** Tree-sitter queries for highlighting, indentation, etc., are located in the `queries/` directory.
