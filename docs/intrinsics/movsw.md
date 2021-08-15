---
description: "Learn more about: __movsw"
title: "__movsw"
ms.date: "09/02/2019"
f1_keywords: ["__movsw"]
helpviewer_keywords: ["movsw instruction", "rep movsw instruction", "__movsw intrinsic"]
ms.assetid: db402ad5-7f0e-449a-b0b0-eea9928d6435
---
# __movsw

**Microsoft Specific**

Generates a Move String (`rep movsw`) instruction.

## Syntax

```C
void __movsw(
   unsigned short* Destination,
   unsigned short* Source,
   size_t Count
);
```

### Parameters

*Destination*\
[out] The destination of the operation.

*Source*\
[in] The source of the operation.

*Count*\
[in] The number of words to copy.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__movsw`|x86, x64|

**Header file** \<intrin.h>

## Remarks

The result is that the first *Count* words pointed to by *Source* are copied to the *Destination* string.

This routine is only available as an intrinsic.

## Example

```cpp
// movsw.cpp
// processor: x86, x64
#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(__movsw)

int main()
{
    unsigned short s1[10];
    unsigned short s2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    __movsw(s1, s2, 10);

    for (int i = 0; i < 10; i++)
        printf_s("%d ", s1[i]);
    printf_s("\n");
}
```

```Output
0 1 2 3 4 5 6 7 8 9
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
