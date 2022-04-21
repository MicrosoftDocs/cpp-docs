---
description: "Learn more about: Compiler Warning (level 1) C4822"
title: "Compiler Warning (level 1) C4822"
ms.date: "11/04/2016"
f1_keywords: ["C4822"]
helpviewer_keywords: ["C4822"]
ms.assetid: 0f231a30-2eb0-4722-aaa0-e2d19d3e7eea
---
# Compiler Warning (level 1) C4822

'member' : local class member function does not have a body

## Remarks

A local class member function was declared but not defined in the class. To use a local class member function, you must define it in the class. You can't declare it in class and define it out of class.

Any out-of-class definition for a local class member function is an error.

In Visual Studio 2019 and later, C4822 is an [off-by-default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) warning.

## Example

The following sample generates C4822:

```cpp
// C4822.cpp
// compile with: /W1
int main() {
   struct C {
      void func1(int);   // C4822
      // try the following line instead
      // void func1(int){}
  };
}
```
