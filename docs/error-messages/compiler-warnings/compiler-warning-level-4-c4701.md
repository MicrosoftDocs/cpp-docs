---
description: "Learn more about: Compiler Warning (level 4) C4701"
title: "Compiler Warning (level 4) C4701"
ms.date: "11/04/2016"
f1_keywords: ["C4701"]
helpviewer_keywords: ["C4701"]
ms.assetid: d7c76c66-1f3f-4d3c-abe4-5d94c84a5a1f
---
# Compiler Warning (level 4) C4701

Potentially uninitialized local variable 'name' used

The local variable *name* might have been used without being assigned a value. This could lead to unpredictable results.

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

[Compiler Warning (level 4) C4703](../../error-messages/compiler-warnings/compiler-warning-level-4-c4703.md)<br/>
[Warnings, /sdl, and improving uninitialized variable detection](https://www.microsoft.com/security/blog/2012/06/06/warnings-sdl-and-improving-uninitialized-variable-detection/)
