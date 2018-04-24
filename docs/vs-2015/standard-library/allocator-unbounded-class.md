---
title: "allocator_unbounded Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# allocator_unbounded Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [allocator_unbounded Class](https://docs.microsoft.com/cpp/standard-library/allocator-unbounded-class).  
  
Describes an object that manages storage allocation and freeing for objects of type `Type` using a cache of type [cache_freelist](../standard-library/cache-freelist-class.md) with a length managed by [max_unbounded](../standard-library/max-unbounded-class.md).  
  
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
 The [ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl) macro passes this class as the `name` parameter in the following statement: `ALLOCATOR_DECL(CACHE_FREELIST(stdext::allocators::max_unbounded), SYNC_DEFAULT, allocator_unbounded);`  
  
## Requirements  
 **Header:** \<allocators>  
  
 **Namespace:** stdext  
  
## See Also  
 [\<allocators>](../standard-library/allocators-header.md)







