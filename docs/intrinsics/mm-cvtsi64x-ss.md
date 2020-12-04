---
description: "Learn more about: _mm_cvtsi64x_ss"
title: "_mm_cvtsi64x_ss"
ms.date: "09/02/2019"
f1_keywords: ["_mm_cvtsi64x_ss"]
helpviewer_keywords: ["cvtsi2ss instruction", "_mm_cvtsi64x_ss intrinsic"]
ms.assetid: 01e5d321-c18a-46fd-a6f6-324364514e1f
---
# _mm_cvtsi64x_ss

**Microsoft Specific**

Generates the x64 extended version of the Convert 64-Bit Integer to Scalar Single-Precision Floating-Point Value (`cvtsi2ss`) instruction.

## Syntax

```C
__m128 _mm_cvtsi64x_ss(
   __m128 a,
   __int64 b
);
```

### Parameters

*a*\
[in] An **`__m128`** structure containing four single-precision floating-point values.

*b*\
[in] A 64-bit integer to be converted into a floating-point value.

## Return value

An **`__m128`** structure whose first floating-point value is the result of the conversion. The other three values are copied unchanged from *a*.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`_mm_cvtsi64x_ss`|x64|

**Header file** \<intrin.h>

## Remarks

The **`__m128`** structure represents an XMM register, so the intrinsic allows the value *b* from system memory to be moved into an XMM register.

This routine is only available as an intrinsic.

## Example

```cpp
// _mm_cvtsi64x_ss.cpp
// processor: x64

#include <intrin.h>
#include <stdio.h>

#pragma intrinsic(_mm_cvtsi64x_ss)

int main()
{
    __m128 a;
    __int64 b = 54;

    a.m128_f32[0] = 0;
    a.m128_f32[1] = 0;
    a.m128_f32[2] = 0;
    a.m128_f32[3] = 0;
    a = _mm_cvtsi64x_ss(a, b);

    printf_s( "%lf %lf %lf %lf\n",
              a.m128_f32[0], a.m128_f32[1],
              a.m128_f32[2], a.m128_f32[3] );
}
```

```Output
54.000000 0.000000 0.000000 0.000000
```

**END Microsoft Specific**

## See also

[__m128](../cpp/m128.md)\
[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
