---
description: "Learn more about: Compiler Warning (level 1) C4486"
title: "Compiler Warning (level 1) C4486"
ms.date: "11/04/2016"
f1_keywords: ["C4486"]
helpviewer_keywords: ["C4486"]
ms.assetid: 2c0c59e3-d025-4d97-8da2-fa27df1402fc
---
# Compiler Warning (level 1) C4486

'function' : a private virtual method of a ref class or value class should be marked 'sealed'

Since a private virtual member function of a managed class or struct cannot be accessed or overridden, it should be marked [sealed](../../extensions/sealed-cpp-component-extensions.md).

## Examples

The following sample generates C4486.

```cpp
// C4486.cpp
// compile with: /clr /c /W1
ref class B {
private:
   virtual void f() {}   // C4486
   virtual void f1() sealed {}   // OK
};
```

The following sample shows one possible use of a private sealed, virtual function.

```cpp
// C4486_b.cpp
// compile with: /clr /c
ref class B {};

ref class D : B {};

interface class I {
   B^ mf();
};

ref class E : I {
private:
   virtual B^ g() sealed = I::mf {
      return gcnew B;
   }

public:
   virtual D^ mf() {
      return gcnew D;
   }
};
```
