---
description: "Learn more about: __stosb"
title: "__stosb"
ms.date: "09/02/2019"
f1_keywords: ["__stosb"]
helpviewer_keywords: ["rep stosb instruction", "__stosb intrinsic", "stosb instruction"]
ms.assetid: 634589ed-2da3-439b-a381-a214d89bf10c
---
# __stosb

**Microsoft Specific**

Generates a store string instruction (`rep stosb`).

## Syntax

```C
void __stosb(
   unsigned char* Destination,
   unsigned char Data,
   size_t Count
);
```

### Parameters

*Destination*\
[out] The destination of the operation.

*Data*\
[in] The data to store.

*Count*\
[in] The length of the block of bytes to write.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__stosb`|x86, x64|

**Header file** \<intrin.h>

## Remarks

The result is that the character *Data* is written into a block of *Count* bytes in the *Destination* string.

This routine is only available as an intrinsic.

## Example

```C
// stosb.c
// processor: x86, x64
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(__stosb)

int main()
{
    unsigned char c = 0x40; /* '@' character */
    unsigned char s[] = "*********************************";

    printf_s("%s\n", s);
    __stosb((unsigned char*)s+1, c, 6);
    printf_s("%s\n", s);

}
```

```Output
*********************************
*@@@@@@**************************
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
