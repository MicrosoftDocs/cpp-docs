---
title: "fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_fprintf_s_l"
  - "fwprintf_s"
  - "fprintf_s"
  - "_fwprintf_s_l"
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
  - "_ftprintf_s"
  - "fprintf_s"
  - "fwprintf_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "ftprintf_s_l function"
  - "ftprintf_s function"
  - "_fprintf_s_l function"
  - "_ftprintf_s function"
  - "_ftprintf_s_l function"
  - "fwprintf_s_l function"
  - "fwprintf_s function"
  - "fprintf_s_l function"
  - "fprintf_s function"
  - "_fwprintf_s_l function"
  - "print formatted data to streams"
ms.assetid: 16067c3c-69ce-472a-8272-9aadf1f5beed
caps.latest.revision: 21
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
# fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l
Print formatted data to a stream. These are versions of [fprintf, _fprintf_l, fwprintf, _fwprintf_l](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).  
  
## Syntax  
  
```  
int fprintf_s(   
   FILE *stream,  
   const char *format [,  
   argument ]...  
);  
int _fprintf_s_l(   
   FILE *stream,  
   const char *format,  
   locale_t locale [,  
   argument ]...  
);  
int fwprintf_s(   
   FILE *stream,  
   const wchar_t *format [,  
   argument ]...  
);  
int _fwprintf_s_l(   
   FILE *stream,  
   const wchar_t *format,  
   locale_t locale [,  
   argument ]…  
);  
```  
  
#### Parameters  
 `stream`  
 Pointer to `FILE` structure.  
  
 `format`  
 Format-control string.  
  
 `argument`  
 Optional arguments.  
  
 `locale`  
 The locale to use.  
  
## Return Value  
 `fprintf_s` returns the number of bytes written. `fwprintf_s` returns the number of wide characters written. Each of these functions returns a negative value instead when an output error occurs.  
  
## Remarks  
 `fprintf_s` formats and prints a series of characters and values to the output `stream`*.* Each function `argument` (if any) is converted and output according to the corresponding format specification in `format`*.* For `fprintf_s`, the `format` argument has the same syntax and use that it has in `printf_s`.  
  
 `fwprintf_s` is a wide-character version of `fprintf_s`; in `fwprintf_s`, `format` is a wide-character string. These functions behave identically if the stream is opened in ANSI mode. `fprintf_s` doesn't currently support output into a UNICODE stream.  
  
 The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current locale.  
  
> [!IMPORTANT]
>  Ensure that `format` is not a user-defined string.  
  
 Like the non-secure versions (see [fprintf, _fprintf_l, fwprintf, _fwprintf_l](../../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)), these functions validate their parameters and invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md), if either `stream` or `format` is a null pointer. These functions differ from the non-secure versions  in that the format string itself is also validated. If there are any unknown or badly formed formatting specifiers, these functions generate the invalid parameter exception. In all cases, If execution is allowed to continue, the functions return -1 and set `errno` to `EINVAL`. See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on these, and other, error codes.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_ftprintf_s`|`fprintf_s`|`fprintf_s`|`fwprintf_s`|  
|`_ftprintf_s_l`|`_fprintf_s_l`|`_fprintf_s_l`|`_fwprintf_s_l`|  
  
 For more information, see [Format Specifications](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`fprintf_s`, `_fprintf_s_l`|\<stdio.h>|  
|`fwprintf_s`, `_fwprintf_s_l`|\<stdio.h> or \<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_fprintf_s.c  
// This program uses fprintf_s to format various  
// data and print it to the file named FPRINTF_S.OUT. It  
// then displays FPRINTF_S.OUT on the screen using the system  
// function to invoke the operating-system TYPE command.  
  
#include <stdio.h>  
#include <process.h>  
  
FILE *stream;  
  
int main( void )  
{  
   int    i = 10;  
   double fp = 1.5;  
   char   s[] = "this is a string";  
   char   c = '\n';  
  
   fopen_s( &stream, "fprintf_s.out", "w" );  
   fprintf_s( stream, "%s%c", s, c );  
   fprintf_s( stream, "%d\n", i );  
   fprintf_s( stream, "%f\n", fp );  
   fclose( stream );  
   system( "type fprintf_s.out" );  
}  
```  
  
```Output  
this is a string  
10  
1.500000  
```  
  
## .NET Framework Equivalent  
 [System::IO::StreamWriter::Write](https://msdn.microsoft.com/en-us/library/system.io.streamwriter.write.aspx)  
  
## See Also  
 [Stream I/O](../../c-runtime-library/stream-i-o.md)   
 [_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](../../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md)   
 [fscanf, _fscanf_l, fwscanf, _fwscanf_l](../../c-runtime-library/reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md)   
 [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)