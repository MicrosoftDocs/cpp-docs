---
description: "Learn more about: __ll_rshift"
title: "__ll_rshift"
ms.date: "09/02/2019"
f1_keywords: ["__ll_rshift_cpp", "__ll_rshift"]
helpviewer_keywords: ["__ll_rshift intrinsic", "ll_rshift intrinsic"]
ms.assetid: ef13b732-d122-44a0-add9-f5544a2c4ab2
---
# __ll_rshift

**Microsoft Specific**

Shifts a 64-bit value specified by the first parameter to the right, by a number of bits specified by the second parameter.

## Syntax

```C
__int64 __ll_rshift(
   __int64 Mask,
   int nBit
);
```

### Parameters

*Mask*\
[in] The 64-bit integer value to shift right.

*nBit*\
[in] The number of bits to shift, modulo 64 on x64, and modulo 32 on x86.

## Return value

The mask shifted by `nBit` bits.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__ll_rshift`|x86, x64|

**Header file** \<intrin.h>

## Remarks

If the second parameter is greater than 64 on x64 (32 on x86), that number is taken modulo 64 (32 on x86) to determine the number of bits to shift. The `ll` prefix indicates that it's an operation on **`long long`**, another name for **`__int64`**, the 64-bit signed integral type.

## Example

```cpp
// ll_rshift.cpp
// compile with: /EHsc
// processor: x86, x64
#include <iostream>
#include <intrin.h>
using namespace std;

#pragma intrinsic(__ll_rshift)

int main()
{
   __int64 Mask = - 0x100;
   int nBit = 4;
   cout << hex << Mask << endl;
   cout << " - " << (- Mask) << endl;
   Mask = __ll_rshift(Mask, nBit);
   cout << hex << Mask << endl;
   cout << " - " << (- Mask) << endl;
}
```

## Output

```Output
ffffffffffffff00
- 100
fffffffffffffff0
- 10
```

> [!NOTE]
> If `_ull_rshift` has been used, the MSB of the right-shifted value would have been zero, so the desired result would not have been obtained in the case of a negative value.

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[__ll_lshift](../intrinsics/ll-lshift.md)\
[__ull_rshift](../intrinsics/ull-rshift.md)
