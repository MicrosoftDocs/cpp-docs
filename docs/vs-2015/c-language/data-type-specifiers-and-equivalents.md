---
title: "Data Type Specifiers and Equivalents | Microsoft Docs"
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
  - "type specifiers [C++], list"
  - "widening integers"
  - "data types [C++], equivalents"
  - "sign-extending integral types"
  - "zero-extending"
  - "identifiers, data type"
  - "data types [C++], specifiers"
  - "simple types, names"
  - "type names [C++], simple"
ms.assetid: 0d4b515a-4f68-4786-83cf-a5d43c7cb6f3
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Data Type Specifiers and Equivalents
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Data Type Specifiers and Equivalents](https://docs.microsoft.com/cpp/c-language/data-type-specifiers-and-equivalents).  
  
This book generally uses the forms of the type specifiers listed in the following table rather than the long forms, and it assumes that the `char` type is signed by default. Therefore, throughout this book, `char` is equivalent to **signed char**.  
  
### Type Specifiers and Equivalents  
  
|Type Specifier|Equivalent(s)|  
|--------------------|---------------------|  
|**signed char**1|`char`|  
|**signed int**|**signed**, `int`|  
|**signed short int**|**short**, `signed short`|  
|**signed long int**|**long**, **signed long**|  
|`unsigned char`|—|  
|`unsigned int`|`unsigned`|  
|**unsigned short int**|**unsigned short**|  
|**unsigned long int**|`unsigned long`|  
|**float**|—|  
|`long double`2|—|  
  
 1   When you make the `char` type unsigned by default (by specifying the /J compiler option), you cannot abbreviate **signed char** as `char`.  
  
 2   In 32-bit operating systems, the Microsoft C compiler maps **long double** to type **double**.  
  
 **Microsoft Specific**  
  
 You can specify the /J compiler option to change the default `char` type from signed to unsigned. When this option is in effect, `char` means the same as `unsigned char`, and you must use the **signed** keyword to declare a signed character value. If a `char` value is explicitly declared signed, the /J option does not affect it, and the value is sign-extended when widened to an `int` type. The `char` type is zero-extended when widened to `int` type.  
  
 **END Microsoft Specific**  
  
## See Also  
 [C Type Specifiers](../c-language/c-type-specifiers.md)





