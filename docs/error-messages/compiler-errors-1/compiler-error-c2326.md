---
title: "Compiler Error C2326"
description: "Learn more about: Compiler Error C2326"
ms.date: 11/04/2016
f1_keywords: ["C2326"]
helpviewer_keywords: ["C2326"]
---
# Compiler Error C2326

> 'declarator' : function cannot access 'name'

## Remarks

The code tries to modify a member variable, which is not possible.

## Example

The following example generates C2326:

```cpp
// C2326.cpp
void MyFunc() {
   int i;

   class MyClass  {
   public:
      void mf() {
         i = 4;   // C2326 i is inaccessible
      }
   };
}
```
