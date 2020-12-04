---
description: "Learn more about: _bittestandcomplement, _bittestandcomplement64"
title: "_bittestandcomplement, _bittestandcomplement64"
ms.date: "09/02/2019"
f1_keywords: ["_bittestandcomplement64", "_bittestandcomplement64_cpp", "_bittestandcomplement_cpp", "_bittestandcomplement"]
helpviewer_keywords: ["btc instruction", "_bittestandcomplement intrinsic", "_bittestandcomplement64 intrinsic"]
ms.assetid: 53fa12dd-835e-4e5d-baec-a431c8678806
---
# _bittestandcomplement, _bittestandcomplement64

**Microsoft Specific**

Generate an instruction which examines bit `b` of the address `a`, returns its current value, and sets the bit to its complement.

## Syntax

```C
unsigned char _bittestandcomplement(
   long *a,
   long b
);
unsigned char _bittestandcomplement64(
   __int64 *a,
   __int64 b
);
```

### Parameters

*a*\
[in, out] A pointer to the memory to examine.

*b*\
[in] The bit position to test.

## Return value

The bit at the position specified.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`_bittestandcomplement`|x86, ARM, x64, ARM64|
|`_bittestandcomplement64`|x64, ARM64|

**Header file** \<intrin.h>

## Remarks

This routine is only available as an intrinsic.

## Example

```cpp
// bittestandcomplement.cpp
// processor: x86, IPF, x64
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(_bittestandcomplement)
#ifdef _M_AMD64
#pragma intrinsic(_bittestandcomplement64)
#endif

int main()
{
   long i = 1;
   __int64 i64 = 0x1I64;
   unsigned char result;
   printf("Initial value: %d\n", i);
   printf("Testing bit 1\n");
   result = _bittestandcomplement(&i, 1);
   printf("Value changed to %d, Result: %d\n", i, result);
#ifdef _M_AMD64
   printf("Testing bit 0\n");
   result = _bittestandcomplement64(&i64, 0);
   printf("Value changed to %I64d, Result: %d\n", i64, result);
#endif
}
```

```Output
Initial value: 1
Testing bit 1
Value changed to 3, Result: 0
Testing bit 0
Value changed to 0, Result: 1
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
