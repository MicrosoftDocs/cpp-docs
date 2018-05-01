---
title: "_get_output_format | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "_get_output_format"
api_location: 
  - "msvcr110_clr0400.dll"
  - "msvcr100.dll"
  - "msvcr80.dll"
  - "msvcrt.dll"
  - "msvcr90.dll"
  - "msvcr120.dll"
  - "msvcr110.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "get_output_format"
  - "_get_output_format"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "output formatting"
  - "get_output_format function"
  - "_get_output_format function"
ms.assetid: 0ce42f3b-3479-41c4-bcbf-1d21f7ee37e7
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _get_output_format
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_get_output_format](https://docs.microsoft.com/cpp/c-runtime-library/get-output-format).  
  
Gets the current value of the output format flag.  
  
> [!IMPORTANT]
>  This function is obsolete. Beginning in Visual Studio 2015, it is not available in the CRT.  
  
## Syntax  
  
```  
unsigned int _get_output_format();  
```  
  
## Return Value  
 The current value of the output format flag.  
  
## Remarks  
 The output format flag controls features of formatted I/O. At present the flag has two possible values: 0 and `_TWO_DIGIT_EXPONENT`. If `_TWO_DIGIT_EXPONENT` is set, the floating point numbers is printed with only two digits in the exponent unless a third digit is required by the size of the exponent. If the flag is zero, the floating point output displays three digits of exponent, using zeroes if necessary to pad the value to three digits.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_get_output_format`|\<stdio.h>|  
  
 For more compatibility information, see [Compatibility](../c-runtime-library/compatibility.md) in the Introduction.  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [printf, _printf_l, wprintf, _wprintf_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [printf_s, _printf_s_l, wprintf_s, _wprintf_s_l](../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md)   
 [printf Type Field Characters](../c-runtime-library/printf-type-field-characters.md)   
 [_set_output_format](../c-runtime-library/set-output-format.md)





