---
description: "Learn more about: Comments (C++)"
title: "Comments (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["code comments, C++", "comments, documenting code", "comments, C++ code", "white space, C++ comments"]
ms.assetid: 6fcb906c-c264-4083-84bc-373800b2e514
---
# Comments (C++)

A comment is text that the compiler ignores but that is useful for programmers. Comments are normally used to annotate code for future reference. The compiler treats them as white space. You can use comments in testing to make certain lines of code inactive; however, `#if`/`#endif` preprocessor directives work better for this because you can surround code that contains comments but you cannot nest comments.

A C++ comment is written in one of the following ways:

- The `/*` (slash, asterisk) characters, followed by any sequence of characters (including new lines), followed by the `*/` characters. This syntax is the same as ANSI C.

- The `//` (two slashes) characters, followed by any sequence of characters. A new line not immediately preceded by a backslash terminates this form of comment. Therefore, it is commonly called a "single-line comment."

The comment characters (`/*`, `*/`, and `//`) have no special meaning within a character constant, string literal, or comment. Comments using the first syntax, therefore, cannot be nested.

## See also

[Lexical Conventions](../cpp/lexical-conventions.md)
