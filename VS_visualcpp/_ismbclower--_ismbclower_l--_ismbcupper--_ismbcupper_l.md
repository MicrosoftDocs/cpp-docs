---
title: "_ismbclower, _ismbclower_l, _ismbcupper, _ismbcupper_l"
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
  - _ismbclower
  - _ismbclower_l
  - _ismbcupper_l
  - _ismbcupper
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
ms.assetid: 17d89587-65bc-477c-ba8f-a84e63cf59e7
caps.latest.revision: 19
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
# _ismbclower, _ismbclower_l, _ismbcupper, _ismbcupper_l
Checks whether a multibyte character is lowercase or uppercase.  
  
> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported with /ZW](http://msdn.microsoft.com/library/windows/apps/jj606124.aspx).  
  
## Syntax  
  
```  
int _ismbclower(  
   unsigned int c   
);  
int _ismbclower_l(  
   unsigned int c,  
   _locale_t locale   
);  
int _ismbcupper(  
   unsigned int c   
);  
int _ismbcupper_l(  
   unsigned int c,  
   _locale_t locale  
);  
```  
  
#### Parameters  
 `c`  
 Character to be tested.  
  
 `locale`  
 Locale to use.  
  
## Return Value  
 Each of these routines returns a nonzero value if the character satisfies the test condition or 0 if it does not. If `c`<= 255 and there is a corresponding `_ismbb` routine (for example, `_ismbcalnum` corresponds to `_ismbbalnum`), the result is the return value of the corresponding `_ismbb` routine.  
  
## Remarks  
 Each of these functions tests a given multibyte character for a given condition.  
  
 The versions of these functions with the `_l` suffix are identical except that they use the locale passed in instead of the current locale for their locale-dependent behavior. For more information, see [Locale](../VS_visualcpp/Locale.md).  
  
|Routine|Test condition|Code page 932 example|  
|-------------|--------------------|---------------------------|  
|`_ismbclower`|Lowercase alphabetic|Returns nonzero if and only if `c` is a single-byte representation of an ASCII lowercase English letter: 0x61<=`c`<=0x7A.|  
|`_ismbclower_l`|Lowercase alphabetic|Returns nonzero if and only if `c` is a single-byte representation of an ASCII lowercase English letter: 0x61<=`c`<=0x7A.|  
|`_ismbcupper`|Uppercase alphabetic|Returns nonzero if and only if `c` is a single-byte representation of an ASCII uppercase English letter: 0x41<=`c`<=0x5A.|  
|`_ismbcupper_l`|Uppercase alphabetic|Returns nonzero if and only if `c` is a single-byte representation of an ASCII uppercase English letter: 0x41<=`c`<=0x5A.|  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|`_ismbclower`|<mbstring.h>|  
|`_ismbclower_l`|<mbstring.h>|  
|`_ismbcupper`|<mbstring.h>|  
|`_ismbcupper_l`|<mbstring.h>|  
  
 For more compatibility information, see [Compatibility](../VS_visualcpp/Compatibility.md).  
  
## .NET Framework Equivalent  
  
-   [System::Char::IsLower](https://msdn.microsoft.com/en-us/library/system.char.islower.aspx)  
  
-   [System::Char::IsUpper](https://msdn.microsoft.com/en-us/library/system.char.isupper.aspx)  
  
## See Also  
 [Character Classification](../VS_visualcpp/Character-Classification.md)   
 [_ismbc Routines](../VS_visualcpp/_ismbc-Routines.md)   
 [Locale](../VS_visualcpp/Locale.md)   
 [Interpretation of Multibyte-Character Sequences](../VS_visualcpp/Interpretation-of-Multibyte-Character-Sequences.md)   
 [is, isw Routines](../VS_visualcpp/is--isw-Routines.md)   
 [_ismbb Routines](../VS_visualcpp/_ismbb-Routines.md)