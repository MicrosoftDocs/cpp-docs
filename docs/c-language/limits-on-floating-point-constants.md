---
title: "Limits on Floating-Point Constants | Microsoft Docs"
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
  - "ranges, floating-point constants"
  - "floating-point constants, limits"
  - "FLOAT.H header file"
  - "constants, floating-point"
  - "limits, floating-point constants"
  - "floating-point numbers, floating limits"
ms.assetid: 2d975868-2af6-45d7-a8af-db79f2c6b67b
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
# Limits on Floating-Point Constants
**Microsoft Specific**  
  
 Limits on the values of floating-point constants are given in the following table. The header file FLOAT.H contains this information.  
  
### Limits on Floating-Point Constants  
  
|Constant|Meaning|Value|  
|--------------|-------------|-----------|  
|**FLT_DIGDBL_DIGLDBL_DIG**|Number of digits, *q*, such that a floating-point number with *q* decimal digits can be rounded into a floating-point representation and back without loss of precision.|6 15 15|  
|**FLT_EPSILONDBL_EPSILONLDBL_EPSILON**|Smallest positive number *x*, such that *x* + 1.0 is not equal to 1.0|1.192092896e–07F 2.2204460492503131e–016 2.2204460492503131e–016|  
|**FLT_GUARD**||0|  
|**FLT_MANT_DIGDBL_MANT_DIGLDBL_MANT_DIG**|Number of digits in the radix specified by **FLT_RADIX** in the floating-point significand. The radix is 2; hence these values specify bits.|24 53 53|  
|**FLT_MAXDBL_MAXLDBL_MAX**|Maximum representable floating-point number.|3.402823466e+38F 1.7976931348623158e+308 1.7976931348623158e+308|  
|**FLT_MAX_10_EXPDBL_MAX_10_EXPLDBL_MAX_10_EXP**|Maximum integer such that 10 raised to that number is a representable floating-point number.|38 308 308|  
|**FLT_MAX_EXPDBL_MAX_EXPLDBL_MAX_EXP**|Maximum integer such that **FLT_RADIX** raised to that number is a representable floating-point number.|128 1024 1024|  
|**FLT_MINDBL_MINLDBL_MIN**|Minimum positive value.|1.175494351e–38F 2.2250738585072014e–308 2.2250738585072014e–308|  
|**FLT_MIN_10_EXPDBL_MIN_10_EXPLDBL_MIN_10_EXP**|Minimum negative integer such that 10 raised to that number is a representable floating-point number.|–37<br /><br /> –307<br /><br /> –307|  
|**FLT_MIN_EXPDBL_MIN_EXPLDBL_MIN_EXP**|Minimum negative integer such that **FLT_RADIX** raised to that number is a representable floating-point number.|–125<br /><br /> –1021<br /><br /> –1021|  
|**FLT_NORMALIZE**||0|  
|**FLT_RADIX_DBL_RADIX_LDBL_RADIX**|Radix of exponent representation.|2 2 2|  
|**FLT_ROUNDS_DBL_ROUNDS_LDBL_ROUNDS**|Rounding mode for floating-point addition.|1 (near) 1 (near) 1 (near)|  
  
 Note that the information in the above table may differ in future implementations.  
  
 **END Microsoft Specific**  
  
## See Also  
 [C Floating-Point Constants](../c-language/c-floating-point-constants.md)