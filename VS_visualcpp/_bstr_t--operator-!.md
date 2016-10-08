---
title: "_bstr_t::operator !"
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
ms.topic: language-reference
ms.assetid: 6e60b5a5-2d28-4eec-9e12-790da8f1fdd4
caps.latest.revision: 6
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
# _bstr_t::operator !
**Microsoft Specific**  
  
 Checks if the encapsulated `BSTR` is a **NULL** string.  
  
## Syntax  
  
```  
  
bool operator!( ) const throw( );  
  
```  
  
## Return Value  
 It returns **true** if yes, **false** if not.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_bstr_t Class](../VS_visualcpp/_bstr_t-Class.md)