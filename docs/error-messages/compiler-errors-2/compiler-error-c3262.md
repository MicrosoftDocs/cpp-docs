---
description: "Learn more about: Compiler Error C3262"
title: "Compiler Error C3262"
ms.date: "11/04/2016"
f1_keywords: ["C3262"]
helpviewer_keywords: ["C3262"]
ms.assetid: 3e74b9aa-de3c-4492-9331-ee73012b958b
---
# Compiler Error C3262

invalid array indexing: '#' dimension(s) specified for '#'-dimensional 'array type'

An array was improperly subscripted. The number of indices may not match the number of dimensions in the array.

The following sample generates C3262:

```cpp
// C3262.cpp
// compile with: /clr
#using <mscorlib.dll>
using namespace System;

#define ARRAY_SIZE 2

ref class MyClass {
public:
   int m_i;
};

// returns a multidimensional managed array of a reference type
array<MyClass^, 2>^ Test0() {
   int i, j;
   array< MyClass^, 2 >^ local = new array< MyClass^, 2 >
      (ARRAY_SIZE, ARRAY_SIZE);

   for (i = 0 ; i < ARRAY_SIZE ; i++)
      for (j = 0 ; j < ARRAY_SIZE ; j++) {
         local[i][j] = new MyClass;   // C3262
         // try the following line instead
         // local[i,j] = new MyClass;
         local[i,j] -> m_i = i;
      }

      return local;
}

int main() {
   int i, j;

   array< MyClass^, 2 >^ MyClass0;
   MyClass0 = Test0();
}
```
