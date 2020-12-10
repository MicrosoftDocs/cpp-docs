---
description: "Learn more about: Compiler Warning (level 3) C4414"
title: "Compiler Warning (level 3) C4414"
ms.date: "11/04/2016"
f1_keywords: ["C4414"]
helpviewer_keywords: ["C4414"]
ms.assetid: bc81d3ad-55dc-4a6b-a6f2-ec0ef38347df
---
# Compiler Warning (level 3) C4414

'function' : short jump to function converted to near

Short jumps generate compact instruction which branches to an address within a limited range from the instruction. The instruction includes a short offset that represents the distance between the jump and the target address, the function definition. During linking a function may be moved or subject to link-time optimizations that cause the function to be moved out of the range reachable from a short offset. The compiler must generate a special record for the jump, which requires the jmp instruction to be either NEAR or FAR. The compiler made the conversion.

For example, the following code generates C4414:

```cpp
// C4414.cpp
// compile with: /W3 /c
// processor: x86
int DoParityEven();
int DoParityOdd();
unsigned char global;
int __declspec(naked) DoParityEither()
{
   __asm
   {
      test global,0
      jpe SHORT DoParityEven  // C4414
      jmp SHORT DoParityOdd   // C4414
   }
}
```
