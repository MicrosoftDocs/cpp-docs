---
title: "Compiler Warning (level 1) C4561"
description: "Learn more about: Compiler Warning (level 1) C4561"
ms.date: 11/04/2016
f1_keywords: ["C4561"]
helpviewer_keywords: ["C4561"]
---
# Compiler Warning (level 1) C4561

> '__fastcall' incompatible with the '/clr' option: converting to '\__stdcall'

## Remarks

The [__fastcall](../../cpp/fastcall.md) function-calling convention cannot be used with the [/clr](../../build/reference/clr-common-language-runtime-compilation.md) compiler option. The compiler ignores the calls to **`__fastcall`**. To fix this warning, either remove the calls to **`__fastcall`** or compile without **/clr**.

## Example

The following example generates C4561:

```cpp
// C4561.cpp
// compile with: /clr /W1 /c
// processor: x86
void __fastcall Func(void *p);   // C4561, remove __fastcall to resolve
```
