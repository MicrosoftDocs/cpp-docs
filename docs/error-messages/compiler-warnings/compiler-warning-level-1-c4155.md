---
title: "Compiler Warning (level 1) C4155"
description: "Learn more about: Compiler Warning (level 1) C4155"
ms.date: 11/04/2016
f1_keywords: ["C4155"]
helpviewer_keywords: ["C4155"]
---
# Compiler Warning (level 1) C4155

> deletion of an array expression without using the array form of 'delete'

## Remarks

The array form of **`delete`** should be used to delete an array. This warning occurs only under ANSI-compatibility (/Za).

## Example

The following example generates C4155:

```cpp
// C4155.cpp
// compile with: /Za /W1
#include <stdio.h>

int main(void)
{
    int (*array)[ 10 ] = new int[ 5 ] [ 10 ];
    array[0][0] = 8;

    printf_s("%d\n", array[0][0]);

   delete array;   // C4155
    // try the following line instead
    // delete [] array;   // C4155
}
```
