---
title: "Compiler Error C2528"
description: "Learn more about: Compiler Error C2528"
ms.date: 11/04/2016
f1_keywords: ["C2528"]
helpviewer_keywords: ["C2528"]
---
# Compiler Error C2528

> 'name' : pointer to reference is illegal

## Remarks

You cannot declare a pointer to a reference. Dereference the variable before declaring a pointer to it.

## Example

The following example generates C2528:

```cpp
// C2528.cpp
int i;
int &ir = i;
int & (*irptr) = ir;    // C2528
```
