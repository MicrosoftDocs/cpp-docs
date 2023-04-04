---
description: "Learn more about: C++ Bit Fields"
title: "C++ Bit Fields"
ms.date: "11/19/2018"
helpviewer_keywords: ["bitfields [C++]", "fields [C++], bit", "bit fields"]
---
# C++ Bit Fields

Classes and structures can contain members that occupy less storage than an integral type. These members are specified as bit fields. The syntax for bit-field *member-declarator* specification follows:

## Syntax

*declarator* **:** *constant-expression*

## Remarks

The (optional) *declarator* is the name by which the member is accessed in the program. It must be an integral type (including enumerated types). The *constant-expression* specifies the number of bits the member occupies in the structure. Anonymous bit fields—that is, bit-field members with no identifier—can be used for padding.

> [!NOTE]
> An unnamed bit field of width 0 forces alignment of the next bit field to the next **type** boundary, where **type** is the type of the member.

The following example declares a structure that contains bit fields:

```cpp
// bit_fields1.cpp
// compile with: /LD
struct Date {
   unsigned short nWeekDay  : 3;    // 0..7   (3 bits)
   unsigned short nMonthDay : 6;    // 0..31  (6 bits)
   unsigned short nMonth    : 5;    // 0..12  (5 bits)
   unsigned short nYear     : 8;    // 0..100 (8 bits)
};
```

The conceptual memory layout of an object of type `Date` is shown in the following figure:

:::image type="complex" source="../cpp/media/vc38uq1.png" alt-text="Diagram of the memory layout of a date object, showing where the n WeekDay, n MonthDay, n Month, and n Year bit fields are located.":::
32 bits of memory are displayed in a row. Starting with the least significant bit, 3 bits are for nWeekDay. The next 6 bits are for nMonthDay. The next 5 bits are for nMonth. The next 2 bits are unused. The next 8 bits are for nYear. The remaining 8 bits are unused.
:::image-end:::  

`nYear` is 8 bits long, which would overflow the word boundary of the declared type, **`unsigned short`**. Therefore, it starts at the beginning of a new **`unsigned short`**. It isn't necessary that all bit fields fit in one object of the underlying type; new units of storage are allocated, according to the number of bits requested in the declaration.

**Microsoft Specific**

The ordering of data declared as bit fields is from low to high bit, as shown in the previous figure.

**END Microsoft Specific**

If the declaration of a structure includes an unnamed field of length 0, as shown in the following example:

```cpp
// bit_fields2.cpp
// compile with: /LD
struct Date {
   unsigned nWeekDay  : 3;    // 0..7   (3 bits)
   unsigned nMonthDay : 6;    // 0..31  (6 bits)
   unsigned           : 0;    // Force alignment to next boundary.
   unsigned nMonth    : 5;    // 0..12  (5 bits)
   unsigned nYear     : 8;    // 0..100 (8 bits)
};
```

Then the memory layout is as shown in the following figure:

:::image type="complex" source="../cpp/media/vc38uq2.png" alt-text="Diagram of the layout of a Date object, with a zero length bit field, which forces alignment padding.":::
64 bits of memory are displayed in a row. Starting with the least significant bit, 5 bits are for n Month. The next 8 bits are for n Year. The next 19 bits are unused. The next 3 bits are for n WeekDay. The next 6 bits are for n MonthDay. The remaining bits are unused.
:::image-end:::  

The underlying type of a bit field must be an integral type, as described in [Built-in types](../cpp/fundamental-types-cpp.md).

If the initializer for a reference of type `const T&` is an lvalue that refers to a bit field of type `T`, the reference isn't bound to the bit field directly. Instead, the reference is bound to a temporary initialized to hold the value of the bit field.

## Restrictions on bit fields

The following list details erroneous operations on bit fields:

- Taking the address of a bit field.

- Initializing a non-**`const`** reference with a bit field.

## See also

[Classes and Structs](../cpp/classes-and-structs-cpp.md)
