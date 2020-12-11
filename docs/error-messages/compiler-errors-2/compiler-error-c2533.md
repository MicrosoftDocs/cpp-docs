---
description: "Learn more about: Compiler Error C2533"
title: "Compiler Error C2533"
ms.date: "11/04/2016"
f1_keywords: ["C2533"]
helpviewer_keywords: ["C2533"]
ms.assetid: 5b335652-076c-4824-87c8-a741f64a3ce0
---
# Compiler Error C2533

'identifier' : constructors not allowed a return type

A constructor cannot have a return type (not even a **`void`** return type).

A common source of this error is a missing semicolon between the end of a class definition and the first constructor implementation. The compiler sees the class as a definition of the return type for the constructor function, and generates C2533.

The following sample generates C2533, and shows how to fix it:

```cpp
// C2533.cpp
// compile with: /c
class X {
public:
   X();
};

int X::X() {}   // C2533 - constructor return type not allowed
X::X() {}   // OK - fix by using no return type
```
