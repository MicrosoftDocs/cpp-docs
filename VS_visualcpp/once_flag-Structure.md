---
title: "once_flag Structure"
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
ms.assetid: 71bfb88d-ca8c-4082-a6e1-ff52151e8629
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
# once_flag Structure
Represents a `struct` that is used with the template function [call_once](../VS_visualcpp/-mutex--functions.md#call_once_function) to ensure that initialization code is called only once, even in the presence of multiple threads of execution.  
  
## Syntax  
  
```cpp  
struct once_flag  
{  
   constexpr once_flag() noexcept;  
   once_flag(const once_flag&);  
   once_flag& operator=(const once_flag&);  
};  
```  
  
## Remarks  
 The `once_flag``struct` has only a default constructor.  
  
 Objects of type `once_flag` can be created, but they cannot be copied.  
  
## Requirements  
 **Header:** mutex  
  
 **Namespace:** std  
  
## See Also  
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [<mutex\>](../VS_visualcpp/-mutex-.md)