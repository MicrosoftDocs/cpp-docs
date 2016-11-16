---
title: "scanf, _scanf_l, wscanf, _wscanf_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_wscanf_l"
  - "scanf"
  - "_scanf_l"
  - "wscanf"
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
  - "_tscanf"
  - "_scanf_l"
  - "wscanf"
  - "_wscanf_l"
  - "scanf"
  - "_tscanf_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "tscanf_l function"
  - "_tscanf_l function"
  - "reading data [C++], from input streams"
  - "_tscanf function"
  - "data [C++], reading from input stream"
  - "scanf_l function"
  - "scanf function"
  - "wscanf function"
  - "_scanf_l function"
  - "tscanf function"
  - "formatted data [C++], from input streams"
  - "wscanf_l function"
  - "_wscanf_l function"
ms.assetid: 73eac607-117f-4be4-9ff0-4afd9cf3c848
caps.latest.revision: 25
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
# scanf, _scanf_l, wscanf, _wscanf_l
Reads formatted data from the standard input stream. More secure versions of these function are available; see [scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](../../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md).  
  
## Syntax  
  
```  
int scanf(  
   const char *format [,  
   argument]...   
);  
int _scanf_l(  
   const char *format,  
   locale_t locale [,  
   argument]...   
);  
int wscanf(  
   const wchar_t *format [,  
   argument]...   
);  
int _wscanf_l(  
   const wchar_t *format,  
   locale_t locale [,  
   argument]...   
);  
```  
  
#### Parameters  
 `format`  
 Format control string.  
  
 `argument`  
 Optional arguments.  
  
 `locale`  
 The locale to use.  
  
## Return Value  
 Returns the number of fields successfully converted and assigned; the return value does not include fields that were read but not assigned. A return value of 0 indicates that no fields were assigned.  
  
 If `format` is a `NULL` pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return `EOF` and set `errno` to `EINVAL`.  
  
 For information on these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Remarks  
 The `scanf` function reads data from the standard input stream `stdin` and writes the data into the location given by `argument`. Each `argument` must be a pointer to a variable of a type that corresponds to a type specifier in `format`. If copying takes place between strings that overlap, the behavior is undefined.  
  
> [!IMPORTANT]
>  When reading a string with `scanf`, always specify a width for the `%s` format (for example, `"%32s"` instead of `"%s"`); otherwise, improperly formatted input can easily cause a buffer overrun. Alternately, consider using [scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](../../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md) or [fgets](../../c-runtime-library/reference/fgets-fgetws.md).  
  
 `wscanf` is a wide-character version of `scanf`; the `format` argument to `wscanf` is a wide-character string. `wscanf` and `scanf` behave identically if the stream is opened in ANSI mode. `scanf` doesn't currently support input from a UNICODE stream.  
  
 The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tscanf`|`scanf`|`scanf`|`wscanf`|  
|`_tscanf_l`|`_scanf_l`|`_scanf_l`|`_wscanf_l`|  
  
 For more information, see [Format Specification Fields — scanf functions and wscanf Functions](../../c-runtime-library/format-specification-fields-scanf-and-wscanf-functions.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`scanf`, `_scanf_l`|\<stdio.h>|  
|`wscanf`, `_wscanf_l`|\<stdio.h> or \<wchar.h>|  
  
 The console is not supported in [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] apps. The standard stream handles that are associated with the console—`stdin`, `stdout`, and `stderr`—must be redirected before C run-time functions can use them in [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] apps. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
  
```  
// crt_scanf.c  
// compile with: /W3  
 /* This program uses the scanf and wscanf functions  
  * to read formatted input.  
  */  
  
#include <stdio.h>  
  
int main( void )  
{  
   int   i, result;  
   float fp;  
   char  c, s[81];  
   wchar_t wc, ws[81];  
   result = scanf( "%d %f %c %C %80s %80S", &i, &fp, &c, &wc, s, ws ); // C4996  
   // Note: scanf and wscanf are deprecated; consider using scanf_s and wscanf_s  
   printf( "The number of fields input is %d\n", result );  
   printf( "The contents are: %d %f %c %C %s %S\n", i, fp, c, wc, s, ws);  
   result = wscanf( L"%d %f %hc %lc %80S %80ls", &i, &fp, &c, &wc, s, ws ); // C4996  
   wprintf( L"The number of fields input is %d\n", result );  
   wprintf( L"The contents are: %d %f %C %c %hs %s\n", i, fp, c, wc, s, ws);  
}  
```  
  
```Output  
  
      71 98.6 h z Byte characters  
36 92.3 y n Wide charactersThe number of fields input is 6  
The contents are: 71 98.599998 h z Byte characters  
The number of fields input is 6  
The contents are: 36 92.300003 y n Wide characters  
```  
  
## .NET Framework Equivalent  
  
-   [System::Console::Read](https://msdn.microsoft.com/en-us/library/system.console.read.aspx)  
  
-   [System::Console::ReadLine](https://msdn.microsoft.com/en-us/library/system.console.readline.aspx)  
  
-   See also `Parse` methods, such as [System::Double::Parse](https://msdn.microsoft.com/en-us/library/system.double.parse.aspx).  
  
## See Also  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [Stream I/O](../../c-runtime-library/stream-i-o.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [fscanf, _fscanf_l, fwscanf, _fwscanf_l](../../c-runtime-library/reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md)   
 [printf, _printf_l, wprintf, _wprintf_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [sscanf, _sscanf_l, swscanf, _swscanf_l](../../c-runtime-library/reference/sscanf-sscanf-l-swscanf-swscanf-l.md)