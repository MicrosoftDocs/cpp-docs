---
title: "Compiler Error C2423"
description: "Learn more about: Compiler Error C2423"
ms.date: 11/04/2016
f1_keywords: ["C2423"]
helpviewer_keywords: ["C2423"]
---
# Compiler Error C2423

> 'number' : illegal scale

## Remarks

Inline assembly code uses a number other than 1, 2, 4, or 8 to scale a register.

## Example

The following example generates C2423:

```cpp
// C2423.cpp
// processor: x86
int main() {
   _asm {
      lea EAX, [EAX*3]   // C2423
      lea EAX, [EAX+EAX*2]   // OK
   }
}
```
