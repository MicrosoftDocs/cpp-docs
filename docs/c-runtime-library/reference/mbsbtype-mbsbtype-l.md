---
title: "_mbsbtype, _mbsbtype_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mbsbtype_l"
  - "_mbsbtype"
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
  - "mbsbtype"
  - "mbsbtype_l"
  - "_mbsbtype_l"
  - "_mbsbtype"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_mbsbtype function"
  - "mbsbtype function"
  - "_mbsbtype_l function"
  - "mbsbtype_l function"
ms.assetid: 0d5dd91a-d32d-4f98-ac57-98dfc9e98eac
caps.latest.revision: 19
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
# _mbsbtype, _mbsbtype_l
Returns the type of byte within a string.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
int _mbsbtype(  
   const unsigned char *mbstr,  
   size_t count   
);  
int _mbsbtype_l(  
   const unsigned char *mbstr,  
   size_t count,  
   _locale_t locale   
);  
```  
  
#### Parameters  
 `mbstr`  
 Address of a sequence of multibyte characters.  
  
 `count`  
 Byte offset from head of string.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 `_mbsbtype` and `_mbsbtype_l`returns an integer value indicating the result of the test on the specified byte. The manifest constants in the following table are defined in Mbctype.h.  
  
|Return value|Byte type|  
|------------------|---------------|  
|`_MBC_SINGLE` (0)|Single-byte character. For example, in code page 932, `_mbsbtype` returns 0 if the specified byte is within the range 0x20 – 0x7E or 0xA1 – 0xDF.|  
|`_MBC_LEAD` (1)|Lead byte of multibyte character. For example, in code page 932, `_mbsbtype` returns 1 if the specified byte is within the range 0x81 – 0x9F or 0xE0 – 0xFC.|  
|`_MBC_TRAIL` (2)|Trailing byte of multibyte character. For example, in code page 932, `_mbsbtype` returns 2 if the specified byte is within the range 0x40 – 0x7E or 0x80 – 0xFC.|  
|`_MBC_ILLEGAL` (–1)|`NULL` string, invalid character, or `NULL` byte found before the byte at offset `count` in `mbstr`.|  
  
## Remarks  
 The `_mbsbtype` function determines the type of a byte in a multibyte character string. The function examines only the byte at offset `count` in `mbstr`, ignoring invalid characters before the specified byte.  
  
 The output value is affected by the setting of the `LC_CTYPE` category setting of the locale; see [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) for more information. The version of this function without the `_l` suffix uses the current locale for this locale-dependent behavior; the version with the `_l` suffix is identical except that it use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
 If the input string is `NULL`, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, `errno` is set to `EINVAL` and the function returns `_MBC_ILLEGAL`.  
  
## Requirements  
  
|Routine|Required header|Optional header|  
|-------------|---------------------|---------------------|  
|`_mbsbtype`|\<mbstring.h>|\<mbctype.h>*|  
|`_mbsbtype_l`|\<mbstring.h>|\<mbctype.h>*|  
  
 \* For manifest constants used as return values.  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## .NET Framework Equivalent  
 Not applicable, but see [System::Globalization::CultureInfo](https://msdn.microsoft.com/en-us/library/system.globalization.cultureinfo.aspx).  
  
## See Also  
 [Byte Classification](../../c-runtime-library/byte-classification.md)