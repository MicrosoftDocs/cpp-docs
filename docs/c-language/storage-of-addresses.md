---
description: "Learn more about: Storage of Addresses"
title: "Storage of Addresses"
ms.date: "11/04/2016"
helpviewer_keywords: ["storage [C++], addresses", "addresses [C++], storage of"]
ms.assetid: 423b2402-b847-4788-ad70-943b7c9c5c8b
---
# Storage of Addresses

The amount of storage required for an address and the meaning of the address depend on the implementation of the compiler. Pointers to different types are not guaranteed to have the same length. Therefore, **sizeof(char \*)** is not necessarily equal to **sizeof(int \*)**.

**Microsoft Specific**

For the Microsoft C compiler, **sizeof(char \*)** is equal to **sizeof(int \*)**.

**END Microsoft Specific**

## See also

[Pointer Declarations](../c-language/pointer-declarations.md)
