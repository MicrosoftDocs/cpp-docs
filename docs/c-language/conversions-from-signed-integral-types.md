---
title: "Conversions from Signed Integral Types | Microsoft Docs"
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
  - "integral conversions, from signed"
  - "integers, converting"
  - "conversions [C++], integral"
  - "data type conversion [C++], signed and unsigned integers"
  - "type conversion [C++], signed and unsigned integers"
ms.assetid: 5eea32f8-8b14-413d-acac-c063b3d118d7
caps.latest.revision: 9
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
# Conversions from Signed Integral Types
When a signed integer is converted to an unsigned integer with equal or greater size and the value of the signed integer is not negative, the value is unchanged. The conversion is made by sign-extending the signed integer. A signed integer is converted to a shorter signed integer by truncating the high-order bits. The result is interpreted as an unsigned value, as shown in this example.  
  
```  
int i = -3;  
unsigned short u;  
  
u = i;   
printf_s( "%hu\n", u );  // Prints 65533  
  
```  
  
 No information is lost when a signed integer is converted to a floating value, except that some precision may be lost when a **long int** or **unsigned long int** value is converted to a **float** value.  
  
 The following table summarizes conversions from signed integral types. This table assumes that the `char` type is signed by default. If you use a compile-time option to change the default for the `char` type to unsigned, the conversions given in the [Conversions from Unsigned Integral Types](../c-language/conversions-from-unsigned-integral-types.md) table for the `unsigned char` type apply instead of the conversions in the following table, Conversions from Signed Integral Types.  
  
### Conversions from Signed Integral Types  
  
|From|To|Method|  
|----------|--------|------------|  
|`char`1|**short**|Sign-extend|  
|`char`|**long**|Sign-extend|  
|`char`|`unsigned char`|Preserve pattern; high-order bit loses function as sign bit|  
|`char`|**unsigned short**|Sign-extend to **short**; convert **short** to **unsigned short**|  
|`char`|`unsigned long`|Sign-extend to **long**; convert **long** to `unsigned long`|  
|`char`|**float**|Sign-extend to **long**; convert **long** to **float**|  
|`char`|**double**|Sign-extend to **long**; convert **long** to **double**|  
|`char`|`long double`|Sign-extend to **long**; convert **long** to **double**|  
|**short**|`char`|Preserve low-order byte|  
|**short**|**long**|Sign-extend|  
|**short**|`unsigned char`|Preserve low-order byte|  
|**short**|**unsigned short**|Preserve bit pattern; high-order bit loses function as sign bit|  
|**short**|`unsigned long`|Sign-extend to **long**; convert **long** to `unsigned long`|  
|**short**|**float**|Sign-extend to **long**; convert **long** to **float**|  
|**short**|**double**|Sign-extend to **long**; convert **long** to **double**|  
|**short**|`long double`|Sign-extend to **long**; convert **long** to **double**|  
|**long**|`char`|Preserve low-order byte|  
|**long**|**short**|Preserve low-order word|  
|**long**|`unsigned char`|Preserve low-order byte|  
|**long**|**unsigned short**|Preserve low-order word|  
|**long**|`unsigned long`|Preserve bit pattern; high-order bit loses function as sign bit|  
|**long**|**float**|Represent as **float**. If **long** cannot be represented exactly, some precision is lost.|  
|**long**|**double**|Represent as **double**. If **long** cannot be represented exactly as a **double**, some precision is lost.|  
|**long**|`long double`|Represent as **double**. If **long** cannot be represented exactly as a **double**, some precision is lost.|  
  
 1. All `char` entries assume that the `char` type is signed by default.  
  
 **Microsoft Specific**  
  
 For the Microsoft 32-bit C compiler, an integer is equivalent to a **long**. Conversion of an `int` value proceeds the same as for a **long**.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Assignment Conversions](../c-language/assignment-conversions.md)