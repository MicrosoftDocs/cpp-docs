---
title: "Compiler Warning (level 3) C4839 | Microsoft Docs"
ms.date: "10/25/2017"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4839"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4839"]
ms.assetid: f4f99066-9258-4330-81a8-f4a75a1d95ee
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4839

> non-standard use of class '*type*' as an argument to a variadic function

In Visual Studio 2017, classes or structs that are passed to a variadic function such as `printf` must be trivially copyable. When passing such objects, the compiler simply makes a bitwise copy and does not call the constructor or destructor.

## Example

The following sample generates C4839:

```cpp
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

    struct S {
        S(int i) : i(i) {}
        S(const S& other) : i(other.i) {}
        operator int() { return i; }
    private:
        int i;
    } s(0);
    printf("%i\n", s); // warning C4840 : non-portable use of class 'main::S'
                      // as an argument to a variadic function
}
```

To correct the error, you can call a member function that returns a trivially copyable type,

```cpp
    std::atomic<int> i(0);
    printf("%i\n", i.load());
```

or else perform a static cast to convert the object before passing it:

```cpp
    struct S {/* as before */} s(0);
    printf("%i\n", static_cast<int>(s))
```

For strings built and managed using `CStringW`, the provided `operator LPCWSTR()` should be used to cast a `CStringW` object to the C pointer expected by the format string.

```cpp
    CStringW str1;
    CStringW str2;
    // ...
    str1.Format("%s", static_cast<LPCWSTR>(str2));
```