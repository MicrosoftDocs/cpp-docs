---
description: "Learn more about: __mulh"
title: "__mulh"
ms.date: "09/02/2019"
f1_keywords: ["__mulh"]
helpviewer_keywords: ["__mulh intrinsic"]
ms.assetid: cd2ab093-9ef6-404d-ac34-0bee033882f3
---
# __mulh

**Microsoft Specific**

Returns the high 64 bits of the product of two 64-bit signed integers.

## Syntax

```C
__int64 __mulh(
   __int64 a,
   __int64 b
);
```

### Parameters

*a*\
[in] The first number to multiply.

*b*\
[in] The second number to multiply.

## Return value

The high 64 bits of the 128-bit result of the multiplication.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__mulh`|x64|

**Header file** \<intrin.h>

## Remarks

This routine is only available as an intrinsic.

## Example

```cpp
// mulh.cpp
// processor: x64
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic (__mulh)

int main()
{
    __int64 a = 0x0fffffffffffffffI64;
    __int64 b = 0xf0000000I64;

    __int64 result = __mulh(a, b); // the high 64 bits
    __int64 result2 = a * b; // the low 64 bits

    printf_s(" %#I64x * %#I64x = %#I64x%I64x\n",
             a, b, result, result2);
}
```

```Output
0xfffffffffffffff * 0xf0000000 = 0xeffffffffffffff10000000
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
