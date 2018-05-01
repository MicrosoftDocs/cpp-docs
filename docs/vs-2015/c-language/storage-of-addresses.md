---
title: "Storage of Addresses | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "storage [C++], addresses"
  - "addresses [C++], storage of"
ms.assetid: 423b2402-b847-4788-ad70-943b7c9c5c8b
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Storage of Addresses
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Storage of Addresses](https://docs.microsoft.com/cpp/c-language/storage-of-addresses).  
  
The amount of storage required for an address and the meaning of the address depend on the implementation of the compiler. Pointers to different types are not guaranteed to have the same length. Therefore, **sizeof(char \*)** is not necessarily equal to **sizeof(int \*)**.  
  
 **Microsoft Specific**  
  
 For the Microsoft C compiler, **sizeof(char \*)** is equal to **sizeof(int \*)**.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Pointer Declarations](../c-language/pointer-declarations.md)





