---
description: "Learn more about: Compiler Warning (level 4) C4840"
title: "Compiler Warning (level 4) C4840"
ms.date: "09/13/2018"
f1_keywords: ["C4840"]
helpviewer_keywords: ["C4840"]
---
# Compiler Warning (level 4) C4840

> non-portable use of class '*type*' as an argument to a variadic function

## Remarks

Classes or structs that are passed to a variadic function must be trivially copyable. When passing such objects, the compiler simply makes a bitwise copy and does not call the constructor or destructor.

This warning is available beginning in Visual Studio 2017.

## Example

The following sample generates C4840 and shows how to fix it:

```cpp
// C4840.cpp
// compile by using: cl /EHsc /W4 C4840.cpp
#include <stdio.h>

int main()
{
    struct S {
        S(int i) : i(i) {}
        S(const S& other) : i(other.i) {}
        operator int() { return i; }
    private:
        int i;
    } s(0);

    printf("%i\n", s); // warning C4840 : non-portable use of class 'main::S'
                       // as an argument to a variadic function
    // To correct the error, you can perform a static cast
    // to convert the object before passing it:
    printf("%i\n", static_cast<int>(s));
}
```

For strings built and managed using `CStringW`, the provided `operator LPCWSTR()` should be used to cast a `CStringW` object to the C-style string pointer expected by the format string:

```cpp
    CStringW str1;
    CStringW str2;
    // ...
    str1.Format("%s", static_cast<LPCWSTR>(str2));
```
