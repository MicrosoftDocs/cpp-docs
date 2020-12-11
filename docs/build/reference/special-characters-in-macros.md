---
description: "Learn more about: Special Characters in Macros"
title: "Special Characters in Macros"
ms.date: "11/04/2016"
helpviewer_keywords: ["special characters, in NMAKE macros"]
ms.assetid: c0a06cfc-7103-4ee2-a585-e8f6e85dccd7
---
# Special Characters in Macros

A number sign (#) after a definition specifies a comment. To specify a literal number sign in a macro, use a caret (^), as in ^#.

A dollar sign ($) specifies a macro invocation. To specify a literal $, use $$.

To extend a definition to a new line, end the line with a backslash (\\). When the macro is invoked, the backslash plus newline character is replaced with a space. To specify a literal backslash at the end of the line, precede it with a caret (^), or follow it with a comment specifier (#).

To specify a literal newline character, end the line with a caret (^), as in:

```
CMDS = cls^
dir
```

## See also

[Defining an NMAKE Macro](defining-an-nmake-macro.md)
