---
title: "IsSame::value Constant"
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
ms.topic: reference
ms.assetid: ee72deff-54a2-4482-9967-49a86d07f834
caps.latest.revision: 5
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
# IsSame::value Constant
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
  
  template <typename T1, typename T2>  
struct IsSame  
{  
    static const bool value = false;  
};  
  
template <typename T1>  
struct IsSame<T1, T1>  
{  
    static const bool value = true;  
};  
  
```  
  
## Remarks  
 Indicates whether one type is the same as another.  
  
 `value` is **true** if the template parameters are the same, and **false** if the template parameters are different.  
  
## Requirements  
 **Header:** internal.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [IsSame Structure](../VS_visualcpp/IsSame-Structure.md)   
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)