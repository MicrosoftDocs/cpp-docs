---
title: "isupper, _isupper_l, iswupper, _iswupper_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "isupper"
  - "iswupper"
  - "_iswupper_l"
  - "_isupper_l"
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
  - "isupper"
  - "_istupper"
  - "iswupper"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "istupper function"
  - "iswupper function"
  - "isupper_l function"
  - "_isupper_l function"
  - "iswupper_l function"
  - "_istupper function"
  - "_iswupper_l function"
  - "isupper function"
ms.assetid: da2bcc9f-241c-48c0-9a0e-ad273827e16a
caps.latest.revision: 21
author: "corob-msft"
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
# isupper, _isupper_l, iswupper, _iswupper_l
Determines whether an integer represents an uppercase character.  
  
## Syntax  
  
```  
int isupper(  
   int c   
);  
int _isupper_l (  
   int c,  
   _locale_t locale  
);  
int iswupper(  
   wint_t c   
);  
int _iwsupper_l(  
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
 Each of these routines returns nonzero if `c` is a particular representation of an uppercase letter. `isupper` returns a nonzero value if `c` is an uppercase character (A – Z). `iswupper` returns a nonzero value if `c` is a wide character that corresponds to an uppercase letter, or if `c` is one of an implementation-defined set of wide characters for which none of `iswcntrl`, `iswdigit`, `iswpunct`, or `iswspace` is nonzero. Each of these routines returns 0 if `c` does not satisfy the test condition.  
  
 The versions of these functions that have the `_l` suffix use the locale that's passed in instead of the current locale for their locale-dependent behavior. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
 The behavior of `isupper` and `_isupper_l` is undefined if `c` is not EOF or in the range 0 through 0xFF, inclusive. When a debug CRT library is used and `c` is not one of these values, the functions raise an assertion.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_istupper`|`isupper`|[_ismbcupper](../../c-runtime-library/reference/ismbclower-ismbclower-l-ismbcupper-ismbcupper-l.md)|`iswupper`|  
|`_istupper_l`|`_isupper_l`|[_ismbclower, _ismbclower_l, _ismbcupper, _ismbcupper_l](../../c-runtime-library/reference/ismbclower-ismbclower-l-ismbcupper-ismbcupper-l.md)|`_iswupper_l`|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`isupper`|\<ctype.h>|  
|`_isupper_l`|\<ctype.h>|  
|`iswupper`|\<ctype.h> or \<wchar.h>|  
|`_iswupper_l`|\<ctype.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## .NET Framework Equivalent  
 [System::Char::IsUpper](https://msdn.microsoft.com/en-us/library/system.char.isupper.aspx)  
  
## See Also  
 [Character Classification](../../c-runtime-library/character-classification.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)