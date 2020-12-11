---
description: "Learn more about: _mm_cvtss_si64x"
title: "_mm_cvtss_si64x"
ms.date: "09/02/2019"
f1_keywords: ["_mm_cvtss_si64x"]
helpviewer_keywords: ["cvtss2si intrinsic", "_mm_cvtss_si64x intrinsic"]
ms.assetid: c279aff2-ee29-4271-8829-3ec691bf7718
---
# _mm_cvtss_si64x

**Microsoft Specific**

Generates the x64 extended version of the Convert Scalar Single Precision Floating Point Number to 64-bit Integer (`cvtss2si`) instruction.

## Syntax

```C
__int64 _mm_cvtss_si64x(
   __m128 value
);
```

### Parameters

*value*\
[in] An **`__m128`** structure containing floating point-values.

## Return value

A 64-bit integer, the result of the conversion of the first floating-point value to an integer.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`_mm_cvtss_si64x`|x64|

**Header file** \<intrin.h>

## Remarks

The first element of the structure value is converted to an integer and returned. The rounding control bits in MXCSR are used to determine the rounding behavior. The default rounding mode is round to nearest, rounding to the even number if the decimal part is 0.5. Because the **`__m128`** structure represents an XMM register, the intrinsic takes a value from the XMM register and writes it to system memory.

This routine is only available as an intrinsic.

## Example

```cpp
// _mm_cvtss_si64x.cpp
// processor: x64
#include <intrin.h>
#include <stdio.h>

#pragma intrinsic(_mm_cvtss_si64x)

int main()
{
    __m128 a;
    __int64 b = 54;

    // _mm_load_ps requires an aligned buffer.
    __declspec(align(16)) float af[4] =
                           { 101.25, 200.75, 300.5, 400.5 };

    // Load a with the floating point values.
    // The values will be copied to the XMM registers.
    a = _mm_load_ps(af);

    // Extract the first element of a and convert to an integer
    b = _mm_cvtss_si64x(a);

    printf_s("%I64d\n", b);
}
```

```Output
101
```

**END Microsoft Specific**

## See also

[__m128d](../cpp/m128d.md)\
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
