---
description: "Learn more about: Compiler Error C2107"
title: "Compiler Error C2107"
ms.date: "11/04/2016"
f1_keywords: ["C2107"]
helpviewer_keywords: ["C2107"]
ms.assetid: 2866a121-884e-4bb5-8613-36de5817000e
---
# Compiler Error C2107

illegal index, indirection not allowed

A subscript is applied to an expression that does not evaluate to a pointer.

## Example

C2107 can occur if you incorrectly use the **`this`** pointer of a value type to access the type's default indexer. For more information, see [Semantics of the this pointer](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Semantics_of_the_this_pointer).

The following sample generates C2107.

```cpp
// C2107.cpp
// compile with: /clr
using namespace System;

value struct B {
   property String ^ default[String ^] {
      String ^ get(String ^ data) {
         return "abc";
      }
   }
   void Test() {
      Console::WriteLine("{0}", this["aa"]);   // C2107
      Console::WriteLine("{0}", this->default["aa"]);   // OK
   }
};

int main() {
   B ^ myb = gcnew B();
   myb->Test();
}
```
