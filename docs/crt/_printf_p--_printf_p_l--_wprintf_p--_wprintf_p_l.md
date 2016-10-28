---
title: "_printf_p, _printf_p_l, _wprintf_p, _wprintf_p_l"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "_printf_p"
  - "_wprintf_p"
  - "_printf_p_l"
  - "_wprintf_p_l"
apilocation: 
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
apitype: "DLLExport"
f1_keywords: 
  - "wprintf_p"
  - "_wprintf_p"
  - "printf_p_l"
  - "_printf_p"
  - "printf_p"
  - "_wprintf_p_l"
  - "_printf_p_l"
  - "wprintf_p_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "printf_p function"
  - "printf_p_l function"
  - "wprintf_p function"
  - "wprintf_p_l function"
  - "_tprintf_p_l function"
  - "_wprintf_p function"
  - "_wprintf_p_l function"
  - "_printf_p function"
  - "tprintf_p_l function"
  - "_printf_p_l function"
ms.assetid: 1b7e9ef9-a069-45db-af9d-c2730168322e
caps.latest.revision: 20
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
# _printf_p, _printf_p_l, _wprintf_p, _wprintf_p_l
Prints formatted output to the standard output stream, and enables specification of the order in which parameters are used in the format string.  
  
## Syntax  
  
```  
int _printf_p(  
   const char *format [,  
   argument]...   
);  
int _printf_p_l(  
   const char *format,  
   locale_t locale [,  
   argument]...   
);  
int _wprintf_p(  
   const wchar_t *format [,  
   argument]...   
);  
int _wprintf_p_l(  
   const wchar_t *format,  
   locale_t locale [,  
   argument]...   
);  
```  
  
#### Parameters  
 `format`  
 Format control.  
  
 `argument`  
 Optional arguments.  
  
 `locale`  
 The locale to use.  
  
## Return Value  
 Returns the number of characters printed or a negative value if an error occurs.  
  
## Remarks  
 The `_printf_p` function formats and prints a series of characters and values to the standard output stream, `stdout`. If arguments follow the `format` string, the `format` string must contain specifications that determine the output format for the arguments (see [printf_p Positional Parameters](../crt/printf_p-positional-parameters.md)).  
  
 The difference between `_printf_p` and `printf_s` is that `_printf_p` supports positional parameters, which allows specifying the order in which the arguments are used in the format string. For more information, see [printf_p Positional Parameters](../crt/printf_p-positional-parameters.md).  
  
 `_wprintf_p` is the wide-character version of `_printf_p`; they behave identically if the stream is opened in ANSI mode. `_printf_p` doesn't currently support output into a UNICODE stream.  
  
 The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.  
  
> [!IMPORTANT]
>  Ensure that `format` is not a user-defined string.  
  
 If `format` or `argument` are `NULL`, or of the format string contains invalid formatting characters, `_printf_p` and `_wprintf_p` functions invoke an invalid parameter handler, as described in [Parameter Validation](../crt/parameter-validation.md). If execution is allowed to continue, the function returns -1 and sets `errno` to `EINVAL`.  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tprintf_p`|`_printf_p`|`_printf_p`|`_wprintf_p`|  
|`_tprintf_p_l`|`_printf_p_l`|`_printf_p_l`|`_wprintf_p_l`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_printf_p`, `_printf_p_l`|\<stdio.h>|  
|`_wprintf_p`, `_wprintf_p_l`|\<stdio.h> or \<wchar.h>|  
  
 The console is not supported in [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] apps. The standard stream handles that are associated with the console—`stdin`, `stdout`, and `stderr`—must be redirected before C run-time functions can use them in [!INCLUDE[win8_appname_long](../build/includes/win8_appname_long_md.md)] apps. For more compatibility information, see [Compatibility](../crt/compatibility.md).  
  
## Example  
  
```  
// crt_printf_p.c  
// This program uses the _printf_p and _wprintf_p  
// functions to choose the order in which parameters  
// are used.  
  
#include <stdio.h>  
  
int main( void )  
{  
   // Positional arguments   
   _printf_p( "Specifying the order: %2$s %3$s %1$s %4$s %5$s.\n",  
              "little", "I'm", "a", "tea", "pot");  
  
   // Resume arguments  
   _wprintf_p( L"Reusing arguments: %1$d %1$d %1$d %1$d\n", 10);  
  
   // Width argument  
   _printf_p("Width specifiers: %1$*2$s", "Hello\n", 10);  
}  
```  
  
 **Specifying the order: I'm a little tea pot.**  
**Reusing arguments: 10 10 10 10**  
**Width specifiers:     Hello**   
## .NET Framework Equivalent  
  
-   [System::Console::Write](https://msdn.microsoft.com/en-us/library/system.console.write.aspx)  
  
-   [System::Console::WriteLine](https://msdn.microsoft.com/en-us/library/system.console.writeline.aspx)  
  
## See Also  
 [Floating-Point Support](../crt/floating-point-support.md)   
 [Stream I/O](../crt/stream-i-o.md)   
 [Locale](../crt/locale.md)   
 [fopen, _wfopen](../crt/fopen--_wfopen.md)   
 [_fprintf_p, _fprintf_p_l, _fwprintf_p, _fwprintf_p_l](../crt/_fprintf_p--_fprintf_p_l--_fwprintf_p--_fwprintf_p_l.md)   
 [fprintf, _fprintf_l, fwprintf, _fwprintf_l](../crt/fprintf--_fprintf_l--fwprintf--_fwprintf_l.md)   
 [fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l](../crt/fprintf_s--_fprintf_s_l--fwprintf_s--_fwprintf_s_l.md)   
 [scanf, _scanf_l, wscanf, _wscanf_l](../crt/scanf--_scanf_l--wscanf--_wscanf_l.md)   
 [scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](../crt/scanf_s--_scanf_s_l--wscanf_s--_wscanf_s_l.md)   
 [_sprintf_p, _sprintf_p_l, _swprintf_p, _swprintf_p_l](../crt/_sprintf_p--_sprintf_p_l--_swprintf_p--_swprintf_p_l.md)   
 [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../crt/sprintf--_sprintf_l--swprintf--_swprintf_l--__swprintf_l.md)   
 [sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l](../crt/sprintf_s--_sprintf_s_l--swprintf_s--_swprintf_s_l.md)   
 [vprintf Functions](../crt/vprintf-functions.md)