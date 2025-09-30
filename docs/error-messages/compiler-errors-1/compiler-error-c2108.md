---
title: "Compiler Error C2108"
description: "Learn more about: Compiler Error C2108"
ms.date: 06/03/2022
f1_keywords: ["C2108"]
helpviewer_keywords: ["C2108"]
---
# Compiler Error C2108

> subscript is not of integral type

## Remarks

The array subscript is a non-integer expression.

## Example

C2108 can occur if you incorrectly use the **`this`** pointer of a value type to access the type's default indexer. For more information, see [Semantics of the `this` pointer](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Semantics_of_the_this_pointer).

The following example generates C2108.

```cpp
// C2108.cpp
// compile with: /clr
using namespace System;

value struct B {
   property Double default[Double] {
      Double get(Double data) {
         return data*data;
      }
   }
   void Test() {
      Console::WriteLine("{0}", this[3.3]);   // C2108
      Console::WriteLine("{0}", this->default[3.3]);   // OK
   }
};

int main() {
   B ^ myb = gcnew B();
   myb->Test();
}
```
