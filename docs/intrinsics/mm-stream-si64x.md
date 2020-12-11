---
description: "Learn more about: _mm_stream_si64x"
title: "_mm_stream_si64x"
ms.date: "09/02/2019"
f1_keywords: ["_mm_stream_si64x"]
helpviewer_keywords: ["movnti instruction", "_mm_stream_si64x intrinsic"]
ms.assetid: 114c2cd0-085f-41aa-846e-87bdd56c9ee7
---
# _mm_stream_si64x

**Microsoft Specific**

Generates the MOVNTI instruction. Writes the data in *Source* to a memory location specified by *Destination*, without polluting the caches.

## Syntax

```C
void _mm_stream_si64x(
   __int64 * Destination,
   __int64 Source
);
```

### Parameters

*Destination*\
[out] A pointer to the location to write the source data to.

*Source*\
[in] The data to write.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`_mm_stream_si64x`|x64|

**Header file** \<intrin.h>

## Remarks

This routine is only available as an intrinsic.

## Example

```C
// _mm_stream_si64x.c
// processor: x64

#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(_mm_stream_si64x)

int main()
{
    __int64 val = 0xFFFFFFFFFFFFI64;
    __int64 a[10];

    memset(a, 0, sizeof(a));
    _mm_stream_si64x(a+1, val);
    printf_s( "%I64x %I64x %I64x %I64x", a[0], a[1], a[2], a[3]);
}
```

```Output
0 ffffffffffff 0 0
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
