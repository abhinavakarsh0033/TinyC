## Overview

TinyC follows the **Phase Structure Grammar Specification** from the **ISO/IEC 9899:1999 (E)** standard for C. It is a subset of the full C language, keeping the implementation within a manageable scope.  

- **Lexical Analysis** (TinyC, Part 1)  
  Contains **Flex** specifications for the TinyC language.
- **Parsing** (TinyC, Part 2)  
  Contains **YACC** specifications for defining the tokens of TinyC and generates a parse tree in a human-readable format.
- **Intermediate Code Generation** (TinyC, Part 3)  
  Contains the implementation of semantics actions in **YACC** to translate a TinyC program into intermediate code.
  
---

## Compilation & Execution

### Requirements
- Flex
- YACC
- GCC

### Running Instructions
```bash
cd to_project_directory
make run
```
