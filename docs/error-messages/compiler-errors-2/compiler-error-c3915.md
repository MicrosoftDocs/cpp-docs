---
description: "Learn more about: Compiler Error C3915"
title: "Compiler Error C3915"
ms.date: "11/04/2016"
f1_keywords: ["C3915"]
helpviewer_keywords: ["C3915"]
ms.assetid: 2b0a5e5f-3aec-4a4b-9157-233031817084
---
# Compiler Error C3915

'type' has no default indexed property (class indexer)

A type does not have a default, indexed property.

For more information, see [property](../../extensions/property-cpp-component-extensions.md).

## Examples

The following sample generates C3915.

```cpp
// C3915.cpp
// compile with: /clr
ref class X {
public:
// uncomment property to resolve this C3915
//   property int default[]
//   {
//      int get(int i)
//      {
//         return 863;
//      }
//   }
};

int main() {
   X^ x = new X;
   System::Console::WriteLine(x[1]);   // C3915
}
```

C3915 can also occur if you attempt to consume a default indexer in the same compiland where it was defined with <xref:System.Reflection.DefaultMemberAttribute>.

The following sample generates C3915.

```cpp
// C3915_b.cpp
// compile with: /clr
using namespace System;

[Reflection::DefaultMember("XXX")]
ref struct A {
   property Double XXX[Double] {
      Double get(Double data) {
         return data*data;
      }
   }
};

ref struct B {
   property Double default[Double] {
      Double get(Double data) {
         return data*data;
      }
   }
};

int main() {
   A ^ mya = gcnew A();
   Console::WriteLine("{0}", mya[3]);   // C3915

   B ^ myb = gcnew B();
   Console::WriteLine("{0}", myb[3]);   // OK
}
```
