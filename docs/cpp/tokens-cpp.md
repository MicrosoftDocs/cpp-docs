---
title: "Tokens (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["tokens [C++]", "parsing, C++ tokens", "translation units", "white space, in C++ tokens"]
ms.assetid: aa812fd0-6d47-4f3f-aee0-db002ee4d8b9
---
# Tokens (C++)

A token is the smallest element of a C++ program that is meaningful to the compiler. The C++ parser recognizes these kinds of tokens:

- [Keywords](../cpp/keywords-cpp.md)
- [Identifiers](../cpp/identifiers-cpp.md)
- [Numeric, Boolean and Pointer Literals](../cpp/numeric-boolean-and-pointer-literals-cpp.md)
- [String and Character Literals](../cpp/string-and-character-literals-cpp.md)
- [User-Defined Literals](../cpp/user-defined-literals-cpp.md)
- [Operators](../cpp/cpp-built-in-operators-precedence-and-associativity.md)
- [Punctuators](../cpp/punctuators-cpp.md)

Tokens are usually separated by *white space*. White space can be one or more:

- Blanks
- Horizontal or vertical tabs
- New lines
- Form feeds
- Comments

 White space is ignored, except as required to separate tokens.

Preprocessing tokens are used in the preprocessing phases to generate the token stream passed to the compiler. The preprocessing token categories are header names, identifiers, preprocessing numbers, character literals, string literals, preprocessing operators and punctuators, and single non-white-space characters that do not match one of the other categories. Character and string literals can be user-defined literals. Preprocessing tokens can be separated by white space or comments.

The parser separates tokens from the input stream by creating the longest token possible using the input characters in a left-to-right scan. Consider this code fragment:

```cpp
a = i+++j;
```

The programmer who wrote the code might have intended either of these two statements:

```cpp
a = i + (++j)

a = (i++) + j
```

Because the parser creates the longest token possible from the input stream, it chooses the second interpretation, making the tokens `i++`, `+`, and `j`.

## See also

[Lexical Conventions](../cpp/lexical-conventions.md)