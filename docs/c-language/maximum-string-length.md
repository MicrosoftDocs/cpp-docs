---
description: "Learn more about: Maximum String Length"
title: "Maximum String Length"
ms.date: "11/04/2016"
helpviewer_keywords: ["lengths, strings", "string length, maximum", "maximum string length", "strings [C++], length"]
ms.assetid: 99a80e4a-6212-47b7-a6bd-bdf99bd44928
---
# Maximum String Length

**Microsoft Specific**

ANSI compatibility requires a compiler to accept up to 509 characters in a string literal after concatenation. The maximum length of a string literal allowed in Microsoft C is approximately 2,048 bytes. However, if the string literal consists of parts enclosed in double quotation marks, the preprocessor concatenates the parts into a single string, and for each line concatenated, it adds an extra byte to the total number of bytes.

For example, suppose a string consists of 40 lines with 50 characters per line (2,000 characters), and one line with 7 characters, and each line is surrounded by double quotation marks. This adds up to 2,007 bytes plus one byte for the terminating null character, for a total of 2,008 bytes. On concatenation, an extra character is added for each of the first 40 lines. This makes a total of 2,048 bytes. Note, however, that if line continuations (\\) are used instead of double quotation marks, the preprocessor does not add an extra character for each line.

While an individual quoted string cannot be longer than 2048 bytes, a string literal of roughly 65535 bytes can be constructed by concatenating strings.

**END Microsoft Specific**

## See also

[C String Literals](../c-language/c-string-literals.md)
