---
title: "_mbclen, mblen, _mblen_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apiname: 
  - "_mbclen"
  - "mblen"
  - "_mblen_l"
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
  - "api-ms-win-crt-string-l1-1-0.dll"
apitype: "DLLExport"
f1_keywords: 
  - "mblen"
  - "ftclen"
  - "_mbclen"
  - "tclen"
  - "_ftclen"
  - "_tclen"
  - "mbclen"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "tclen function"
  - "_mblen_l function"
  - "_tclen function"
  - "mblen_l function"
  - "_mbclen function"
  - "mbclen function"
  - "mblen function"
ms.assetid: d5eb92a0-b7a3-464a-aaf7-9890a8e3ed70
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
# _mbclen, mblen, _mblen_l
Gets the length and determines the validity of a multibyte character.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
size_t _mbclen(  
   const unsigned char *c   
);  
int mblen(  
   const char *mbstr,  
   size_t count   
);  
int _mblen_l(  
   const char *mbstr,  
   size_t count,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `c`  
 Multibyte character.  
  
 `mbstr`  
 Address of a multibyte-character byte sequence.  
  
 `count`  
 Number of bytes to check.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 `_mbclen` returns 1 or 2, according to whether the multibyte character `c` is 1 or 2 bytes long. There is no error return for `_mbclen`. If `mbstr` is not `NULL`, `mblen` returns the length, in bytes, of the multibyte character. If `mbstr` is `NULL` or it points to the wide-character null character, `mblen` returns 0. If the object that `mbstr` points to does not form a valid multibyte character within the first `count` characters, `mblen` returns –1.  
  
## Remarks  
 The `_mbclen` function returns the length, in bytes, of the multibyte character `c`. If `c` does not point to the lead byte of a multibyte character as determined by an implicit call to `_ismbblead`, the result of `_mbclen` is unpredictable.  
  
 `mblen` returns the length in bytes of `mbstr` if it is a valid multibyte character and determines multibyte-character validity associated with the code page. `mblen` examines `count` or fewer bytes contained in `mbstr`, but not more than `MB_CUR_MAX` bytes.  
  
 The output value is affected by the setting of the `LC_CTYPE` category setting of the locale; see [setlocale](../../c-runtime-library/reference/setlocale-wsetlocale.md) for more information. The versions of these functions without the `_l` suffix use the current locale for this locale-dependent behavior; the versions with the `_l` suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tclen`|Maps to macro or inline function|`_mbclen`|Maps to macro or inline function|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_mbclen`|\<mbstring.h>|  
|`mblen`|\<stdlib.h>|  
|`_mblen_l`|\<stdlib.h>|  
  
 For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).  
  
## Example  
  
```  
// crt_mblen.c  
/* illustrates the behavior of the mblen function  
 */  
  
#include <stdlib.h>  
#include <stdio.h>  
  
int main( void )  
{  
    int      i;  
    char    *pmbc = (char *)malloc( sizeof( char ) );  
    wchar_t  wc   = L'a';  
  
    printf( "Convert wide character to multibyte character:\n" );  
    wctomb_s( &i, pmbc, sizeof(char), wc );  
    printf( "  Characters converted: %u\n", i );  
    printf( "  Multibyte character: %x\n\n", *pmbc );  
  
    i = mblen( pmbc, MB_CUR_MAX );  
    printf( "Length in bytes of multibyte character %x: %u\n", *pmbc, i );  
  
    pmbc = NULL;  
    i = mblen( pmbc, MB_CUR_MAX );  
    printf( "Length in bytes of NULL multibyte character %x: %u\n", pmbc, i );  
}  
```  
  
## Output  
  
```  
Convert wide character to multibyte character:  
  Characters converted: 1  
  Multibyte character: 61  
  
Length in bytes of multibyte character 61: 1  
Length in bytes of NULL multibyte character 0: 0  
```  
  
## .NET Framework Equivalent  
 Not applicable. To call the standard C function, use `PInvoke`. For more information, see [Platform Invoke Examples](http://msdn.microsoft.com/Library/15926806-f0b7-487e-93a6-4e9367ec689f).  
  
## See Also  
 [Character Classification](../../c-runtime-library/character-classification.md)   
 [Locale](../../c-runtime-library/locale.md)   
 [Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)   
 [_mbccpy, _mbccpy_l](../../c-runtime-library/reference/mbccpy-mbccpy-l.md)   
 [strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l](../../c-runtime-library/reference/strlen-wcslen-mbslen-mbslen-l-mbstrlen-mbstrlen-l.md)