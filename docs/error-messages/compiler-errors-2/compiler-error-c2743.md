---
description: "Learn more about: Compiler Error C2743"
title: "Compiler Error C2743"
ms.date: "11/04/2016"
f1_keywords: ["C2743"]
helpviewer_keywords: ["C2743"]
ms.assetid: 644cd444-21d2-471d-a176-f5f52c5a0b73
---
# Compiler Error C2743

'type' : cannot catch a native type with __clrcall destructor or copy constructor

A module compiled with **/clr** attempted to catch an exception of native type and where the type's destructor or copy constructor uses `__clrcall` calling convention.

When compiled with **/clr**, exception handling expects the member functions in a native type to be [__cdecl](../../cpp/cdecl.md) and not [__clrcall](../../cpp/clrcall.md). Native types with member functions using `__clrcall` calling convention cannot be caught in a module compiled with **/clr**.

For more information, see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md).

## Example

The following sample generates C2743.

```cpp
// C2743.cpp
// compile with: /clr
public struct S {
   __clrcall ~S() {}
};

public struct T {
   ~T() {}
};

int main() {
   try {}
   catch(S) {}   // C2743
   // try the following line instead
   // catch(T) {}

   try {}
   catch(S*) {}   // OK
}
```
