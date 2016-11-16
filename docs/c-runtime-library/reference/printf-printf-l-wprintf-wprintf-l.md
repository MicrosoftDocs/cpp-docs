---
title: "printf, _printf_l, wprintf, _wprintf_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_printf_l"
  - "wprintf"
  - "_wprintf_l"
  - "printf"
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
  - "printf"
  - "_tprintf"
  - "wprintf"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "printf function"
  - "printf_l function"
  - "tprintf_l function"
  - "tprintf function"
  - "_printf_l function"
  - "wprintf function"
  - "writing to console"
  - "wprintf_l function"
  - "_tprintf_l function"
  - "_wprintf_l function"
  - "_tprintf function"
  - "printf function, format specification fields"
  - "printf function, using"
  - "formatted text [C++]"
ms.assetid: 77a854ae-5b48-4865-89f4-f2dc5cf80f52
caps.latest.revision: 24
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
# printf, _printf_l, wprintf, _wprintf_l
Prints formatted output to the standard output stream. More secure versions of these functions are available; see [printf_s, _printf_s_l, wprintf_s, _wprintf_s_l](../../c-runtime-library/reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md).  
  
## Syntax  
  
```  
int printf(  
   const char *format [,  
   argument]...   
);  
int _printf_l(  
   const char *format,  
   locale_t locale [,  
   argument]...   
);  
int wprintf(  
   const wchar_t *format [,  
   argument]...   
);  
int _wprintf_l(  
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
 Returns the number of characters printed, or a negative value if an error occurs. If `format` is `NULL`, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function returns -1 and sets `errno` to `EINVAL`. If **EOF** (0xFFFF) is encountered in `argument`, the function returns -1.  
  
 For information on `errno` and error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).  
  
## Remarks  
 The `printf` function formats and prints a series of characters and values to the standard output stream, `stdout`. If arguments follow the `format` string, the `format` string must contain specifications that determine the output format for the arguments. `printf` and [fprintf](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md) behave identically except that `printf` writes output to `stdout` rather than to a destination of type `FILE`.  
  
 `wprintf` is a wide-character version of `printf`; `format` is a wide-character string. `wprintf` and `printf` behave identically if the stream is opened in ANSI mode. `printf` does not currently support output into a UNICODE stream.  
  
 The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_unicode defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tprintf`|`printf`|`printf`|`wprintf`|  
  
 The `format` argument consists of ordinary characters, escape sequences, and (if arguments follow `format`) format specifications. The ordinary characters and escape sequences are copied to `stdout` in order of their appearance. For example, the line:  
  
```  
printf("Line one\n\t\tLine two\n");   
```  
  
 produces the output:  
  
```  
Line one  
        Line two  
```  
  
 [Format specifications](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md) always begin with a percent sign (`%`) and are read left to right. When `printf` encounters the first format specification (if any), it converts the value of the first argument after `format` and outputs it accordingly. The second format specification causes the second argument to be converted and output, and so on. If there are more arguments than there are format specifications, the extra arguments are ignored. The results are undefined if there are not enough arguments for all the format specifications.  
  
> [!IMPORTANT]
>  Ensure that `format` is not a user-defined string.  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tprintf`|`printf`|`printf`|`wprintf`|  
|`_tprintf_l`|`_printf_l`|`_printf_l`|`_wprintf_l`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`printf`, `_printf_l`|\<stdio.h>|  
|`wprintf`, `_wprintf_l`|\<stdio.h> or \<wchar.h>|  
  
 The console is not supported in [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] apps. The standard stream handles that are associated with the console—`stdin`, `stdout`, and `stderr`—must be redirected before C run-time functions can use them in [!INCLUDE[win8_appname_long](../../build/includes/win8_appname_long_md.md)] apps. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
  
```  
// crt_printf.c  
// This program uses the printf and wprintf functions  
// to produce formatted output.  
  
#include <stdio.h>  
  
int main( void )  
{  
   char     ch = 'h',   
            *string = "computer";  
   wchar_t  wch = L'w',   
            *wstring = L"Unicode";  
   int      count = -9234;  
   double   fp = 251.7366;  
  
   // Display integers  
   printf( "Integer formats:\n"  
           "   Decimal: %d  Justified: %.6d  "  
           "Unsigned: %u\n",  
           count, count, count, count );  
  
   // Display decimals  
   printf( "Decimal %d as:\n   Hex: %Xh  "  
           "C hex: 0x%x  Octal: %o\n",  
            count, count, count, count );  
  
   // Display in different radixes  
   printf( "Digits 10 equal:\n   Hex: %i  "  
           "Octal: %i  Decimal: %i\n",  
            0x10, 010, 10 );  
  
   // Display characters  
   printf("Characters in field (1):\n"  
          "%10c%5hc%5C%5lc\n",  
          ch, ch, wch, wch);  
   wprintf(L"Characters in field (2):\n"  
           L"%10C%5hc%5c%5lc\n",  
           ch, ch, wch, wch);  
  
   // Display strings  
   printf("Strings in field (1):\n%25s\n"  
          "%25.4hs\n   %S%25.3ls\n",  
          string, string, wstring, wstring);  
   wprintf(L"Strings in field (2):\n%25S\n"  
           L"%25.4hs\n   %s%25.3ls\n",  
           string, string, wstring, wstring);  
  
   // Display real numbers  
   printf("Real numbers:\n   %f %.2f %e %E\n",  
          fp, fp, fp, fp );  
  
   // Display pointer  
   printf( "\nAddress as:   %p\n", &count);  
}  
```  
  
## Sample Output  
  
```  
Integer formats:  
   Decimal: -9234  Justified: -009234  Unsigned: 4294958062  
Decimal -9234 as:  
   Hex: FFFFDBEEh  C hex: 0xffffdbee  Octal: 37777755756  
Digits 10 equal:  
   Hex: 16  Octal: 8  Decimal: 10  
Characters in field (1):  
         h    h    w    w  
Characters in field (2):  
         h    h    w    w  
Strings in field (1):  
                 computer  
                     comp  
   Unicode                      Uni  
Strings in field (2):  
                 computer  
                     comp  
   Unicode                      Uni  
Real numbers:  
   251.736600 251.74 2.517366e+002 2.517366E+002  
  
Address as:   0012FF3C  
```  
  
## .NET Framework Equivalent  
  
-   [System::Console::Write](https://msdn.microsoft.com/en-us/library/system.console.write.aspx)  
  
-   [System::Console::WriteLine](https://msdn.microsoft.com/en-us/library/system.console.writeline.aspx)  
  
## See Also  
 [Floating-Point Support](../../c-runtime-library/floating-point-support.md)   
 [Stream I/O](../../c-runtime-library/stream-i-o.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [fopen, _wfopen](../../c-runtime-library/reference/fopen-wfopen.md)   
 [_fprintf_p, _fprintf_p_l, _fwprintf_p, _fwprintf_p_l](../../c-runtime-library/reference/fprintf-p-fprintf-p-l-fwprintf-p-fwprintf-p-l.md)   
 [scanf, _scanf_l, wscanf, _wscanf_l](../../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)   
 [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [vprintf Functions](../../c-runtime-library/vprintf-functions.md)   
 [_set_output_format](../../c-runtime-library/set-output-format.md)