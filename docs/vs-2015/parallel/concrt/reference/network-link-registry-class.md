---
title: "network_link_registry Class | Microsoft Docs"
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
  - "agents/concurrency::network_link_registry"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "network_link_registry class"
ms.assetid: 3e7b4097-09f1-4252-964e-b15b8f7f7fc6
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# network_link_registry Class
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

The `network_link_registry` abstract base class manages the links between source and target blocks.  
  
## Syntax  
  
```
template<class _Block>
class network_link_registry;
```  
  
#### Parameters  
 `_Block`  
 The block data type being stored in the `network_link_registry`.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`const_pointer`|A type that provides a pointer to a `const` element in a `network_link_registry` object.|  
|`const_reference`|A type that provides a reference to a `const` element stored in a `network_link_registry` object for reading and performing const operations.|  
|`iterator`|A type that provides an iterator that can read or modify any element in a `network_link_registry` object.|  
|`type`|A type that represents the block type stored in the `network_link_registry` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[network_link_registry::add Method](#network_link_registry__add_method)|When overridden in a derived class, adds a link to the `network_link_registry` object.|  
|[network_link_registry::begin Method](#network_link_registry__begin_method)|When overridden in a derived class, returns an iterator to the first element in the `network_link_registry` object.|  
|[network_link_registry::contains Method](#network_link_registry__contains_method)|When overridden in a derived class, searches the `network_link_registry` object for a specified block.|  
|[network_link_registry::count Method](#network_link_registry__count_method)|When overridden in a derived class, returns the number of items in the `network_link_registry` object.|  
|[network_link_registry::remove Method](#network_link_registry__remove_method)|When overridden in a derived class, removes a specified block from the `network_link_registry` object.|  
  
## Remarks  
 The `network link registry` is not safe for concurrent access.  
  
## Inheritance Hierarchy  
 `network_link_registry`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="network_link_registry__add_method"></a>  network_link_registry::add Method  
 When overridden in a derived class, adds a link to the `network_link_registry` object.  
  
```
virtual void add(_EType _Link) = 0;
```  
  
### Parameters  
 `_Link`  
 A pointer to a block to be added.  
  
##  <a name="network_link_registry__begin_method"></a>  network_link_registry::begin Method  
 When overridden in a derived class, returns an iterator to the first element in the `network_link_registry` object.  
  
```
virtual iterator begin() = 0;
```  
  
### Return Value  
 An iterator addressing the first element in the `network_link_registry` object.  
  
### Remarks  
 The end state of the iterator is indicated by a `NULL` link.  
  
##  <a name="network_link_registry__contains_method"></a>  network_link_registry::contains Method  
 When overridden in a derived class, searches the `network_link_registry` object for a specified block.  
  
```
virtual bool contains(_EType _Link) = 0;
```  
  
### Parameters  
 `_Link`  
 A pointer to a block that is being searched for in the `network_link_registry` object.  
  
### Return Value  
 `true` if the block was found, `false` otherwise.  
  
##  <a name="network_link_registry__count_method"></a>  network_link_registry::count Method  
 When overridden in a derived class, returns the number of items in the `network_link_registry` object.  
  
```
virtual size_t count() = 0;
```  
  
### Return Value  
 The number of items in the `network_link_registry` object.  
  
##  <a name="network_link_registry__remove_method"></a>  network_link_registry::remove Method  
 When overridden in a derived class, removes a specified block from the `network_link_registry` object.  
  
```
virtual bool remove(_EType _Link) = 0;
```  
  
### Parameters  
 `_Link`  
 A pointer to a block to be removed, if found.  
  
### Return Value  
 `true` if the link was found and removed, `false` otherwise.  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [single_link_registry Class](../../../parallel/concrt/reference/single-link-registry-class.md)   
 [multi_link_registry Class](../../../parallel/concrt/reference/multi-link-registry-class.md)
