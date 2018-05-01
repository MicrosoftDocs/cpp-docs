---
title: "_set_printf_count_output | Microsoft Docs"
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
  - "_set_printf_count_output"
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
  - "set_printf_count_output"
  - "_set_printf_count_output"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "%n format"
  - "set_printf_count_output function"
  - "_set_printf_count_output function"
ms.assetid: d8259ec5-764e-42d0-9169-72172e95163b
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _set_printf_count_output
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_set_printf_count_output](https://docs.microsoft.com/cpp/c-runtime-library/reference/set-printf-count-output).  
  
Enable or disable support of the `%n` format in [printf, _printf_l, wprintf, _wprintf_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)-family functions.  
  
## Syntax  
  
```  
int _set_printf_count_output(  
   int enable  
);  
```  
  
#### Parameters  
 `enable`  
 A non-zero value to enable `%n` support, 0 to disable `%n` support.  
  
## Property Value/Return Value  
 The state of `%n` support before calling this function: non-zero if `%n` support was enabled, 0 if it was disabled.  
  
## Remarks  
 Because of security reasons, support for the `%n` format specifier is disabled by default in `printf` and all its variants. If `%n` is encountered in a `printf` format specification, the default behavior is to invoke the invalid parameter handler as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). Calling `_set_printf_count_output` with a non-zero argument will cause `printf`-family functions to interpret `%n` as described in [printf Type Field Characters](../../c-runtime-library/printf-type-field-characters.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_set_printf_count_output`|\<stdio.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_set_printf_count_output.c  
#include <stdio.h>  
  
int main()  
{  
   int e;  
   int i;  
   e = _set_printf_count_output( 1 );  
   printf( "%%n support was %sabled.\n",  
        e ? "en" : "dis" );  
   printf( "%%n support is now %sabled.\n",  
        _get_printf_count_output() ? "en" : "dis" );  
   printf( "12345%n6789\n", &i ); // %n format should set i to 5  
   printf( "i = %d\n", i );  
}  
```  
  
## Output  
  
```  
%n support was disabled.  
%n support is now enabled.  
123456789  
i = 5  
```  
  
## NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [_get_printf_count_output](../../c-runtime-library/reference/get-printf-count-output.md)





