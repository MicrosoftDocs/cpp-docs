---
title: "tolower, _tolower, towlower, _tolower_l, _towlower_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_tolower_l"
  - "towlower"
  - "tolower"
  - "_tolower"
  - "_towlower_l"
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
  - "_totlower"
  - "tolower"
  - "_tolower"
  - "towlower"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "tolower_l function"
  - "_tolower_l function"
  - "totlower function"
  - "string conversion, to different characters"
  - "lowercase, converting to"
  - "tolower function"
  - "string conversion, case"
  - "towlower function"
  - "_tolower function"
  - "_totlower function"
  - "towlower_l function"
  - "case, converting"
  - "characters, converting"
  - "_towlower_l function"
ms.assetid: 86e0fc02-94ae-4472-9631-bf8e96f67b92
caps.latest.revision: 22
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
# tolower, _tolower, towlower, _tolower_l, _towlower_l
Converts a character to lowercase.  
  
## Syntax  
  
```  
int tolower(  
   int c   
);  
int _tolower(  
   int c   
);  
int towlower(  
   wint_t c   
);  
int _tolower_l(  
   int c,  
   _locale_t locale   
);  
int _towlower_l(  
   wint_t c,  
   _locale_t locale   
);  
```  
  
#### Parameters  
 [in] `c`  
 Character to convert.  
  
 [in] `locale`  
 Locale to use for locale-specific translation.  
  
## Return Value  
 Each of these routines converts a copy of `c` to lower case if the conversion is possible, and returns the result. There is no return value reserved to indicate an error.  
  
## Remarks  
 Each of these routines converts a given uppercase letter to a lowercase letter if it is possible and relevant. The case conversion of `towlower` is locale-specific. Only the characters relevant to the current locale are changed in case. The functions without the `_l` suffix use the currently set locale. The versions of these functions that have the `_l` suffix take the locale as a parameter and use that instead of the currently set locale. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
 In order for `_tolower` to give the expected results, [__isascii](../../c-runtime-library/reference/isascii-isascii-iswascii.md) and [isupper](../../c-runtime-library/reference/isupper-isupper-l-iswupper-iswupper-l.md) must both return nonzero.  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_totlower`|`tolower`|`_mbctolower`|`towlower`|  
|`_totlower_l`|`_tolower_l`|`_mbctolower_l`|`_towlower_l`|  
  
> [!NOTE]
>  `_tolower_l` and `_towlower_l` have no locale dependence and are not meant to be called directly. They are provided for internal use by `_totlower_l`.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`tolower`|\<ctype.h>|  
|`_tolower`|\<ctype.h>|  
|`towlower`|\<ctype.h> or \<wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.  
  
## Example  
 See the example in [to Functions](../../c-runtime-library/to-functions.md).  
  
## .NET Framework Equivalent  
 [System::Char::ToLower](https://msdn.microsoft.com/en-us/library/system.char.tolower.aspx)  
  
## See Also  
 [Data Conversion](../../c-runtime-library/data-conversion.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)   
 [to Functions](../../c-runtime-library/to-functions.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)