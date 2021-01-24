---
description: "Learn more about: Compiler Error C2254"
title: "Compiler Error C2254"
ms.date: "11/04/2016"
f1_keywords: ["C2254"]
helpviewer_keywords: ["C2254"]
ms.assetid: 49bb3d7e-3bdf-4af6-937c-fa627be412a9
---
# Compiler Error C2254

'function' : pure specifier or abstract override specifier not allowed on friend function

A **`friend`** function is specified as pure **`virtual`**.

The following sample generates C2254:

```cpp
// C2254.cpp
// compile with: /c
class A {
public:
   friend void func1() = 0;   // C2254, func1 is friend
   void virtual func2() = 0;   // OK, pure virtual
   friend void func3();   // OK, friend not virtual nor pure
};

void func1() {};
void func3() {};
```
