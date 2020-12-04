---
description: "Learn more about: Using an NMAKE Macro"
title: "Using an NMAKE Macro"
ms.date: "11/04/2016"
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

## See also

[Macros and NMAKE](macros-and-nmake.md)
