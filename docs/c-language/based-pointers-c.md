---
description: "Learn more about: Based Pointers (C)"
title: "Based Pointers (C)"
ms.date: "11/04/2016"
helpviewer_keywords: ["__based keyword [C]", "based pointers", "pointers, based", "based addressing"]
ms.assetid: b5446920-89e0-4e2f-91f3-1f2a769a08e8
---
# Based Pointers (C)

**Microsoft Specific**

[__based (C++ Reference)](../cpp/based-pointers-cpp.md)

For the Microsoft 32-bit and 64-bit C compilers, a based pointer is a 32-bit or 64-bit offset from a 32-bit or 64-bit pointer base. Based addressing is useful for exercising control over sections where objects are allocated, thereby decreasing the size of the executable file and increasing execution speed. In general, the form for specifying a based pointer is

> *type* **__based(** *base* **)** *declarator*

The "based on pointer" variant of based addressing enables specification of a pointer as a base. The based pointer, then, is an offset into the memory section starting at the beginning of the pointer on which it is based. Pointers based on pointer addresses are the only form of the **`__based`** keyword valid in 32-bit and 64-bit compilations. In such compilations, they are 32-bit or 64-bit displacements from a 32-bit or 64-bit base.

One use for pointers based on pointers is for persistent identifiers that contain pointers. A linked list that consists of pointers based on a pointer can be saved to disk, then reloaded to another place in memory, with the pointers remaining valid.

The following example shows a pointer based on a pointer.

```C
void *vpBuffer;

struct llist_t
{
    void __based( vpBuffer ) *vpData;
    struct llist_t __based( vpBuffer ) *llNext;
};
```

The pointer `vpBuffer` is assigned the address of memory allocated at some later point in the program. The linked list is relocated relative to the value of `vpBuffer`.

**END Microsoft Specific**

## See also

[Declarators and Variable Declarations](../c-language/declarators-and-variable-declarations.md)
