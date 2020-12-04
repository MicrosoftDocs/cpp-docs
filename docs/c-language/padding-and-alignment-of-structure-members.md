---
description: "Learn more about: Padding and Alignment of Structure Members"
title: "Padding and Alignment of Structure Members"
ms.date: "10/18/2018"
helpviewer_keywords: ["structure members, padding and alignment"]
ms.assetid: c999820b-dd47-41fc-b923-e4c7ebbcd30f
---
# Padding and Alignment of Structure Members

**ANSI 3.5.2.1** The padding and alignment of members of structures and whether a bit field can straddle a storage-unit boundary

Structure members are stored sequentially in the order in which they are declared: the first member has the lowest memory address and the last member the highest.

Every data object has an alignment-requirement. The alignment-requirement for all data except structures, unions, and arrays is either the size of the object or the current packing size (specified with either /Zp or the `pack` pragma, whichever is less). For structures, unions, and arrays, the alignment-requirement is the largest alignment-requirement of its members. Every object is allocated an offset so that

*offset* **%** *alignment-requirement* **== 0**

Adjacent bit fields are packed into the same 1-, 2-, or 4-byte allocation unit if the integral types are the same size and if the next bit field fits into the current allocation unit without crossing the boundary imposed by the common alignment requirements of the bit fields.

## See also

[Structures, Unions, Enumerations, and Bit Fields](../c-language/structures-unions-enumerations-and-bit-fields.md)
