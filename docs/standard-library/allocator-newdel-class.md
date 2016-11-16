---
title: "allocator_newdel Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "allocators::allocator_newdel"
  - "allocators/stdext::allocators::allocator_newdel"
  - "stdext.allocators.allocator_newdel"
  - "allocators/stdext::allocator_newdel"
  - "allocator_newdel"
  - "stdext::allocators::allocator_newdel"
  - "allocators.allocator_newdel"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "allocator_newdel class"
ms.assetid: 62666cd2-3afe-49f7-9dd1-9bbbb154da98
caps.latest.revision: 18
author: "corob-msft"
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
 The [ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl) macro passes this class as the `name` parameter in the following statement: `ALLOCATOR_DECL(CACHE_FREELIST stdext::allocators::max_none), SYNC_DEFAULT, allocator_newdel);`  
  
## Requirements  
 **Header:** \<allocators>  
  
 **Namespace:** stdext  
  
## See Also  
 [\<allocators>](../standard-library/allocators-header.md)



