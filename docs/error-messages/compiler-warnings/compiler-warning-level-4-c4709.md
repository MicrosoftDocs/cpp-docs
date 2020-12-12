---
description: "Learn more about: Compiler Warning (level 4) C4709"
title: "Compiler Warning (level 4) C4709"
ms.date: "11/04/2016"
f1_keywords: ["C4709"]
helpviewer_keywords: ["C4709"]
ms.assetid: 8abfdd45-8c70-4c27-b0fb-ca0c3f0fccf9
---
# Compiler Warning (level 4) C4709

comma operator within array index expression

When a comma occurs in an array index expression, the compiler uses the value after the last comma.

## Example

The following sample generates C4709:

```cpp
// C4709.cpp
// compile with: /W4
#include <stdio.h>

int main()
{
    int arr[2][2];
    arr[0][0] = 10;
    arr[0][1] = 11;

    // Prints 10, not 11
    printf_s("\n%d",arr[0][1,0]);   // C4709
}
```
