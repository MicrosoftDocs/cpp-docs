---
title: "__stosd"
ms.date: "11/04/2016"
f1_keywords: ["__stosd"]
helpviewer_keywords: ["stosd instruction", "rep stosd instruction", "__stosd intrinsic"]
ms.assetid: 03104247-1cea-49f6-b6f8-287917bf5680
---
# __stosd

**Microsoft Specific**

Generates a store string instruction (`rep stosd`).

## Syntax

```
void __stosd(
   unsigned long* Dest,
   unsigned long Data,
   size_t Count
);
```

#### Parameters

*Dest*<br/>
[out] The destination of the operation.

*Data*<br/>
[in] The data to store.

*Count*<br/>
[in] The length of the block of doublewords to write.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__stosd`|x86, x64|

**Header file** \<intrin.h>

## Remarks

The result is that the doubleword `Data` is written into a block of `Count` doublewords at the memory location pointed to by `Dest`.

This routine is only available as an intrinsic.

## Example

```
// stosd.c
// processor: x86, x64

#include <stdio.h>
#include <memory.h>
#include <intrin.h>

#pragma intrinsic(__stosd)

int main()
{
    unsigned long val = 99999;
    unsigned long a[10];

    memset(a, 0, sizeof(a));
    __stosd(a+1, val, 2);

printf_s( "%u %u %u %u",
              a[0], a[1], a[2], a[3]);
}
```

```Output
0 99999 99999 0
```

**END Microsoft Specific**

## See also

- [Compiler Intrinsics](../intrinsics/compiler-intrinsics.md)
