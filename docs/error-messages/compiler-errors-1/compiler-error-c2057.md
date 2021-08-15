---
description: "Learn more about: Compiler Error C2057"
title: "Compiler Error C2057"
ms.date: "11/04/2016"
f1_keywords: ["C2057"]
helpviewer_keywords: ["C2057"]
ms.assetid: 038a99d6-1f5a-42fa-8449-03b4ff11ee0b
---
# Compiler Error C2057

expected constant expression

The context requires a constant expression, an expression whose value is known at compile time.

The compiler must know the size of a type at compile time in order to allocate space for an instance of that type.

## Examples

The following sample generates C2057 and shows how to fix it:

```cpp
// C2057.cpp
int i;
int b[i];   // C2057 - value of i is unknown at compile time
int main() {
   const int i = 8;
   int b[i]; // OK - value of i is fixed and known to compiler
}
```

C has more restrictive rules for constant expressions.  The following sample generates C2057 and shows how to fix it:

```c
// C2057b.c
#define ArraySize1 10
int main() {
   const int ArraySize2 = 10;
   int h[ArraySize2];   // C2057 - C does not allow variables here
   int h[ArraySize1];   // OK - uses preprocessor constant
}
```
