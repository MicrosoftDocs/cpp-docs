---
title: "fprintf, _fprintf_l, fwprintf, _fwprintf_l"
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
  - fwprintf
  - fprintf
  - _fprintf_l
  - _fwprintf_l
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
ms.assetid: 34a87e1c-6e4d-4d48-a611-58314dd4dc4b
caps.latest.revision: 22
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# fprintf, _fprintf_l, fwprintf, _fwprintf_l
Print formatted data to a stream. More secure versions of these functions are available; see [fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l](../VS_visualcpp/fprintf_s--_fprintf_s_l--fwprintf_s--_fwprintf_s_l.md).  
  
## Syntax  
  
```  
int fprintf(   
   FILE *stream,  
   const char *format [,  
   argument ]...  
);  
int _fprintf_l(   
   FILE *stream,  
   const char *format,  
   locale_t locale [,  
   argument ]...  
);  
int fwprintf(   
   FILE *stream,  
   const wchar_t *format [,  
   argument ]...  
);  
int _fwprintf_l(   
   FILE *stream,  
   const wchar_t *format,  
   locale_t locale [,  
   argument ]...  
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
 `fprintf` returns the number of bytes written. `fwprintf` returns the number of wide characters written. Each of these functions returns a negative value instead when an output error occurs. If `stream` or `format` is `NULL`, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, the functions return -1 and set `errno` to `EINVAL`. The format string is not checked for valid formatting characters as it is when using `fprintf_s` or `fwprintf_s`.  
  
 See [_doserrno, errno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md) for more information on these, and other, error codes.  
  
## Remarks  
 `fprintf` formats and prints a series of characters and values to the output `stream`*.* Each function `argument` (if any) is converted and output according to the corresponding format specification in `format`*.* For `fprintf`, the `format` argument has the same syntax and use that it has in `printf`.  
  
 `fwprintf` is a wide-character version of `fprintf`; in `fwprintf`, `format` is a wide-character string. These functions behave identically if the stream is opened in ANSI mode. `fprintf` does not currently support output into a UNICODE stream.  
  
 The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.  
  
> [!IMPORTANT]
>  Ensure that `format` is not a user-defined string.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_ftprintf`|`fprintf`|`fprintf`|`fwprintf`|  
|`_ftprintf_l`|`_fprintf_l`|`_fprintf_l`|`_fwprintf_l`|  
  
 For more information, see [Format Specifications](../VS_visualcpp/Format-Specification-Syntax--printf-and-wprintf-Functions.md).  
  
## Requirements  
  
|Function|Required header|  
|--------------|---------------------|  
|`fprintf`, `_fprintf_l`|<stdio.h>|  
|`fwprintf`, `_fwprintf_l`|<stdio.h> or <wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_fprintf.c  
/* This program uses fprintf to format various  
 * data and print it to the file named FPRINTF.OUT. It  
 * then displays FPRINTF.OUT on the screen using the system  
 * function to invoke the operating-system TYPE command.  
 */  
  
#include <stdio.h>  
#include <process.h>  
  
FILE *stream;  
  
int main( void )  
{  
   int    i = 10;  
   double fp = 1.5;  
   char   s[] = "this is a string";  
   char   c = '\n';  
  
   fopen_s( &stream, "fprintf.out", "w" );  
   fprintf( stream, "%s%c", s, c );  
   fprintf( stream, "%d\n", i );  
   fprintf( stream, "%f\n", fp );  
   fclose( stream );  
   system( "type fprintf.out" );  
}  
```  
  
 **this is a string**  
**10**  
**1.500000**   
## .NET Framework Equivalent  
 [System::IO::StreamWriter::Write](https://msdn.microsoft.com/en-us/library/system.io.streamwriter.write.aspx)  
  
## See Also  
 [Stream I/O](../VS_visualcpp/Stream-I-O.md)   
 [_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](../VS_visualcpp/_cprintf--_cprintf_l--_cwprintf--_cwprintf_l.md)   
 [fscanf, _fscanf_l, fwscanf, _fwscanf_l](../VS_visualcpp/fscanf--_fscanf_l--fwscanf--_fwscanf_l.md)   
 [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../VS_visualcpp/sprintf--_sprintf_l--swprintf--_swprintf_l--__swprintf_l.md)   
 [Format Specification Syntax: printf and wprintf Functions](../VS_visualcpp/Format-Specification-Syntax--printf-and-wprintf-Functions.md)