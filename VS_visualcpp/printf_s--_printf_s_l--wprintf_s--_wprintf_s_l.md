---
title: "printf_s, _printf_s_l, wprintf_s, _wprintf_s_l"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - _printf_s_l
  - wprintf_s
  - _wprintf_s_l
  - printf_s
apilocation: 
  - msvcrt.dll
  - msvcr80.dll
  - msvcr90.dll
  - msvcr100.dll
  - msvcr100_clr0400.dll
  - msvcr110.dll
  - msvcr110_clr0400.dll
  - msvcr120.dll
  - msvcr120_clr0400.dll
  - ucrtbase.dll
apitype: DLLExport
ms.assetid: 044ebb2e-5cc1-445d-bb4c-f084b405615b
caps.latest.revision: 21
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# printf_s, _printf_s_l, wprintf_s, _wprintf_s_l
Prints formatted output to the standard output stream. These versions of [printf, _printf_l, wprintf, _wprintf_l](../VS_visualcpp/printf--_printf_l--wprintf--_wprintf_l.md) have security enhancements, as described in [Security Features in the CRT](../VS_visualcpp/Security-Features-in-the-CRT.md).  
  
## Syntax  
  
```  
int printf_s(  
   const char *format [,  
   argument]...   
);  
int _printf_s_l(  
   const char *format,  
   locale_t locale [,  
   argument]...   
);  
int wprintf_s(  
   const wchar_t *format [,  
   argument]...   
);  
int _wprintf_s_l(  
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
 Returns the number of characters printed, or a negative value if an error occurs.  
  
## Remarks  
 The `printf_s` function formats and prints a series of characters and values to the standard output stream, `stdout`. If arguments follow the *format* string, the `format` string must contain specifications that determine the output format for the arguments.  
  
 The main difference between `printf_s` and `printf` is that `printf_s` checks the format string for valid formatting characters, whereas `printf` only checks if the format string is a null pointer. If either check fails, an invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, the function returns -1 and sets `errno` to `EINVAL`.  
  
 For information on `errno` and error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md).  
  
 `printf_s` and`fprintf_s` behave identically except that `printf_s` writes output to `stdout` rather than to a destination of type `FILE`. For more information, see [fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l](../VS_visualcpp/fprintf_s--_fprintf_s_l--fwprintf_s--_fwprintf_s_l.md).  
  
 `wprintf_s` is a wide-character version of `printf_s`; `format` is a wide-character string. `wprintf_s` and `printf_s` behave identically if the stream is opened in ANSI mode. `printf_s` doesn't currently support output into a UNICODE stream.  
  
 The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_unicode defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tprintf_s`|`printf_s`|`printf_s`|`wprintf_s`|  
|`_tprintf_s_l`|`_printf_s_l`|`_printf_s_l`|`_wprintf_s_l`|  
  
 The `format` argument consists of ordinary characters, escape sequences, and (if arguments follow `format`) format specifications. The ordinary characters and escape sequences are copied to `stdout` in order of their appearance. For example, the line  
  
```  
printf_s("Line one\n\t\tLine two\n");   
```  
  
 produces the output  
  
```  
Line one  
        Line two  
```  
  
 [Format specifications](../VS_visualcpp/Format-Specification-Syntax--printf-and-wprintf-Functions.md) always begin with a percent sign (`%`) and are read left to right. When `printf_s` encounters the first format specification (if any), it converts the value of the first argument after `format` and outputs it accordingly. The second format specification causes the second argument to be converted and output, and so on. If there are more arguments than there are format specifications, the extra arguments are ignored. The results are undefined if there are not enough arguments for all the format specifications.  
  
> [!IMPORTANT]
>  Ensure that `format` is not a user-defined string.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`printf_s`, `_printf_s_l`|<stdio.h>|  
|`wprintf_s`, `_wprintf_s_l`|<stdio.h> or <wchar.h>|  
  
 The console is not supported in Windows 8.x Store apps. The standard stream handles that are associated with the console—`stdin`, `stdout`, and `stderr`—must be redirected before C run-time functions can use them in Windows 8.x Store apps. For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
  
```  
// crt_printf_s.c  
/* This program uses the printf_s and wprintf_s functions  
 * to produce formatted output.  
 */  
  
#include <stdio.h>  
  
int main( void )  
{  
   char   ch = 'h', *string = "computer";  
   int    count = -9234;  
   double fp = 251.7366;  
   wchar_t wch = L'w', *wstring = L"Unicode";  
  
   /* Display integers. */  
   printf_s( "Integer formats:\n"  
           "   Decimal: %d  Justified: %.6d  Unsigned: %u\n",  
           count, count, count );  
  
   printf_s( "Decimal %d as:\n   Hex: %Xh  C hex: 0x%x  Octal: %o\n",  
            count, count, count, count );  
  
   /* Display in different radixes. */  
   printf_s( "Digits 10 equal:\n   Hex: %i  Octal: %i  Decimal: %i\n",  
            0x10, 010, 10 );  
  
   /* Display characters. */  
  
   printf_s("Characters in field (1):\n%10c%5hc%5C%5lc\n", ch, ch, wch, wch);  
   wprintf_s(L"Characters in field (2):\n%10C%5hc%5c%5lc\n", ch, ch, wch, wch);  
  
   /* Display strings. */  
  
   printf_s("Strings in field (1):\n%25s\n%25.4hs\n   %S%25.3ls\n",  
   string, string, wstring, wstring);  
   wprintf_s(L"Strings in field (2):\n%25S\n%25.4hs\n   %s%25.3ls\n",  
       string, string, wstring, wstring);  
  
   /* Display real numbers. */  
   printf_s( "Real numbers:\n   %f %.2f %e %E\n", fp, fp, fp, fp );  
  
   /* Display pointer. */  
   printf_s( "\nAddress as:   %p\n", &count);  
  
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
  
Address as:   0012FF78  
  
```  
  
## .NET Framework Equivalent  
  
-   [System::Console::Write](https://msdn.microsoft.com/en-us/library/system.console.write.aspx)  
  
-   [System::Console::WriteLine](https://msdn.microsoft.com/en-us/library/system.console.writeline.aspx)  
  
## See Also  
 [Floating-Point Support](../VS_visualcpp/Floating-Point-Support.md)   
 [Stream I/O](../VS_visualcpp/Stream-I-O.md)   
 [Locale](../VS_visualcpp/Locale.md)   
 [fopen, _wfopen](../VS_visualcpp/fopen--_wfopen.md)   
 [fprintf, _fprintf_l, fwprintf, _fwprintf_l](../VS_visualcpp/fprintf--_fprintf_l--fwprintf--_fwprintf_l.md)   
 [scanf, _scanf_l, wscanf, _wscanf_l](../VS_visualcpp/scanf--_scanf_l--wscanf--_wscanf_l.md)   
 [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../VS_visualcpp/sprintf--_sprintf_l--swprintf--_swprintf_l--__swprintf_l.md)   
 [vprintf Functions](../VS_visualcpp/vprintf-Functions.md)