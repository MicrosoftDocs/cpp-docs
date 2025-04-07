---
title: "Compiler Warning (level 1) C4556"
description: "Learn more about: Compiler Warning (level 1) C4556"
ms.date: "03/28/2025"
f1_keywords: ["C4556"]
helpviewer_keywords: ["C4556"]
---
# Compiler Warning (level 1) C4556

> value of intrinsic immediate argument '*value*' is out of range '*lower_bound* - *upper_bound*'

## Remarks

An intrinsic matches a hardware instruction. The hardware instruction has a fixed number of bits to encode the constant. If *value* is out of range, it will not encode properly. The compiler truncates the extra bits.

## Example

The following example generates C4556:

```cpp
// C4556.cpp
// compile with: /W1
// processor: x86
#include <xmmintrin.h>

int main()
{
    __m64 m = _mm_setzero_si64();
    _m_pextrw(m, 5);   // C4556
    _mm_empty();
}
```
