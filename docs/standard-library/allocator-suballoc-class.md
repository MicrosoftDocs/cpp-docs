---
title: "allocator_suballoc Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "allocators::allocator_suballoc"
  - "allocator_suballoc"
  - "stdext.allocators.allocator_suballoc"
  - "allocators/stdext::allocators::allocator_suballoc"
  - "stdext::allocators::allocator_suballoc"
  - "allocators/stdext::allocator_suballoc"
  - "allocators.allocator_suballoc"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "allocator_suballoc class"
ms.assetid: 50c6a5c0-d00d-4276-9285-d908fd4f6483
caps.latest.revision: 16
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# allocator_suballoc Class
Describes an object that manages storage allocation and freeing for objects of type `Type` using a cache of type [cache_suballoc](../standard-library/cache-suballoc-class.md).  
  
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
 The [ALLOCATOR_DECL](../standard-library/allocators-functions.md#allocator_decl) macro passes this class as the `name` parameter in the following statement: `ALLOCATOR_DECL(CACHE_SUBALLOC, SYNC_DEFAULT, allocator_suballoc);`  
  
## Requirements  
 **Header:** \<allocators>  
  
 **Namespace:** stdext  
  
## See Also  
 [\<allocators>](../standard-library/allocators-header.md)



