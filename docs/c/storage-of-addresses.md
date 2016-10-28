---
title: "Storage of Addresses"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "storage [C++], addresses"
  - "addresses [C++], storage of"
ms.assetid: 423b2402-b847-4788-ad70-943b7c9c5c8b
caps.latest.revision: 7
ms.author: "mithom"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Storage of Addresses
The amount of storage required for an address and the meaning of the address depend on the implementation of the compiler. Pointers to different types are not guaranteed to have the same length. Therefore, **sizeof(char \*)** is not necessarily equal to **sizeof(int \*)**.  
  
 **Microsoft Specific**  
  
 For the Microsoft C compiler, **sizeof(char \*)** is equal to **sizeof(int \*)**.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Pointer Declarations](../c/pointer-declarations.md)