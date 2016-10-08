---
title: "toupper, _toupper, towupper, _toupper_l, _towupper_l"
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
  - _toupper_l
  - towupper
  - toupper
  - _towupper_l
  - _toupper
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
  - api-ms-win-crt-string-l1-1-0.dll
apitype: DLLExport
ms.assetid: cdef1b0f-b19c-4d11-b7d2-cf6334c9b6cc
caps.latest.revision: 16
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
# toupper, _toupper, towupper, _toupper_l, _towupper_l
Convert character to uppercase.  
  
## Syntax  
  
```  
int toupper(  
   int c   
);  
int _toupper(  
   int c   
);  
int towupper(  
   wint_t c   
);  
int _toupper_l(  
   int c ,  
   _locale_t locale  
);  
int _towupper_l(  
   wint_t c ,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `c`  
 Character to convert.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 Each of these routines converts a copy of `c`, if possible, and returns the result.  
  
 If `c` is a wide character for which `iswlower` is nonzero and there is a corresponding wide character for which `iswupper` is nonzero, `towupper` returns the corresponding wide character; otherwise, `towupper` returns `c` unchanged.  
  
 There is no return value reserved to indicate an error.  
  
 In order for `toupper` to give the expected results, [__isascii](../VS_visualcpp/isascii--__isascii--iswascii.md) and [islower](../VS_visualcpp/islower--iswlower--_islower_l--_iswlower_l.md) must both return nonzero.  
  
## Remarks  
 Each of these routines converts a given lowercase letter to an uppercase letter if possible and appropriate. The case conversion of `towupper` is locale-specific. Only the characters relevant to the current locale are changed in case. The functions without the `_l` suffix use the currently set locale. The versions of these functions with the `_l` suffix take the locale as a parameter and use that instead of the currently set locale. For more information, see [Locale](../VS_visualcpp/Locale.md).  
  
 In order for `toupper` to give the expected results, [__isascii](../VS_visualcpp/isascii--__isascii--iswascii.md) and [isupper](../VS_visualcpp/isupper--_isupper_l--iswupper--_iswupper_l.md) must both return nonzero.  
  
 [Data Conversion Routines](../VS_visualcpp/Data-Conversion.md)  
  
### Generic-Text Routine Mappings  
  
|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|  
|---------------------|------------------------------------|--------------------|-----------------------|  
|`_totupper`|`toupper`|`_mbctoupper`|`towupper`|  
|`_totupper_l`|`_toupper_l`|`_mbctoupper_l`|`_towupper_l`|  
  
> [!NOTE]
>  `_toupper_l` and `_towupper_l` have no locale dependence and are not meant to be called directly. They are provided for internal use by `_totupper_l`.  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`toupper`|<ctype.h>|  
|`_toupper`|<ctype.h>|  
|`towupper`|<ctype.h> or <wchar.h>|  
  
 For additional compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md) in the Introduction.  
  
## Example  
 See the example in [to Functions](../VS_visualcpp/to-Functions.md).  
  
## .NET Framework Equivalent  
 [System::Char::ToUpper](https://msdn.microsoft.com/en-us/library/system.char.toupper.aspx)  
  
## See Also  
 [is, isw Routines](../VS_visualcpp/is--isw-Routines.md)   
 [to Functions](../VS_visualcpp/to-Functions.md)   
 [Locale](../VS_visualcpp/Locale.md)   
 [Interpretation of Multibyte-Character Sequences](../VS_visualcpp/Interpretation-of-Multibyte-Character-Sequences.md)