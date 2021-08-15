---
description: "Learn more about: Compiler Warning (level 1) C4382"
title: "Compiler Warning (level 1) C4382"
ms.date: "11/04/2016"
f1_keywords: ["C4382"]
helpviewer_keywords: ["C4382"]
ms.assetid: 34be9ad3-bae6-411a-8f80-0c8fd0d2c092
---
# Compiler Warning (level 1) C4382

> throwing '*type*' : a type with __clrcall destructor or copy constructor can only be caught in /clr:pure module

## Remarks

The **/clr:pure** compiler option is deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

When compiled with **/clr** (not **/clr:pure**), exception handling expects the member functions in a native type to be [__cdecl](../../cpp/cdecl.md) and not [__clrcall](../../cpp/clrcall.md). Native types with member functions using `__clrcall` calling convention cannot be caught in a module compiled with **/clr**.

If the exception will be caught in a module compiled with **/clr:pure**, you can ignore this warning.

For more information, see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).

## Example

The following sample generates C4382.

```cpp
// C4382.cpp
// compile with: /clr /W1 /c
struct S {
   __clrcall ~S() {}
};

struct T {
   ~T() {}
};

int main() {
   S s;
   throw s;   // C4382

   S * ps = &s;
   throw ps;   // OK

   T t;
   throw t;   // OK
}
```
