---
description: "Learn more about: Compiler Error C3365"
title: "Compiler Error C3365"
ms.date: "11/04/2016"
f1_keywords: ["C3365"]
helpviewer_keywords: ["C3365"]
ms.assetid: 875ec3a4-522c-4e3d-9b67-48808b857f6d
---
# Compiler Error C3365

operator 'operator' : differing operands of type 'type1' and 'type2'

An attempt was made to compose delegates with different types.  See [How to: Define and Use Delegates (C++/CLI)](../../dotnet/how-to-define-and-use-delegates-cpp-cli.md) for more information about delegates.

## Example

The following sample generates C3365:

```cpp
// C3365.cpp
// compile with: /clr
delegate void D1();
delegate void D2(int);

ref class R {
public:
   void f(){}
   void g(int){}
};

int main() {
   D1^ d1 = gcnew D1(gcnew R, &R::f);
   D2^ d2 = gcnew D2(gcnew R, &R::g);
   D1^ d3 = gcnew D1(gcnew R, &R::f);

   d1 += d2;   // C3365
   d1 += d3;   // OK
   d1();
}
```
