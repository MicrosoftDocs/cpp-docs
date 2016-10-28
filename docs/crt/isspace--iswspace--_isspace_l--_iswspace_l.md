---
title: "isspace, iswspace, _isspace_l, _iswspace_l"
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
  - "iswspace"
  - "_isspace_l"
  - "_iswspace_l"
  - "isspace"
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
  - "api-ms-win-crt-string-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "iswspace"
  - "_istspace"
  - "isspace"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "iswspace function"
  - "isspace function"
  - "_iswspace_l function"
  - "_isspace_l function"
  - "iswspace_l function"
  - "isspace_l function"
  - "_istspace function"
  - "istspace function"
ms.assetid: b851e0c0-36bb-4dac-a1a3-533540939035
caps.latest.revision: 18
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
# isspace, iswspace, _isspace_l, _iswspace_l
Determines whether an integer represents a space character.  
  
## Syntax  
  
```  
int isspace(  
   int c   
);  
int iswspace(  
   wint_t c   
);  
int _isspace_l(  
   int c,  
   _locale_t locale  
);  
int _iswspace_l(  
   wint_t c,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `c`  
 Integer to test.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 Each of these routines returns nonzero if `c` is a particular representation of a space character. `isspace` returns a nonzero value if `c` is a white-space character (0x09 – 0x0D or 0x20). The result of the test condition for the `isspace` function depends on the `LC_CTYPE` category setting of the locale; see [setlocale, _wsetlocale](../crt/setlocale--_wsetlocale.md) for more information. The versions of these functions that do not have the `_l` suffix use the current locale for any locale-dependent behavior; the versions that do have the `_l` suffix are identical except that they use the locale that's passed in instead. For more information, see [Locale](../crt/locale.md).  
  
 `iswspace` returns a nonzero value if `c` is a wide character that corresponds to a standard white-space character.  
  
 The behavior of `isspace` and `_isspace_l` is undefined if `c` is not EOF or in the range 0 through 0xFF, inclusive. When a debug CRT library is used and `c` is not one of these values, the functions raise an assertion.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|**_** `istspace`|`isspace`|[_ismbcspace](../crt/8e0a5f47-ba64-4411-92a3-3c525d16e3be.md)|`iswspace`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`isspace`|\<ctype.h>|  
|`iswspace`|\<ctype.h> or \<wchar.h>|  
|`_isspace_l`|\<ctype.h>|  
|`_iswspace_l`|\<ctype.h> or \<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../crt/compatibility.md).  
  
## .NET Framework Equivalent  
 [System::Char::IsWhiteSpace](https://msdn.microsoft.com/en-us/library/system.char.iswhitespace.aspx)  
  
## See Also  
 [Character Classification](../crt/character-classification.md)   
 [Locale](../crt/locale.md)   
 [is, isw Routines](../crt/is--isw-routines.md)