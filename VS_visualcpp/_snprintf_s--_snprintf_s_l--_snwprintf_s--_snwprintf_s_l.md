---
title: "_snprintf_s, _snprintf_s_l, _snwprintf_s, _snwprintf_s_l"
ms.custom: na
ms.date: 10/06/2016
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
  - _snprintf_s
  - _snprintf_s_l
  - _snwprintf_s
  - _snwprintf_s_l
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
ms.assetid: 9336ab86-13e5-4a29-a3cd-074adfee6891
caps.latest.revision: 30
manager: ghogen
translation.priority.mt: 
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
# _snprintf_s, _snprintf_s_l, _snwprintf_s, _snwprintf_s_l
Writes formatted data to a string. These are versions of [snprintf, _snprintf, _snprintf_l, _snwprintf, _snwprintf_l](../VS_visualcpp/snprintf--_snprintf--_snprintf_l--_snwprintf--_snwprintf_l.md) with security enhancements as described in [Security Features in the CRT](../VS_visualcpp/Security-Features-in-the-CRT.md).  
  
## Syntax  
  
```  
int _snprintf_s(  
   char *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const char *format [,  
   argument] ...   
);  
int _snprintf_s_l(  
   char *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const char *format,  
   locale_t locale [,  
   argument] ...   
);  
int _snwprintf_s(  
   wchar_t *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const wchar_t *format [,  
   argument] ...   
);  
int _snwprintf_s_l(  
   wchar_t *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const wchar_t *format,  
   locale_t locale [,  
   argument] ...   
);  
template <size_t size>  
int _snprintf_s(  
   char (&buffer)[size],  
   size_t count,  
   const char *format [,  
   argument] ...   
); // C++ only  
template <size_t size>  
int _snwprintf_s(  
   wchar_t (&buffer)[size],  
   size_t count,  
   const wchar_t *format [,  
   argument] ...   
); // C++ only  
```  
  
#### Parameters  
 `buffer`  
 Storage location for the output.  
  
 `sizeOfBuffer`  
 The size of the storage location for output. Size in `bytes` for `_snprintf_s` or size in `words` for `_snwprintf_s`.  
  
 `Count`  
 Maximum number of characters to store, or [_TRUNCATE](../VS_visualcpp/_TRUNCATE.md).  
  
 `format`  
 Format-control string.  
  
 `argument`  
 Optional arguments.  
  
 `locale`  
 The locale to use.  
  
## Return Value  
 `_snprintf_s` returns the number of characters stored in `buffer`, not counting the terminating null character. `_snwprintf_s` returns the number of wide characters stored in `buffer`, not counting the terminating null wide character.  
  
 If the storage required to store the data and a terminating null exceeds `sizeOfBuffer`, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution continues after the invalid parameter handler, these functions set `buffer` to an empty string, set `errno` to `ERANGE`, and return -1.  
  
 If `buffer` or `format` is a `NULL` pointer, or if `count` is less than or equal to zero, the invalid parameter handler is invoked. If execution is allowed to continue, these functions set `errno` to `EINVAL` and return -1.  
  
 For information about these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md).  
  
## Remarks  
 The `_snprintf_s` function formats and stores `count` or fewer characters in `buffer` and appends a terminating null. Each argument (if any) is converted and output according to the corresponding format specification in `format`. The formatting is consistent with the `printf` family of functions; see [Format Specification Syntax: printf and wprintf Functions](../VS_visualcpp/Format-Specification-Syntax--printf-and-wprintf-Functions.md). If copying occurs between strings that overlap, the behavior is undefined.  
  
 If `count` is [_TRUNCATE](../VS_visualcpp/_TRUNCATE.md), then `_snprintf_s` writes as much of the string as will fit in `buffer` while leaving room for a terminating null. If the entire string (with terminating null) fits in `buffer`, then `_snprintf_s` returns the number of characters written (not including the terminating null); otherwise, `_snprintf_s` returns -1 to indicate that truncation occurred.  
  
> [!IMPORTANT]
>  Ensure that `format` is not a user-defined string.  
  
 `_snwprintf_s` is a wide-character version of `_snprintf_s`; the pointer arguments to `_snwprintf_s` are wide-character strings. Detection of encoding errors in `_snwprintf_s` might differ from that in `_snprintf_s`. `_snwprintf_s`, like `swprintf_s`, writes output to a string rather than to a destination of type `FILE`.  
  
 The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.  
  
 In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure Template Overloads](../VS_visualcpp/Secure-Template-Overloads.md).  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_sntprintf_s`|`_snprintf_s`|`_snprintf_s`|`_snwprintf_s`|  
|`_sntprintf_s_l`|`_snprintf_s_l`|`_snprintf_s_l`|`_snwprintf_s_l`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_snprintf_s`, `_snprintf_s_l`|<stdio.h>|  
|`_snwprintf_s`, `_snwprintf_s_l`|<stdio.h> or <wchar.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_snprintf_s.cpp  
// compile with: /MTd  
  
