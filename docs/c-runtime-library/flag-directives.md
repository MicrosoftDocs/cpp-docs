---
title: "Flag Directives | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr120.dll"
  - "msvcr100.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
apitype: "DLLExport"
f1_keywords: 
  - "c.flags"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "format specification fields for printf function"
  - "print flag directives"
  - "printf function, format specification fields"
  - "flag directives printf function"
ms.assetid: b00cbdc9-1e5c-4b30-9f56-c1ef8d383767
caps.latest.revision: 12
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
# Flag Directives
In a format specification, the first optional field is `flags`. A flag directive is a character that specifies output justification and output of signs, blanks, leading zeros, decimal points, and octal and hexadecimal prefixes. More than one flag directive may appear in a format specification, and flags can appear in any order.  
  
### Flag Characters  
  
|Flag|Meaning|Default|  
|----------|-------------|-------------|  
|`–`|Left align the result within the given field width.|Right align.|  
|`+`|Use a sign (+ or –) to prefix the output value if it is of a signed type.|Sign appears only for negative signed values (–).|  
|`0`|If `width` is prefixed by `0`, leading zeros are added until the minimum width is reached. If both `0` and `–` appear, the `0` is ignored. If `0` is specified as an integer format (`i`, `u`, `x`, `X`, `o`, `d`) and a precision specification is also present—for example, `%04.d`—the `0` is ignored.|No padding.|  
|blank (' ')|Use a blank to prefix the output value if it is signed and positive. The blank is ignored if both the blank and + flags appear.|No blank appears.|  
|`#`|When it's used with the `o`, `x`, or `X` format, the `#` flag uses 0, 0x, or 0X, respectively, to prefix any nonzero output value.|No blank appears.|  
||When it's used with the `e`, `E`, `f`, `a` or `A` format, the `#` flag forces the output value to contain a decimal point.|Decimal point appears only if digits follow it.|  
||When it's used with the `g` or `G` format, the `#` flag forces the output value to contain a decimal point and prevents the truncation of trailing zeros.<br /><br /> Ignored when used with `c`, `d`, `i`, `u`, or `s`.|Decimal point appears only if digits follow it. Trailing zeros are truncated.|  
  
## See Also  
 [printf, _printf_l, wprintf, _wprintf_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [Format Specification Syntax: printf and wprintf Functions](../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)   
 [printf Width Specification](../c-runtime-library/printf-width-specification.md)   
 [Precision Specification](../c-runtime-library/precision-specification.md)   
 [Size Specification](../c-runtime-library/size-specification.md)   
 [printf Type Field Characters](../c-runtime-library/printf-type-field-characters.md)