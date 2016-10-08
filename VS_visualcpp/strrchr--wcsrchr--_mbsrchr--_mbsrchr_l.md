---
title: "strrchr, wcsrchr, _mbsrchr, _mbsrchr_l"
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
  - strrchr
  - wcsrchr
  - _mbsrchr
  - _mbsrchr_l
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
apitype: DLLExport
ms.assetid: 75cf2664-758e-49bb-bf6b-8a139cd474d2
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
# strrchr, wcsrchr, _mbsrchr, _mbsrchr_l
Scans a string for the last occurrence of a character.  
  
> [!IMPORTANT]
>  `_mbsrchr` and `_mbsrchr_l` cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
char *strrchr(  
   const char *str,  
   int c   
); // C only  
char *strrchr(  
   char *str,  
   int c   
); // C++ only  
const char *strrchr(  
   const char *str,  
   int c   
); // C++ only  
wchar_t *wcsrchr(  
   const wchar_t *str,  
   wchar_t c   
); // C only  
wchar_t *wcsrchr(  
   wchar_t *str,  
   wchar_t c   
); // C++ only  
const wchar_t *wcsrchr(  
   const wchar_t *str,  
   wchar_t c   
); // C++ only  
unsigned char *_mbsrchr(  
   const unsigned char *str,  
   unsigned int c   
); // C only  
unsigned char *_mbsrchr(  
   unsigned char *str,  
   unsigned int c   
); // C++ only  
const unsigned char *_mbsrchr(  
   const unsigned char *str,  
   unsigned int c   
); // C++ only  
unsigned char *_mbsrchr_l(  
   const unsigned char *str,  
   unsigned int c,  
   _locale_t locale  
); // C only  
unsigned char *_mbsrchr_l(  
   unsigned char *str,  
   unsigned int c,  
   _locale_t locale  
); // C++ only  
const unsigned char *_mbsrchr_l(  
   const unsigned char *str,  
   unsigned int c,  
   _locale_t locale  
); // C++ only  
```  
  
#### Parameters  
 `str`  
 Null-terminated string to search.  
  
 `c`  
 Character to be located.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 Returns a pointer to the last occurrence of `c` in `str`, or `NULL` if `c` is not found.  
  
## Remarks  
 The `strrchr` function finds the last occurrence of `c` (converted to `char`) in `str`. The search includes the terminating null character.  
  
 `wcsrchr` and `_mbsrchr` are wide-character and multibyte-character versions of `strrchr`. The arguments and return value of `wcsrchr` are wide-character strings; those of `_mbsrchr` are multibyte-character strings.  
  
 In C, these functions take a `const` pointer for the first argument. In C++, two overloads are available. The overload taking a pointer to `const` returns a pointer to `const`; the version that takes a pointer to non-`const` returns a pointer to non-`const`. The macro _CONST_CORRECT_OVERLOADS is defined if both the `const` and non-`const` versions of these functions are available. If you require the non-`const` behavior for both C++ overloads, define the symbol _CONST_RETURN.  
  
 `_mbsrchr` validates its parameters. If `str` is `NULL`, the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, `errno` is set to `EINVAL` and `_mbsrchr` returns 0. `strrchr` and `wcsrchr` do not validate their parameters. These three functions behave identically otherwise.  
  
 The output value is affected by the setting of the `LC_CTYPE` category setting of the locale; for more information, see [setlocale](../VS_visualcpp/setlocale--_wsetlocale.md). The versions of these functions without the `_l` suffix use the current locale for this locale-dependent behavior; the versions with the `_l` suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../VS_visualcpp/Locale.md).  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_tcsrchr`|`strrchr`|`_mbsrchr`|`wcsrchr`|  
|**n/a**|**n/a**|`_mbsrchr_l`|**n/a**|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`strrchr`|<string.h>|  
|`wcsrchr`|<string.h> or <wchar.h>|  
|`_mbsrchr`, `_mbsrchr_l`|<mbstring.h>|  
  
 For more information about compatibility, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## Example  
 For an example of using `strrchr`, see [strchr](../VS_visualcpp/strchr--wcschr--_mbschr--_mbschr_l.md).  
  
## .NET Framework Equivalent  
 [System::String::LastIndexOf](https://msdn.microsoft.com/en-us/library/system.string.lastindexof.aspx)  
  
## See Also  
 [String Manipulation](../VS_visualcpp/String-Manipulation--CRT-.md)   
 [Locale](../VS_visualcpp/Locale.md)   
 [Interpretation of Multibyte-Character Sequences](../VS_visualcpp/Interpretation-of-Multibyte-Character-Sequences.md)   
 [strchr, wcschr, _mbschr, _mbschr_l](../VS_visualcpp/strchr--wcschr--_mbschr--_mbschr_l.md)   
 [strcspn, wcscspn, _mbscspn, _mbscspn_l](../VS_visualcpp/strcspn--wcscspn--_mbscspn--_mbscspn_l.md)   
 [_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](../VS_visualcpp/_strnicmp--_wcsnicmp--_mbsnicmp--_strnicmp_l--_wcsnicmp_l--_mbsnicmp_l.md)   
 [strpbrk, wcspbrk, _mbspbrk, _mbspbrk_l](../VS_visualcpp/strpbrk--wcspbrk--_mbspbrk--_mbspbrk_l.md)   
 [strspn, wcsspn, _mbsspn, _mbsspn_l](../VS_visualcpp/strspn--wcsspn--_mbsspn--_mbsspn_l.md)