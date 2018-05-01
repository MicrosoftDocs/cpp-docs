---
title: "isalpha, iswalpha, _isalpha_l, _iswalpha_l | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
api_name: 
  - "iswalpha"
  - "_iswalpha_l"
  - "isalpha"
  - "_isalpha_l"
api_location: 
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
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "_istalpha"
  - "_ismbcalpha_l"
  - "isalpha"
  - "_isalpha_l"
  - "iswalpha"
  - "_istalpha_l"
  - "_iswalpha_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_iswalpha_l function"
  - "_isalpha_l function"
  - "_ismbcalpha_l function"
  - "_istalpha_l function"
  - "_ismbcalpha function"
  - "isalpha function"
  - "iswalpha function"
  - "istalpha function"
  - "_istalpha function"
ms.assetid: ed6cc2be-c4b0-4475-87ac-bc06d8c23064
caps.latest.revision: 26
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# isalpha, iswalpha, _isalpha_l, _iswalpha_l
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [isalpha, iswalpha, _isalpha_l, _iswalpha_l](https://docs.microsoft.com/cpp/c-runtime-library/reference/isalpha-iswalpha-isalpha-l-iswalpha-l).  
  
Determines whether an integer represents an alphabetic character.  
  
## Syntax  
  
```  
int isalpha(   
   int c   
);  
int iswalpha(   
   wint_t c   
);  
int _isalpha_l(   
   int c,  
   _locale_t locale   
);  
int _iswalpha_l(   
   wint_t c,  
   _locale_t locale   
);  
```  
  
#### Parameters  
 `c`  
 Integer to test.  
  
 `locale`  
 The locale to use instead of the current locale.  
  
## Return Value  
 Each of these routines returns nonzero if `c` is a particular representation of an alphabetic character. `isalpha` returns a nonzero value if `c` is within the ranges A – Z or a – z. `iswalpha` returns a nonzero value only for wide characters for which `iswupper` or `iswlower` is nonzero; that is, for any wide character that is one of an implementation-defined set for which none of `iswcntrl`, `iswdigit`, `iswpunct`, or `iswspace` is nonzero. Each of these routines returns 0 if `c` does not satisfy the test condition.  
  
 The versions of these functions that have the `_l` suffix use the locale parameter that's passed in instead of the current locale. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
 The behavior of `isalpha` and `_isalpha_l` is undefined if `c` is not EOF or in the range 0 through 0xFF, inclusive. When a debug CRT library is used and `c` is not one of these values, the functions raise an assertion.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_istalpha`|`isalpha`|`_ismbcalpha`|`iswalpha`|  
|`_istalpha_l`|`_isalpha_l`|`_ismbcalpha_l`|`_iswalpha_l`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`isalpha`|\<ctype.h>|  
|`iswalpha`|\<ctype.h> or \<wchar.h>|  
|`_isalpha_l`|\<ctype.h>|  
|`_iswalpha_l`|\<ctype.h> or \<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## .NET Framework Equivalent  
 [System::Char::IsLetter](https://msdn.microsoft.com/library/system.char.isletter.aspx)  
  
## See Also  
 [Character Classification](../../c-runtime-library/character-classification.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)





