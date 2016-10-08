---
title: "_vscprintf, _vscprintf_l, _vscwprintf, _vscwprintf_l"
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
  - _vscprintf
  - _vscprintf_l
  - _vscwprintf_l
  - _vscwprintf
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
ms.assetid: 1bc67d3d-21d5-49c9-ac8d-69e26b16a3c3
caps.latest.revision: 12
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
# _vscprintf, _vscprintf_l, _vscwprintf, _vscwprintf_l
Returns the number of characters in the formatted string using a pointer to a list of arguments.  
  
## Syntax  
  
```  
int _vscprintf(  
   const char *format,  
   va_list argptr   
);  
int _vscprintf_l(  
   const char *format,  
   locale_t locale,  
   va_list argptr   
);  
int _vscwprintf(  
   const wchar_t *format,  
   va_list argptr   
);  
int _vscwprintf_l(  
   const wchar_t *format,  
   locale_t locale,  
   va_list argptr   
);  
```  
  
#### Parameters  
 `format`  
 Format-control string.  
  
 `argptr`  
 Pointer to list of arguments.  
  
 `locale`  
 The locale to use.  
  
 For more information, see [Format Specifications](../VS_visualcpp/Format-Specification-Syntax--printf-and-wprintf-Functions.md).  
  
## Return Value  
 `_vscprintf` returns the number of characters that would be generated if the string pointed to by the list of arguments was printed or sent to a file or buffer using the specified formatting codes. The value returned does not include the terminating null character. `_vscwprintf` performs the same function for wide characters.  
  
 The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.  
  
 If `format` is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, the functions return -1 and set `errno` to `EINVAL`.  
  
## Remarks  
 Each `argument` (if any) is converted according to the corresponding format specification in `format`. The format consists of ordinary characters and has the same form and function as the `format` argument for [printf](../VS_visualcpp/printf--_printf_l--wprintf--_wprintf_l.md).  
  
> [!IMPORTANT]
>  Ensure that if `format` is a user-defined string, it is null terminated and has the correct number and type of parameters. For more information, see [Avoiding Buffer Overruns](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_vsctprintf`|`_vscprintf`|`_vscprintf`|`_vscwprintf`|  
|`_vsctprintf_l`|`_vscprintf_l`|`_vscprintf_l`|`_vscwprintf_l`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_vscprintf`, `_vscprintf_l`|<stdio.h>|  
|`_vscwprintf`, `_vscwprintf_l`|<stdio.h> or <wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
 See the example for [vsprintf](../VS_visualcpp/vsprintf--_vsprintf_l--vswprintf--_vswprintf_l--__vswprintf_l.md).  
  
## See Also  
 [Stream I/O](../VS_visualcpp/Stream-I-O.md)   
 [fprintf, _fprintf_l, fwprintf, _fwprintf_l](../VS_visualcpp/fprintf--_fprintf_l--fwprintf--_fwprintf_l.md)   
 [printf, _printf_l, wprintf, _wprintf_l](../VS_visualcpp/printf--_printf_l--wprintf--_wprintf_l.md)   
 [scanf, _scanf_l, wscanf, _wscanf_l](../VS_visualcpp/scanf--_scanf_l--wscanf--_wscanf_l.md)   
 [sscanf, _sscanf_l, swscanf, _swscanf_l](../VS_visualcpp/sscanf--_sscanf_l--swscanf--_swscanf_l.md)   
 [vprintf Functions](../VS_visualcpp/vprintf-Functions.md)