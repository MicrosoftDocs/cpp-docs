---
title: "Examples of Structure Alignment"
ms.date: "03/26/2018"
helpviewer_keywords: ["structure alignment", "examples [C++], structure alignment"]
ms.assetid: 03d137bf-5cc4-472e-9583-6498f2534199
---
# Examples of Structure Alignment

The following four examples each declare an aligned structure or union, and the corresponding figures illustrate the layout of that structure or union in memory. Each column in a figure represents a byte of memory, and the number in the column indicates the displacement of that byte. The name in the second row of each figure corresponds to the name of a variable in the declaration. The shaded columns indicate padding that is required to achieve the specified alignment.

## Example 1

```C
// Total size = 2 bytes, alignment = 2 bytes (word).

_declspec(align(2)) struct {
    short a;      // +0; size = 2 bytes
}
```

![AMD conversion example](../build/media/vcamd_conv_ex_1_block.png "vcAmd_conv_ex_1")

## Example 2

```C
// Total size = 24 bytes, alignment = 8 bytes (quadword).

_declspec(align(8)) struct {
    int a;       // +0; size = 4 bytes
    double b;    // +8; size = 8 bytes
    short c;     // +16; size = 2 bytes
}
```

![AMD conversion example](../build/media/vcamd_conv_ex_2_block.png "vcAmd_conv_ex_2")

## Example 3

```C
// Total size = 22 bytes, alignment = 4 bytes (doubleword).

_declspec(align(4)) struct {
    char a;       // +0; size = 1 byte
    short b;      // +2; size = 2 bytes
    char c;       // +4; size = 1 byte
    int d;        // +8; size = 4 bytes
}
```

![AMD conversion example](../build/media/vcamd_conv_ex_3_block.png "vcAmd_conv_ex_3")

## Example 4

```C
// Total size = 8 bytes, alignment = 8 bytes (quadword).

_declspec(align(8)) union {
    char *p;      // +0; size = 8 bytes
    short s;      // +0; size = 2 bytes
    long l;       // +0; size = 4 bytes
}
```

![AMD conversion example](../build/media/vcamd_conv_ex_4_block.png "vcAmd_conv_ex_4")

## See also

[Types and Storage](../build/types-and-storage.md)<br/>
