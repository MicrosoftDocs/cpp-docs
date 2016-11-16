---
title: "_mbccpy, _mbccpy_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mbccpy"
  - "_mbccpy_l"
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
  - "_mbccpy"
  - "tccpy"
  - "ftccpy"
  - "mbccpy"
  - "_tccpy"
  - "_ftccpy"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "_tccpy function"
  - "_tccpy_l function"
  - "tccpy_l function"
  - "tccpy function"
  - "mbccpy function"
  - "_mbccpy_l function"
  - "_mbccpy function"
  - "mbccpy_l function"
ms.assetid: 13f4de6e-7792-41ac-b319-dd9b135433aa
caps.latest.revision: 24
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
# _mbccpy, _mbccpy_l
Copies a multibyte character from one string to another string. More secure versions of these functions are available; see [_mbccpy_s, _mbccpy_s_l](../../c-runtime-library/reference/mbccpy-s-mbccpy-s-l.md).  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
void _mbccpy(  
   unsigned char *dest,  
   const unsigned char *src   
);  
void _mbccpy_l(  
   unsigned char *dest,  
   const unsigned char *src,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `dest`  
 Copy destination.  
  
 `src`  
 Multibyte character to copy.  
  
 `locale`  
 Locale to use.  
  
## Remarks  
 The `_mbccpy` function copies one multibyte character from `src` to `dest`.  
  
 This function validates its parameters. If `_mbccpy` is passed a null pointer for `dest` or `src`, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, `errno` is set to `EINVAL`.  
  
 `_mbccpy` uses the current locale for any locale-dependent behavior. `_mbccpy_l` is identical to `_mbccpy` except that `_mbccpy_l` uses the locale passed in for any locale-dependent behavior. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
 **Security Note** Use a null-terminated string. The null-terminated string must not exceed the size of the destination buffer. For more information, see [Avoiding Buffer Overruns](http://msdn.microsoft.com/library/windows/desktop/ms717795). Buffer overrun problems are a frequent method of system attack, resulting in an unwarranted elevation of privilege.  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tccpy`|Maps to macro or inline function|`_mbccpy`|Maps to macro or inline function|  
|`_tccpy_l`|n/a|`_mbccpy_l`|n/a|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_mbccpy`|\<mbctype.h>|  
|`_mbccpy_l`|\<mbctype.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Locale](../../c-runtime-library/locale.md)   
 [Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [_mbclen, mblen, _mblen_l](../../c-runtime-library/reference/mbclen-mblen-mblen-l.md)