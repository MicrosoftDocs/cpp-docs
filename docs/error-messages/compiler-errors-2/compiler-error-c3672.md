---
title: "Compiler Error C3672"
description: "Learn more about: Compiler Error C3672"
ms.date: 11/04/2016
f1_keywords: ["C3672"]
helpviewer_keywords: ["C3672"]
---
# Compiler Error C3672

> pseudo-destructor expression can only be used as part of a function call

## Remarks

A destructor was called incorrectly.  For more information, see [Destructors](../../cpp/destructors-cpp.md).

## Example

The following sample generates C3672.

```cpp
// C3672.cpp
template<typename T>
void f(T* pT) {
   &pT->T::~T;   // C3672
   pT->T::~T();   // OK
}

int main() {
   int i;
   f(&i);
}
```
