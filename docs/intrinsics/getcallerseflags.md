---
description: "Learn more about: __getcallerseflags"
title: "__getcallerseflags"
ms.date: "09/02/2019"
f1_keywords: ["_getcallerseflags", "_getcallerseflags_cpp"]
helpviewer_keywords: ["_getcallerseflags intrinsic"]
ms.assetid: 2386596f-33aa-4cc7-b026-5a834637270a
---
# __getcallerseflags

**Microsoft Specific**

Returns the EFLAGS value from the caller's context.

## Syntax

```C
unsigned int __getcallerseflags(void);
```

## Return value

EFLAGS value from the caller's context.

## Requirements

|Intrinsic|Architecture|
|---------------|------------------|
|`__getcallerseflags`|x86, x64|

**Header file** \<intrin.h>

## Remarks

This routine is only available as an intrinsic.

## Example

```cpp
// getcallerseflags.cpp
// processor: x86, x64

#include <stdio.h>
#include <intrin.h>

#pragma intrinsic(__getcallerseflags)

unsigned int g()
{
    unsigned int EFLAGS = __getcallerseflags();
    printf_s("EFLAGS 0x%x\n", EFLAGS);
    return EFLAGS;
}
unsigned int f()
{
    return g();
}

int main()
{
    unsigned int i;
    i = f();
    i = g();
    return 0;
}
```

```Output
EFLAGS 0x202
EFLAGS 0x206
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)
