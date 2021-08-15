---
description: "Learn more about: Compiler Error C2577"
title: "Compiler Error C2577"
ms.date: "11/04/2016"
f1_keywords: ["C2577"]
helpviewer_keywords: ["C2577"]
ms.assetid: fc79ef83-8362-40a2-9257-8037c3195ce4
---
# Compiler Error C2577

'member' : destructor/finalizer cannot have a return type

A destructor or finalizer cannot return a value of **`void`** or any other type. Remove the **`return`** statement from the destructor definition.

## Example

The following sample generates C2577.

```cpp
// C2577.cpp
// compile with: /c
class A {
public:
   A() {}
   ~A(){
      return 0;   // C2577
   }
};
```
