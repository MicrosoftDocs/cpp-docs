---
description: "Learn more about: Compiler Warning (level 1, error) C4439"
title: "Compiler warning (level 1, error) C4439"
ms.date: "1/22/2025"
f1_keywords: ["C4439"]
helpviewer_keywords: ["C4439"]
---
# Compiler warning C4439

> '*function name*': function definition with a managed type in the signature must have a `__clrcall` calling convention

## Remarks

The compiler implicitly replaced a calling convention with [`__clrcall`](../../cpp/clrcall.md). To resolve this warning, remove the **`__cdecl`** or **`__stdcall`** calling convention.

C4439 is always issued as an error. You can turn off this warning with the `#pragma warning` or **`/wd`**. For more information, see [`warning`](../../preprocessor/warning.md) or [`/w`, `/W0`, `/W1`, `/W2`, `/W3`, `/W4`, `/w1`, `/w2`, `/w3`, `/w4`, `/Wall`, `/wd`, `/we`, `/wo`, `/Wv`, `/WX` (Warning Level)](../../build/reference/compiler-option-warning-level.md).

## Example

The following sample generates C4439:

```cpp
// C4439.cpp
// compile with: /clr
void __stdcall f( System::String^ arg ) {}   // C4439
void __clrcall f2( System::String^ arg ) {}   // OK
void f3( System::String^ arg ) {}   // OK
```
