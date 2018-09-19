---
title: "Storage of Addresses | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["storage [C++], addresses", "addresses [C++], storage of"]
ms.assetid: 423b2402-b847-4788-ad70-943b7c9c5c8b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Storage of Addresses

The amount of storage required for an address and the meaning of the address depend on the implementation of the compiler. Pointers to different types are not guaranteed to have the same length. Therefore, **sizeof(char \*)** is not necessarily equal to **sizeof(int \*)**.

**Microsoft Specific**

For the Microsoft C compiler, **sizeof(char \*)** is equal to **sizeof(int \*)**.

**END Microsoft Specific**

## See Also

[Pointer Declarations](../c-language/pointer-declarations.md)