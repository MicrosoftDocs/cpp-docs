---
title: "Compiler Error C2511"
description: "Learn more about: Compiler Error C2511"
ms.date: 11/04/2016
f1_keywords: ["C2511"]
helpviewer_keywords: ["C2511"]
---
# Compiler Error C2511

> 'identifier' : overloaded member function not found in 'class'

## Remarks

No version of the function is declared with the specified parameters.  Possible causes:

1. Wrong parameters passed to function.

1. Parameters passed in wrong order.

1. Incorrect spelling of parameter names.

## Example

The following example generates C2511:

```cpp
// C2511.cpp
// compile with: /c
class C {
   int c_2;
   int Func(char *, char *);
};

int C::Func(char *, char *, int i) {   // C2511
// try the following line instead
// int C::Func(char *, char *) {
   return 0;
}
```
