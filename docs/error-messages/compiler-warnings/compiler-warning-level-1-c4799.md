---
title: "Compiler Warning (level 1) C4799"
description: "Learn more about: Compiler Warning (level 1) C4799"
ms.date: 03/28/2025
f1_keywords: ["C4799"]
helpviewer_keywords: ["C4799"]
---
# Compiler Warning (level 1) C4799

> function '*function*' has no EMMS instruction

## Remarks

The function has at least one MMX instruction, but does not have an `EMMS` instruction. When a multimedia instruction is used, an `EMMS` instruction or [`_mm_empty`](https://www.intel.com/content/www/us/en/docs/intrinsics-guide/index.html#text=_mm_empty) intrinsic should also be used to clear the multimedia tag word at the end of the MMX code.

You may get C4799 when using `ivec.h`, indicating that the code does not properly execute the `EMMS` instruction before returning. This is a false warning for these headers. You may turn these off by defining `_SILENCE_IVEC_C4799` in `ivec.h`. However, be aware that this will also keep the compiler from giving correct warnings of this type.

For related information, see [Intel's MMX Instruction Set](../../assembler/inline/intel-s-mmx-instruction-set.md).

## Example

The following example generates C4799:

```cpp
// C4799.cpp
// compile with: /W1
// processor: x86
#include <mmintrin.h>

int main()
{
    __m64 m = _mm_setzero_si64();

    // Uncomment the following line to resolve the warning:
    // _mm_empty();
}   // C4799
```
