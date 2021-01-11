---
description: "Learn more about: Compiler Warning (level 1) C4374"
title: "Compiler Warning (level 1) C4374"
ms.date: "11/04/2016"
f1_keywords: ["C4374"]
helpviewer_keywords: ["C4374"]
ms.assetid: 4ac9aaec-d815-4b6e-825f-fa872092dd3b
---
# Compiler Warning (level 1) C4374

'function1': interface method will not be implemented by non-virtual method 'function2'

The compiler expected to find the [virtual](../../cpp/virtual-specifier.md) keyword on a method definition.

The following sample generates C4374:

```cpp
// C4374.cpp
// compile with: /clr /W1 /c /WX
public interface class I {
   void f();
};

public ref struct B {
   void f() {
      System::Console::WriteLine("B::f()");
   }
};

public ref struct C {
   virtual void f() {
      System::Console::WriteLine("C::f()");
   }
};

public ref struct D : B, I {};   // C4374
public ref struct E : C, I {};   // OK
```
