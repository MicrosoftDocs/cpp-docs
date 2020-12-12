---
description: "Learn more about: ALIAS"
title: "ALIAS (MASM)"
ms.date: "12/17/2019"
f1_keywords: ["Alias"]
helpviewer_keywords: ["ALIAS directive"]
ms.assetid: d9725c49-58de-41da-ab01-b06a56cf5cf2
---
# ALIAS

The **ALIAS** directive creates an alternate name for a function.  This lets you create multiple names for a function, or create libraries that allow the linker (LINK.exe) to map an old function to a new function.

## Syntax

> **ALIAS \<**_alias_**> = \<**_actual-name_**>**

#### Parameters

*actual-name*\
The actual name of the function or procedure.  The angle brackets are required.

*alias*\
The alternate or alias name.  The angle brackets are required.

## See also

[Directives Reference](directives-reference.md)\
[MASM BNF Grammar](masm-bnf-grammar.md)
