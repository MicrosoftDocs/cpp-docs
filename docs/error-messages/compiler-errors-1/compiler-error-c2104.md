---
title: "Compiler Error C2104"
description: "Learn more about: Compiler Error C2104"
ms.date: 11/04/2016
f1_keywords: ["C2104"]
helpviewer_keywords: ["C2104"]
---
# Compiler Error C2104

> '&' on bit field ignored

## Remarks

You cannot take the address of a bit field.

## Example

The following example generates C2104:

```cpp
// C2104.cpp
struct X {
   int sb : 1;
};

int main() {
   X x;
   &x.sb;   // C2104
   x.sb;   // OK
}
```
