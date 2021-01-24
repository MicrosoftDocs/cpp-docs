---
description: "Learn more about: Compiler Warning (level 1) C4488"
title: "Compiler Warning (level 1) C4488"
ms.date: "11/04/2016"
f1_keywords: ["C4488"]
helpviewer_keywords: ["C4488"]
ms.assetid: 55625e46-ddb5-4c7c-99c7-cd4aa9f879bd
---
# Compiler Warning (level 1) C4488

'function' : requires 'keyword' keyword to implement the interface method 'interface_method'

A class must implement all members of an interface from which it directly inherits. An implemented member must have public accessibility, and must be marked virtual.

## Examples

C4488 can occur if an implemented member is not public. The following sample generates C4488.

```cpp
// C4488.cpp
// compile with: /clr /c /W1 /WX
interface struct MyI {
   void f1();
};

// implemented member not public
ref class B : MyI { virtual void f1() {} };  // C4488

// OK
ref class C : MyI {
public:
   virtual void f1() {}
};
```

C4488 can occur if an implemented member is not marked virtual. The following sample generates C4488.

```cpp
// C4488_b.cpp
// compile with: /clr /c /W1 /WX
interface struct MyI {
   void f1();
};

ref struct B : MyI { void f1() {} };   // C4488
ref struct C : MyI { virtual void f1() {} };   // OK
```
