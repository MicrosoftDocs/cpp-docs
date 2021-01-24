---
description: "Learn more about: /Zc:alignedNew (C++17 over-aligned allocation)"
title: "/Zc:alignedNew (C++17 over-aligned allocation)"
ms.date: "05/18/2019"
f1_keywords: ["/Zc:alignedNew"]
helpviewer_keywords: ["/Zc:alignedNew", "Zc:alignedNew", "-Zc:alignedNew"]
---
# /Zc:alignedNew (C++17 over-aligned allocation)

Enable support for C++17 over-aligned **`new`**, dynamic memory allocation aligned on boundaries greater than the default for the maximum-sized standard aligned type, **max\_align\_t**.

## Syntax

> **/Zc:alignedNew**\[-]

## Remarks

The MSVC compiler and library support C++17 standard over-aligned dynamic memory allocation. When the **/Zc:alignedNew** option is specified, a dynamic allocation such as `new Example;` respects the alignment of *Example* even when it's greater than `max_align_t`, the largest alignment required for any fundamental type. When the alignment of the allocated type is no more than the alignment guaranteed by the original operator **`new`**, available as the value of the predefined macro **\_\_STDCPP\_DEFAULT\_NEW\_ALIGNMENT\_\_**, the statement `new Example;` results in a call to `::operator new(size_t)` as it did in C++14. When the alignment is greater than **\_\_STDCPP\_DEFAULT\_NEW\_ALIGNMENT\_\_**, the implementation instead obtains the memory by using `::operator new(size_t, align_val_t)`. Similarly, deletion of over-aligned types invokes `::operator delete(void*, align_val_t)` or the sized delete signature `::operator delete(void*, size_t, align_val_t)`.

The **/Zc:alignedNew** option is only available when [/std:c++17](std-specify-language-standard-version.md) or [/std:c++latest](std-specify-language-standard-version.md) is enabled. Under **/std:c++17** or **/std:c++latest**, **/Zc:alignedNew** is enabled by default to conform to the ISO C++17 standard. If the only reason you implement operator **`new`** and **`delete`** is to support over-aligned allocations, you may no longer need this code in C++17 mode. To turn off this option and revert to the C++14 behavior of **`new`** and **`delete`** when you use **/std::c++17** or **/std:c++latest**, specify **/Zc:alignedNew-**. If you implement operator **`new`** and **`delete`** but you're not ready to implement the over-aligned operator **`new`** and **`delete`** overloads that have the `align_val_t` parameter, use the **/Zc:alignedNew-** option to prevent the compiler and Standard Library from generating calls to the over-aligned overloads. The [/permissive-](permissive-standards-conformance.md) option doesn't change the default setting of **/Zc:alignedNew**.

Support for **/Zc:alignedNew** is available starting in Visual Studio 2017 version 15.5.

## Example

This sample shows how operator **`new`** and operator **`delete`** behave when the **/Zc:alignedNew** option is set.

```cpp
// alignedNew.cpp
// Compile by using: cl /EHsc /std:c++17 /W4 alignedNew.cpp
#include <iostream>
#include <malloc.h>
#include <new>

// "old" unaligned overloads
void* operator new(std::size_t size) {
    auto ptr = malloc(size);
    std::cout << "unaligned new(" << size << ") = " << ptr << '\n';
    return ptr ? ptr : throw std::bad_alloc{};
}

void operator delete(void* ptr, std::size_t size) {
    std::cout << "unaligned sized delete(" << ptr << ", " << size << ")\n";
    free(ptr);
}

void operator delete(void* ptr) {
    std::cout << "unaligned unsized delete(" << ptr << ")\n";
    free(ptr);
}

// "new" over-aligned overloads
void* operator new(std::size_t size, std::align_val_t align) {
    auto ptr = _aligned_malloc(size, static_cast<std::size_t>(align));
    std::cout << "aligned new(" << size << ", " <<
        static_cast<std::size_t>(align) << ") = " << ptr << '\n';
    return ptr ? ptr : throw std::bad_alloc{};
}

void operator delete(void* ptr, std::size_t size, std::align_val_t align) {
    std::cout << "aligned sized delete(" << ptr << ", " << size <<
        ", " << static_cast<std::size_t>(align) << ")\n";
    _aligned_free(ptr);
}

void operator delete(void* ptr, std::align_val_t align) {
    std::cout << "aligned unsized delete(" << ptr <<
        ", " << static_cast<std::size_t>(align) << ")\n";
    _aligned_free(ptr);
}

struct alignas(256) OverAligned {}; // warning C4324, structure is padded

int main() {
    delete new int;
    delete new OverAligned;
}
```

This output is typical for 32-bit builds. The pointer values vary based on where your application runs in memory.

```Output
unaligned new(4) = 009FD0D0
unaligned sized delete(009FD0D0, 4)
aligned new(256, 256) = 009FE800
aligned sized delete(009FE800, 256, 256)
```

For information about conformance issues in Visual C++, see [Nonstandard Behavior](../../cpp/nonstandard-behavior.md).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include **/Zc:alignedNew** or **/Zc:alignedNew-** and then choose **OK**.

## See also

[/Zc (Conformance)](zc-conformance.md)
