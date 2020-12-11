---
description: "Learn more about: _umul128"
title: "_umul128"
ms.date: "09/02/2019"
f1_keywords: ["__umul128"]
helpviewer_keywords: ["__umul128 intrinsic"]
ms.assetid: 13684df3-3ac7-467c-b258-a0e93bc490b5
---
# _umul128

**Microsoft Specific**

Multiplies two 64-bit unsigned integers passed in as the first two arguments and puts the high 64 bits of the product in the 64-bit unsigned integer pointed to by `HighProduct` and returns the low 64 bits of the product.

## Syntax

```C
unsigned __int64 _umul128(
   unsigned __int64 Multiplier,
   unsigned __int64 Multiplicand,
   unsigned __int64 *HighProduct
);
```

### Parameters

*Multiplier*\
[in] The first 64-bit integer to multiply.

*Multiplicand*\
[in] The second 64-bit integer to multiply.

*HighProduct*\
[out] The high 64 bits of the product.

## Return value

The low 64 bits of the product.

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_umul128`|x64|\<intrin.h>|

## Example

```C
// umul128.c
// processor: x64

#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(_umul128)

int main()
{
    unsigned __int64 a = 0x0fffffffffffffffI64;
    unsigned __int64 b = 0xf0000000I64;
    unsigned __int64 c, d;

    d = _umul128(a, b, &c);

    printf_s("%#I64x * %#I64x = %#I64x%I64x\n", a, b, c, d);
}
```

```Output
0xfffffffffffffff * 0xf0000000 = 0xeffffffffffffff10000000
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
