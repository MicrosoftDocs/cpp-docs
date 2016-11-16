---
title: "Conversions from Floating-Point Types | Microsoft Docs"
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
  - "converting floating point"
  - "floating-point conversion"
ms.assetid: 96804c8e-fa3b-4742-9006-0082ed9e57f2
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
# Conversions from Floating-Point Types
A **float** value converted to a **double** or `long double`, or a **double** converted to a `long double`, undergoes no change in value. A **double** value converted to a **float** value is represented exactly, if possible. Precision may be lost if the value cannot be represented exactly. If the result is out of range, the behavior is undefined. See [Limits on Floating-Point Constants](../c-language/limits-on-floating-point-constants.md) for the range of floating-point types.  
  
 A floating value is converted to an integral value by first converting to a **long**, then from the **long** value to the specific integral value. The decimal portion of the floating value is discarded in the conversion to a **long**. If the result is still too large to fit into a **long**, the result of the conversion is undefined.  
  
 **Microsoft Specific**  
  
 When converting a **double** or `long double` floating-point number to a smaller floating-point number, the value of the floating-point variable is truncated toward zero when an underflow occurs. An overflow causes a run-time error. Note that the Microsoft C compiler maps `long double` to type **double**.  
  
 **END Microsoft Specific**  
  
 The following table summarizes conversions from floating types.  
  
### Conversions from Floating-Point Types  
  
|From|To|Method|  
|----------|--------|------------|  
|**float**|`char`|Convert to **long**; convert **long** to `char`|  
|**float**|**short**|Convert to **long**; convert **long** to **short**|  
|**float**|**long**|Truncate at decimal point. If result is too large to be represented as **long**, result is undefined.|  
|**float**|**unsigned short**|Convert to **long**; convert **long** to `unsigned` **short**|  
|**float**|`unsigned long`|Convert to **long**; convert **long** to `unsigned` **long**|  
|**float**|**double**|Change internal representation|  
|**float**|`long double`|Change internal representation|  
|**double**|`char`|Convert to **float**; convert **float** to `char`|  
|**double**|**short**|Convert to **float**; convert **float** to **short**|  
|**double**|**long**|Truncate at decimal point. If result is too large to be represented as **long**, result is undefined.|  
|**double**|**unsigned short**|Convert to **long**; convert **long** to **unsigned short**|  
|**double**|`unsigned long`|Convert to **long**; convert **long** to `unsigned` **long**|  
|**double**|**float**|Represent as a **float**. If **double** value cannot be represented exactly as **float**, loss of precision occurs. If value is too large to be represented as **float**, the result is undefined.|  
|`long double`|`char`|Convert to **float**; convert **float** to `char`|  
|`long double`|**short**|Convert to **float**; convert **float** to **short**|  
|`long double`|**long**|Truncate at decimal point. If result is too large to be represented as **long**, result is undefined.|  
|`long double`|**unsigned short**|Convert to **long**; convert **long** to `unsigned` **short**|  
|`long double`|`unsigned long`|Convert to **long**; convert **long** to `unsigned` **long**|  
|`long double`|**float**|Represent as a **float**. If **double** value cannot be represented exactly as **float**, loss of precision occurs. If value is too large to be represented as **float**, the result is undefined.|  
|`long double`|**double**|The **long double** value is treated as **double**.|  
  
 Conversions from **float**, **double**, or `long double` values to `unsigned long` are not accurate if the value being converted is larger than the maximum positive **long** value.  
  
## See Also  
 [Assignment Conversions](../c-language/assignment-conversions.md)