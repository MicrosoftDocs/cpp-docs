---
title: "vprintf Functions"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apilocation: 
  - "msvcr110.dll"
  - "msvcr120.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr80.dll"
apitype: "DLLExport"
f1_keywords: 
  - "vprintf"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "vprintf function"
  - "formatted text [C++]"
ms.assetid: 02ac7c51-eab1-4bf0-bf4c-77065e3fa744
caps.latest.revision: 8
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
# vprintf Functions
Each of the `vprintf` functions takes a pointer to an argument list, then formats and writes the given data to a particular destination. The functions differ in the parameter validation performed, whether the functions take wide or single-byte character strings, the output destination, and the support for specifying the order in which parameters are used in the format string.  
  
|||  
|-|-|  
|[_vcprintf, _vcwprintf](../crt/_vcprintf--_vcprintf_l--_vcwprintf--_vcwprintf_l.md)|[vfprintf, vfwprintf](../crt/vfprintf--_vfprintf_l--vfwprintf--_vfwprintf_l.md)|  
|[_vfprintf_p, _vfprintf_p_l, _vfwprintf_p, _vfwprintf_p_l](../crt/_vfprintf_p--_vfprintf_p_l--_vfwprintf_p--_vfwprintf_p_l.md)|[vfprintf_s, _vfprintf_s_l, vfwprintf_s, _vfwprintf_s_l](../crt/vfprintf_s--_vfprintf_s_l--vfwprintf_s--_vfwprintf_s_l.md)|  
|[vprintf, vwprintf](../crt/vprintf--_vprintf_l--vwprintf--_vwprintf_l.md)|[_vprintf_p, _vprintf_p_l, _vwprintf_p, _vwprintf_p_l](../crt/_vprintf_p--_vprintf_p_l--_vwprintf_p--_vwprintf_p_l.md)|  
|[vprintf_s, _vprintf_s_l, vwprintf_s, _vwprintf_s_l](../crt/vprintf_s--_vprintf_s_l--vwprintf_s--_vwprintf_s_l.md)|[vsprintf, vswprintf](../crt/vsprintf--_vsprintf_l--vswprintf--_vswprintf_l--__vswprintf_l.md)|  
|[_vsprintf_p, _vsprintf_p_l, _vswprintf_p, _vswprintf_p_l](../crt/_vsprintf_p--_vsprintf_p_l--_vswprintf_p--_vswprintf_p_l.md)|[vsprintf_s, _vsprintf_s_l, vswprintf_s, _vswprintf_s_l](../crt/vsprintf_s--_vsprintf_s_l--vswprintf_s--_vswprintf_s_l.md)|  
|[_vscprintf, _vscprintf_l, _vscwprintf, _vscwprintf_l](../crt/_vscprintf--_vscprintf_l--_vscwprintf--_vscwprintf_l.md)|[_vsnprintf, _vsnwprintf](../crt/vsnprintf--_vsnprintf--_vsnprintf_l--_vsnwprintf--_vsnwprintf_l.md)|  
  
## Remarks  
 The `vprintf` functions are similar to their counterpart functions as listed in the following table. However, each `vprintf` function accepts a pointer to an argument list, whereas each of the counterpart functions accepts an argument list.  
  
 These functions format data for output to destinations as follows.  
  
