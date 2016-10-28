---
title: "allocator_unbounded Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "stdext::allocators::allocator_unbounded"
  - "allocator_unbounded"
  - "allocators/stdext::allocator_unbounded"
  - "allocators::allocator_unbounded"
  - "allocators/stdext::allocators::allocator_unbounded"
  - "allocators.allocator_unbounded"
  - "stdext.allocators.allocator_unbounded"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "allocator_unbounded class"
ms.assetid: facbaea1-b320-4d99-96da-039b2642f352
caps.latest.revision: 16
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# allocator_unbounded Class
Describes an object that manages storage allocation and freeing for objects of type `Type` using a cache of type [cache_freelist](../stdcpplib/cache_freelist-class.md) with a length managed by [max_unbounded](../stdcpplib/max_unbounded-class.md).  
  
## Syntax  
  
```
template <class Type>
    class allocator_unbounded;
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Type`|The type of elements allocated by the allocator.|  
  
## Remarks  
 The [ALLOCATOR_DECL](../stdcpplib/-allocators--functions.md#allocator_decl) macro passes this class as the `name` parameter in the following statement: `ALLOCATOR_DECL(CACHE_FREELIST(stdext::allocators::max_unbounded), SYNC_DEFAULT, allocator_unbounded);`  
  
## Requirements  
 **Header:** \<allocators>  
  
 **Namespace:** stdext  
  
## See Also  
 [\<allocators>](../stdcpplib/-allocators-.md)

