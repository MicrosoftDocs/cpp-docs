---
title: "_snscanf_s, _snscanf_s_l, _snwscanf_s, _snwscanf_s_l"
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
  - "_snwscanf_s_l"
  - "_snwscanf_s"
  - "_snscanf_s"
  - "_snscanf_s_l"
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
  - "_sntscanf_s"
  - "snscanf_s"
  - "_snwscanf_s_l"
  - "sntscanf_s_l"
  - "snwscanf_s_l"
  - "snwscanf_s"
  - "_snscanf_s"
  - "_snwscanf_s"
  - "snscanf_s_l"
  - "_sntscanf_s_l"
  - "_snscanf_s_l"
  - "sntscanf_s"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_snscanf_s_l function"
  - "snwscanf_s function"
  - "_snwscanf_s function"
  - "sntscanf_s_l function"
  - "sntscanf_s function"
  - "_snwscanf_s_l function"
  - "_snscanf_s function"
  - "snscanf_s_l function"
  - "strings [C++], reading data from"
  - "_sntscanf_s_l function"
  - "reading data, strings"
  - "snscanf_s function"
  - "strings [C++], reading"
  - "_sntscanf_s function"
  - "snwscanf_s_l function"
ms.assetid: 72356653-7362-461a-af73-597b9c0a8094
caps.latest.revision: 22
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
# _snscanf_s, _snscanf_s_l, _snwscanf_s, _snwscanf_s_l
Reads formatted data of a specified length from a string. These are versions of [_snscanf, _snscanf_l, _snwscanf, _snwscanf_l](../crt/_snscanf--_snscanf_l--_snwscanf--_snwscanf_l.md) with security enhancements as described in [Security Features in the CRT](../crt/security-features-in-the-crt.md).  
  
## Syntax  
  
```  
int __cdecl _snscanf_s(  
   const char * input,  
   size_t length,  
   const char * format,  
   ...  
);  
int __cdecl _snscanf_s_l(  
   const char * input,  
   size_t length,  
   const char * format,  
   locale_t locale,  
   ...  
);  
int __cdecl _snwscanf_s(  
   const wchar_t * input,  
   size_t length,  
   const wchar_t * format,  
   ...  
);  
int __cdecl _snwscanf_s_l(  
   const wchar_t * input,  
   size_t length,  
   const wchar_t * format,  
   locale_t locale,  
   …  
);  
```  
  
#### Parameters  
 `input`  
 Input string to examine.  
  
 `length`  
 Number of characters to examine in `input`.  
  
 `format`  
 One or more format specifiers.  
  
 `... (optional)`  
 Variables that will be used to store the values extracted from the input string by the format specifiers in `format`.  
  
 `locale`  
 The locale to use.  
  
## Return Value  
 Both of these functions returns the number of fields successfully converted and assigned; the return value does not include fields that were read but not assigned. A return value of 0 indicates that no fields were assigned. The return value is `EOF` for an error or if the end of the string is reached before the first conversion. For more information, see [sscanf_s, _sscanf_s_l, swscanf_s, _swscanf_s_l](../crt/sscanf_s--_sscanf_s_l--swscanf_s--_swscanf_s_l.md).  
  
 If `input` or `format` is a `NULL` pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../crt/parameter-validation.md). If execution is allowed to continue, these functions return `EOF` and set `errno` to `EINVAL`.  
  
 For information about these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../crt/errno--_doserrno--_sys_errlist--and-_sys_nerr.md).  
  
## Remarks  
 This function is like `sscanf_s` except that it provides the ability to specify a fixed number of characters to examine from the input string. For more information, see [sscanf_s, _sscanf_s_l, swscanf_s, _swscanf_s_l](../crt/sscanf_s--_sscanf_s_l--swscanf_s--_swscanf_s_l.md).  
  
 The buffer size parameter is required with the type field characters `c`, `C`, `s`, `S`, and `[`. For more information, see [scanf Type Field Characters](../crt/scanf-type-field-characters.md).  
  
> [!NOTE]
>  The size parameter is of type `unsigned`, not `size_t`.  
  
 The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_sntscanf_s`|`_snscanf_s`|`_snscanf_s`|`_snwscanf_s`|  
|`_sntscanf_s_l`|`_snscanf_s_l`|`_snscanf_s_l`|`_snwscanf_s_l`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_snscanf_s`, _`snscanf_s_l`|\<stdio.h>|  
|`_snwscanf_s`, `_snwscanf_s_l`|\<stdio.h> or \<wchar.h>|  
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md) in the Introduction.  
  
## Example  
  
```  
// crt_snscanf_s.c  
// This example scans a string of   
// numbers, using both the character  
// and wide character secure versions  
// of the snscanf function.  
  
#include <stdio.h>  
  
int main( )  
{  
    char        str1[] = "15 12 14...";  
    wchar_t     str2[] = L"15 12 14...";  
    char        s1[3];  
    wchar_t     s2[3];  
    int         i;  
    float       fp;  
  
    i = _snscanf_s( str1, 6,  "%s %f", s1, 3, &fp);  
    printf_s("_snscanf_s converted %d fields: ", i);  
    printf_s("%s and %f\n", s1, fp);  
  
    i = _snwscanf_s( str2, 6,  L"%s %f", s2, 3, &fp);  
    wprintf_s(L"_snwscanf_s converted %d fields: ", i);  
    wprintf_s(L"%s and %f\n", s2, fp);  
}  
```  
  
 **_snscanf_s converted 2 fields: 15 and 12.000000**  
**_snwscanf_s converted 2 fields: 15 and 12.000000**   
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [scanf Width Specification](../crt/scanf-width-specification.md)