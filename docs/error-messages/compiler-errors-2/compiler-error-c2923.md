---
title: "Compiler Error C2923"
description: "Learn more about: Compiler Error C2923"
ms.date: 11/04/2016
f1_keywords: ["C2923"]
helpviewer_keywords: ["C2923"]
---
# Compiler Error C2923

> 'type' : 'identifier' is not a valid template type argument for parameter 'param'

## Remarks

The argument list is missing a type needed to instantiate the template or generic. Check the template or generic declaration.

## Examples

The following example generates C2923:

```cpp
// C2923.cpp
template <class T> struct TC {};
int x;
int main() {
   TC<x>* tc2;   // C2923
   TC<int>* tc2;   // OK
}
```

C2923 can also occur when using generics:

```cpp
// C2923b.cpp
// compile with: /clr /c
generic <class T> ref struct GC {};

int x;

int main() {
   GC<x>^ gc2;   // C2923
   GC<int>^ gc2;   // OK
}
```
