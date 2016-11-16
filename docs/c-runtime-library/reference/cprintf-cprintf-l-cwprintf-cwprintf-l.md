---
title: "_cprintf, _cprintf_l, _cwprintf, _cwprintf_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_cwprintf_l"
  - "_cprintf_l"
  - "_cwprintf"
  - "_cprintf"
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
  - "_cwprintf"
  - "cwprintf"
  - "tcprintf"
  - "_tcprintf"
  - "_cprintf"
  - "cwprintf_l"
  - "tcprintf_l"
  - "_tcprintf_l"
  - "cprintf_l"
  - "_cprintf_l"
  - "_cwprintf_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_cprintf_l function"
  - "_cwprintf_l function"
  - "cwprintf function"
  - "cprintf_l function"
  - "characters, printing to console"
  - "printing characters to console"
  - "_tcprintf_l function"
  - "tcprintf function"
  - "_tcprintf function"
  - "tcprintf_l function"
  - "_cwprintf function"
  - "cwprintf_l function"
  - "_cprintf function"
ms.assetid: 67ffefd4-45b3-4be0-9833-d8d26ac7c4e2
caps.latest.revision: 34
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
# _cprintf, _cprintf_l, _cwprintf, _cwprintf_l
Formats and prints to the console. More-secure versions are available; see [_cprintf_s, _cprintf_s_l, _cwprintf_s, _cwprintf_s_l](../../c-runtime-library/reference/cprintf-s-cprintf-s-l-cwprintf-s-cwprintf-s-l.md).  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
int _cprintf(   
   const char * format [,   
   argument] ...   
);  
int _cprintf_l(   
   const char * format,  
   locale_t locale [,  
   argument] …   
);  
int _cwprintf(  
   const wchar * format [,   
   argument] …  
);  
int _cwprintf_l(  
   const wchar * format,  
   locale_t locale [,   
   argument] …  
);  
```  
  
#### Parameters  
 `format`  
 Format-control string.  
  
 `argument`  
 Optional parameters.  
  
 `locale`  
 The locale to use.  
  
## Return Value  
 The number of characters printed.  
  
## Remarks  
 Thesefunctions format and print a series of characters and values directly to the console, using the `_putch` function (`_putwch` for `_cwprintf`) to output characters. Each `argument` (if any) is converted and output according to the corresponding format specification in `format`. The format has the same form and function as the `format` parameter for the [printf](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md) function. Unlike the `fprintf`, `printf`, and `sprintf` functions, neither `_cprintf` nor `_cwprintf` translates line-feed characters into carriage return–line feed (CR-LF) combinations when output.  
  
 An important distinction is that `_cwprintf` displays Unicode characters when used in Windows NT. Unlike `_cprintf`, `_cwprintf` uses the current console locale settings.  
  
 The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current locale.  
  
 `_cprintf` validates the `format` parameter. If `format` is a null pointer, the function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function returns -1 and sets `errno` to `EINVAL`.  
  
> [!IMPORTANT]
>  Ensure that `format` is not a user-defined string.  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tcprintf`|`_cprintf`|`_cprintf`|`_cwprintf`|  
|`_tcprintf_l`|`_cprintf_l`|`_cprintf_l`|`_cwprintf_l`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_cprintf`,`_cprintf_l`|\<conio.h>|  
|`_cwprintf`, `_cwprintf_l`|\<conio.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
  
```  
// crt_cprintf.c  
// compile with: /c  
// This program displays some variables to the console.  
  
#include <conio.h>  
  
int main( void )  
{  
    int         i = -16,  
                h = 29;  
    unsigned    u = 62511;  
    char        c = 'A';  
    char        s[] = "Test";  
  
    // Note that console output does not translate \n as  
    // standard output does. Use \r\n instead.  
    //  
    _cprintf( "%d  %.4x  %u  %c %s\r\n", i, h, u, c, s );  
}  
```  
  
```Output  
-16  001d  62511  A Test  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Console and Port I/O](../../c-runtime-library/console-and-port-i-o.md)   
 [_cscanf, _cscanf_l, _cwscanf, _cwscanf_l](../../c-runtime-library/reference/cscanf-cscanf-l-cwscanf-cwscanf-l.md)   
 [fprintf, _fprintf_l, fwprintf, _fwprintf_l](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)   
 [printf, _printf_l, wprintf, _wprintf_l](../../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)   
 [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)   
 [vfprintf, _vfprintf_l, vfwprintf, _vfwprintf_l](../../c-runtime-library/reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md)   
 [_cprintf_s, _cprintf_s_l, _cwprintf_s, _cwprintf_s_l](../../c-runtime-library/reference/cprintf-s-cprintf-s-l-cwprintf-s-cwprintf-s-l.md)   
 [_cprintf_p, _cprintf_p_l, _cwprintf_p, _cwprintf_p_l](../../c-runtime-library/reference/cprintf-p-cprintf-p-l-cwprintf-p-cwprintf-p-l.md)   
 [Format Specification Syntax: printf and wprintf Functions](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)