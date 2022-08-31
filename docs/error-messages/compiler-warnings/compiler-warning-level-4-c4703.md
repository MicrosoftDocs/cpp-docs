---
description: "Learn more about: Compiler Warning (level 4) C4703"
title: "Compiler Warning (level 4) C4703"
ms.date: 08/30/2022
f1_keywords: ["C4703"]
helpviewer_keywords: ["C4703"]
ms.assetid: 5dad454e-69e3-4931-9168-050a861c05f8
---
# Compiler Warning (level 4) C4703

> Potentially uninitialized local pointer variable 'name' used

## Remarks

The local pointer variable *name* might have been used without being assigned a value. This access could lead to unpredictable results.

The [`/sdl` (Enable Additional Security Checks)](../../build/reference/sdl-enable-additional-security-checks.md) compiler option elevates this warning to an error.

## Example

The following code generates C4701 and C4703.

```cpp
#include <malloc.h>

void func(int size)
{
    void* p;
    if (size < 256) {
        p = malloc(size);
    }

    if (p != nullptr) // C4701 and C4703
        free(p);
}

int main()
{
    func(9);
}
```

```Output
c:\src\test.cpp(10) : warning C4701: potentially uninitialized local variable 'p' used
c:\src\test.cpp(10) : warning C4703: potentially uninitialized local pointer variable 'p' used
```

To correct this warning, initialize the variable as shown in this example:

```cpp
#include <malloc.h>

void func(int size)
{
    void* p = nullptr;
    if (size < 256) {
        p = malloc(size);
    }

    if (p != nullptr)
        free(p);
}

int main()
{
    func(9);
}
```

## See also

[Compiler Warning (level 4) C4701](../../error-messages/compiler-warnings/compiler-warning-level-4-c4701.md)\
[Warnings, `/sdl`, and improving uninitialized variable detection](https://www.microsoft.com/security/blog/2012/06/06/warnings-sdl-and-improving-uninitialized-variable-detection/)
