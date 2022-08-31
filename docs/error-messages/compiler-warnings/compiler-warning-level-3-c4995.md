---
description: "Learn more about: Compiler Warning (level 3) C4995"
title: "Compiler Warning (level 3) C4995"
ms.date: 08/30/2022
f1_keywords: ["C4995"]
helpviewer_keywords: ["C4995"]
ms.assetid: c6b61755-4730-4947-ad4d-d1c2bc82585a
---
# Compiler Warning (level 3) C4995

> '*function*': name was marked as `#pragma deprecated`

## Remarks

The compiler encountered a function that was marked with [`#pragma deprecated`](../../preprocessor/deprecated-c-cpp.md). The function may no longer be supported in a future release. You can turn off this warning by using [`#pragma warning`](../../preprocessor/warning.md).

The [`/sdl` (Enable Additional Security Checks)](../../build/reference/sdl-enable-additional-security-checks.md) compiler option elevates this warning to an error.

## Example

The following sample generates C4995. Uncomment the `#pragma warning` line to disable the warning.

```cpp
// C4995.cpp
// compile with: /W3
#include <stdio.h>

// #pragma warning(disable : 4995)
void func1(void)
{
    printf("\nIn func1");
}

int main()
{
    func1();
    #pragma deprecated(func1)
    func1();   // C4995
}
```
