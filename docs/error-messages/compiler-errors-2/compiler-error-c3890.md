---
title: "Compiler Error C3890"
description: "Learn more about: Compiler Error C3890"
ms.date: 11/04/2016
f1_keywords: ["C3890"]
helpviewer_keywords: ["C3890"]
---
# Compiler Error C3890

> 'var' : you cannot take the address of a literal data member

## Remarks

A literal data member exists on the garbage-collected heap.  An object on the garbage-collected heap can be moved, so taking the address is not useful.

## Example

The following example generates C3890:

```cpp
// C3890.cpp
// compile with: /clr
ref struct Y1 {
   literal int staticConst = 9;
};

int main() {
   int p = &Y1::staticConst;   // C3890
   int p2 = Y1::staticConst;   // OK
}
```
