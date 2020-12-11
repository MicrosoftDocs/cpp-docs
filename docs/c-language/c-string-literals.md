---
description: "Learn more about: C String Literals"
title: "C String Literals"
ms.date: "08/31/2018"
helpviewer_keywords: ["string literals, syntax", "strings [C++], string literals", "literal strings, C"]
ms.assetid: 4b05523e-49a2-4900-b21a-754350af3328
---
# C String Literals

A "string literal" is a sequence of characters from the source character set enclosed in double quotation marks (**" "**). String literals are used to represent a sequence of characters which, taken together, form a null-terminated string. You must always prefix wide-string literals with the letter **L**.

## Syntax

*string-literal*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**"** *s-char-sequence*<sub>opt</sub> **"**<br/>
&nbsp;&nbsp;&nbsp;&nbsp;**L"** *s-char-sequence*<sub>opt</sub> **"**

*s-char-sequence*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;*s-char*

&nbsp;&nbsp;&nbsp;&nbsp;*s-char-sequence* *s-char*

*s-char*:<br/>
&nbsp;&nbsp;&nbsp;&nbsp;any member of the source character set except the double quotation mark ("), backslash (\\), or newline character

&nbsp;&nbsp;&nbsp;&nbsp;*escape-sequence*

## Remarks

The example below is a simple string literal:

```C
char *amessage = "This is a string literal.";
```

All escape codes listed in the [Escape Sequences](../c-language/escape-sequences.md) table are valid in string literals. To represent a double quotation mark in a string literal, use the escape sequence **\\"**. The single quotation mark (**'**) can be represented without an escape sequence. The backslash (**\\**) must be followed with a second backslash (**\\\\**) when it appears within a string. When a backslash appears at the end of a line, it is always interpreted as a line-continuation character.

## See also

[Elements of C](../c-language/elements-of-c.md)
