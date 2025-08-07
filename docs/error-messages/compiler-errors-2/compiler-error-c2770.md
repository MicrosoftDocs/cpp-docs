---
title: "Compiler Error C2770"
description: "Learn more about: Compiler Error C2770"
ms.date: 11/04/2016
f1_keywords: ["C2770"]
helpviewer_keywords: ["C2770"]
---
# Compiler Error C2770

> invalid explicit template_or_generic argument(s) for 'template'

## Remarks

Function template candidates with explicit template or generic arguments resulted in disallowed function types.

## Example

The following example generates C2770:

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
