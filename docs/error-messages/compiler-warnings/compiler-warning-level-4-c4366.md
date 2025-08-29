---
title: "Compiler Warning (level 4) C4366"
description: "Learn more about: Compiler Warning (level 4) C4366"
ms.date: 11/04/2016
f1_keywords: ["C4366"]
helpviewer_keywords: ["C4366"]
---
# Compiler Warning (level 4) C4366

> The result of the unary 'operator' operator may be unaligned

## Remarks

If a structure member could ever be unaligned because of packing, the compiler will warn when that member's address is assigned to an aligned pointer. By default, all pointers are aligned.

To resolve C4366, either change the alignment of the structure or declare the pointer with the [__unaligned](../../cpp/unaligned.md) keyword.

For more information, see __unaligned and [pack](../../preprocessor/pack.md).

## Example

The following example generates C4366.

```cpp
// C4366.cpp
// compile with: /W4 /c
// processor: IPF x64
#pragma pack(1)
struct X {
   short s1;
   int s2;
};

int main() {
   X x;
   short * ps1 = &x.s1;   // OK
   int * ps2 = &x.s2;   // C4366
}
```
