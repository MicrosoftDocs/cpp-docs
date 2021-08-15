---
description: "Learn more about: Storage and Alignment of Structures"
title: "Storage and Alignment of Structures"
ms.date: "11/04/2016"
helpviewer_keywords: ["alignment of structures", "structure storage", "storing structures", "packing structures"]
ms.assetid: 60ff292f-2595-4f37-ae00-4c4b4f047196
---
# Storage and Alignment of Structures

**Microsoft Specific**

Structure members are stored sequentially in the order in which they are declared: the first member has the lowest memory address and the last member the highest.

Every data object has an *alignment-requirement*. For structures, the requirement is the largest of its members. Every object is allocated an *offset* so that

*offset* `%` *alignment-requirement* `==` 0

Adjacent bit fields are packed into the same 1-, 2-, or 4-byte allocation unit if the integral types are the same size and if the next bit field fits into the current allocation unit without crossing the boundary imposed by the common alignment requirements of the bit fields.

To conserve space or to conform to existing data structures, you may want to store structures more or less compactly. The [/Zp](../build/reference/zp-struct-member-alignment.md)[*n*] compiler option and the [#pragma pack](../preprocessor/pack.md) control how structure data is "packed" into memory. When you use the /Zp[*n*] option, where *n* is 1, 2, 4, 8, or 16, each structure member after the first is stored on byte boundaries that are either the alignment requirement of the field or the packing size (*n*), whichever is smaller. Expressed as a formula, the byte boundaries are the

```
min( n, sizeof( item ) )
```

where *n* is the packing size expressed with the /Zp[*n*] option and *item* is the structure member. The default packing size is /Zp8.

To use the `pack` pragma to specify packing other than the packing specified on the command line for a particular structure, give the `pack` pragma, where the packing size is 1, 2, 4, 8, or 16, before the structure. To reinstate the packing given on the command line, specify the `pack` pragma with no arguments.

Bit fields default to size **`long`** for the Microsoft C compiler. Structure members are aligned on the size of the type or the /Zp[*n*] size, whichever is smaller. The default size is 4.

**END Microsoft Specific**

## See also

[Structure Declarations](../c-language/structure-declarations.md)
