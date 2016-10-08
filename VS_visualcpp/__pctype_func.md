---
title: "__pctype_func"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
apiname: 
  - __pctype_func
apilocation: 
  - msvcrt.dll
  - msvcr110_clr0400.dll
  - msvcr110.dll
  - msvcr120.dll
  - msvcr90.dll
  - msvcr100.dll
  - msvcr80.dll
apitype: DLLExport
ms.assetid: d52b8add-d07d-4516-a22f-e836cde0c57f
caps.latest.revision: 2
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# __pctype_func
Retrieves a pointer to an array of character classification information.  
  
## Syntax  
  
```cpp  
const unsigned short *__pctype_func(  
   )  
```  
  
## Return Value  
 A pointer to an array of character classification information.  
  
## Remarks  
 The information in the character classification table is for internal use only, and is used by various functions that classify characters of type `char`. For more information, see the `Remarks` section of [_pctype, _pwctype, _wctype, _mbctype, _mbcasemap](../VS_visualcpp/_pctype--_pwctype--_wctype--_mbctype--_mbcasemap.md).  
  
## Requirements  
  
|Routine|Required header|  
|-------------|---------------------|  
|__pctype_func|ctype.h|  
  
## See Also  
 [_pctype, _pwctype, _wctype, _mbctype, _mbcasemap](../VS_visualcpp/_pctype--_pwctype--_wctype--_mbctype--_mbcasemap.md)