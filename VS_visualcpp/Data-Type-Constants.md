---
title: "Data Type Constants"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: c0f1c405-0465-41d5-b5ff-e81cdb6f1622
caps.latest.revision: 6
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Data Type Constants
Data type constants are implementation-dependent ranges of values allowed for integral data types. The constants listed below give the ranges for the integral data types and are defined in LIMITS.H.  
  
> [!NOTE]
>  The /J compiler option changes the default `char` type to `unsigned`.  
  
|Constant|Value|Meaning|  
|--------------|-----------|-------------|  
|**SCHAR_MAX**|127|Maximum signed `char` value|  
|**SCHAR_MIN**|–128|Minimum signed `char` value|  
|**UCHAR_MAX**|255 (0xff)|Maximum `unsigned char` value|  
|**CHAR_BIT**|8|Number of bits in a `char`|  
|**USHRT_MAX**|65535 (0xffff)|Maximum **unsigned short** value|  
|**SHRT_MAX**|32767|Maximum (signed) **short** value|  
|**SHRT_MIN**|–32768|Minimum (signed) **short** value|  
|**UINT_MAX**|4294967295 (0xffffffff)|Maximum `unsigned int` value|  
|**ULONG_MAX**|4294967295 (0xffffffff)|Maximum `unsigned long` value|  
|**INT_MAX**|2147483647|Maximum (signed) `int` value|  
|**INT_MIN**|–2147483647–1|Minimum (signed) `int` value|  
|**LONG_MAX**|2147483647|Maximum (signed) **long** value|  
|**LONG_MIN**|–2147483647–1|Minimum (signed) **long** value|  
|**CHAR_MAX**|127 (255 if /J option used)|Maximum `char` value|  
|**CHAR_MIN**|–128 (0 if /J option used)|Minimum `char` value|  
|**MB_LEN_MAX**|2|Maximum number of bytes in multibyte `char`|  
|**_I64_MAX**|9223372036854775807|Maximum (signed) __**int64** value|  
|**_I64_MIN**|-9223372036854775807-1|Minimum (signed) __**int64** value|  
|**_UI64_MAX**|0xffffffffffffffff|Maximum (unsigned) __**int64** value|  
  
 The following constants give the range and other characteristics of the **double** and **float** data types, and are defined in FLOAT.H:  
  
|Constant|Value|Description|  
|--------------|-----------|-----------------|  
|**DBL_DIG**|15|# of decimal digits of precision|  
|**DBL_EPSILON**|2.2204460492503131e-016|Smallest such that 1.0+**DBL_EPSILON** !=1.0|  
|**DBL_MANT_DIG**|53|# of bits in mantissa|  
|**DBL_MAX**|1.7976931348623158e+308|Maximum value|  
|**DBL_MAX_10_EXP**|308|Maximum decimal exponent|  
|**DBL_MAX_EXP**|1024|Maximum binary exponent|  
|**DBL_MIN**|2.2250738585072014e-308|Minimum positive value|  
|**DBL_MIN_10_EXP**|(-307)|Minimum decimal exponent|  
|**DBL_MIN_EXP**|(–1021)|Minimum binary exponent|  
|**_DBL_RADIX**|2|Exponent radix|  
|**_DBL_ROUNDS**|1|Addition rounding: near|  
|**FLT_DIG**|6|Number of decimal digits of precision|  
|**FLT_EPSILON**|1.192092896e-07F|Smallest such that 1.0+**FLT_EPSILON** !=1.0|  
|**FLT_MANT_DIG**|24|Number of bits in mantissa|  
|**FLT_MAX**|3.402823466e+38F|Maximum value|  
|**FLT_MAX_10_EXP**|38|Maximum decimal exponent|  
|**FLT_MAX_EXP**|128|Maximum binary exponent|  
|**FLT_MIN**|1.175494351e-38F|Minimum positive value|  
|**FLT_MIN_10_EXP**|(–37)|Minimum decimal exponent|  
|**FLT_MIN_EXP**|(–125)|Minimum binary exponent|  
|**FLT_RADIX**|2|Exponent radix|  
|**FLT_ROUNDS**|1|Addition rounding: near|  
  
## See Also  
 [Global Constants](../VS_visualcpp/Global-Constants.md)