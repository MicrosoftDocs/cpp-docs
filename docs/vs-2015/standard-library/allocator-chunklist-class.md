---
title: "allocator_chunklist Class | Microsoft Docs"
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
  - "stdext::allocators::allocator_chunklist"
  - "allocators::allocator_chunklist"
  - "allocators/stdext::allocator_chunklist"
  - "allocators.allocator_chunklist"
  - "allocators/stdext::allocators::allocator_chunklist"
  - "allocator_chunklist"
  - "stdext.allocators.allocator_chunklist"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "allocator_chunklist class"
ms.assetid: ea72ed0a-dfdb-4c8b-8096-e4baf567b80f
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# allocator_chunklist Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [allocator_chunklist Class](https://docs.microsoft.com/cpp/standard-library/allocator-chunklist-class).  
  
Describes an object that manages storage allocation and freeing for objects using a cache of type [cache_chunklist](../standard-library/cache-chunklist-class.md).  
  
## Syntax  
  
```
template <class Type>  
class allocator_chunklist;
```  
  
#### Parameters  
  
|Parameter|Description|  
|---------------|-----------------|  
|`Type`|The type of elements allocated by the allocator.|  
  
## Remarks  
 The [ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl) macro passes this class as the `name` parameter in the following statement: `ALLOCATOR_DECL(CACHE_CHUNKLIST, SYNC_DEFAULT, allocator_chunklist``);`  
  
## Requirements  
 **Header:** \<allocators>  
  
 **Namespace:** stdext  
  
## See Also  
 [\<allocators>](../standard-library/allocators-header.md)







