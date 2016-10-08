---
title: "allocator_newdel Class"
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
ms.assetid: 62666cd2-3afe-49f7-9dd1-9bbbb154da98
caps.latest.revision: 16
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
# allocator_newdel Class
Implements an allocator that uses `operator delete` to deallocate a memory block and `operator new` to allocate a memory block.  
  
## Syntax  
  
```  
template <class Type>  
    class allocator_newdel;  
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Type`|The type of elements allocated by the allocator.|  
  
## Remarks  
 The [ALLOCATOR_DECL](../VS_visualcpp/-allocators--functions.md#allocator_decl) macro passes this class as the `name` parameter in the following statement: `ALLOCATOR_DECL(CACHE_FREELIST stdext::allocators::max_none), SYNC_DEFAULT, allocator_newdel);`  
  
## Requirements  
 **Header:** <allocators\>  
  
 **Namespace:** stdext  
  
## See Also  
 [<allocators\>](../VS_visualcpp/-allocators-.md)