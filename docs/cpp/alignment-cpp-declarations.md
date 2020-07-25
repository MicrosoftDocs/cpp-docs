---
title: "Alignment"
description: "How data alignment is specified in modern C++."
ms.date: "12/11/2019"
ms.assetid: a986d510-ccb8-41f8-b905-433df9183485
---
# Alignment

One of the low-level features of C++ is the ability to specify the precise alignment of objects in memory to take maximum advantage of a specific hardware architecture. By default, the compiler aligns class and struct members on their size value: **`bool`** and **`char`** on 1-byte boundaries, **`short`** on 2-byte boundaries, **`int`**, **`long`**, and **`float`** on 4-byte boundaries, and **`long long`**, **`double`**, and **`long double`** on 8-byte boundaries.

In most scenarios, you never have to be concerned with alignment because the default alignment is already optimal. In some cases, however, you can achieve significant performance improvements, or memory savings, by specifying a custom alignment for your data structures. Before Visual Studio 2015 you could use the Microsoft-specific keywords **`__alignof`** and **`__declspec(align)`** to specify an alignment greater than the default. Starting in Visual Studio 2015 you should use the C++11 standard keywords **`alignof`** and **`alignas`** for maximum code portability. The new keywords behave in the same way under the hood as the Microsoft-specific extensions. The documentation for those extensions also applies to the new keywords. For more information, see [`alignof` Operator](../cpp/alignof-operator.md) and [align](../cpp/align-cpp.md). The C++ standard doesn't specify packing behavior for alignment on boundaries smaller than the compiler default for the target platform, so you still need to use the Microsoft [`#pragma pack`](../preprocessor/pack.md) in that case.

Use the [aligned_storage class](../standard-library/aligned-storage-class.md) for memory allocation of data structures with custom alignments. The [aligned_union class](../standard-library/aligned-union-class.md) is for specifying alignment for unions with non-trivial constructors or destructors.

## Alignment and memory addresses

Alignment is a property of a memory address, expressed as the numeric address modulo a power of 2. For example, the address 0x0001103F modulo 4 is 3. That address is said to be aligned to 4n+3, where 4 indicates the chosen power of 2. The alignment of an address depends on the chosen power of 2. The same address modulo 8 is 7. An address is said to be aligned to X if its alignment is Xn+0.

CPUs execute instructions that operate on data stored in memory. The data are identified by their addresses in memory. A single datum also has a size. We call a datum *naturally aligned* if its address is aligned to its size. It's called *misaligned* otherwise. For example, an 8-byte floating-point datum is naturally aligned if the address used to identify it has an 8-byte alignment.

## Compiler handling of data alignment

Compilers attempt to make data allocations in a way that prevents data misalignment.

For simple data types, the compiler assigns addresses that are multiples of the size in bytes of the data type. For example, the compiler assigns addresses to variables of type **`long`** that are multiples of 4, setting the bottom 2 bits of the address to zero.

The compiler also pads structures in a way that naturally aligns each element of the structure. Consider the structure `struct x_` in the following code example:

```cpp
struct x_
{
   char a;     // 1 byte
   int b;      // 4 bytes
   short c;    // 2 bytes
   char d;     // 1 byte
} bar[3];
```

The compiler pads this structure to enforce alignment naturally.

The following code example shows how the compiler places the padded structure in memory:

```cpp
// Shows the actual memory layout
struct x_
{
   char a;            // 1 byte
   char _pad0[3];     // padding to put 'b' on 4-byte boundary
   int b;            // 4 bytes
   short c;          // 2 bytes
   char d;           // 1 byte
   char _pad1[1];    // padding to make sizeof(x_) multiple of 4
} bar[3];
```

Both declarations return `sizeof(struct x_)` as 12 bytes.

The second declaration includes two padding elements:

1. `char _pad0[3]` to align the `int b` member on a 4-byte boundary.

1. `char _pad1[1]` to align the array elements of the structure `struct _x bar[3];` on a four-byte boundary.

The padding aligns the elements of `bar[3]` in a way that allows natural access.

The following code example shows the `bar[3]` array layout:

```Output
adr offset   element
------   -------
0x0000   char a;         // bar[0]
0x0001   char pad0[3];
0x0004   int b;
0x0008   short c;
0x000a   char d;
0x000b   char _pad1[1];

0x000c   char a;         // bar[1]
0x000d   char _pad0[3];
0x0010   int b;
0x0014   short c;
0x0016   char d;
0x0017   char _pad1[1];

0x0018   char a;         // bar[2]
0x0019   char _pad0[3];
0x001c   int b;
0x0020   short c;
0x0022   char d;
0x0023   char _pad1[1];
```

## `alignof` and `alignas`

The **`alignas`** type specifier is a portable, C++ standard way to specify custom alignment of variables and user defined types. The **`alignof`** operator is likewise a standard, portable way to obtain the alignment of a specified type or variable.

## Example

You can use **`alignas`** on a class, struct or union, or on individual members. When multiple **`alignas`** specifiers are encountered, the compiler will choose the strictest one, (the one with the largest value).

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

[Data structure alignment](https://en.wikipedia.org/wiki/Data_structure_alignment)
