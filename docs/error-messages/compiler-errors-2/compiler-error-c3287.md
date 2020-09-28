---
title: "Compiler Error C3287"
description: "Describes Microsoft C++ compiler error C3287."
ms.date: 09/25/2020
f1_keywords: ["C3287"]
helpviewer_keywords: ["C3287"]
ms.assetid: c1fa73d2-2c82-4136-a7da-0e75e3b420ad
---
# Compiler Error C3287

> the type '*type*' (return type of GetEnumerator) must have a suitable public MoveNext member function and public Current property

## Remarks

User-defined collection classes must contain definitions for `MoveNext` and `Current`.

For more information, see [for each, in](../../dotnet/for-each-in.md).

## Example

The following sample generates C3287.

```cpp
// C3287.cpp
// compile with: /clr
using namespace System;

ref struct R {
   bool MoveNext() {
      return true;
   }
   property Object^ Current {
      Object^ get() {
         Object ^ o = gcnew Object;
         return o;
      }
   }
};

ref struct R2 {
   R ^GetEnumerator() {
      R^ r = gcnew R;
      return r;
   }
};

ref struct T {};

ref struct T2 {
   T ^GetEnumerator() {
      T^ t = gcnew T;
      return t;
   }
};

int main() {
   for each (int i in gcnew T2) {}   // C3287
   for each (int i in gcnew R2) {}   // OK
}
```
