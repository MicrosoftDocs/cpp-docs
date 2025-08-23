---
title: "Compiler Error C2290"
description: "Learn more about: Compiler Error C2290"
ms.date: 11/04/2016
f1_keywords: ["C2290"]
helpviewer_keywords: ["C2290"]
---
# Compiler Error C2290

> C++ 'asm' syntax ignored. Use __asm.

## Remarks

The **`asm`** syntax is reserved for future use, try [`__asm`](../../assembler/inline/asm.md) instead. For more information, see [Inline Assembler](../../assembler/inline/inline-assembler.md).

## Example

The following example generates C2290:

```cpp
// C2290.cpp
// processor: x86

int main()
{
    asm("nop");   // C2290
    __asm nop     // OK
}
```
