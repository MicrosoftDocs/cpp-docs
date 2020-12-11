---
description: "Learn more about: Compiler Warning (level 3) C4191"
title: "Compiler Warning (level 3) C4191"
ms.date: "11/04/2016"
f1_keywords: ["C4191"]
helpviewer_keywords: ["C4191"]
ms.assetid: 576d3bc6-95b7-448a-af31-5d798452df09
---
# Compiler Warning (level 3) C4191

'operator/operation' : unsafe conversion from 'type of expression' to 'type required'

Several operations involving function pointers are considered unsafe:

- Function types with different calling conventions.

- Function types with different return conventions.

- Argument or return types with different sizes, type categories, or classifications.

- Differing argument list lengths (on **`__cdecl`**, only on cast from longer list to shorter list, even if shorter is varargs).

- Pointer to data (other than **`void`**<strong>\*</strong>) aliased against a pointer to function.

- Any other type difference that would yield an error or warning on a **`reinterpret_cast`**.

Calling this function through the result pointer might cause your program to crash.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

The following sample generates C4191:

```cpp
// C4191.cpp
// compile with: /W3 /clr
#pragma warning(default: 4191)

void __clrcall f1() { }
void __cdecl   f2() { }

typedef void (__clrcall * fnptr1)();
typedef void (__cdecl   * fnptr2)();

int main() {
   fnptr1 fp1 = static_cast<fnptr1>(&f1);
   fnptr2 fp2 = (fnptr2) &f2;

   fnptr1 fp3 = (fnptr1) &f2;   // C4191
   fnptr2 fp4 = (fnptr2) &f1;   // C4191
};
```
