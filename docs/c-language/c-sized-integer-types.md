---
title: "C Sized Integer Types | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
  - "sized integer types"
ms.assetid: 0d6199b4-d0ab-4e8c-a769-785f5afb92eb
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
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
# C Sized Integer Types
**Microsoft Specific**  
  
 Microsoft C features support for sized integer types. You can declare 8-, 16-, 32-, or 64-bit integer variables by using the __int*n* type specifier, where *n* is the size, in bits, of the integer variable. The value of *n* can be 8, 16, 32, or 64. The following example declares one variable of each of the four types of sized integers:  
  
```  
__int8 nSmall;      // Declares 8-bit integer  
__int16 nMedium;    // Declares 16-bit integer  
__int32 nLarge;     // Declares 32-bit integer  
__int64 nHuge;      // Declares 64-bit integer  
```  
  
 The first three types of sized integers are synonyms for the ANSI types that have the same size, and are useful for writing portable code that behaves identically across multiple platforms. Note that the __int8 data type is synonymous with type char, \__int16 is synonymous with type short, and \__int32 is synonymous with type int. The \__int64 type has no equivalent ANSI counterpart.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Storage of Basic Types](../c-language/storage-of-basic-types.md)