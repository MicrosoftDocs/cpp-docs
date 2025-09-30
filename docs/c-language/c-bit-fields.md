---
description: "Learn more about: C Bit Fields"
title: "C Bit Fields"
ms.date: "11/04/2016"
helpviewer_keywords: ["bitfields", "bit fields"]
ms.assetid: 9faf74c4-7fd5-4b44-ad18-04485193d06e
---
# C Bit Fields

In addition to declarators for members of a structure or union, a structure declarator can also be a specified number of bits, called a "bit field." Its length is set off from the declarator for the field name by a colon. A bit field is interpreted as an integral type.

## Syntax

*`struct-declarator`*:\
&emsp;*`declarator`*\
&emsp;*`type-specifier`* *`declarator`*<sub>opt</sub> **`:`** *`constant-expression`*

The *`constant-expression`* specifies the width of the field in bits. The *`type-specifier`* for the `declarator` must be **`unsigned int`**, **`signed int`**, or **`int`**, and the *`constant-expression`* must be a nonnegative integer value. If the value is zero, the declaration has no `declarator`. Arrays of bit fields, pointers to bit fields, and functions returning bit fields aren't allowed. The optional `declarator` names the bit field. Bit fields can only be declared as part of a structure. The address-of operator (**`&`**) can't be applied to bit-field components.

Unnamed bit fields can't be referenced, and their contents at run time are unpredictable. They can be used as "dummy" fields, for alignment purposes. An unnamed bit field whose width is specified as 0 guarantees that storage for the member following it in the *struct-declaration-list* begins on an **`int`** boundary.

The number of bits in a bit field must be less than or equal to the size of the underlying type. For example, these two statements aren't legal:

```C
short a:17;        /* Illegal! */
int long y:33;     /* Illegal! */
```

This example defines a two-dimensional array of structures named `screen`.

```C
struct
{
    unsigned short icon : 8;
    unsigned short color : 4;
    unsigned short underline : 1;
    unsigned short blink : 1;
} screen[25][80];
```

The array contains 2,000 elements. Each element is an individual structure containing four bit-field members: `icon`, `color`, `underline`, and `blink`. The size of each structure is 2 bytes.

Bit fields have the same semantics as the integer type. A bit field is used in expressions in exactly the same way as a variable of the same base type would be used. It doesn't matter how many bits are in the bit field.

**Microsoft Specific**

Bit fields defined as **`int`** are treated as **`signed`**. A Microsoft extension to the ANSI C standard allows **`char`** and **`long`** types (both **`signed`** and **`unsigned`**) for bit fields. Unnamed bit fields with base type **`long`**, **`short`**, or **`char`** (**`signed`** or **`unsigned`**) force alignment to a boundary appropriate to the base type.

Bit fields are allocated within an integer from least-significant to most-significant bit. In the following code

```C
struct mybitfields
{
    unsigned short a : 4;
    unsigned short b : 5;
    unsigned short c : 7;
} test;

int main( void )
{
    test.a = 2;
    test.b = 31;
    test.c = 0;
    return 0;
}
```

the bits of `test` would be arranged as follows:

```
00000001 11110010
cccccccb bbbbaaaa
```

Since the 8086 family of processors store the low byte of integer values before the high byte, the integer `0x01F2` would be stored in physical memory as `0xF2` followed by `0x01`.

The ISO C99 standard lets an implementation choose whether a bit field may straddle two storage instances. Consider this structure, which stores bit fields that total 64 bits:

```C
struct
{
    unsigned int first : 9;
    unsigned int second : 7;
    unsigned int may_straddle : 30;
    unsigned int last : 18;
} tricky_bits;
```

A standard C implementation could pack these bit fields into two 32-bit integers. It might store `tricky_bits.may_straddle` as 16 bits in one 32-bit integer and 14 bits in the next 32-bit integer. The Windows ABI convention packs bit fields into single storage integers, and doesn't straddle storage units. The Microsoft compiler stores each bit field in the above example so it fits completely in a single 32-bit integer. In this case, `first` and `second` are stored in one integer, `may_straddle` is stored in a second integer, and `last` is stored in a third integer. The `sizeof` operator returns `12` on an instance of `tricky_bits`. For more information, see [Padding and alignment of structure members](padding-and-alignment-of-structure-members.md).

**END Microsoft Specific**

## See also

[Structure Declarations](../c-language/structure-declarations.md)
