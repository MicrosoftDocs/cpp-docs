---
title: "is_error_code_enum Structure"
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
ms.assetid: 84ae4b99-66d2-41ba-9b50-645fcbe14630
caps.latest.revision: 11
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
# is_error_code_enum Structure
Specialization that indicates that [future_errc](../VS_visualcpp/-future--enums.md#future_errc_enumeration) is suitable for storing an [error_code](../VS_visualcpp/error_code-Class.md).  
  
## Syntax  
  
```  
template<>  
struct is_error_code_enum<Future_errc> : public true_type;  
```  
  
## Requirements  
 **Header:** future  
  
 **Namespace:** std  
  
## See Also  
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [<future\>](../VS_visualcpp/-future-.md)