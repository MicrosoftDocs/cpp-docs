---
title: "push_macro"
ms.date: "11/04/2016"
f1_keywords: ["vc-pragma.push_macro", "push_macro_CPP"]
helpviewer_keywords: ["pragmas, push_macro", "push_macro pragma"]
ms.assetid: ac89efc9-afd1-4dfe-bfd1-497229b3e81d
---
# push_macro
Saves the value of the *macro_name* macro on the top of the stack for this macro.

## Syntax

```
#pragma push_macro("
macro_name
")
```

## Remarks

You can retrieve the value for *macro_name* with `pop_macro`.

See [pop_macro](../preprocessor/pop-macro.md) for a sample.

## See also

[Pragma Directives and the __Pragma Keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)