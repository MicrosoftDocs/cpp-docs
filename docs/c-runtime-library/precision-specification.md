---
title: "Precision Specification | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr100.dll"
  - "msvcr120.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr90.dll"
  - "msvcr80.dll"
apitype: "DLLExport"
f1_keywords: 
  - "c.math"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "printf function, format specification fields"
ms.assetid: dc59ea4e-d23a-4f1f-9881-2c919ebefb82
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Precision Specification
In a format specification, the third optional field is the precision specification. It consists of a period (.) followed by a non-negative decimal integer that, depending on the conversion type, specifies the number of string characters, the number of decimal places, or the number of significant digits to be output.  
  
 Unlike the width specification, the precision specification can cause either truncation of the output value or rounding of a floating-point value. If `precision` is specified as 0 and the value to be converted is 0, the result is no characters output, as shown in this example:  
  
 `printf( "%.0d", 0 );      /* No characters output */`  
  
 If the precision specification is an asterisk (*), an `int` argument from the argument list supplies the value. In the argument list, the `precision` argument must precede the value that's being formatted, as shown in this example:  
  
 `printf( "%.*f", 3, 3.14159265 );  /* 3.142 output */`  
  
 The type determines either the interpretation of `precision` or the default precision when `precision` is omitted, as shown in the following table.  
  
### How Precision Values Affect Type  
  
|Type|Meaning|Default|  
|----------|-------------|-------------|  
|`a`, `A`|The precision specifies the number of digits after the point.|Default precision is 6. If precision is 0, no decimal point is printed unless the `#` flag is used.|  
|`c`, `C`|The precision has no effect.|Character is printed.|  
|`d`, `i`, `u`, `o`, `x`, `X`|The precision specifies the minimum number of digits to be printed. If the number of digits in the argument is less than `precision`, the output value is padded on the left with zeros. The value is not truncated when the number of digits exceeds `precision`.|Default precision is 1.|  
|`e`, `E`|The precision specifies the number of digits to be printed after the decimal point. The last printed digit is rounded.|Default precision is 6. If `precision` is 0 or the period (.) appears without a number following it, no decimal point is printed.|  
|`f`|The precision value specifies the number of digits after the decimal point. If a decimal point appears, at least one digit appears before it. The value is rounded to the appropriate number of digits.|Default precision is 6. If `precision` is 0, or if the period (.) appears without a number following it, no decimal point is printed.|  
|`g`, `G`|The precision specifies the maximum number of significant digits printed.|Six significant digits are printed, and any trailing zeros are truncated.|  
|`s`, `S`|The precision specifies the maximum number of characters to be printed. Characters in excess of `precision` are not printed.|Characters are printed until a null character is encountered.|  
  
## See Also  
 [printf, _printf_l, wprintf, _wprintf_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [Format Specification Syntax: printf and wprintf Functions](../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)   
 [Flag Directives](../c-runtime-library/flag-directives.md)   
 [printf Width Specification](../c-runtime-library/printf-width-specification.md)   
 [Size Specification](../c-runtime-library/size-specification.md)   
 [printf Type Field Characters](../c-runtime-library/printf-type-field-characters.md)