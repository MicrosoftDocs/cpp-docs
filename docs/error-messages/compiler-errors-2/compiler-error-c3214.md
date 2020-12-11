---
description: "Learn more about: Compiler Error C3214"
title: "Compiler Error C3214"
ms.date: "11/04/2016"
f1_keywords: ["C3214"]
helpviewer_keywords: ["C3214"]
ms.assetid: 49ee4a9a-2549-4adb-9d3a-38e154303c2e
---
# Compiler Error C3214

'type' : invalid type argument for generic parameter 'param' of generic 'generic_type', does not meet constraint 'constraint'

The type was specified for an instantiation of a generic class that does not meet the generic class's constraint.

The following sample generates C3214:

```cpp
// C3214.cpp
// compile with: /clr
interface struct A {};

generic <class T>
where T : A
ref class C {};

ref class X : public A {};

int main() {
   C<int>^ c = new C<int>;   // C3214
   C<X ^> ^ c2 = new C<X^>;   // OK
}
```
