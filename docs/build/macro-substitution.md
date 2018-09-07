---
title: "Macro Substitution | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["NMAKE program, macro substitution", "macros, NMAKE", "substitution macros in NMAKE"]
ms.assetid: 47465cfe-fd92-49db-aebe-7c2d7ecceb73
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Macro Substitution

When *macroname* is invoked, each occurrence of *string1* in its definition string is replaced by *string2*.

## Syntax

```
$(macroname:string1=string2)
```

## Remarks

Macro substitution is case sensitive and is literal; *string1* and *string2* cannot invoke macros. Substitution does not modify the original definition. You can substitute text in any predefined macro except [$$@](../build/filename-macros.md).

No spaces or tabs precede the colon; any after the colon are interpreted as literal. If *string2* is null, all occurrences of *string1* are deleted from the macro's definition string.

## See Also

[Using an NMAKE Macro](../build/using-an-nmake-macro.md)