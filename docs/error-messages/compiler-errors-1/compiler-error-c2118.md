---
title: "Compiler Error C2118"
description: "Learn more about: Compiler Error C2118"
ms.date: 11/04/2016
f1_keywords: ["C2118"]
helpviewer_keywords: ["C2118"]
---
# Compiler Error C2118

> negative subscript

## Remarks

The value defining the array size is larger than the maximum array size or smaller than zero.

## Example

The following example generates C2118:

```cpp
// C2118.cpp
int main() {
   int array1[-1];   // C2118
   int array2[3];   // OK
}
```
