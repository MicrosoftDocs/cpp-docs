---
title: "_mbctolower, _mbctolower_l, _mbctoupper, _mbctoupper_l"
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
  - _mbctolower_l
  - _mbctoupper_l
  - _mbctoupper
  - _mbctolower
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
ms.assetid: 787fab71-3224-4ed7-bc93-4dcd8023fc54
caps.latest.revision: 18
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
# _mbctolower, _mbctolower_l, _mbctoupper, _mbctoupper_l
Tests and converts the case of a multibyte character.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
unsigned int _mbctolower(  
   unsigned int c   
);  
unsigned int _mbctolower_l(  
   unsigned int c,  
   _locale_t locale  
);  
unsigned int _mbctoupper(  
   unsigned int c   
);  
unsigned int _mbctoupper_l(  
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
 Each of these functions returns the converted character `c`, if possible. Otherwise it returns the character `c` unchanged.  
  
## Remarks  
 The functions test a character `c` and, if possible, apply one of the following conversions.  
  
|Routines|Converts|  
|--------------|--------------|  
|`_mbctolower,_mbctolower_l`|Uppercase character to lowercase character.|  
|`_mbctoupper,_mbctoupper_l`|Lowercase character to uppercase character.|  
  
 The output value is affected by the setting of the `LC_CTYPE` category setting of the locale; see [setlocale](../VS_visualcpp/setlocale--_wsetlocale.md) for more information. The version of this function without the `_l` suffix uses the current locale for this locale-dependent behavior; the version with the `_l` suffix is identical except that it uses the locale parameter passed in instead. For more information, see [Locale](../VS_visualcpp/Locale.md).  
  
 In previous versions, `_mbctolower` was called`jtolower`, and `_mbctoupper` was called `jtoupper`. For new code, use the new names instead.  
  
### Generic-Text Routine Mappings  
  
|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|--------------------------------------|--------------------|-----------------------|  
|`_totlower`|`tolower`|`_mbctolower`|`towlower`|  
|`_totlower_l`|`_tolower_l`|`_mbctolower_l`|`_towlower_t`|  
|`_totupper`|`toupper`|`_mbctoupper`|`towupper`|  
|`_totupper_l`|`toupper_l`|`_mbctoupper_l`|`_towupper_l`|  
  
## Requirements  
  
|Routines|Required header|  
|--------------|---------------------|  
|`_mbctolower,_mbctolower_l`|<mbstring.h>|  
|`_mbctoupper,_mbctoupper_l`|<mbstring.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## See Also  
 [Data Conversion](../VS_visualcpp/Data-Conversion.md)   
 [_mbbtombc, _mbbtombc_l](../VS_visualcpp/_mbbtombc--_mbbtombc_l.md)   
 [_mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l](../VS_visualcpp/_mbcjistojms--_mbcjistojms_l--_mbcjmstojis--_mbcjmstojis_l.md)   
 [_mbctohira, _mbctohira_l, _mbctokata, _mbctokata_l](../VS_visualcpp/_mbctohira--_mbctohira_l--_mbctokata--_mbctokata_l.md)   
 [_mbctombb, _mbctombb_l](../VS_visualcpp/_mbctombb--_mbctombb_l.md)