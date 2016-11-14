---
title: "Conversions from Unsigned Integral Types | Microsoft Docs"
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
  - "integers, converting"
  - "type casts, involving integers"
  - "data type conversion [C++], signed and unsigned integers"
  - "type conversion [C++], signed and unsigned integers"
  - "integral conversions, from unsigned"
ms.assetid: 60fb7e10-bff9-4a13-8a48-e19f25a36a02
caps.latest.revision: 10
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
# Conversions from Unsigned Integral Types
An unsigned integer is converted to a shorter unsigned or signed integer by truncating the high-order bits, or to a longer unsigned or signed integer by zero-extending (see the [Conversions from Unsigned Integral Types](#_clang_table_4..3) table).  
  
 When the value with integral type is demoted to a signed integer with smaller size, or an unsigned integer is converted to its corresponding signed integer, the value is unchanged if it can be represented in the new type. However, the value it represents changes if the sign bit is set, as in the following example.  
  
```  
int j;  
unsigned short k = 65533;  
  
j = k;  
printf_s( "%hd\n", j );   // Prints -3  
```  
  
 If it cannot be represented, the result is implementation-defined. See [Type-Cast Conversions](../c-language/type-cast-conversions.md) for information on the Microsoft C compiler's handling of demotion of integers. The same behavior results from integer conversion or from type casting the integer.  
  
 Unsigned values are converted in a way that preserves their value and is not representable directly in C. The only exception is a conversion from `unsigned long` to **float**, which loses at most the low-order bits. Otherwise, value is preserved, signed or unsigned. When a value of integral type is converted to floating, and the value is outside the range representable, the result is undefined. (See [Storage of Basic Types](../c-language/storage-of-basic-types.md) for information about the range for integral and floating-point types.)  
  
 The following table summarizes conversions from unsigned integral types.  
  
### Conversions from Unsigned Integral Types  
  
|From|To|Method|  
|----------|--------|------------|  
|`unsigned char`|`char`|Preserve bit pattern; high-order bit becomes sign bit|  
|`unsigned char`|**short**|Zero-extend|  
|`unsigned char`|**long**|Zero-extend|  
|`unsigned char`|**unsigned short**|Zero-extend|  
|`unsigned char`|`unsigned long`|Zero-extend|  
|`unsigned char`|**float**|Convert to **long**; convert **long** to **float**|  
|`unsigned char`|**double**|Convert to **long**; convert **long** to **double**|  
|`unsigned char`|`long double`|Convert to **long**; convert **long** to **double**|  
|**unsigned short**|`char`|Preserve low-order byte|  
|**unsigned short**|**short**|Preserve bit pattern; high-order bit becomes sign bit|  
|**unsigned short**|**long**|Zero-extend|  
|**unsigned short**|`unsigned char`|Preserve low-order byte|  
|**unsigned short**|`unsigned long`|Zero-extend|  
|**unsigned short**|**float**|Convert to **long**; convert **long** to **float**|  
|**unsigned short**|**double**|Convert to **long**; convert **long** to **double**|  
|**unsigned short**|`long double`|Convert to **long**; convert **long** to **double**|  
|`unsigned long`|`char`|Preserve low-order byte|  
|`unsigned long`|**short**|Preserve low-order word|  
|`unsigned long`|**long**|Preserve bit pattern; high-order bit becomes sign bit|  
|`unsigned long`|`unsigned char`|Preserve low-order byte|  
|`unsigned long`|**unsigned short**|Preserve low-order word|  
|`unsigned long`|**float**|Convert to **long**; convert **long** to **float**|  
|`unsigned long`|**double**|Convert directly to **double**|  
|`unsigned long`|`long double`|Convert to **long**; convert **long** to **double**|  
  
 **Microsoft Specific**  
  
 For the Microsoft 32-bit C compiler, the `unsigned int` type is equivalent to the `unsigned long` type. Conversion of an `unsigned int` value proceeds in the same way as conversion of an `unsigned long`. Conversions from `unsigned long` values to **float** are not accurate if the value being converted is larger than the maximum positive signed **long** value.  
  
 **END Microsoft Specific**  
  
## See Also  
 [Assignment Conversions](../c-language/assignment-conversions.md)