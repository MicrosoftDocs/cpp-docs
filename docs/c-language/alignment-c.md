---
title: "Alignment (C11)"
description: "Describes Microsoft Visual C type alignment"
ms.date: "12/10/2020"
helpviewer_keywords: ["_Alignof keyword [C]", "_Alignas keyword [C]", "memory, alignment"]
---
# Alignment (C11)

One of the low-level features of C is the ability to specify the precise alignment of objects in memory to take maximum advantage of the hardware architecture.

CPUs read and write memory more efficiently when data is stored at an address that is a multiple of the data size. For example, a 4-byte integer is accessed more efficiently if it's stored in an address that is a multiple of 4. When data isn't aligned, the CPU needs to do more work to access the data.

By default, the compiler aligns data based on its size: **`char`** on 1-byte boundaries, **`short`** on 2-byte boundaries, **`int`**, **`long`**, and **`float`** on 4-byte boundaries, **`double`** on 8-byte boundaries, and so on.

Additionally, by aligning frequently used data to the processor's cache line size, you improve cache performance. For example, if you define a structure whose size is less than 32 bytes, you may want 32 byte alignment to make sure objects of that structure type are cached efficiently.

Usually you don't worry about alignment because the default alignment is typically good enough. In some cases, however, you can achieve performance improvements, or memory savings, by specifying a custom alignment for your data structures.

Use the C11 keywords **`_Alignof`** to get the preferred alignment of a type or variable, and **`_Alignas`** to specify custom alignment for a variable or user-defined type.

The convenience macros **`alignof`** and **`alignas`**, defined in `<stdalign.h>`, map directly to **`_Alignof`** and **`_Alignas`**, respectively.

## `alignas` and `_Alignas` (C11)

Use **`alignas`** or **`_Alignas`** to specify custom alignment for a variable or user-defined type.  It can be applied to a struct, union, enumeration, or variable.

### `alignas` syntax

```c
alignas(type)
alignas(constant-expression)
_Alignas(type)
_Alignas(constant-expression)
```

### Remarks

`_Alignas` can't be used in the declaration of a typedef, bit-field, function, function parameter, or an object declared with the `register` specifier.

### `alignas` example

This example uses the convenience macro **`alignof`** because it's portable to C++. The behavior is the same if you use `_Alignof`.

```c
// Compile with /std:c11

#include <stdio.h>
#include <stdalign.h>

typedef struct 
{
    int value; // aligns on a 4-byte boundary
    alignas(32) char alignedMemory[32]; // assuming a 32 byte friendly cache alignment
} cacheFriendly;

typedef struct
{
    int a; // aligns on 4-byte boundary
    double b; // aligns on 8-byte boundary.
} test;

int main()
{
    printf("sizeof(cacheFriendly): %d\n", sizeof(cacheFriendly)); // 4 bytes for int value + 32 bytes for alignedMemory[] + padding for alignment
    printf("alignof(cacheFriendly): %d\n", alignof(cacheFriendly)); // 32 due to alignedMemory[] being aligned on a 32 byte boundary

    /* output
        sizeof(cacheFriendly): 64
        alignof(cacheFriendly): 32
    */
```

## `alignof` and `_Alignof` (C11)

`_Alignof` returns the alignment in bytes of the specified type. It returns a value of type `size_t`.

### `alignof` syntax

```cpp
alignof(type)
_Alignof(type)
```

### `alignof` example

This example uses the convenience macro **`alignof`** because it's portable to C++. The behavior is the same if you use `_Alignof`.

```c
// Compile with /std:c11

#include <stdalign.h>

int main()
{
    size_t alignment = alignof(short); // 2
    alignment = alignof(int); // 4
    alignment = alignof(long); // 4
    alignment = alignof(float); // 4
    alignment = alignof(double); // 8

    typedef struct
    {
        int a;
        double b;
    } test;

    alignment = alignof(test); // returns 8 because that is the alignment requirement of the largest element in the structure
}
```

## Requirements

[std:c++11](../build/reference/std-specify-language-standard-version.md) or later is required.

Windows SDK version 10.0.20201.0 or later. This is currently an Insider build which you can download from [Windows Insider Preview Downloads](https://www.microsoft.com/software-download/windowsinsiderpreviewSDK). See [C11 and C17: Getting Started](https://devblogs.microsoft.com/cppblog/c11-and-c17-standard-support-arriving-in-msvc/#c11-and-c17-getting-started) for instructions on installing and using this SDK.

## See also

[`/std` (Specify Language Standard Version)](../build/reference/std-specify-language-standard-version.md)\
[C++ `alignof` and `alignas`](../cpp/alignment-cpp-declarations#alignof-and-alignas)\
[Compiler handling of data alignment](../cpp/alignment-cpp-declarations#compiler-handling-of-data-alignment)