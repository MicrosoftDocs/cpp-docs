---
description: "Learn more about: Compiler Error C2392"
title: "Compiler Error C2392"
ms.date: "11/04/2016"
f1_keywords: ["C2392"]
helpviewer_keywords: ["C2392"]
ms.assetid: 98ced473-6383-46ed-b79c-21857d65dcb2
---
# Compiler Error C2392

'method1' : covariant returns types are not supported in managed or WinRTtypes, otherwise 'method2' would be overridden

Covariant return types are not allowed for Windows Runtime member functions or when compiling with the [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) option.

## Example

The following sample generates C2392 and shows how to fix it.

```cpp
// C2392.cpp
// compile with: /clr
public ref struct B {
public:
   int i;
};

public ref struct D: public B{};

public ref struct B1 {
public:
   virtual B^ mf() {
      B^ pB = gcnew B;
      pB->i = 11;
      return pB;
   }
};

public ref struct D1: public B1 {
public:
   virtual D^ mf() override {  // C2392
   // try the following line instead
   // virtual B^ mf() override {
   // return type D^ is covariant with B^, not allowed with CLR types
      D^ pD = gcnew D;
      pD->i = 12;
      return pD;
   }
};

int main() {
   B1^ pB1 = gcnew D1;
   B^ pB = pB1->mf();
   D^ pD = dynamic_cast<D^>(pB);
}
```
