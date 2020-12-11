---
description: "Learn more about: Compiler Error C2823"
title: "Compiler Error C2823"
ms.date: "11/04/2016"
f1_keywords: ["C2823"]
helpviewer_keywords: ["C2823"]
ms.assetid: 982b1b35-1a7c-456e-b711-f80cfe2d571e
---
# Compiler Error C2823

> a typedef template is illegal

Templates are not allowed in **`typedef`** definitions.

## Example

The following sample generates C2823, and shows one way to fix it:

```cpp
// C2823.cpp
template<class T>
typedef struct x {
   T i;   // C2823 can't use T, specify data type and delete template
   int i;   // OK
} x1;
```
