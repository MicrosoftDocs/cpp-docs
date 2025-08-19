---
title: "Compiler Error C2510"
description: "Learn more about: Compiler Error C2510"
ms.date: 11/04/2016
f1_keywords: ["C2510"]
helpviewer_keywords: ["C2510"]
---
# Compiler Error C2510

> 'identifier' : left of '::' must be a class/struct/union

## Remarks

A class, structure, or union name must appear on the left side of the scope-resolution operator (`::`) operator.

## Example

The following example generates C2510:

```cpp
// C2510.cpp
struct S {
   static const int x = 1;
};

int main() {
   S s;
   int num1 = s::x;   // C2510
   int num2 = S::x;   // OK
}
```
