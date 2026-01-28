---
title: "Compiler Error C2451"
description: "Learn more about: Compiler Error C2451"
ms.date: 11/04/2016
f1_keywords: ["C2451"]
helpviewer_keywords: ["C2451"]
---
# Compiler Error C2451

> conditional expression of type 'type' is illegal

## Remarks

The conditional expression evaluates to an integer type.

## Example

The following example generates C2451:

```cpp
// C2451.cpp
class B {};

int main () {
   B b1;
   int i = 0;
   if (b1)   // C2451
   // try the following line instead
   // if (i)
      ;
}
```
