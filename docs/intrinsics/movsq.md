---
description: "Learn more about: __movsq"
title: "__movsq"
ms.date: "09/02/2019"
f1_keywords: ["__movsq"]
helpviewer_keywords: ["__movsq intrinsic", "rep movsq instruction", "movsq instruction"]
ms.assetid: be116a6e-2176-4ca4-93b1-9ccf3e7e7835
---
# __movsq

**Microsoft Specific**

Generates a repeated Move String (`rep movsq`) instruction.

## Syntax

```C
void __movsq(
   unsigned char* Destination,
   unsigned char* Source,
   size_t Count
);
```

### Parameters

*Destination*\
[out] The destination of the operation.

*Source*\
[in] The source of the operation.

*Count*\
[in] The number of quadwords to copy.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__movsq`|x64|

**Header file** \<intrin.h>

## Remarks

The result is that the first *Count* quadwords pointed to by *Source* are copied to the *Destination* string.

This routine is only available as an intrinsic.

## Example

```cpp
// movsq.cpp
// processor: x64
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(__movsq)

int main()
{
    unsigned __int64 a1[10];
    unsigned __int64 a2[10] = {950, 850, 750, 650, 550, 450, 350, 250,
                               150, 50};
    __movsq(a1, a2, 10);

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
