---
description: "Learn more about: __movsd"
title: "__movsd"
ms.date: "09/02/2019"
f1_keywords: ["__movsd"]
helpviewer_keywords: ["rep movsd instruction", "__movsd intrinsic", "movsd instruction"]
ms.assetid: eb5cccf3-aa76-47f0-b9fc-eeca38fd943f
---
# __movsd

**Microsoft Specific**

Generates a Move String (`rep movsd`) instruction.

## Syntax

```C
void __movsd(
   unsigned long* Destination,
   unsigned long* Source,
   size_t Count
);
```

### Parameters

*Destination*\
[out] The destination of the operation.

*Source*\
[in] The source of the operation.

*Count*\
[in] The number of doublewords to copy.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__movsd`|x86, x64|

**Header file** \<intrin.h>

## Remarks

The result is that the first *Count* doublewords pointed to by *Source* are copied to the *Destination* string.

This routine is only available as an intrinsic.

## Example

```cpp
// movsd.cpp
// processor: x86, x64
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(__movsd)

int main()
{
    unsigned long a1[10];
    unsigned long a2[10] = {950, 850, 750, 650, 550, 450, 350,
                            250, 150, 50};
    __movsd(a1, a2, 10);

    for (int i = 0; i < 10; i++)
        printf_s("%d ", a1[i]);
    printf_s("\n");
}
```

```Output
950 850 750 650 550 450 350 250 150 50
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
