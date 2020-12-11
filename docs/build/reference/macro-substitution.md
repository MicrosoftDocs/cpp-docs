---
description: "Learn more about: Macro Substitution"
title: "Macro Substitution"
ms.date: "11/04/2016"
helpviewer_keywords: ["NMAKE program, macro substitution", "macros, NMAKE", "substitution macros in NMAKE"]
ms.assetid: 47465cfe-fd92-49db-aebe-7c2d7ecceb73
---
# Macro Substitution

When *macroname* is invoked, each occurrence of *string1* in its definition string is replaced by *string2*.

## Syntax

```
$(macroname:string1=string2)
```

## Remarks

Macro substitution is case sensitive and is literal; *string1* and *string2* cannot invoke macros. Substitution does not modify the original definition. You can substitute text in any predefined macro except [$$@](filename-macros.md).

No spaces or tabs precede the colon; any after the colon are interpreted as literal. If *string2* is null, all occurrences of *string1* are deleted from the macro's definition string.

## See also

[Using an NMAKE Macro](using-an-nmake-macro.md)
