---
title: "Data Type Constants | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "FLT_MIN"
  - "SHRT_MAX"
  - "CHAR_MIN"
  - "MB_LEN_MAX"
  - "DBL_EPSILON"
  - "SHRT_MIN"
  - "_FLT_RADIX"
  - "FLT_DIG"
  - "FLT_MAX_10_EXP"
  - "FLT_MANT_DIG"
  - "DBL_MAX_EXP"
  - "SCHAR_MIN"
  - "SCHAR_MAX"
  - "DBL_MIN"
  - "FLT_MIN_10_EXP"
  - "_DBL_ROUNDS"
  - "USHRT_MAX"
  - "FLT_MAX_EXP"
  - "LONG_MAX"
  - "DBL_MAX"
  - "DBL_DIG"
  - "FLT_MIN_EXP"
  - "INT_MIN"
  - "DBL_MIN_10_EXP"
  - "CHAR_BIT"
  - "INT_MAX"
  - "ULONG_MAX"
  - "DBL_MIN_EXP"
  - "LONG_MIN"
  - "_FLT_ROUNDS"
  - "DBL_MANT_DIG"
  - "_DBL_RADIX"
  - "CHAR_MAX"
  - "FLT_MAX"
  - "DBL_MAX_10_EXP"
  - "UCHAR_MAX"
  - "FLT_EPSILON"
  - "UINT_MAX"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "DBL_MAX_EXP constant"
  - "_DBL_RADIX constant"
  - "FLT_MIN_EXP constant"
  - "DBL_EPSILON constant"
  - "INT_MIN constant"
  - "FLT_EPSILON constant"
  - "DBL_MANT_DIG constant"
  - "_FLT_RADIX constant"
  - "DBL_MIN constant"
  - "USHRT_MAX constant"
  - "FLT_MAX_10_EXP constant"
  - "_FLT_ROUNDS constant"
  - "data type constants [C++]"
  - "_DBL_ROUNDS constant"
  - "CHAR_MAX constant"
  - "FLT_MAX_EXP constant"
  - "FLT_MIN constant"
  - "CHAR_MIN constant"
  - "FLT_MIN_10_EXP constant"
  - "DBL_MIN_EXP constant"
  - "SCHAR_MAX constant"
  - "FLT_RADIX constant"
  - "CHAR_BIT constant"
  - "UCHAR_MAX constant"
  - "DBL_RADIX constant"
  - "FLT_ROUNDS constant"
  - "LONG_MIN constant"
  - "SHRT_MAX constant"
  - "LONG_MAX constant"
  - "DBL_MAX_10_EXP constant"
  - "DBL_MIN_10_EXP constant"
  - "INT_MAX constant"
  - "constants [C++], data type"
  - "ULONG_MAX constant"
  - "FLT_DIG constant"
  - "MB_LEN_MAX constant"
  - "DBL_DIG constant"
  - "SHRT_MIN constant"
  - "DBL_MAX constant"
  - "DBL_ROUNDS constant"
  - "FLT_MAX constant"
  - "UINT_MAX constant"
  - "FLT_MANT_DIG constant"
  - "SCHAR_MIN constant"
ms.assetid: c0f1c405-0465-41d5-b5ff-e81cdb6f1622
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
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
 [Global Constants](../c-runtime-library/global-constants.md)