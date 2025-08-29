---
description: "Learn more about: Compiler Warning (level 1, Error) C4394"
title: "Compiler Warning (level 1, Error) C4394"
ms.date: "11/04/2016"
f1_keywords: ["C4394"]
helpviewer_keywords: ["C4394"]
---
# Compiler Warning (level 1, Error) C4394

> 'function' : per-appdomain symbol should not be marked with __declspec(dllexport)

## Remarks

A function marked with the [appdomain](../../cpp/appdomain.md) **`__declspec`** modifier is compiled to MSIL (not native), and export tables ([export](../../windows/attributes/export.md) **`__declspec`** modifier) aren't supported for managed functions.

You can declare a managed function to have public accessibility. For more information, see [Type visibility](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Type_visibility) and [Member visibility](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Member_visibility).

C4394 is always issued as an error. You can turn off this warning or change its level with `#pragma warning` or **/wd**. For more information, see [warning](../../preprocessor/warning.md) or [/w, /W0, /W1, /W2, /W3, /W4, /w1, /w2, /w3, /w4, /Wall, /wd, /we, /wo, /Wv, /WX (Warning Level)](../../build/reference/compiler-option-warning-level.md).

## Example

The following sample generates C4394.

```cpp
// C4394.cpp
// compile with: /clr /c
__declspec(dllexport) __declspec(appdomain) int g1 = 0;   // C4394
__declspec(dllexport) int g2 = 0;   // OK
```
