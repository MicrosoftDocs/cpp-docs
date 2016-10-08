---
title: "_vprintf_p, _vprintf_p_l, _vwprintf_p, _vwprintf_p_l"
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
  - _vwprintf_p
  - _vprintf_p
  - _vprintf_p_l
  - _vwprintf_p_l
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
ms.assetid: 3f99bde3-c891-493d-908f-30559c421058
caps.latest.revision: 17
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
# _vprintf_p, _vprintf_p_l, _vwprintf_p, _vwprintf_p_l
Writes formatted output by using a pointer to a list of arguments, and enables specification of the order in which the arguments are used.  
  
## Syntax  
  
```  
int _vprintf_p(  
   const char *format,  
   va_list argptr   
);  
int _vprintf_p_l(  
   const char *format,  
   locale_t locale,  
   va_list argptr   
);  
int _vwprintf_p(  
   const wchar_t *format,  
   va_list argptr   
);  
int _vwprintf_p_l(  
   const wchar_t *format,  
   locale_t locale,  
   va_list argptr   
);  
```  
  
#### Parameters  
 `format`  
 Format specification.  
  
 `argptr`  
 Pointer to list of arguments.  
  
 `locale`  
 The locale to use.  
  
 For more information, see [Format Specifications](../VS_visualcpp/Format-Specification-Syntax--printf-and-wprintf-Functions.md).  
  
## Return Value  
 `_vprintf_p` and `_vwprintf_p` return the number of characters written, not including the terminating null character, or a negative value if an output error occurs.  
  
## Remarks  
 Each of these functions takes a pointer to an argument list, then formats and writes the given data to `stdout`. These functions differ from `vprintf_s` and `vwprintf_s` only in that they support the ability to specify the order in which the arguments are used. For more information, see [printf_p Positional Parameters](../VS_visualcpp/printf_p-Positional-Parameters.md).  
  
 `_vwprintf_p` is the wide-character version of `_vprintf_p`; the two functions behave identically if the stream is opened in ANSI mode. `_vprintf_p` doesn't currently support output into a UNICODE stream.  
  
 The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.  
  
> [!IMPORTANT]
>  Ensure that `format` is not a user-defined string. For more information, see [Avoiding Buffer Overruns](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
 If `format` is a null pointer, or if the format string contains invalid formatting characters, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, the functions return -1 and set `errno` to `EINVAL`.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_vtprintf_p`|`_vprintf_p`|`_vprintf_p`|`_vwprintf_p`|  
|`_vtprintf_p_l`|`_vprintf_p_l`|`_vprintf_p_l`|`_vwprintf_p_l`|  
  
## Requirements  
  
|Routine|Required header|Optional headers|  
|-------------|---------------------|----------------------|  
|`_vprintf_p`, `_vprintf_p_l`|<stdio.h> and <stdarg.h>|<varargs.h>*|  
|`_vwprintf_p`, `_vwprintf_p_l`|<stdio.h> or <wchar.h>, and <stdarg.h>|<varargs.h>*|  
  
 \* Required for UNIX V compatibility.  
  
 The console is not supported in Windows 8.x Store apps. The standard stream handles that are associated with the console—`stdin`, `stdout`, and `stderr`—must be redirected before C run-time functions can use them in Windows 8.x Store apps. For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## .NET Framework Equivalent  
 [System::Console::Write](https://msdn.microsoft.com/en-us/library/system.console.write.aspx)  
  
## See Also  
 [Stream I/O](../VS_visualcpp/Stream-I-O.md)   
 [vprintf Functions](../VS_visualcpp/vprintf-Functions.md)   
 [_fprintf_p, _fprintf_p_l, _fwprintf_p, _fwprintf_p_l](../VS_visualcpp/_fprintf_p--_fprintf_p_l--_fwprintf_p--_fwprintf_p_l.md)   
 [_printf_p, _printf_p_l, _wprintf_p, _wprintf_p_l](../VS_visualcpp/_printf_p--_printf_p_l--_wprintf_p--_wprintf_p_l.md)   
 [_sprintf_p, _sprintf_p_l, _swprintf_p, _swprintf_p_l](../VS_visualcpp/_sprintf_p--_sprintf_p_l--_swprintf_p--_swprintf_p_l.md)   
 [vsprintf_s, _vsprintf_s_l, vswprintf_s, _vswprintf_s_l](../VS_visualcpp/vsprintf_s--_vsprintf_s_l--vswprintf_s--_vswprintf_s_l.md)   
 [va_arg, va_copy, va_end, va_start](../VS_visualcpp/va_arg--va_copy--va_end--va_start.md)   
 [_vfprintf_p, _vfprintf_p_l, _vfwprintf_p, _vfwprintf_p_l](../VS_visualcpp/_vfprintf_p--_vfprintf_p_l--_vfwprintf_p--_vfwprintf_p_l.md)   
 [_printf_p, _printf_p_l, _wprintf_p, _wprintf_p_l](../VS_visualcpp/_printf_p--_printf_p_l--_wprintf_p--_wprintf_p_l.md)   
 [printf_p Positional Parameters](../VS_visualcpp/printf_p-Positional-Parameters.md)