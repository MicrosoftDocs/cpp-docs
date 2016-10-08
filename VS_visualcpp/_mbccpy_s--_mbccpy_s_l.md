---
title: "_mbccpy_s, _mbccpy_s_l"
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
  - _mbccpy_s
  - _mbccpy_s_l
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
ms.assetid: b6e965fa-53c1-4ec3-85ef-a1c4b4f2b2da
caps.latest.revision: 30
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
# _mbccpy_s, _mbccpy_s_l
Copies one multibyte character from a string to another string. These versions of [_mbccpy, _mbccpy_l](../VS_visualcpp/_mbccpy--_mbccpy_l.md) have security enhancements, as described in [Security Features in the CRT](../VS_visualcpp/Security-Features-in-the-CRT.md).  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
errno_t _mbccpy_s(  
   unsigned char *dest,  
   size_t buffSizeInBytes,  
   int * pCopied,  
   const unsigned char *src   
);  
errno_t _mbccpy_s_l(  
   unsigned char *dest,  
   size_t buffSizeInBytes,  
   int * pCopied,  
   const unsigned char *src,  
   locale_t locale  
);  
template <size_t size>  
errno_t _mbccpy_s(  
   unsigned char (&dest)[size],  
   int * pCopied,  
   const unsigned char *src   
); // C++ only  
template <size_t size>  
errno_t _mbccpy_s_l(  
   unsigned char (&dest)[size],  
   int * pCopied,  
   const unsigned char *src,  
   locale_t locale  
); // C++ only  
```  
  
#### Parameters  
 [out] `dest`  
 Copy destination.  
  
 [in] `buffSizeInBytes`  
 Size of the destination buffer.  
  
 [out] `pCopied`  
 Filled with the number of bytes copied (1 or 2 if successful). Pass `NULL` if you don't care about the number.  
  
 [in] `src`  
 Multibyte character to copy.  
  
 [in] `locale`  
 Locale to use.  
  
## Return Value  
 Zero if successful; an error code on failure. If `src` or `dest` is `NULL`, or if more than `buffSizeinBytes` bytes would be copied to `dest`, then the invalid parameter handler is invoked, as described in [Parameter Validation](../VS_visualcpp/Parameter-Validation.md). If execution is allowed to continue, the functions return `EINVAL` and `errno` is set to `EINVAL`.  
  
## Remarks  
 The `_mbccpy_s` function copies one multibyte character from `src` to `dest`. If `src` does not point to the lead byte of a multibyte character as determined by an implicit call to [_ismbblead](../VS_visualcpp/_ismbblead--_ismbblead_l.md), then the single byte that `src` points to is copied. If `src` points to a lead byte but the following byte is 0 and thus invalid, then 0 is copied to `dest`, `errno` is set to `EILSEQ`, and the function returns `EILSEQ`.  
  
 `_mbccpy_s` does not append a null terminator; however, if `src` points to a null character, then that null is copied to `dest` (this is just a regular single-byte copy).  
  
 The value in `pCopied` is filled with the number of bytes copied. Possible values are 1 and 2 if the operation is successful. If `NULL` is passed in, this parameter is ignored.  
  
|`src`|copied to `dest`|`pCopied`|Return value|  
|-----------|----------------------|---------------|------------------|  
|non-lead-byte|non-lead-byte|1|0|  
|0|0|1|0|  
|lead-byte followed by non-0|lead-byte followed by non-0|2|0|  
|lead-byte followed by 0|0|1|`EILSEQ`|  
  
 Note that the second row is just a special case of the first. Also note that the table assumes `buffSizeInBytes` >= `pCopied`.  
  
 `_mbccpy_s` uses the current locale for any locale-dependent behavior. `_mbccpy_s_l` is identical to `_mbccpy_s` except that `_mbccpy_s_l` uses the locale passed in for any locale-dependent behavior.  
  
 In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically, eliminating the need to specify a size argument. For more information, see [Secure Template Overloads](../VS_visualcpp/Secure-Template-Overloads.md).  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_tccpy_s`|Maps to macro or inline function.|`_mbccpy_s`|Maps to macro or inline function.|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_mbccpy_s`|<mbstring.h>|  
|`_mbccpy_s_l`|<mbstring.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## See Also  
 [Locale](../VS_visualcpp/Locale.md)   
 [Interpretation of Multibyte-Character Sequences](../VS_visualcpp/Interpretation-of-Multibyte-Character-Sequences.md)   
 [_mbclen, mblen, _mblen_l](../VS_visualcpp/_mbclen--mblen--_mblen_l.md)