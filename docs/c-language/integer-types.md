---
title: "Integer Types | Microsoft Docs"
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
  - "integer data type, integer types in C++"
  - "integer constants"
  - "integer types"
  - "integers, types"
ms.assetid: c8926a5e-0e98-4e37-9b05-ce97961379bd
caps.latest.revision: 7
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
# Integer Types
Every integer constant is given a type based on its value and the way it is expressed. You can force any integer constant to type **long** by appending the letter **l** or **L** to the end of the constant; you can force it to be type `unsigned` by appending **u** or **U** to the value. The lowercase letter **l** can be confused with the digit 1 and should be avoided. Some forms of **long** integer constants follow:  
  
```  
/* Long decimal constants */  
10L  
79L  
  
/* Long octal constants */  
012L  
0115L  
  
/* Long hexadecimal constants */  
0xaL or 0xAL  
0X4fL or 0x4FL  
  
/* Unsigned long decimal constant */  
776745UL  
778866LU  
```  
  
 The type you assign to a constant depends on the value the constant represents. A constant's value must be in the range of representable values for its type. A constant's type determines which conversions are performed when the constant is used in an expression or when the minus sign (**–**) is applied. This list summarizes the conversion rules for integer constants.  
  
-   The type for a decimal constant without a suffix is either `int`, **long int**, or **unsigned long int**. The first of these three types in which the constant's value can be represented is the type assigned to the constant.  
  
-   The type assigned to octal and hexadecimal constants without suffixes is `int`, `unsigned int`, **long int**, or **unsigned long int** depending on the size of the constant.  
  
-   The type assigned to constants with a **u** or **U** suffix is **unsigned int** or **unsigned long int** depending on their size.  
  
-   The type assigned to constants with an **l** or **L** suffix is **long int** or **unsigned long int** depending on their size.  
  
-   The type assigned to constants with a **u** or **U** and an **l** or **L** suffix is **unsigned long int**.  
  
## See Also  
 [C Integer Constants](../c-language/c-integer-constants.md)