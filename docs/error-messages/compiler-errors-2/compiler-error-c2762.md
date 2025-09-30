---
title: "Compiler Error C2762"
description: "Learn more about: Compiler Error C2762"
ms.date: 11/04/2016
f1_keywords: ["C2762"]
helpviewer_keywords: ["C2762"]
---
# Compiler Error C2762

> 'class' : invalid expression as a template argument for 'argument'

## Remarks

When using [/Za](../../build/reference/za-ze-disable-language-extensions.md), the compiler will not convert an integral to a pointer.

## Example

The following example generates C2762:

```cpp
// C2762.cpp
// compile with: /Za
template<typename T, T *pT>
class X2 {};

void f2() {
   X2<int, 0> x21;   // C2762
   // try the following line instead
   // X2<int, static_cast<int *>(0)> x22;
}
```
