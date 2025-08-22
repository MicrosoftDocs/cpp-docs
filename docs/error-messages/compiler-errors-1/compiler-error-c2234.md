---
title: "Compiler Error C2234"
description: "Learn more about: Compiler Error C2234"
ms.date: 11/04/2016
f1_keywords: ["C2234"]
helpviewer_keywords: ["C2234"]
---
# Compiler Error C2234

> 'name' : arrays of references are illegal

## Remarks

Because pointers to references are not allowed, arrays of references are not possible.

## Example

The following example generates C2234:

```cpp
// C2234.cpp
int main() {
   int i = 0, j = 0, k = 0, l = 0;
   int &array[4] = {i,j,k,l};   // C2234
   int array2[4] = {i,j,k,l};   // OK
}
```
