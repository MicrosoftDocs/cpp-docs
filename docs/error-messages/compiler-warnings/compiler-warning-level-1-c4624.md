---
description: "Learn more about: Compiler Warning (level 1) C4624"
title: "Compiler Warning (level 1) C4624"
ms.date: "11/04/2016"
f1_keywords: ["C4624"]
helpviewer_keywords: ["C4624"]
ms.assetid: 14f61769-d92e-482b-9515-debd87b30a66
---
# Compiler Warning (level 1) C4624

'derived class' : destructor was implicitly defined as deleted because a base class destructor is inaccessible or deleted

A destructor was not accessible or deleted in a base class and was therefore not generated for a derived class. Any attempt to create an object of this type on the stack will cause a compiler error.

The following sample generates C4624 and shows how to fix it:

```cpp
// C4624.cpp
// compile with: /W1 /c
class B {
// Uncomment the following line to fix.
// public:
   ~B();
};

class D : public B {};   // C4624 B's destructor not public
```
