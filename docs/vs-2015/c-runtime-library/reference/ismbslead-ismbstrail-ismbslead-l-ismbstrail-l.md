---
title: "_ismbslead, _ismbstrail, _ismbslead_l, _ismbstrail_l | Microsoft Docs"
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
  - "_ismbstrail"
  - "_ismbslead_l"
  - "_ismbslead"
  - "_ismbstrail_l"
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
  - "api-ms-win-crt-multibyte-l1-1-0.dll"
api_type: 
  - "DLLExport"
topic_type: 
  - "apiref"
f1_keywords: 
  - "_ismbslead"
  - "ismbs"
  - "ismbslead_l"
  - "_ismbs"
  - "ismbstrail_l"
  - "ismbslead"
  - "_ismbstrail"
  - "_ismbstrail_l"
  - "ismbstrail"
  - "_ismbslead_l"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "ismbstrail function"
  - "_ismbslead function"
  - "ismbslead function"
  - "ismbslead_l function"
  - "_ismbstrail function"
  - "_ismbslead_l function"
  - "ismbstrail_l function"
  - "_ismbstrail_l function"
ms.assetid: 86d2cd7a-3cff-443a-b713-14cc17a231e9
caps.latest.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _ismbslead, _ismbstrail, _ismbslead_l, _ismbstrail_l
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [_ismbslead, _ismbstrail, _ismbslead_l, _ismbstrail_l](https://docs.microsoft.com/cpp/c-runtime-library/reference/ismbslead-ismbstrail-ismbslead-l-ismbstrail-l).  
  
Performs context-sensitive tests for multibyte-character-string lead bytes and trail bytes and determines whether a given substring pointer points to a lead byte or a trail byte.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the [!INCLUDE[wrt](../../includes/wrt-md.md)]. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
int _ismbslead(  
   const unsigned char *str,  
   const unsigned char *current   
);  
int _ismbstrail(  
   const unsigned char *str,  
   const unsigned char *current   
);  
int _ismbslead_l(  
   const unsigned char *str,  
   const unsigned char *current,  
   _locale_t locale  
);  
int _ismbstrail_l(  
   const unsigned char *str,  
   const unsigned char *current,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `str`  
 Pointer to the start of the string or the previous known lead byte.  
  
 `current`  
 Pointer to the position in the string to be tested.  
  
 `locale`  
 The locale to use.  
  
## Return Value  
 `_ismbslead` returns –1 if the character is a lead byte and `_ismbstrail` returns –1 if the character is a trail byte. If the input strings are valid but are not a lead byte or trail byte, these functions return zero. If either argument is `NULL`, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return `NULL` and set `errno` to `EINVAL`.  
  
## Remarks  
 `_ismbslead` and `_ismbstrail` are slower than the `_ismbblead` and `_ismbbtrail` versions because they take the string context into account.  
  
 The versions of these functions that have the `_l` suffix are identical except that for their locale-dependent behavior they use the locale that's passed in instead of the current locale. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
## Requirements  
  
|Routine|Required header|Optional header|  
|-------------|---------------------|---------------------|  
|`_ismbslead`|\<mbctype.h> or \<mbstring.h>|\<ctype.h>,* \<limits.h>, \<stdlib.h>|  
|`_ismbstrail`|\<mbctype.h> or \<mbstring.h>|\<ctype.h>,* \<limits.h>, \<stdlib.h>|  
|`_ismbslead_l`|\<mbctype.h> or \<mbstring.h>|\<ctype.h>,* \<limits.h>, \<stdlib.h>|  
|`_ismbstrail_l`|\<mbctype.h> or \<mbstring.h>|\<ctype.h>,* \<limits.h>, \<stdlib.h>|  
  
 \* For manifest constants for the test conditions.  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`.  
  
## See Also  
 [Character Classification](../../c-runtime-library/character-classification.md)   
 [_ismbc Routines](../../c-runtime-library/ismbc-routines.md)   
 [is, isw Routines](../../c-runtime-library/is-isw-routines.md)   
 [_ismbb Routines](../../c-runtime-library/ismbb-routines.md)





