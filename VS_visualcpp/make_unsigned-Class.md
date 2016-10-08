---
title: "make_unsigned Class"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 7a6a3c4f-1a4c-47e8-9ee2-ac1f7b669353
caps.latest.revision: 16
manager: ghogen
translation.priority.mt: 
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
# make_unsigned Class
Makes type or the smallest unsigned type greater than or equal in size to type.  
  
## Syntax  
  
```  
template<class T>  
    struct make_unsigned;  
  
template<class T>  
    using make_unsigned_t = typename make_unsigned<T>::type;  
  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`T`|The type to modify.|  
  
## Remarks  
 An instance of the type modifier holds a modified-type that is `T` if `is_unsigned<T>` holds true. Otherwise it is the smallest signed type `ST` for which `sizeof (T) <= sizeof (ST)`.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)