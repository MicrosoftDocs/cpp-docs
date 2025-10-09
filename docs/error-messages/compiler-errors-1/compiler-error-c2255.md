---
title: "Compiler Error C2255"
description: "Learn more about: Compiler Error C2255"
ms.date: 11/04/2016
f1_keywords: ["C2255"]
helpviewer_keywords: ["C2255"]
---
# Compiler Error C2255

> 'element' : not allowed outside of a class definition

## Remarks

For example, a nonmember function is declared a **`friend`**.

## Example

The following example generates C2255:

```cpp
// C2255.cpp
// compile with: /c
class A {
private:
   void func1();
   friend void func2();
};

friend void func1() {}   // C2255
void func2(){}
```
