---
title: "Storage of Basic Types | Microsoft Docs"
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
  - "specifiers [C++], type"
  - "integral types, storage"
  - "storage [C++], types"
  - "floating-point numbers, storage"
  - "type specifiers [C++], sizes"
  - "arithmetic operations [C++], types"
  - "int data type"
  - "short data type"
  - "signed types [C++], storage"
  - "long double keyword [C], storage"
  - "long keyword [C]"
  - "double data type, storage"
  - "types [C], arithmetic"
  - "integral types"
  - "data types [C], specifiers"
  - "storing types [C++]"
  - "unsigned types [C++], storage"
  - "data types [C], storage"
ms.assetid: bd1f33c1-c6b9-4558-8a72-afb21aef3318
caps.latest.revision: 6
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
# Storage of Basic Types
The following table summarizes the storage associated with each basic type.  
  
### Sizes of Fundamental Types  
  
|Type|Storage|  
|----------|-------------|  
|`char`, `unsigned char`, **signed char**|1 byte|  
|**short**, **unsigned short**|2 bytes|  
|`int`, `unsigned int`|4 bytes|  
|**long**, `unsigned long`|4 bytes|  
|**float**|4 bytes|  
|**double**|8 bytes|  
|`long double`|8 bytes|  
  
 The C data types fall into general categories. The "integral types" include `char`, `int`, **short**, **long**, **signed**, `unsigned`, and `enum`. The "floating types" include **float**, **double**, and `long double`. The "arithmetic types" include all floating and integral types.  
  
## See Also  
 [Declarations and Types](../c-language/declarations-and-types.md)