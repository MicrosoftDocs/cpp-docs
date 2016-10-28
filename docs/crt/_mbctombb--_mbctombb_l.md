---
title: "_mbctombb, _mbctombb_l"
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
  - "_mbctombb_l"
  - "_mbctombb"
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
  - "api-ms-win-crt-multibyte-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "_mbctombb_l"
  - "_mbctombb"
  - "mbctombb_l"
  - "mbctombb"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbctombb function"
  - "mbctombb_l function"
  - "mbctombb function"
  - "_mbctombb_l function"
ms.assetid: d90970b8-71ff-4586-b6a2-f9ceb811f776
caps.latest.revision: 17
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
# _mbctombb, _mbctombb_l
Converts a double-byte multibyte character to a corresponding single-byte multibyte character.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
unsigned int _mbctombb(  
   unsigned int c   
);  
unsigned int _mbctombb_l(  
   unsigned int c,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `c`  
 Multibyte character to convert.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 If successful, `_mbctombb` and `_mbctombb_l`returns the single-byte character that corresponds to `c`; otherwise it returns `c`.  
  
## Remarks  
 The `_mbctombb` and `_mbctombb_l`functions convert a given multibyte character to a corresponding single-byte multibyte character. Characters must correspond to single-byte characters within the range 0x20 – 0x7E or 0xA1 – 0xDF to be converted.  
  
 The output value is affected by the setting of the `LC_CTYPE` category setting of the locale; see [setlocale](../crt/setlocale--_wsetlocale.md) for more information. The version of this function without the `_l` suffix uses the current locale for this locale-dependent behavior; the version with the `_l` suffix is identical except that it use the locale parameter passed in instead. For more information, see [Locale](../crt/locale.md).  
  
 In previous versions, `_mbctombb` was called `zentohan`. Use _`mbctombb` instead.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_mbctombb`|\<mbstring.h>|  
|`_mbctombb_l`|\<mbstring.h>|  
  
 For more compatibility information, see [Compatibility](../crt/compatibility.md).  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](../Topic/Platform%20Invoke%20Examples.md).  
  
## See Also  
 [Data Conversion](../crt/data-conversion.md)   
 [_mbbtombc, _mbbtombc_l](../crt/_mbbtombc--_mbbtombc_l.md)   
 [_mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l](../crt/_mbcjistojms--_mbcjistojms_l--_mbcjmstojis--_mbcjmstojis_l.md)   
 [_mbctohira, _mbctohira_l, _mbctokata, _mbctokata_l](../crt/_mbctohira--_mbctohira_l--_mbctokata--_mbctokata_l.md)   
 [_mbctolower, _mbctolower_l, _mbctoupper, _mbctoupper_l](../crt/_mbctolower--_mbctolower_l--_mbctoupper--_mbctoupper_l.md)