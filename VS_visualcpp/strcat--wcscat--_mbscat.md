---
title: "strcat, wcscat, _mbscat"
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
  - _mbscat
  - wcscat
  - strcat
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
  - api-ms-win-crt-multibyte-l1-1-0.dll
  - api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
ms.assetid: c89c4ef1-817a-44ff-a229-fe22d06ba78a
caps.latest.revision: 23
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
# strcat, wcscat, _mbscat
Appends a string. More secure versions of these functions are available; see [strcat_s, wcscat_s, _mbscat_s](../VS_visualcpp/strcat_s--wcscat_s--_mbscat_s.md).  
  
> [!IMPORTANT]
>  `_mbscat_s` cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
char *strcat(  
   char *strDestination,  
   const char *strSource   
);  
wchar_t *wcscat(  
   wchar_t *strDestination,  
   const wchar_t *strSource   
);  
unsigned char *_mbscat(  
   unsigned char *strDestination,  
   const unsigned char *strSource   
);  
template <size_t size>  
char *strcat(  
   char (&strDestination)[size],  
   const char *strSource   
); // C++ only  
template <size_t size>  
wchar_t *wcscat(  
   wchar_t (&strDestination)[size],  
   const wchar_t *strSource   
); // C++ only  
template <size_t size>  
unsigned char *_mbscat(  
   unsigned char (&strDestination)[size],  
   const unsigned char *strSource   
); // C++ only  
```  
  
#### Parameters  
 `strDestination`  
 Null-terminated destination string.  
  
 `strSource`  
 Null-terminated source string.  
  
## Return Value  
 Each of these functions returns the destination string (`strDestination`). No return value is reserved to indicate an error.  
  
## Remarks  
 The `strcat` function appends `strSource` to `strDestination` and terminates the resulting string with a null character. The initial character of `strSource` overwrites the terminating null character of `strDestination`. The behavior of `strcat` is undefined if the source and destination strings overlap.  
  
> [!IMPORTANT]
>  Because `strcat` does not check for sufficient space in `strDestination` before appending `strSource`, it is a potential cause of buffer overruns. Consider using [strncat](../VS_visualcpp/strncat--_strncat_l--wcsncat--_wcsncat_l--_mbsncat--_mbsncat_l.md) instead.  
  
 `wcscat` and `_mbscat` are wide-character and multibyte-character versions of `strcat`. The arguments and return value of `wcscat` are wide-character strings; those of `_mbscat` are multibyte-character strings. These three functions behave identically otherwise.  
  
 In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure Template Overloads](../VS_visualcpp/Secure-Template-Overloads.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcscat`|`strcat`|`_mbscat`|`wcscat`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strcat`|<string.h>|  
|`wcscat`|<string.h> or <wchar.h>|  
|`_mbscat`|<mbstring.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
 See the example for [strcpy](../VS_visualcpp/strcpy--wcscpy--_mbscpy.md).  
  
## .NET Framework Equivalent  
 [System::String::Concat](https://msdn.microsoft.com/en-us/library/system.string.concat.aspx)  
  
## See Also  
 [String Manipulation](../VS_visualcpp/String-Manipulation--CRT-.md)   
 [strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](../VS_visualcpp/strncat--_strncat_l--wcsncat--_wcsncat_l--_mbsncat--_mbsncat_l.md)   
 [strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](../VS_visualcpp/strncmp--wcsncmp--_mbsncmp--_mbsncmp_l.md)   
 [strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](../VS_visualcpp/strncpy--_strncpy_l--wcsncpy--_wcsncpy_l--_mbsncpy--_mbsncpy_l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../VS_visualcpp/_strnicmp--_wcsnicmp--_mbsnicmp--_strnicmp_l--_wcsnicmp_l--_mbsnicmp_l.md)   
 [strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](../VS_visualcpp/strrchr--wcsrchr--_mbsrchr--_mbsrchr_l.md)   
 [strspn, wcsspn, _mbsspn, _mbsspn_l](../VS_visualcpp/strspn--wcsspn--_mbsspn--_mbsspn_l.md)