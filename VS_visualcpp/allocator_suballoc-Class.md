---
title: "allocator_suballoc Class"
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
ms.assetid: 50c6a5c0-d00d-4276-9285-d908fd4f6483
caps.latest.revision: 14
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
# allocator_suballoc Class
Describes an object that manages storage allocation and freeing for objects of type `Type` using a cache of type [cache_suballoc](../VS_visualcpp/cache_suballoc-Class.md).  
  
## Syntax  
  
```  
template <class Type>  
    class allocator_suballoc;  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Type`|The type of elements allocated by the allocator.|  
  
## Remarks  
 The [ALLOCATOR_DECL](../VS_visualcpp/-allocators--functions.md#allocator_decl) macro passes this class as the `name` parameter in the following statement: `ALLOCATOR_DECL(CACHE_SUBALLOC, SYNC_DEFAULT, allocator_suballoc);`  
  
## Requirements  
 **Header:** <allocators\>  
  
 **Namespace:** stdext  
  
## See Also  
 [<allocators\>](../VS_visualcpp/-allocators-.md)