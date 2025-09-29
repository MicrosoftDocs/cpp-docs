---
title: "Compiler Error C2612"
description: "Learn more about: Compiler Error C2612"
ms.date: 11/04/2016
f1_keywords: ["C2612"]
helpviewer_keywords: ["C2612"]
---
# Compiler Error C2612

> trailing 'char' illegal in base/member initializer list

## Remarks

A character appears after the last base or member in an initializer list.

## Example

The following example generates C2612:

```cpp
// C2612.cpp
class A {
public:
   int i;
   A( int ia ) : i( ia ) + {};   // C2612
};
```
