---
description: "Learn more about: Compiler Error C2770"
title: "Compiler Error C2770"
ms.date: "11/04/2016"
f1_keywords: ["C2770"]
helpviewer_keywords: ["C2770"]
ms.assetid: 100001b5-80b0-4971-8ff6-9023f443c926
---
# Compiler Error C2770

invalid explicit template_or_generic argument(s) for 'template'

Function template candidates with explicit template or generic arguments resulted in disallowed function types.

The following sample generates C2770:

```cpp
// C2770.cpp
#include <stdio.h>
template <class T>
int f(typename T::B*);   // expects type with member B

struct Err {};

int main() {
   f<int>(0);   // C2770 int has no B
   // try the following line instead
   f<OK>(0);
}
```
