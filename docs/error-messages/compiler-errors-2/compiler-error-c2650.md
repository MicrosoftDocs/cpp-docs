---
description: "Learn more about: Compiler Error C2650"
title: "Compiler Error C2650"
ms.date: "11/04/2016"
f1_keywords: ["C2650"]
helpviewer_keywords: ["C2650"]
ms.assetid: 49a8ac6e-aa6d-4616-917c-a3cfcdbad5a4
---
# Compiler Error C2650

'operator' : cannot be a virtual function

A **`new`** or **`delete`** operator is declared **`virtual`**. These operators are **`static`** member functions and cannot be **`virtual`**.

## Example

The following sample generates C2650:

```cpp
// C2650.cpp
// compile with: /c
class A {
   virtual void* operator new( unsigned int );   // C2650
   // try the following line instead
   // void* operator new( unsigned int );
};
```
