---
description: "Learn more about: Compiler Warning (level 3) C4287"
title: "Compiler Warning (level 3) C4287"
ms.date: "11/04/2016"
f1_keywords: ["C4287"]
helpviewer_keywords: ["C4287"]
ms.assetid: 1bf3bff8-6402-4d06-95ba-431678a790a7
---
# Compiler Warning (level 3) C4287

'operator' : unsigned/negative constant mismatch

An unsigned variable was used in an operation with a negative number.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

## Example

The following sample generates C4287:

```cpp
// C4287.cpp
// compile with: /W3
#pragma warning(default : 4287)
#include <stdio.h>

int main()
{
    unsigned int u = 1;
    if (u < -1)   // C4287
        printf_s("u LT -1");
    else
        printf_s("u !LT -1");
    return 0;
}
```
