---
title: "Compiler Warning (level 1) C4813"
description: "Learn more about: Compiler Warning (level 1) C4813"
ms.date: 11/04/2016
f1_keywords: ["C4813"]
helpviewer_keywords: ["C4813"]
---
# Compiler Warning (level 1) C4813

> 'function' : a friend function of a local class must have been previously declared

## Remarks

A friend function in an inner class was not declared in the outer class.

## Example

The following example generates C4813:

```cpp
// C4813.cpp
// compile with: /W1 /LD
void MyClass()
{
   // void func();
   class InnerClass
   {
      friend void func();   // C4813 uncomment declaration above
   };
}
```
