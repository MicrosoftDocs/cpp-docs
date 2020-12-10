---
description: "Learn more about: Tokens and character sets"
title: "Tokens and character sets"
ms.date: "12/10/2019"
helpviewer_keywords: ["Tokens (C++)", "Character sets", "basic source character set (C++)", "universal character names", "basic execution character set (C++)"]
ms.assetid: 379a2af6-6422-425f-8352-ef0bca6c0d74
---
# Tokens and character sets

The text of a C++ program consists of tokens and *white space*. A token is the smallest element of a C++ program that is meaningful to the compiler. The C++ parser recognizes these kinds of tokens:

- [Keywords](../cpp/keywords-cpp.md)
- [Identifiers](../cpp/identifiers-cpp.md)
- [Numeric, Boolean and Pointer Literals](../cpp/numeric-boolean-and-pointer-literals-cpp.md)
- [String and Character Literals](../cpp/string-and-character-literals-cpp.md)
- [User-Defined Literals](../cpp/user-defined-literals-cpp.md)
- [Operators](../cpp/cpp-built-in-operators-precedence-and-associativity.md)
- [Punctuators](../cpp/punctuators-cpp.md)

Tokens are usually separated by *white space*, which can be one or more:

- Blanks
- Horizontal or vertical tabs
- New lines
- Form feeds
- Comments

## Basic source character set

The C++ standard specifies a *basic source character set* that may be used in source files. To represent characters outside of this set, additional characters can be specified by using a *universal character name*. The MSVC implementation allows additional characters. The *basic source character set* consists of  96 characters that may be used in source files. This set includes the space character, horizontal tab, vertical tab, form feed and new-line control characters, and this set of graphical characters:

`a b c d e f g h i j k l m n o p q r s t u v w x y z`

`A B C D E F G H I J K L M N O P Q R S T U V W X Y Z`

`0 1 2 3 4 5 6 7 8 9`

`_ { } [ ] # ( ) < > % : ; . ? * + - / ^ & | ~ ! = , \ " '`

**Microsoft Specific**

MSVC includes the `$` character as a member of the basic source character set. MSVC also allows an additional set of characters to be used in source files, based on the file encoding. By default, Visual Studio stores source files by using the default codepage. When source files are saved by using a locale-specific codepage or a Unicode codepage, MSVC allows you to use any of the characters of that code page in your source code, except for the control codes not explicitly allowed in the basic source character set. For example, you can put Japanese characters in comments, identifiers, or string literals if you save the file using a Japanese codepage. MSVC does not allow character sequences that cannot be translated into valid multibyte characters or Unicode code points. Depending on compiler options, not all allowed characters may appear in identifiers. For more information, see [Identifiers](../cpp/identifiers-cpp.md).

**END Microsoft Specific**

### Universal character names

Because C++ programs can use many more characters than the ones specified in the basic source character set, you can specify these characters in a portable way by using *universal character names*. A universal character name consists of a sequence of characters that represent a Unicode code point.  These take two forms. Use `\UNNNNNNNN` to represent a Unicode code point of the form U+NNNNNNNN, where NNNNNNNN is the eight-digit hexadecimal code point number. Use four-digit `\uNNNN` to represent a Unicode code point of the form U+0000NNNN.

Universal character names can be used in identifiers and in string and character literals. A universal character name cannot be used to represent a surrogate code point in the range 0xD800-0xDFFF. Instead, use the desired code point; the compiler automatically generates any required surrogates. Additional restrictions apply to the universal character names that can be used in identifiers. For more information, see [Identifiers](../cpp/identifiers-cpp.md) and [String and Character Literals](../cpp/string-and-character-literals-cpp.md).

**Microsoft Specific**

The Microsoft C++ compiler treats a character in universal character name form and literal form interchangeably. For example, you can declare an identifier using universal character name form, and use it in literal form:

```cpp
auto \u30AD = 42; // \u30AD is 'キ'
if (キ == 42) return true; // \u30AD and キ are the same to the compiler
```

The format of extended characters on the Windows clipboard is specific to application locale settings. Cutting and pasting these characters into your code from another application may introduce unexpected character encodings. This can result in parsing errors with no visible cause in your code. We recommend that you set your source file encoding to a Unicode codepage before pasting extended characters. We also recommend that you use an IME or the Character Map app to generate extended characters.

**END Microsoft Specific**

### Execution character sets

The *execution character sets* represent the characters and strings that can appear in a compiled program. These character sets consist of all the characters permitted in a source file, and also the control characters that represent alert, backspace, carriage return, and the null character. The execution character set has a locale-specific representation.
