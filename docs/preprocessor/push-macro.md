---
description: "Learn more about the push_macro pragma directive in Microsoft C/C++"
title: "push_macro pragma"
ms.date: 01/22/2021
f1_keywords: ["vc-pragma.push_macro", "push_macro_CPP"]
helpviewer_keywords: ["pragma, push_macro", "push_macro pragma"]
no-loc: ["pragma"]
---
# `push_macro` pragma

Saves the value of the *macro-name* macro on the top of the stack for this macro.

## Syntax

> **`#pragma push_macro("`** _macro-name_ **`")`**

## Remarks

You can retrieve the value for *macro-name* with `pop_macro`.

See [`pop_macro` pragma](../preprocessor/pop-macro.md) for a sample.

## See also

[Pragma directives and the `__pragma` and `_Pragma` keywords](./pragma-directives-and-the-pragma-keyword.md)
