---
title: "Compiler Error C2974"
description: "Learn more about: Compiler Error C2974"
ms.date: 11/04/2016
f1_keywords: ["C2974"]
helpviewer_keywords: ["C2974"]
---
# Compiler Error C2974

> invalid type argument 'number', type expected

## Remarks

The generic or template argument does not match the generic or template declaration. A type should appear within the angle brackets. Check the generic or template definition to find the correct types.

## Examples

The following example generates C2974:

```cpp
// C2974.cpp
// C2974 expected
template <class T>
struct TC {};

template <typename T>
void tf(T){}

int main() {
   // Delete the following 2 lines to resolve
   TC<1>* tc;
   tf<"abc">("abc");

   TC<int>* tc;
   tf<const char *>("abc");
}
```

C2974 can also occur when using generics:

```cpp
// C2974b.cpp
// compile with: /clr
// C2974 expected
using namespace System;
generic <class T>
ref struct GCtype {};

generic <typename T>
void gf(T){}

int main() {
   // Delete the following 2 lines to resolve
   GCtype<"a">^ gc;
   gf<"a">("abc");

   // OK
   GCtype<int>^ gc;
   gf<String ^>("abc");
}
```
