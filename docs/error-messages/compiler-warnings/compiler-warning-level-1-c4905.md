---
description: "Learn more about: Compiler Warning (level 1) C4905"
title: "Compiler Warning (level 1) C4905"
ms.date: "11/04/2016"
f1_keywords: ["C4905"]
helpviewer_keywords: ["C4905"]
ms.assetid: 40240bf4-b14e-4c22-aeb2-52f2851532f6
---
# Compiler Warning (level 1) C4905

wide string literal cast to 'LPSTR'

The compiler detected an unsafe cast. The cast did succeed, but you should use a conversion routine.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

## Example

The following sample generates C4905.

```cpp
// C4905.cpp
// compile with: /W1
#pragma warning(default : 4905)
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    LPSTR y = (LPSTR)L"1234";   // C4905

    // try the following lines instead
    // wchar_t y[128];
    // size_t  sizeOfConverted;
    // errcode err = 0;
    //
    // err = mbstowcs_s(&sizeOfConverted, &y[0], 128, "12345", 4);
    // if (err != 0)
    // {
    //     printf_s("mbstowcs_s failed!");
    //     exit (-1);
    // }
    // wprintf(L"%s\n", y);

    return 0;
}
```
