---
title: "Compiler Error C2784"
description: "Learn more about: Compiler Error C2784"
ms.date: 11/04/2016
f1_keywords: ["C2784"]
helpviewer_keywords: ["C2784"]
---
# Compiler Error C2784

> 'declaration' : could not deduce template argument for 'type' from 'type'

## Remarks

The compiler cannot determine a template argument from the supplied function arguments.

## Example

The following example generates C2784 and shows how to fix it:

```cpp
// C2784.cpp
template<class T> class X {};
template<class T> void f(X<T>) {}

int main() {
   X<int> x;
   f(1);   // C2784

   // To fix it, try the following line instead
   f(x);
}
```
