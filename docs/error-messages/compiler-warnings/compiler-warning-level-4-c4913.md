---
title: "Compiler Warning (level 4) C4913"
description: "Learn more about: Compiler Warning (level 4) C4913"
ms.date: 11/04/2016
f1_keywords: ["C4913"]
helpviewer_keywords: ["C4913"]
---
# Compiler Warning (level 4) C4913

> user defined binary operator ',' exists but no overload could convert all operands, default built-in binary operator ',' used

## Remarks

A call to the built-in comma operator occurred in a program that also had an overloaded comma operator; a conversion that you thought may have occurred did not.

## Example

The following code example generates C4913:

```cpp
// C4913.cpp
// compile with: /W4
struct A
{
};

struct S
{
};

struct B
{
   // B() { }
   // B(S &s) { s; }
};

B operator , (A a, B b)
{
   a;
   return b;
}

int main()
{
   A a;
   B b;
   S s;

   a, b;   // OK calls user defined operator
   a, s;   // C4913 uses builtin comma operator
           // uncomment the conversion code in B to resolve.
}
```
