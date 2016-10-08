---
title: "alignment_of Class"
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
ms.assetid: 4141c59a-f94e-41c4-93fd-9ea578b27387
caps.latest.revision: 20
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
# alignment_of Class
Gets alignment of the specified type. This struct is implemented in terms of [alignof](../VS_visualcpp/alignof-and-alignas--C---.md). Use `alignof` directly when you simply need to query an alignment value. Use alignment_of when you need an integral constant, for example when doing tag dispatch.  
  
## Syntax  
  
```  
template<class Ty>  
    struct alignment_of;  
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 The type query holds the value of the the alignment of the type `Ty`.  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)   
 [aligned_storage Class](../VS_visualcpp/aligned_storage-Class.md)