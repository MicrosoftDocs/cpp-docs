---
title: "allocator_fixed_size Class"
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
ms.assetid: 138f3ef8-b0b3-49c3-9486-58f2213c172f
caps.latest.revision: 17
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
# allocator_fixed_size Class
Describes an object that manages storage allocation and freeing for objects of type `Type` using a cache of type [cache_freelist](../VS_visualcpp/cache_freelist-Class.md) with a length managed by [max_fixed_size](../VS_visualcpp/max_fixed_size-Class.md).  
  
## Syntax  
  
```  
template <class Type>  
    class allocator_fixed_size;  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Type`|The type of elements allocated by the allocator.|  
  
## Remarks  
 The [ALLOCATOR_DECL](../VS_visualcpp/-allocators--functions.md#allocator_decl) macro passes this class as the `name` parameter in the following statement: `ALLOCATOR_DECL(CACHE_FREELIST(stdext::allocators::max_fixed_size<10>), SYNC_DEFAULT, allocator_fixed_size);`  
  
## Requirements  
 **Header:** <allocators\>  
  
 **Namespace:** stdext  
  
## See Also  
 [<allocators\>](../VS_visualcpp/-allocators-.md)