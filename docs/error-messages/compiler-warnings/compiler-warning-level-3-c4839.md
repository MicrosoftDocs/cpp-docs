---
description: "Learn more about: Compiler Warning (level 3) C4839"
title: "Compiler Warning (level 3) C4839"
ms.date: "09/13/2018"
f1_keywords: ["C4839"]
helpviewer_keywords: ["C4839"]
ms.assetid: f4f99066-9258-4330-81a8-f4a75a1d95ee
---
# Compiler Warning (level 3) C4839

> non-standard use of class '*type*' as an argument to a variadic function

Classes or structs that are passed to a variadic function such as `printf` must be trivially copyable. When passing such objects, the compiler simply makes a bitwise copy and does not call the constructor or destructor.

This warning is available beginning in Visual Studio 2017.

## Example

The following sample generates C4839:

```cpp
// C4839.cpp
// compile by using: cl /EHsc /W3 C4839.cpp
#include <atomic>
#include <memory>
#include <stdio.h>

int main()
{
    std::atomic<int> i(0);
    printf("%i\n", i); // error C4839: non-standard use of class 'std::atomic<int>'
                        // as an argument to a variadic function
                        // note: the constructor and destructor will not be called;
                        // a bitwise copy of the class will be passed as the argument
                        // error C2280: 'std::atomic<int>::atomic(const std::atomic<int> &)':
                        // attempting to reference a deleted function
}
```

To correct the error, you can call a member function that returns a trivially copyable type,

```cpp
    std::atomic<int> i(0);
    printf("%i\n", i.load());
```

For strings built and managed using `CStringW`, the provided `operator LPCWSTR()` should be used to cast a `CStringW` object to the C pointer expected by the format string.

```cpp
    CStringW str1;
    CStringW str2;
    // ...
    str1.Format("%s", static_cast<LPCWSTR>(str2));
```
