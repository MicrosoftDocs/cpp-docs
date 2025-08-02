---
title: "Compiler Error C2624"
description: "Learn more about: Compiler Error C2624"
ms.date: 11/04/2016
f1_keywords: ["C2624"]
helpviewer_keywords: ["C2624"]
---
# Compiler Error C2624

> local classes cannot be used to declare 'extern' variables

## Remarks

A local class or structure cannot be used to declare **`extern`** variables.

## Example

The following example generates C2624:

```cpp
// C2624.cpp
int main() {
   struct C {};
   extern C ac;   // C2624
}
```
