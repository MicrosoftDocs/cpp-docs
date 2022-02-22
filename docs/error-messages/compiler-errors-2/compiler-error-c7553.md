---
title: "Compiler Error C7553"
description: Compiler Error C7553 description and solution.
ms.date: 02/22/2022
f1_keywords: ["C7553"]
helpviewer_keywords: ["C7553"]
---
# Compiler Error C7553

> inline assembler is not supported in a lambda

## Remarks

In versions of Visual Studio before Visual Studio 2017 version 15.9, the use of inline-assembler within a lambda could lead to the corruption of `ebp` (the return address register) at runtime. A malicious attacker could possibly take advantage of this scenario. The inline assembler is only supported on x86, and interaction between the inline assembler and the rest of the compiler is poor. Given these facts and the nature of the issue, the safest solution to this problem was to disallow inline assembler within a lambda expression.

The only use of inline assembler within a lambda expression that we have found 'in the wild' was to capture the return address. In this scenario, you can capture the return address on all platforms simply by using a compiler intrinsic `_ReturnAddress()`.

Compiler Error C7553 occurs in Visual Studio starting in Visual Studio 2017 version 15.9.

## Example

The following code produces C7553 in Visual Studio 2017 15.9 and later versions:

```cpp
#include <cstdio>

int f()
{
    int y = 1724;
    int x = 0xdeadbeef;

    auto lambda = [&]
    {
        __asm {  // C7553: inline assembler is not supported in a lambda

            mov eax, x
            mov y, eax
        }
    };

    lambda();
    return y;
}
```

To avoid the error, move the assembly code into a named function as shown in the following example:

```cpp
#include <cstdio>

void g(int& x, int& y)
{
    __asm {
        mov eax, x
        mov y, eax
    }
}

int f()
{
    int y = 1724;
    int x = 0xdeadbeef;
    auto lambda = [&]
    {
        g(x, y);
    };
    lambda();
    return y;
}

int main()
{
    std::printf("%d\n", f());
}
```