|Function|Counterpart function|Output destination|Parameter Validation|Positional Parameter Support|  
|--------------|--------------------------|------------------------|--------------------------|----------------------------------|  
|`_vcprintf`|[_cprintf](../crt/_cprintf--_cprintf_l--_cwprintf--_cwprintf_l.md)|console|Check for null.|no|  
|`_vcwprintf`|[_cwprintf](../crt/_cprintf--_cprintf_l--_cwprintf--_cwprintf_l.md)|console|Check for null.|no|  
|`vfprintf`|[fprintf](../crt/fprintf--_fprintf_l--fwprintf--_fwprintf_l.md)|*Stream*|Check for null.|no|  
|**vfprintf_p**|[fprintf_p](../crt/_fprintf_p--_fprintf_p_l--_fwprintf_p--_fwprintf_p_l.md)|*Stream*|Check for null and valid format.|yes|  
|`vfprintf_s`|[fprintf_s](../crt/fprintf_s--_fprintf_s_l--fwprintf_s--_fwprintf_s_l.md)|*Stream*|Check for null and valid format.|no|  
|`vfwprintf`|[fwprintf](../crt/fprintf--_fprintf_l--fwprintf--_fwprintf_l.md)|*Stream*|Check for null.|no|  
|**vfwprintf_p**|[fwprintf_p](../crt/_fprintf_p--_fprintf_p_l--_fwprintf_p--_fwprintf_p_l.md)|*Stream*|Check for null and valid format.|yes|  
|`vfwprintf_s`|[fwprintf_s](../crt/fprintf_s--_fprintf_s_l--fwprintf_s--_fwprintf_s_l.md)|*Stream*|Check for null and valid format.|no|  
|`vprintf`|[printf](../crt/printf--_printf_l--wprintf--_wprintf_l.md)|`Stdout`|Check for null.|no|  
|**vprintf_p**|[printf_p](../crt/_printf_p--_printf_p_l--_wprintf_p--_wprintf_p_l.md)|`Stdout`|Check for null and valid format.|yes|  
|`vprintf_s`|[printf_s](../crt/printf_s--_printf_s_l--wprintf_s--_wprintf_s_l.md)|`Stdout`|Check for null and valid format.|no|  
|`vwprintf`|[wprintf](../crt/printf--_printf_l--wprintf--_wprintf_l.md)|`Stdout`|Check for null.|no|  
|**vwprintf_p**|[wprintf_p](../crt/_printf_p--_printf_p_l--_wprintf_p--_wprintf_p_l.md)|`Stdout`|Check for null and valid format.|yes|  
|`vwprintf_s`|[wprintf_s](../crt/printf_s--_printf_s_l--wprintf_s--_wprintf_s_l.md)|`Stdout`|Check for null and valid format.|no|  
|**vsprintf**|[sprintf](../crt/sprintf--_sprintf_l--swprintf--_swprintf_l--__swprintf_l.md)|memory pointed to by *buffer*|Check for null.|no|  
|**vsprintf_p**|[sprintf_p](../crt/_sprintf_p--_sprintf_p_l--_swprintf_p--_swprintf_p_l.md)|memory pointed to by *buffer*|Check for null and valid format.|yes|  
|`vsprintf_s`|[sprintf_s](../crt/sprintf_s--_sprintf_s_l--swprintf_s--_swprintf_s_l.md)|memory pointed to by *buffer*|Check for null and valid format.|no|  
|`vswprintf`|[swprintf](../crt/sprintf--_sprintf_l--swprintf--_swprintf_l--__swprintf_l.md)|memory pointed to by *buffer*|Check for null.|no|  
|**vswprintf_p**|[swprintf_p](../crt/_sprintf_p--_sprintf_p_l--_swprintf_p--_swprintf_p_l.md)|memory pointed to by *buffer*|Check for null and valid format.|yes|  
|`vswprintf_s`|[swprintf_s](../crt/sprintf_s--_sprintf_s_l--swprintf_s--_swprintf_s_l.md)|memory pointed to by *buffer*|Check for null and valid format.|no|  
|`_vscprintf`|[_vscprintf](../crt/_vscprintf--_vscprintf_l--_vscwprintf--_vscwprintf_l.md)|memory pointed to by *buffer*|Check for null.|no|  
|`_vscwprintf`|[_vscwprintf](../crt/_vscprintf--_vscprintf_l--_vscwprintf--_vscwprintf_l.md)|memory pointed to by *buffer*|Check for null.|no|  
|`_vsnprintf`|[_snprintf](../crt/snprintf--_snprintf--_snprintf_l--_snwprintf--_snwprintf_l.md)|memory pointed to by *buffer*|Check for null.|no|  
|`_vsnwprintf`|[_snwprintf](../crt/snprintf--_snprintf--_snprintf_l--_snwprintf--_snwprintf_l.md)|memory pointed to by *buffer*|Check for null.|no|  
  
 The `argptr` argument has type `va_list`, which is defined in VARARGS.H and STDARG.H. The `argptr` variable must be initialized by **va_start,** and may be reinitialized by subsequent `va_arg` calls; `argptr` then points to the beginning of a list of arguments that are converted and transmitted for output according to the corresponding specifications in the *format* argument. *format* has the same form and function as the *format* argument for [printf](../crt/printf--_printf_l--wprintf--_wprintf_l.md). None of these functions invokes `va_end`. For a more complete description of each `vprintf` function, see the description of its counterpart function as listed in the preceding table.  
  
 `_vsnprintf` differs from **vsprintf** in that it writes no more than *count* bytes to *buffer*.  
  
 The versions of these functions with the **w** infix in the name are wide-character versions of the corresponding functions without the **w** infix; in each of these wide-character functions, *buffer* and *format* are wide-character strings. Otherwise, each wide-character function behaves identically to its SBCS counterpart function.  
  
 The versions of these functions with **_s** and **_p** suffixes are the more secure versions. These versions validate the format strings and will generate an exception if the format string is not well formed (for example, if invalid formatting characters are used).  
  
 The versions of these functions with the **_p** suffix provide the ability to specify the order in which the supplied arguments are substituted in the format string. For more information, see [printf_p Positional Parameters](../crt/printf_p-positional-parameters.md).  
  
 For **vsprintf**, `vswprintf`, `_vsnprintf` and `_vsnwprintf`, if copying occurs between strings that overlap, the behavior is undefined.  
  
> [!IMPORTANT]
>  Ensure that *format* is not a user-defined string. For more information, see [Avoiding Buffer Overruns](http://msdn.microsoft.com/library/windows/desktop/ms717795). If using the secure versions of these functions (either the **_s** or **_p** suffixes), a user-supplied format string could trigger an invalid parameter exception if the user-supplied string contains invalid formatting characters.  
  
## See Also  
 [Stream I/O](../crt/stream-i-o.md)   
 [fprintf, _fprintf_l, fwprintf, _fwprintf_l](../crt/fprintf--_fprintf_l--fwprintf--_fwprintf_l.md)   
 [printf, _printf_l, wprintf, _wprintf_l](../crt/printf--_printf_l--wprintf--_wprintf_l.md)   
 [sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../crt/sprintf--_sprintf_l--swprintf--_swprintf_l--__swprintf_l.md)   
 [va_arg, va_copy, va_end, va_start](../crt/va_arg--va_copy--va_end--va_start.md)