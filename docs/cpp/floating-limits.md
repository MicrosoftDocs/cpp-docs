---
title: "Floating Limits | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ranges, floating-point constants"
  - "floating-point constants, limits"
  - "FLOAT.H header file"
  - "limits, floating-point constants"
  - "floating-point numbers, floating limits"
ms.assetid: fc718652-1f4c-4ed8-af60-0e769637459c
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
# Floating Limits
**Microsoft Specific**  
  
 The following table lists the limits on the values of floating-point constants. These limits are also defined in the standard header file FLOAT.H.  
  
### Limits on Floating-Point Constants  
  
|Constant|Meaning|Value|  
|--------------|-------------|-----------|  
|FLT_DIG DBL_DIG LDBL_DIG|Number of digits, q,  such that a floating-point number with q decimal digits can be rounded  into a floating-point representation and back without loss of precision.|6 15 15|  
|FLT_EPSILON DBL_EPSILON LDBL_EPSILON|Smallest positive number  x, such that x + 1.0 is  not equal to 1.0.|1.192092896e–07F 2.2204460492503131e–016 2.2204460492503131e–016|  
|FLT_GUARD||0|  
|FLT_MANT_DIG DBL_MANT_DIG LDBL_MANT_DIG|Number of digits in the  radix specified by FLT_RADIX in the  floating-point significand. The radix is 2; hence  these values specify bits.|24 53 53|  
|FLT_MAX DBL_MAX LDBL_MAX|Maximum representable  floating-point number.|3.402823466e+38F 1.7976931348623158e+308 1.7976931348623158e+308|  
|FLT_MAX_10_EXP DBL_MAX_10_EXP LDBL_MAX_10_EXP|Maximum integer such  that 10 raised to that number is a representable floating-point number.|38 308 308|  
|FLT_MAX_EXP DBL_MAX_EXP LDBL_MAX_EXP|Maximum integer such  that FLT_RADIX raised  to that number is a representable floating- point number.|128 1024 1024|  
|FLT_MIN DBL_MIN LDBL_MIN|Minimum positive value.|1.175494351e–38F 2.2250738585072014e–308 2.2250738585072014e–308|  
|FLT_MIN_10_EXP DBL_MIN_10_EXP LDBL_MIN_10_EXP|Minimum negative integer such that 10 raised to  that number is a representable floating- point number.|–37<br /><br /> –307<br /><br /> –307|  
|FLT_MIN_EXP DBL_MIN_EXP LDBL_MIN_EXP|Minimum negative integer such that FLT_RADIX raised to that number is  a representable floating-point number.|–125<br /><br /> –1021<br /><br /> –1021|  
|FLT_NORMALIZE||0|  
|FLT_RADIX _DBL_RADIX _LDBL_RADIX|Radix of exponent representation.|2 2 2|  
|FLT_ROUNDS _DBL_ROUNDS _LDBL_ROUNDS|Rounding mode for  floating-point addition.|1 (near) 1 (near) 1 (near)|  
  
> [!NOTE]
>  The information in the table may differ in future versions of the product.  
  
## END Microsoft Specific  
  
## See Also  
 [Integer Limits](../cpp/integer-limits.md)