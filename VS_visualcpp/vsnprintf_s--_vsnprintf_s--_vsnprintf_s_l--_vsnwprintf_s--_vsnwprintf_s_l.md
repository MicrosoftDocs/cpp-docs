---
title: "vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l"
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
  - _vsnwprintf_s
  - _vsnwprintf_s_l
  - _vsnprintf_s
  - vsnprintf_s
  - _vsnprintf_s_l
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
ms.assetid: 147ccfce-58c7-4681-a726-ef54ac1c604e
caps.latest.revision: 28
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
# vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l
Write formatted output using a pointer to a list of arguments. These are versions of [vsnprintf, _vsnprintf, _vsnprintf_l, _vsnwprintf, _vsnwprintf_l](../VS_visualcpp/vsnprintf--_vsnprintf--_vsnprintf_l--_vsnwprintf--_vsnwprintf_l.md) with security enhancements as described in [Security Features in the CRT](../VS_visualcpp/Security-Features-in-the-CRT.md).  
  
## Syntax  
  
```  
int vsnprintf_s(  
   char *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const char *format,  
   va_list argptr   
);  
int _vsnprintf_s(  
   char *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const char *format,  
   va_list argptr   
);  
int _vsnprintf_s_l(  
   char *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const char *format,  
   locale_t locale,  
   va_list argptr   
);  
int _vsnwprintf_s(  
   wchar_t *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const wchar_t *format,  
   va_list argptr   
);  
int _vsnwprintf_s_l(  
   wchar_t *buffer,  
   size_t sizeOfBuffer,  
   size_t count,  
   const wchar_t *format,  
   locale_t locale,  
   va_list argptr   
);  
template <size_t size>  
int _vsnprintf_s(  
   char (&buffer)[size],  
   size_t count,  
   const char *format,  
   va_list argptr   
); // C++ only  
template <size_t size>  
int _vsnwprintf_s(  
   wchar_t (&buffer)[size],  
   size_t count,  
   const wchar_t *format,  
   va_list argptr   
); // C++ only  
```  
  
#### Parameters  
 `buffer`  
 Storage location for output.  
  
 `sizeOfBuffer`  
 The size of the `buffer` for output, as the character count.  
  
 `count`  
 Maximum number of characters to write (not including the terminating null), or [_TRUNCATE](../VS_visualcpp/_TRUNCATE.md).  
  
 `format`  
 Format specification.  
  
 `argptr`  
 Pointer to list of arguments.  
  
 `locale`  
 The locale to use.  
  
 For more information, see [Format Specifications](../VS_visualcpp/Format-Specification-Syntax--printf-and-wprintf-Functions.md).  
  
## Return Value  
 `vsnprintf_s`,`_vsnprintf_s` and `_vsnwprintf_s` return the number of characters written, not including the terminating null, or a negative value if an output error occurs. `vsnprintf_s` is identical to `_vsnprintf_s`. `vsnprintf_s` is included for compliance to the ANSI standard. `_vnsprintf` is retained for backward compatibility.  
  
 If the storage required to store the data and a terminating null exceeds `sizeOfBuffer`, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md), unless `count` is [_TRUNCATE](../VS_visualcpp/_TRUNCATE.md), in which case as much of the string as will fit in `buffer` is written and -1 returned. If execution continues after the invalid parameter handler, these functions set `buffer` to an empty string, set `errno` to `ERANGE`, and return -1.  
  
 If `buffer` or `format` is a `NULL` pointer, or if `count` is less than or equal to zero, the invalid parameter handler is invoked. If execution is allowed to continue, these functions set `errno` to `EINVAL` and return -1.  
  
### Error Conditions  
  
|`Condition`|Return|`errno`|  
|-----------------|------------|-------------|  
|`buffer` is `NULL`|-1|`EINVAL`|  
|`format` is `NULL`|-1|`EINVAL`|  
|`count` <= 0|-1|`EINVAL`|  
|`sizeOfBuffer` too small (and `count` != `_TRUNCATE`)|-1 (and `buffer` set to an empty string)|`ERANGE`|  
  
## Remarks  
 Each of these functions takes a pointer to an argument list, then formats and writes up to `count` characters of the given data to the memory pointed to by `buffer` and appends a terminating null.  
  
 If `count` is [_TRUNCATE](../VS_visualcpp/_TRUNCATE.md), then these functions write as much of the string as will fit in `buffer` while leaving room for a terminating null. If the entire string (with terminating null) fits in `buffer`, then these functions return the number of characters written (not including the terminating null); otherwise, these functions return -1 to indicate that truncation occurred.  
  
 The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.  
  
> [!IMPORTANT]
>  Ensure that `format` is not a user-defined string. For more information, see [Avoiding Buffer Overruns](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
> [!NOTE]
>  To ensure that there is room for the terminating null, be sure that `count` is strictly less than the buffer length, or use `_TRUNCATE`.  
  
 In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure Template Overloads](../VS_visualcpp/Secure-Template-Overloads.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_vsntprintf_s`|`_vsnprintf_s`|`_vsnprintf_s`|`_vsnwprintf_s`|  
|`_vsntprintf_s_l`|`_vsnprintf_s_l`|`_vsnprintf_s_l`|`_vsnwprintf_s_l`|  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## Requirements  
  
|Routine|Required header|Optional headers|  
|-------------|---------------------|----------------------|  
|`vsnprintf_s`|<stdio.h> and <stdarg.h>|<varargs.h>*|  
|`_vsnprintf_s`, `_vsnprintf_s_l`|<stdio.h> and <stdarg.h>|<varargs.h>*|  
|`_vsnwprintf_s`, `_vsnwprintf_s_l`|<stdio.h> or <wchar.h>, and <stdarg.h>|<varargs.h>*|  
  
 \* Required for UNIX V compatibility.  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_vsnprintf_s.cpp  
#include <stdio.h>  
#include <wtypes.h>  
  
void FormatOutput(LPCSTR formatstring, ...)   
{  
   int nSize = 0;  
   char buff[10];  
   memset(buff, 0, sizeof(buff));  
   va_list args;  
   va_start(args, formatstring);  
   nSize = vsnprintf_s( buff, _countof(buff), _TRUNCATE, formatstring, args);  
   printf("nSize: %d, buff: %s\n", nSize, buff);  
}  
  
int main() {  
   FormatOutput("%s %s", "Hi", "there");  
   FormatOutput("%s %s", "Hi", "there!");  
   FormatOutput("%s %s", "Hi", "there!!");  
}  
```  
  
 **nSize: 8, buff: Hi there**  
**nSize: 9, buff: Hi there!**  
**nSize: -1, buff: Hi there!**   
## See Also  
 [Stream I/O](../VS_visualcpp/Stream-I-O.md)   
 [vprintf Functions](../VS_visualcpp/vprintf-Functions.md)   
 [fprintf, _fprintf_l, fwprintf, _fwprintf_l](../VS_visualcpp/fprintf--_fprintf_l--fwprintf--_fwprintf_l.md)   
 [printf, _printf_l, wprintf, _wprintf_l](../VS_visualcpp/printf--_printf_l--wprintf--_wprintf_l.md)   
 [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../VS_visualcpp/sprintf--_sprintf_l--swprintf--_swprintf_l--__swprintf_l.md)   
 [va_arg, va_copy, va_end, va_start](../VS_visualcpp/va_arg--va_copy--va_end--va_start.md)