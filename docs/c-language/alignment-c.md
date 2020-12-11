---
title: "Alignment (C11)"
description: "Describes Microsoft Visual C type alignment"
ms.date: "12/10/2020"
helpviewer_keywords: ["_Alignof keyword [C]", "_Alignas keyword [C]", "memory, alignment"]
---
# Alignment (C11)

One of the low-level features of C is the ability to specify the precise alignment of objects in memory to take maximum advantage of the hardware architecture.

CPUs read and write memory more efficiently when data is stored at an address that is a multiple of the data size. For example, a 4-byte integer is accessed more efficiently if it's stored at an address that is a multiple of 4. When data isn't aligned, the CPU does more work to access the data.

By default, the compiler aligns data based on its size: **`char`** on a 1-byte boundary, **`short`** on a 2-byte boundary, **`int`**, **`long`**, and **`float`** on a 4-byte boundary, **`double`** on 8-byte boundary, and so on.

Additionally, by aligning frequently used data with the processor's cache line size, you can improve cache performance. For example, if you define a structure whose size is less than 32 bytes, you may want 32-byte alignment to ensure that instances of the structure are cached efficiently.

Usually, you don't need to worry about alignment. The compiler generally aligns data on natural boundaries that are based on the target processor and the size of the data. Data is aligned on up to 4-byte boundaries on 32-bit processors, and 8-byte boundaries on 64-bit processors. In some cases, however, you can achieve performance improvements, or memory savings, by specifying a custom alignment for your data structures.

Use the C11 keyword **`_Alignof`** to get the preferred alignment of a type or variable, and **`_Alignas`** to specify a custom alignment for a variable or user-defined type.

The convenience macros **`alignof`** and **`alignas`**, defined in `<stdalign.h>`, map directly to **`_Alignof`** and **`_Alignas`**, respectively. These macros match the keywords used in C++. So using the macros instead of the C keywords may be helpful for code portability if you share any code between the two languages.

## `alignas` and `_Alignas` (C11)

Use **`alignas`** or **`_Alignas`** to specify custom alignment for a variable or user-defined type. They can be applied to a struct, union, enumeration, or variable.

### `alignas` syntax

```c
alignas(type)
alignas(constant-expression)
_Alignas(type)
_Alignas(constant-expression)
```

### Remarks

`_Alignas` can't be used in the declaration of a typedef, bit-field, function, function parameter, or an object declared with the `register` specifier.

Specify an alignment that is a power of two such as 1,2,4,8,16, and so on. Don't use a value smaller than the size of the type.

Structs and unions have an alignment equal to the largest alignment of any member. Padding bytes are added within structs to ensure individual member alignment requirements are met.

If there are multiple **`alignas`**  specifiers in a declaration (for example, a struct with several members that have differing **`alignas`** specifiers), the alignment of the struct will be that of the largest one.

### `alignas` example

This example uses the convenience macro **`alignof`** because it's portable to C++. The behavior is the same if you use `_Alignof`.

```c
// Compile with /std:c11

#include <stdio.h>
#include <stdalign.h>

typedef struct 
{
    int value; // aligns on a 4-byte boundary. There will be 28 bytes of padding between value and alignas
    alignas(32) char alignedMemory[32]; // assuming a 32 byte friendly cache alignment
} cacheFriendly; // this struct will be 32-byte aligned because alignedMemory is 32-byte alligned and is the largest alignment specified in the struct

int main()
{
    printf("sizeof(cacheFriendly): %d\n", sizeof(cacheFriendly)); // 4 bytes for int value + 32 bytes for alignedMemory[] + padding to ensure  alignment
    printf("alignof(cacheFriendly): %d\n", alignof(cacheFriendly)); // 32 because alignedMemory[] is aligned on a 32-byte boundary

    /* output
        sizeof(cacheFriendly): 64
        alignof(cacheFriendly): 32
    */
}
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
#include <stdio.h>

int main()
{
    size_t alignment = alignof(short);
    printf("alignof(short) = %d\n", alignment); // 2
    printf("alignof(int) = %d\n", alignof(int)); // 4
    printf("alignof(long) = %d\n", alignof(long)); // 4
    printf("alignof(float) = %d\n", alignof(float)); // 4
    printf("alignof(double) = %d\n", alignof(double)); // 8

    typedef struct
    {
        int a;
        double b;
    } test;

    printf("alignof(test) = %d\n", alignof(test)); // 8 because that is the alignment of the largest element in the structure

    /* output
        
       alignof(short) = 2
       alignof(int) = 4
       alignof(long) = 4
       alignof(float) = 4
       alignof(double) = 8
       alignof(test) = 8
    */
}
```

## Requirements

[std:c++11](../build/reference/std-specify-language-standard-version.md) or later is required.

Windows SDK version 10.0.20201.0 or later. This version is currently an Insider build, which you can download from [Windows Insider Preview Downloads](https://www.microsoft.com/software-download/windowsinsiderpreviewSDK). See [C11 and C17: Getting Started](https://devblogs.microsoft.com/cppblog/c11-and-c17-standard-support-arriving-in-msvc/#c11-and-c17-getting-started) for instructions about installing and using this SDK.

## See also

[`/std` (Specify Language Standard Version)](../build/reference/std-specify-language-standard-version.md)\
[C++ `alignof` and `alignas`](../cpp/alignment-cpp-declarations.md#alignof-and-alignas)\
[Compiler handling of data alignment](../cpp/alignment-cpp-declarations.md#compiler-handling-of-data-alignment)