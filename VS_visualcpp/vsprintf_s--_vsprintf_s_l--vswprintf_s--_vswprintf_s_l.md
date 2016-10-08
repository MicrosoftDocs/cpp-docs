---
title: "vsprintf_s, _vsprintf_s_l, vswprintf_s, _vswprintf_s_l"
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
  - _vswprintf_s_l
  - vsprintf_s
  - vswprintf_s
  - _vsprintf_s_l
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
ms.assetid: 60e90518-57f0-4f1b-b732-f62a69702833
caps.latest.revision: 24
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
# vsprintf_s, _vsprintf_s_l, vswprintf_s, _vswprintf_s_l
Write formatted output using a pointer to a list of arguments. These are versions of [vsprintf, _vsprintf_l, vswprintf, _vswprintf_l, \__vswprintf_l](../VS_visualcpp/vsprintf--_vsprintf_l--vswprintf--_vswprintf_l--__vswprintf_l.md) with security enhancements as described in [Security Features in the CRT](../VS_visualcpp/Security-Features-in-the-CRT.md).  
  
## Syntax  
  
```  
int vsprintf_s(  
   char *buffer,  
   size_t numberOfElements,  
   const char *format,  
   va_list argptr   
);   
int _vsprintf_s_l(  
   char *buffer,  
   size_t numberOfElements,  
   const char *format,  
   locale_t locale,  
   va_list argptr   
);   
int vswprintf_s(  
   wchar_t *buffer,  
   size_t numberOfElements,  
   const wchar_t *format,  
   va_list argptr   
);  
int _vswprintf_s_l(  
   wchar_t *buffer,  
   size_t numberOfElements,  
   const wchar_t *format,  
   locale_t locale,  
   va_list argptr   
);  
template <size_t size>  
int vsprintf_s(  
   char (&buffer)[size],  
   const char *format,  
   va_list argptr   
); // C++ only  
template <size_t size>  
int vswprintf_s(  
   wchar_t (&buffer)[size],  
   const wchar_t *format,  
   va_list argptr   
); // C++ only  
```  
  
#### Parameters  
 `buffer`  
 Storage location for output.  
  
 `numberOfElements`  
 Size of `buffer` in characters.  
  
 `format`  
 Format specification.  
  
 `argptr`  
 Pointer to list of arguments.  
  
 `locale`  
 The locale to use.  
  
## Return Value  
 `vsprintf_s` and `vswprintf_s` return the number of characters written, not including the terminating null character, or a negative value if an output error occurs. If `buffer` or `format` is a null pointer, if count is zero, or if the format string contains invalid formatting characters, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, the functions return -1 and set `errno` to `EINVAL`.  
  
 For information on these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../VS_visualcpp/errno--_doserrno--_sys_errlist--and-_sys_nerr.md).  
  
## Remarks  
 Each of these functions takes a pointer to an argument list, and then formats and writes the given data to the memory pointed to by `buffer`.  
  
 `vswprintf_s` conforms to the ISO C Standard for `vswprintf`, which requires the second parameter, `count`, of type `size_t`.  
  
 These functions differ from the non-secure versions only in that the secure versions support positional parameters. For more information, see [printf_p Positional Parameters](../VS_visualcpp/printf_p-Positional-Parameters.md).  
  
 The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.  
  
 In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure Template Overloads](../VS_visualcpp/Secure-Template-Overloads.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_vstprintf_s`|`vsprintf_s`|`vsprintf_s`|`vswprintf_s`|  
|`_vstprintf_s_l`|`_vsprintf_s_l`|`_vsprintf_s_l`|`_vswprintf_s_l`|  
  
## Requirements  
  
|Routine|Required header|Optional headers|  
|-------------|---------------------|----------------------|  
|`vsprintf_s`, `_vsprintf_s_l`|<stdio.h> and <stdarg.h>|<varargs.h>*|  
|`vswprintf_s`, `_vswprintf_s_l`|<stdio.h> or <wchar.h>, and <stdarg.h>|<varargs.h>*|  
  
 \* Required for UNIX V compatibility.  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_vsprintf_s.c  
// This program uses vsprintf_s to write to a buffer.  
// The size of the buffer is determined by _vscprintf.  
  
#include <stdlib.h>  
#include <stdarg.h>  
  
void test( char * format, ... )  
{  
   va_list args;  
   int len;  
   char * buffer;  
  
   va_start( args, format );  
   len = _vscprintf( format, args ) // _vscprintf doesn't count  
                               + 1; // terminating '\0'  
   buffer = malloc( len * sizeof(char) );  
   vsprintf_s( buffer, len, format, args );  
   puts( buffer );  
   free( buffer );  
}  
  
int main( void )  
{  
   test( "%d %c %d", 123, '<', 456 );  
   test( "%s", "This is a string" );  
}  
```  
  
 **123 < 456**  
**This is a string**   
## .NET Framework Equivalent  
 [System::String::Format](https://msdn.microsoft.com/en-us/library/system.string.format.aspx)  
  
## See Also  
 [Stream I/O](../VS_visualcpp/Stream-I-O.md)   
 [vprintf Functions](../VS_visualcpp/vprintf-Functions.md)   
 [Format Specification Syntax: printf and wprintf Functions](../VS_visualcpp/Format-Specification-Syntax--printf-and-wprintf-Functions.md)   
 [fprintf, _fprintf_l, fwprintf, _fwprintf_l](../VS_visualcpp/fprintf--_fprintf_l--fwprintf--_fwprintf_l.md)   
 [printf, _printf_l, wprintf, _wprintf_l](../VS_visualcpp/printf--_printf_l--wprintf--_wprintf_l.md)   
 [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../VS_visualcpp/sprintf--_sprintf_l--swprintf--_swprintf_l--__swprintf_l.md)   
 [va_arg, va_copy, va_end, va_start](../VS_visualcpp/va_arg--va_copy--va_end--va_start.md)