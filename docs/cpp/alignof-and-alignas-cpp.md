---
title: "alignof and alignas (C++)"
ms.date: "11/04/2016"
ms.assetid: 1d18aa8a-9621-4fb5-86e5-4cc86d5187f4
---
# alignof and alignas (C++)

The **alignas** type specifier is a portable, C++ standard way to specify custom alignment of variables and user defined types. The **alignof** operator is likewise a standard, portable way to obtain the alignment of a specified type or variable.

## Example

You can use **alignas** on a class, struck or union, or on individual members. When multiple **alignas** specifiers are encountered, the compiler will choose the strictest one, (the one with the largest value).

```cpp
// alignas_alignof.cpp
// compile with: cl /EHsc alignas_alignof.cpp
#include <iostream>

struct alignas(16) Bar
{
    int i;       // 4 bytes
    int n;      // 4 bytes
    alignas(4) char arr[3];
    short s;          // 2 bytes
};

int main()
{
    std::cout << alignof(Bar) << std::endl; // output: 16
}
```

## See also

[Alignment](../cpp/alignment-cpp-declarations.md)