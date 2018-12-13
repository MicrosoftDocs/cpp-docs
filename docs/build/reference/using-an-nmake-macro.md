---
title: "Using an NMAKE Macro (C++) - Visual Studio"
ms.date: "12/14/2018"
helpviewer_keywords: ["macros, NMAKE", "NMAKE macros, using"]
ms.assetid: 95c87fbc-76e6-48c0-8536-9bfe179f328e
---
# Using an NMAKE Macro

To use a macro, enclose its name in parentheses preceded by a dollar sign ($) as follows.

## Syntax

```
$(macroname)
```

## Remarks

No spaces are allowed. The parentheses are optional if *macroname* is a single character. The definition string replaces $(*macroname*); an undefined macro is replaced by a null string.

## What do you want to know more about?

[Macro substitution](macro-substitution.md)

## See Also

[Macros and NMAKE](macros-and-nmake.md)