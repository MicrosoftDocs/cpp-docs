---
title: "Compiler Error C2436"
description: "Learn more about: Compiler Error C2436"
ms.date: 11/04/2016
f1_keywords: ["C2436"]
helpviewer_keywords: ["C2436"]
---
# Compiler Error C2436

> 'identifier' : member function or nested class in constructor initializer list

## Remarks

Member functions or local classes in the constructor initializer list cannot be initialized.

## Example

The following example generates C2436:

```cpp
// C2436.cpp
struct S{
   int f();
   struct Inner{
      int i;
   };
   S():f(10), Inner(0){}   // C2436
};
```
