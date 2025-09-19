---
title: "Compiler Warning (level 2) C4156"
description: "Learn more about: Compiler Warning (level 2) C4156"
ms.date: 11/04/2016
f1_keywords: ["C4156"]
helpviewer_keywords: ["C4156"]
---
# Compiler Warning (level 2) C4156

> deletion of an array expression without using the array form of 'delete'; array form substituted

## Remarks

The non-array form of **`delete`** cannot delete an array. The compiler translated **`delete`** to the array form.

This warning occurs only under Microsoft extensions (/Ze).

## Example

The following example generates C4156:

```cpp
// C4156.cpp
// compile with: /W2
int main()
{
   int (*array)[ 10 ] = new int[ 5 ][ 10 ];
   delete array; // C4156, changed by compiler to "delete [] array;"
}
```
