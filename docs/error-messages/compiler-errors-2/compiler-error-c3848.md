---
description: "Learn more about: Compiler Error C3848"
title: "Compiler Error C3848"
ms.date: "11/04/2016"
f1_keywords: ["C3848"]
helpviewer_keywords: ["C3848"]
ms.assetid: 32d3ccef-01ec-4f8b-bbff-fb9b1a76b4c4
---
# Compiler Error C3848

expression having type 'type' would lose some const-volatile qualifiers in order to call 'function'

A variable with a specified const-volatile type can only call member functions defined with same or greater const-volatile qualifications.

The following samples generate C3848:

```cpp
// C3848.cpp
void glbFunc1()
{
}

typedef void (* pFunc1)();

struct S3
{
   operator pFunc1() // const
   {
      return &glbFunc1;
   }
};

int main()
{
   const S3 s3;
   s3();   // C3848, uncomment const qualifier
}
```
