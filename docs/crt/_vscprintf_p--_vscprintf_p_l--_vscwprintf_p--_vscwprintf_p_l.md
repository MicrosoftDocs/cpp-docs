---
title: "_vscprintf_p, _vscprintf_p_l, _vscwprintf_p, _vscwprintf_p_l"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
apiname: 
  - "_vscprintf_p_l"
  - "_vscprintf_p"
  - "_vscwprintf_p_l"
  - "_vscwprintf_p"
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
  - "_vscprintf_p"
  - "_vscprintf_p_l"
  - "vscwprintf_p"
  - "vscprintf_p"
  - "vscwprintf_p_l"
  - "_vscwprintf_p_l"
  - "vscprintf_p_l"
  - "_vscwprintf_p"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "vscprintf_p function"
  - "_vsctprintf_p_l function"
  - "vscwprintf_p_l function"
  - "_vscwprintf_p_l function"
  - "_vscprintf_p function"
  - "vsctprintf_p function"
  - "_vscprintf_p_l function"
  - "_vscwprintf_p function"
  - "vscwprintf_p function"
  - "vsctprintf_p_l function"
  - "_vsctprintf_p function"
  - "vscprintf_p_l function"
ms.assetid: 5da920b3-8652-4ee9-b19e-5aac3ace9d03
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
# _vscprintf_p, _vscprintf_p_l, _vscwprintf_p, _vscwprintf_p_l
Returns the number of characters in the formatted string using a pointer to a list of arguments, with the ability to specify the order in which the arguments are used.  
  
## Syntax  
  
```  
int _vscprintf_p(  
   const char *format,  
   va_list argptr   
);  
int _vscprintf_p _l(  
   const char *format,  
   locale_t locale,  
   va_list argptr   
);  
int _vscwprintf_p (  
   const wchar_t *format,  
   va_list argptr   
);  
int _vscwprintf_p _l(  
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
  
 For more information, see [Format Specifications](../crt/format-specification-syntax--printf-and-wprintf-functions.md).  
  
## Return Value  
 `_vscprintf_p` returns the number of characters that would be generated if the string pointed to by the list of arguments was printed or sent to a file or buffer using the specified formatting codes. The value returned does not include the terminating null character. `_vscwprintf_p` performs the same function for wide characters.  
  
## Remarks  
 These functions differ from `_vscprintf` and `_vscwprintf` only in that they support the ability to specify the order in which the arguments are used. For more information, see [printf_p Positional Parameters](../crt/printf_p-positional-parameters.md).  
  
 The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.  
  
 If `format` is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../crt/parameter-validation.md). If execution is allowed to continue, the functions return -1 and set `errno` to `EINVAL`.  
  
> [!IMPORTANT]
>  Ensure that if `format` is a user-defined string, it is null terminated and has the correct number and type of parameters. For more information, see [Avoiding Buffer Overruns](http://msdn.microsoft.com/library/windows/desktop/ms717795).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_vsctprintf_p`|`_vscprintf_p`|`_vscprintf_p`|`_vscwprintf_p`|  
|`_vsctprintf_p_l`|`_vscprintf_p_l`|`_vscprintf_p_l`|`_vscwprintf_p_l`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_vscprintf_p`, `_vscprintf_p_l`|\<stdio.h>|  
|`_vscwprintf_p`, `_vscwprintf_p_l`|\<stdio.h> or \<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## Example  
 See the example for [vsprintf](../crt/vsprintf--_vsprintf_l--vswprintf--_vswprintf_l--__vswprintf_l.md).  
  
## See Also  
 [vprintf Functions](../crt/vprintf-functions.md)   
 [_scprintf_p, _scprintf_p_l, _scwprintf_p, _scwprintf_p_l](../crt/_scprintf_p--_scprintf_p_l--_scwprintf_p--_scwprintf_p_l.md)   
 [_vscprintf, _vscprintf_l, _vscwprintf, _vscwprintf_l](../crt/_vscprintf--_vscprintf_l--_vscwprintf--_vscwprintf_l.md)