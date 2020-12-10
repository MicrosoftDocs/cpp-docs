---
description: "Learn more about: __segmentlimit"
title: "__segmentlimit"
ms.date: "09/02/2019"
f1_keywords: ["__segmentlimit"]
helpviewer_keywords: ["__segmentlimit intrinsic", "lsl instruction"]
ms.assetid: d0bc3630-90cb-4185-8667-686fd41e23d4
---
# __segmentlimit

**Microsoft Specific**

Generates the `lsl` (Load Segment Limit) instruction.

## Syntax

```C
unsigned long __segmentlimit(
   unsigned long a
);
```

### Parameters

*a*\
[in] A constant that specifies the segment selector.

## Return value

The segment limit of the segment selector specified by *a*, if the selector is valid and visible at the current permission level.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__segmentlimit`|x86, x64|

**Header file** \<intrin.h>

## Remarks

If the segment limit can't be retrieved, this instruction fails. On failure, this instruction clears the ZF flag and the return value is undefined.

This routine is only available as an intrinsic.

## Example

```cpp
#include <stdio.h>

#ifdef _M_IX86
typedef unsigned int READETYPE;
#else
typedef unsigned __int64 READETYPE;
#endif

#define EFLAGS_ZF      0x00000040
#define KGDT_R3_DATA    0x0020
#define RPL_MASK        0x3

extern "C"
{
unsigned long __segmentlimit (unsigned long);
READETYPE __readeflags();
}

#pragma intrinsic(__readeflags)
#pragma intrinsic(__segmentlimit)

int main(void)
{
   const unsigned long initsl = 0xbaadbabe;
   READETYPE eflags = 0;
   unsigned long sl = initsl;

   printf("Before: segment limit =0x%x eflags =0x%x\n", sl, eflags);
   sl = __segmentlimit(KGDT_R3_DATA + RPL_MASK);

   eflags = __readeflags();

   printf("After: segment limit =0x%x eflags =0x%x eflags.zf = %s\n", sl, eflags, (eflags & EFLAGS_ZF) ? "set" : "clear");

   // If ZF is set, the call to lsl succeeded; if ZF is clear, the call failed.
   printf("%s\n", eflags & EFLAGS_ZF ? "Success!": "Fail!");

   // You can verify the value of sl to make sure that the instruction wrote to it
   printf("sl was %s\n", (sl == initsl) ? "unchanged" : "changed");

   return 0;
}
```

```Output
Before: segment limit =0xbaadbabe eflags =0x0
After: segment limit =0xffffffff eflags =0x256 eflags.zf = set
Success!
sl was changed
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
