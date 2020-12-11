---
description: "Learn more about: Compiler Error C2148"
title: "Compiler Error C2148"
ms.date: "11/04/2016"
f1_keywords: ["C2148"]
helpviewer_keywords: ["C2148"]
ms.assetid: e510c2c9-7b57-4ce8-be03-ba363e2cc5d9
---
# Compiler Error C2148

total size of array must not exceed 0x7fffffff bytes

An array exceeds the limit. Reduce the size of the array.

## Example

The following sample generates C2148:

```cpp
// C2148.cpp
#include <stdio.h>
#include <stdlib.h>

int main( ) {
   char MyArray[0x7ffffffff];   // C2148
   char * MyArray2 = (char *)malloc(0x7fffffff);

   if (MyArray2)
      printf_s("It worked!");
   else
      printf_s("It didn't work.");
}
```
