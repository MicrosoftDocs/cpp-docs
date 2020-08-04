---
title: "Compiler Warning (level 1) C4750"
description: "Describes MSVC compiler warning C4750 about a possible stack overflow."
ms.date: 07/08/2020
f1_keywords: ["C4750"]
helpviewer_keywords: ["C4750"]
ms.assetid: b0b2c938-7d2a-4c36-8270-7daee15ffee3
---
# Compiler Warning (level 1) C4750

> '*identifier*': function with _alloca() inlined into a loop

## Remarks

The '*identifier*' function forces inline expansion of the [`_alloca`](../../c-runtime-library/reference/alloca.md) function within a loop, which might cause a stack overflow when the loop is executed.

### To correct this error

1. Ensure that the '*identifier*' function isn't modified with the [`__forceinline`](../../cpp/inline-functions-cpp.md) specifier.

1. Ensure that the '*identifier*' function doesn't contain a [`_alloca`](../../c-runtime-library/reference/alloca.md) function that is contained in a loop.

1. Don't specify the [`/O1`](../../build/reference/o1-o2-minimize-size-maximize-speed.md), [`/O2`](../../build/reference/o1-o2-minimize-size-maximize-speed.md), [`/Ox`](../../build/reference/ox-full-optimization.md), or [`/Og`](../../build/reference/og-global-optimizations.md) compilation switch.

1. Place the [`_alloca`](../../c-runtime-library/reference/alloca.md) function in a [try-except statement](../../cpp/try-except-statement.md) that will catch a stack overflow.

## Example

The following code example calls `MyFunction` in a loop, and `MyFunction` calls the `_alloca` function. The **`__forceinline`** modifier causes the inline expansion of the `_alloca` function.

```cpp
// c4750.cpp
// compile with: /O2 /W1 /c
#include <intrin.h>

char * volatile newstr;

__forceinline void myFunction(void) // C4750 warning
{
// The _alloca function does not require a __try/__except
// block because the example uses compiler option /c.
    newstr = (char * volatile) _alloca(1000);
}

int main(void)
{
    for (int i=0; i<50000; i++)
       myFunction();
    return 0;
}
```

## See also

[_alloca](../../c-runtime-library/reference/alloca.md)