// These #defines enable secure template overloads  
// (see last part of Examples() below)  
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1   
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 1  
  
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <crtdbg.h>  // For _CrtSetReportMode  
#include <errno.h>  
  
// This example uses a 10-byte destination buffer.  
  
int snprintf_s_tester( const char * fmt, int x, size_t count )  
{  
   char dest[10];  
  
   printf( "\n" );  
  
   if ( count == _TRUNCATE )  
      printf( "%zd-byte buffer; truncation semantics\n",  
               _countof(dest) );  
   else  
      printf( "count = %zd; %zd-byte buffer\n",  
               count, _countof(dest) );  
  
   int ret = _snprintf_s( dest, _countof(dest), count, fmt, x );  
  
   printf( "    new contents of dest: '%s'\n", dest );  
  
   return ret;  
}  
  
void Examples()  
{  
   // formatted output string is 9 characters long: "<<<123>>>"  
   snprintf_s_tester( "<<<%d>>>", 121, 8 );  
   snprintf_s_tester( "<<<%d>>>", 121, 9 );  
   snprintf_s_tester( "<<<%d>>>", 121, 10 );  
  
   printf( "\nDestination buffer too small:\n" );  
  
   snprintf_s_tester( "<<<%d>>>", 1221, 10 );  
  
   printf( "\nTruncation examples:\n" );  
  
   int ret = snprintf_s_tester( "<<<%d>>>", 1221, _TRUNCATE );  
   printf( "    truncation %s occur\n", ret == -1 ? "did"  
                                                  : "did not" );  
  
   ret = snprintf_s_tester( "<<<%d>>>", 121, _TRUNCATE );  
   printf( "    truncation %s occur\n", ret == -1 ? "did"  
                                                  : "did not" );  
   printf( "\nSecure template overload example:\n" );  
  
   char dest[10];  
   _snprintf( dest, 10, "<<<%d>>>", 12321 );  
   // With secure template overloads enabled (see #defines  
   // at top of file), the preceding line is replaced by  
   //    _snprintf_s( dest, _countof(dest), 10, "<<<%d>>>", 12345 );  
   // Instead of causing a buffer overrun, _snprintf_s invokes  
   // the invalid parameter handler.  
   // If secure template overloads were disabled, _snprintf would  
   // write 10 characters and overrun the dest buffer.  
   printf( "    new contents of dest: '%s'\n", dest );  
}  
  
void myInvalidParameterHandler(  
   const wchar_t* expression,  
   const wchar_t* function,   
   const wchar_t* file,   
   unsigned int line,   
   uintptr_t pReserved)  
{  
   wprintf(L"Invalid parameter handler invoked: %s\n", expression);  
}  
  
int main( void )  
{  
   _invalid_parameter_handler oldHandler, newHandler;  
  
   newHandler = myInvalidParameterHandler;  
   oldHandler = _set_invalid_parameter_handler(newHandler);  
   // Disable the message box for assertions.  
   _CrtSetReportMode(_CRT_ASSERT, 0);  
  
   Examples();  
}  
```  
  
  **count = 8; 10-byte buffer**  
 **new contents of dest: '<<<121>>'**  
**count = 9; 10-byte buffer**  
 **new contents of dest: '<<<121>>>'**  
**count = 10; 10-byte buffer**  
 **new contents of dest: '<<<121>>>'**  
**Destination buffer too small:**  
**count = 10; 10-byte buffer**  
**Invalid parameter handler invoked: ("Buffer too small", 0)**  
 **new contents of dest: ''**  
**Truncation examples:**  
**10-byte buffer; truncation semantics**  
 **new contents of dest: '<<<1221>>'**  
 **truncation did occur**  
**10-byte buffer; truncation semantics**  
 **new contents of dest: '<<<121>>>'**  
 **truncation did not occur**  
**Secure template overload example:**  
**Invalid parameter handler invoked: ("Buffer too small", 0)**  
 **new contents of dest: ''**   
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Stream I/O](../VS_visualcpp/Stream-I-O.md)   
 [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../VS_visualcpp/sprintf--_sprintf_l--swprintf--_swprintf_l--__swprintf_l.md)   
 [fprintf, _fprintf_l, fwprintf, _fwprintf_l](../VS_visualcpp/fprintf--_fprintf_l--fwprintf--_fwprintf_l.md)   
 [printf, _printf_l, wprintf, _wprintf_l](../VS_visualcpp/printf--_printf_l--wprintf--_wprintf_l.md)   
 [scanf, _scanf_l, wscanf, _wscanf_l](../VS_visualcpp/scanf--_scanf_l--wscanf--_wscanf_l.md)   
 [sscanf, _sscanf_l, swscanf, _swscanf_l](../VS_visualcpp/sscanf--_sscanf_l--swscanf--_swscanf_l.md)   
 [vprintf Functions](../VS_visualcpp/vprintf-Functions.md)