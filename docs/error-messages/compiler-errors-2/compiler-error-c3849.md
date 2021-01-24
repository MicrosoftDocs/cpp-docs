---
description: "Learn more about: Compiler Error C3849"
title: "Compiler Error C3849"
ms.date: "11/04/2016"
f1_keywords: ["C3849"]
helpviewer_keywords: ["C3849"]
ms.assetid: 5347140e-1a81-4841-98c0-b63d98264b64
---
# Compiler Error C3849

function-style call on an expression of type 'type' would lose const and/or volatile qualifiers for all number available operator overloads

A variable with a specified const-volatile type can only call member functions defined with same or greater const-volatile qualifications.

To fix this error, provide an appropriate member function. You cannot execute a conversion on a const or volatile qualified object when the conversion causes loss of qualification. You can gain qualifiers but you cannot lose qualifiers in a conversion.

The following samples generate C3849:

```cpp
// C3849.cpp
void glbFunc3(int i, char c)
{
   i;
}
typedef void (* pFunc3)(int, char);

void glbFunc2(int i)
{
   i;
}

typedef void (* pFunc2)(int);

void glbFunc1()
{
}
typedef void (* pFunc1)();

struct S4
{
   operator ()(int i)
   {
      i;
   }

   operator pFunc1() const
   {
      return &glbFunc1;
   }

   operator pFunc2() volatile
   {
      return &glbFunc2;
   }

   operator pFunc3()
   {
      return &glbFunc3;
   }

   // operator pFunc1() const volatile
   // {
   //    return &glbFunc1;
   // }
};

int main()
{
   // Cannot call any of the 4 overloads of "operator ()(.....)" and
   // "operator pFunc()" because none is declared as "const volatile"
   const volatile S4 s4;  // can only call cv member functions of S4
   s4();   // C3849 to resolve, uncomment member function
}
```
