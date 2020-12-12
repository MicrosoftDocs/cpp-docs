---
description: "Learn more about: C Character Constants"
title: "C Character Constants"
ms.date: "11/04/2016"
helpviewer_keywords: ["characters, constants", "(') single quotation mark", "constants, character", "single quotation mark"]
ms.assetid: 388ae7d7-2c3a-44d6-a507-63f541ecd2da
---
# C Character Constants

A "character constant" is formed by enclosing a single character from the representable character set within single quotation marks (**' '**). Character constants are used to represent characters in the [execution character set](../c-language/execution-character-set.md).

## Syntax

*character-constant*:
**'** *c-char-sequence* **'**

**L'** *c-char-sequence* **'**

*c-char-sequence*:
*c-char*

*c-char-sequence c-char*

*c-char*:
Any member of the source character set except the single quotation mark (**'**), backslash (**\\**), or newline character

*escape-sequence*

*escape-sequence*:
*simple-escape-sequence*

*octal-escape-sequence*

*hexadecimal-escape-sequence*

*simple-escape-sequence*: one of
**\a \b \f \n \r \t \v**

**\\' \\" \\\ \\?**

*octal-escape-sequence*:
**\\**  *octal-digit*

**\\**  *octal-digit octal-digit*

**\\**  *octal-digit octal-digit octal-digit*

*hexadecimal-escape-sequence*:
**\x**  *hexadecimal-digit*

*hexadecimal-escape-sequence hexadecimal-digit*

## See also

[C Constants](../c-language/c-constants.md)
