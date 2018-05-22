---
title: "printf Width Specification | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_location: 
  - "msvcr110.dll"
  - "msvcr80.dll"
  - "msvcr100.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr90.dll"
  - "msvcr120.dll"
api_type: 
  - "DLLExport"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "printf function, width specification"
  - "printf function, format specification fields"
ms.assetid: 8b4a1b1e-bf6e-414f-a1b6-a9b6f1b6ce92
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# printf Width Specification
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Visual Studio 2017 Documentation](https://docs.microsoft.com/en-us/visualstudio/).  
  
In a format specification, the second optional field is the width specification. The `width` argument is a non-negative decimal integer that controls the minimum number of characters that are output. If the number of characters in the output value is less than the specified width, blanks are added to the left or the right of the values—depending on whether the left alignment flag (`-`) is specified—until the minimum width is reached. If `width` is prefixed by 0, leading zeros are added to integer or floating-point conversions until the minimum width is reached, except when conversion is to an infinity or NAN.  
  
 The width specification never causes a value to be truncated. If the number of characters in the output value is greater than the specified width, or if `width` is not given, all characters of the value are output, subject to the [precision](../c-runtime-library/precision-specification.md) specification.  
  
 If the width specification is an asterisk (`*`), an `int` argument from the argument list supplies the value. The `width` argument must precede the value that's being formatted in the argument list, as shown in this example:  
  
 `printf("%0*f", 5, 3);  /* 00003 is output */`  
  
 A missing or small `width` value in a format specification does not cause the truncation of an output value. If the result of a conversion is wider than the `width` value, the field expands to contain the conversion result.  
  
## See Also  
 [printf, _printf_l, wprintf, _wprintf_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [Format Specification Syntax: printf and wprintf Functions](../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)   
 [Flag Directives](../c-runtime-library/flag-directives.md)   
 [Precision Specification](../c-runtime-library/precision-specification.md)   
 [Size Specification](../c-runtime-library/size-specification.md)   
 [printf Type Field Characters](../c-runtime-library/printf-type-field-characters.md)





