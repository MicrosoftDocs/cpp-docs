---
description: "Learn more about: Compiler Error C2676"
title: "Compiler Error C2676"
ms.date: "11/04/2016"
f1_keywords: ["C2676"]
helpviewer_keywords: ["C2676"]
ms.assetid: 838a5e34-c92f-4f65-a597-e150bf8cf737
---
# Compiler Error C2676

binary 'operator' : 'type' does not define this operator or a conversion to a type acceptable to the predefined operator

To use the operator, you must overload it for the specified type or define a conversion to a type for which the operator is defined.

## Examples

The following sample generates C2676.

```cpp
// C2676.cpp
// C2676 expected
struct C {
   C();
} c;

struct D {
   D();
   D operator >>( C& ){return * new D;}
   D operator <<( C& ){return * new D;}
} d;

struct E {
   // operator int();
};

int main() {
   d >> c;
   d << c;
   E e1, e2;
   e1 == e2;   // uncomment operator int in class E, then
               // it is OK even though neither E::operator==(E) nor
               // operator==(E, E) defined. Uses the conversion to int
               // and then the builtin-operator==(int, int)
}
```

C2676 can also occur if you attempt to do pointer arithmetic on the **`this`** pointer of a reference type.

The **`this`** pointer is of type handle in a reference type. For more information, see [Semantics of the this pointer](../../dotnet/how-to-define-and-consume-classes-and-structs-cpp-cli.md#BKMK_Semantics_of_the_this_pointer).

The following sample generates C2676.

```cpp
// C2676_a.cpp
// compile with: /clr
using namespace System;

ref struct A {
   property Double default[Double] {
      Double get(Double data) {
         return data*data;
      }
   }

   A() {
      Console::WriteLine("{0}", this + 3.3);   // C2676
      Console::WriteLine("{0}", this[3.3]);   // OK
   }
};

int main() {
   A ^ mya = gcnew A();
}
```
