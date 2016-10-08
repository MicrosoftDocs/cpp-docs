---
title: "char_traits&lt;char16_t&gt; Struct"
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
ms.assetid: 5daf3b62-dd6e-451f-b189-0350a04ff966
caps.latest.revision: 13
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
# char_traits&lt;char16_t&gt; Struct
A struct that is a specialization of the template struct **char_traits<CharType\>** to an element of type `char16_t`.  
  
## Syntax  
  
```  
template<> struct char_traits<char16_t>;  
```  
  
## Remarks  
 Specialization allows the struct to take advantage of library functions that manipulate objects of the type `char16_t`.  
  
## Requirements  
 **Header:** <string\>  
  
 **Namespace:** std  
  
## See Also  
 [<string\>](../VS_visualcpp/-string-.md)   
 [char_traits Struct](../VS_visualcpp/char_traits-Struct.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)