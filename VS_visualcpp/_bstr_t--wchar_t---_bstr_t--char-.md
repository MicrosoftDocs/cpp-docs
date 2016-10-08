---
title: "_bstr_t::wchar_t*, _bstr_t::char*"
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
ms.assetid: acd9f4a7-b427-42c2-aaae-acae21cab317
caps.latest.revision: 9
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
# _bstr_t::wchar_t*, _bstr_t::char*
**Microsoft Specific**  
  
 Returns the BSTR characters as a narrow or wide character array.  
  
## Syntax  
  
```  
  
      operator const wchar_t*( ) const throw( );   
operator wchar_t*( ) const throw( );   
operator const char*( ) const;   
operator char*( ) const;  
```  
  
## Remarks  
 These operators can be used to extract the character data that is encapsulated by the `BSTR` object. Assigning a new value to the returned pointer does not modify the original BSTR data.  
  
 **END Microsoft Specific**  
  
## See Also  
 [_bstr_t Class](../VS_visualcpp/_bstr_t-Class.md)