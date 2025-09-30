---
title: "Compiler Error C2090"
description: "Learn more about: Compiler Error C2090"
ms.date: 11/04/2016
f1_keywords: ["C2090"]
helpviewer_keywords: ["C2090"]
---
# Compiler Error C2090

> function returns array

## Remarks

A function cannot return an array. Return a pointer to an array instead.

## Example

The following example generates C2090:

```cpp
// C2090.cpp
int func1(void)[] {}   // C2090
```

Possible resolution:

```cpp
// C2090b.cpp
// compile with: /c
int* func2(int * i) {
   return i;
}
```
