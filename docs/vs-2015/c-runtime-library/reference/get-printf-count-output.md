---
title: "_get_printf_count_output | Microsoft Docs"
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
  - "_get_printf_count_output"
api_location: 
  - "msvcrt.dll"
  - "msvcr80.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr100_clr0400.dll"
  - "msvcr110.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
  - "msvcr120_clr0400.dll"
  - "ucrtbase.dll"
  - "api-ms-win-crt-stdio-l1-1-0.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "get_printf_count_output"
  - "_get_printf_count_output"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "%n format"
  - "get_printf_count_output function"
  - "_get_printf_count_output function"
ms.assetid: 850f9f33-8319-433e-98d8-6a694200d994
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _get_printf_count_output
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_get_printf_count_output](https://docs.microsoft.com/cpp/c-runtime-library/reference/get-printf-count-output).  
  
Indicates whether [printf, _printf_l, wprintf, _wprintf_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)-family functions support the `%n` format.  
  
## Syntax  
  
```  
int _get_printf_count_output();  
```  
  
## Return Value  
 Non-zero if `%n` is supported, 0 if `%n` is not supported.  
  
## Remarks  
 If `%n` is not supported (the default), encountering `%n` in the format string of any of the `printf` functions will invoke the invalid parameter handler as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If `%n` support is enabled (see [_set_printf_count_output](../../c-runtime-library/reference/set-printf-count-output.md)) then `%n` will behave as described in [printf Type Field Characters](../../c-runtime-library/printf-type-field-characters.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_get_printf_count_output`|\<stdio.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
 See the example for [_set_printf_count_output](../../c-runtime-library/reference/set-printf-count-output.md).  
  
## NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`.





