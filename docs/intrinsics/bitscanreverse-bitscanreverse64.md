---
description: "Learn more about: _BitScanReverse, _BitScanReverse64"
title: "_BitScanReverse, _BitScanReverse64"
ms.date: "09/02/2019"
f1_keywords: ["_BitScanReverse64", "_BitScanReverse_cpp", "_BitScanReverse", "_BitScanReverse64_cpp"]
helpviewer_keywords: ["bsr instruction", "_BitScanReverse intrinsic", "BitScanReverse intrinsic"]
ms.assetid: 2520a207-af8b-4aad-9ae7-831abeadf376
---
# _BitScanReverse, _BitScanReverse64

**Microsoft Specific**

Search the mask data from most significant bit (MSB) to least significant bit (LSB) for a set bit (1).

## Syntax

```C
unsigned char _BitScanReverse(
   unsigned long * Index,
   unsigned long Mask
);
unsigned char _BitScanReverse64(
   unsigned long * Index,
   unsigned __int64 Mask
);
```

### Parameters

*Index*\
[out] Loaded with the bit position of the first set bit (1) found.

*Mask*\
[in] The 32-bit or 64-bit value to search.

## Return value

Nonzero if `Index` was set, or 0 if no set bits were found.

## Requirements

|Intrinsic|Architecture|Header|
|---------------|------------------|------------|
|`_BitScanReverse`|x86, ARM, x64, ARM64|\<intrin.h>|
|`_BitScanReverse64`|ARM64, x64|\<intrin.h>|

## Example

```cpp
// BitScanReverse.cpp
// compile with: /EHsc
#include <iostream>
#include <intrin.h>
using namespace std;

#pragma intrinsic(_BitScanReverse)

int main()
{
   unsigned long mask = 0x1000;
   unsigned long index;
   unsigned char isNonzero;

   cout << "Enter a positive integer as the mask: " << flush;
   cin >> mask;
   isNonzero = _BitScanReverse(&index, mask);
   if (isNonzero)
   {
      cout << "Mask: " << mask << " Index: " << index << endl;
   }
   else
   {
      cout << "No set bits found.  Mask is zero." << endl;
   }
}
```

```Input
12
```

```Output
Enter a positive integer as the mask:
Mask: 12 Index: 3
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
