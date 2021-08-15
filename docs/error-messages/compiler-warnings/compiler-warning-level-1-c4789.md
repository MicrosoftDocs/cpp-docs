---
description: "Learn more about: Compiler Warning (Level 1) C4789"
title: "Compiler Warning (Level 1) C4789"
ms.date: "03/25/2019"
f1_keywords: ["C4789"]
helpviewer_keywords: ["C4789"]
ms.assetid: 5800c301-5afb-4af0-85c1-ceb54d775234
---
# Compiler Warning (Level 1) C4789

> buffer '*identifier*' of size *N* bytes will be overrun; *M* bytes will be written starting at offset *L*

## Remarks

**C4789** warns about buffer overruns when specific C run-time (CRT) functions are used. It can also report size mismatches when parameters are passed or assignments are made. The warning is possible if the data sizes are known at compile time. This warning is for situations that might elude typical data-size mismatch detection.

**C4789** warns when data is copied into a data block that's known to be too small at compile time.

The warning occurs if the copy uses the intrinsic form of one of these CRT functions:

- [strcpy](../../c-runtime-library/reference/strcpy-wcscpy-mbscpy.md)

- [memset](../../c-runtime-library/reference/memset-wmemset.md)

- [memcpy](../../c-runtime-library/reference/memcpy-wmemcpy.md), [wmemcpy](../../c-runtime-library/reference/memcpy-wmemcpy.md)

The warning also appears when you cast a parameter to a larger data type, and then make a copy assignment from an lvalue reference.

Visual C++ might generate this warning for a code path that never executes. You can temporarily disable the warning by using `#pragma`, as shown in this example:

```cpp
#pragma warning( push )
#pragma warning( disable : 4789 )
// unused code that generates compiler warning C4789`
#pragma warning( pop )
```

This idiom keeps Visual C++ from generating the warning for that specific block of code. The `#pragma warning(push)` preserves the existing state before `#pragma warning(disable: 4789)` changes it. The `#pragma warning(pop)` restores the pushed state, and removes the effects of the `#pragma warning(disable:4789)`. For more information about the C++ preprocessor directive `#pragma`, see [warning](../../preprocessor/warning.md) and [Pragma Directives and the __Pragma Keyword](../../preprocessor/pragma-directives-and-the-pragma-keyword.md).

## Examples

The following sample generates C4789.

```cpp
// C4789.cpp
// compile with: /Oi /W1 /c
#include <string.h>
#include <stdio.h>

int main()
{
    char a[20];
    strcpy(a, "0000000000000000000000000\n");   // C4789

    char buf2[20];
    memset(buf2, 'a', 21);   // C4789

    char c;
    wchar_t w = 0;
    memcpy(&c, &w, sizeof(wchar_t));
}
```

The following sample also generates C4789.

```cpp
// C4789b.cpp
// compile with: /W1 /O2 /c
// processor: x86
short G;

int main()
{
   int * p = (int *)&G;
   *p = 3;   // C4789 - writes an int through a pointer to short
}
```
