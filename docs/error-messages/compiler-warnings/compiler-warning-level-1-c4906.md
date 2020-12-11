---
description: "Learn more about: Compiler Warning (level 1) C4906"
title: "Compiler Warning (level 1) C4906"
ms.date: "11/04/2016"
f1_keywords: ["C4906"]
helpviewer_keywords: ["C4906"]
ms.assetid: 05318e74-799b-412a-9dce-f02b8161d762
---
# Compiler Warning (level 1) C4906

string literal cast to 'LPWSTR'

The compiler detected an unsafe cast. The cast did succeed, but you should use a conversion routine.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

## Example

The following sample generates C4906:

```cpp
// C4906.cpp
// compile with: /W1
#pragma warning(default : 4906)
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    LPWSTR x = (LPWSTR)"1234";   // C4906

    // try the following lines instead
    // char y[128];
    // size_t numberOfCharConverted = 0;
    // errcode err = 0;
    // err = wcstombs_s(&numberOfCharConverted , &y[0], 128,
    //                  L"12345", 4);
    // if (err != 0)
    // {
    //     printf_s("wcstombs_s failed!");
    //     return -1;
    // }
    // printf_s("%s\n", y);

    return 0;
}
```
