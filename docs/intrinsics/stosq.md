---
description: "Learn more about: __stosq"
title: "__stosq"
ms.date: "09/02/2019"
f1_keywords: ["__stosq"]
helpviewer_keywords: ["rep stosq instruction", "stosq instruction", "__stosq intrinsic"]
ms.assetid: 3ea28297-4369-4c2d-bf0c-91fa539ce209
---
# __stosq

**Microsoft Specific**

Generates a store string instruction (`rep stosq`).

## Syntax

```C
void __stosb(
   unsigned __int64* Destination,
   unsigned __int64 Data,
   size_t Count
);
```

### Parameters

*Destination*\
[out] The destination of the operation.

*Data*\
[in] The data to store.

*Count*\
[in] The length of the block of quadwords to write.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__stosq`|AMD64|

**Header file** \<intrin.h>

## Remarks

The result is that the quadword *Data* is written into a block of *Count* quadwords in the *Destination* string.

This routine is only available as an intrinsic.

## Example

```C
// stosq.c
// processor: x64
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(__stosq)

int main()
{
   unsigned __int64 val = 0xFFFFFFFFFFFFI64;
   unsigned __int64 a[10];
   memset(a, 0, sizeof(a));
   __stosq(a+1, val, 2);
   printf("%I64x %I64x %I64x %I64x", a[0], a[1], a[2], a[3]);
}
```

```Output
0 ffffffffffff ffffffffffff 0
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
