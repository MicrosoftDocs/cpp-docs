---
title: "multi_link_registry Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::multi_link_registry"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "multi_link_registry class"
ms.assetid: b2aa73a8-e8a6-4255-b117-d07530c328b2
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
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
# multi_link_registry Class
The `multi_link_registry` object is a `network_link_registry` that manages multiple source blocks or multiple target blocks.  
  
## Syntax  
  
```
template<class _Block>
class multi_link_registry : public network_link_registry<_Block>;
```  
  
#### Parameters  
 `_Block`  
 The block data type being stored in the `multi_link_registry` object.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[multi_link_registry::multi_link_registry Constructor](#multi_link_registry__multi_link_registry_constructor)|Constructs a `multi_link_registry` object.|  
|[multi_link_registry::~multi_link_registry Destructor](#multi_link_registry___dtormulti_link_registry_destructor)|Destroys the `multi_link_registry` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[multi_link_registry::add Method](#multi_link_registry__add_method)|Adds a link to the `multi_link_registry` object. (Overrides [network_link_registry::add](../../../parallel/concrt/reference/network-link-registry-class.md#network_link_registry__add_method).)|  
|[multi_link_registry::begin Method](#multi_link_registry__begin_method)|Returns an iterator to the first element in the `multi_link_registry` object. (Overrides [network_link_registry::begin](../../../parallel/concrt/reference/network-link-registry-class.md#network_link_registry__begin_method).)|  
|[multi_link_registry::contains Method](#multi_link_registry__contains_method)|Searches the `multi_link_registry` object for a specified block. (Overrides [network_link_registry::contains](../../../parallel/concrt/reference/network-link-registry-class.md#network_link_registry__contains_method).)|  
|[multi_link_registry::count Method](#multi_link_registry__count_method)|Counts the number of items in the `multi_link_registry` object. (Overrides [network_link_registry::count](../../../parallel/concrt/reference/network-link-registry-class.md#network_link_registry__count_method).)|  
|[multi_link_registry::remove Method](#multi_link_registry__remove_method)|Removes a link from the `multi_link_registry` object. (Overrides [network_link_registry::remove](../../../parallel/concrt/reference/network-link-registry-class.md#network_link_registry__remove_method).)|  
|[multi_link_registry::set_bound Method](#multi_link_registry__set_bound_method)|Sets an upper bound on the number of links that the `multi_link_registry` object can hold.|  
  
## Inheritance Hierarchy  
 [network_link_registry](../../../parallel/concrt/reference/network-link-registry-class.md)  
  
 `multi_link_registry`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="multi_link_registry__add_method"></a>  multi_link_registry::add Method  
 Adds a link to the `multi_link_registry` object.  
  
```
virtual void add(_EType _Link);
```  
  
### Parameters  
 `_Link`  
 A pointer to a block to be added.  
  
### Remarks  
 The method throws an [invalid_link_target](../../../parallel/concrt/reference/invalid-link-target-class.md) exception if the link is already present in the registry, or if a bound has already been set with the `set_bound` function and a link has since been removed.  
  
##  <a name="multi_link_registry__begin_method"></a>  multi_link_registry::begin Method  
 Returns an iterator to the first element in the `multi_link_registry` object.  
  
```
virtual iterator begin();
```  
  
### Return Value  
 An iterator addressing the first element in the `multi_link_registry` object.  
  
### Remarks  
 The end state is indicated by a `NULL` link.  
  
##  <a name="multi_link_registry__contains_method"></a>  multi_link_registry::contains Method  
 Searches the `multi_link_registry` object for a specified block.  
  
```
virtual bool contains(_EType _Link);
```  
  
### Parameters  
 `_Link`  
 A pointer to a block that is to be searched for in the `multi_link_registry` object.  
  
### Return Value  
 `true` if the specified block was found, `false` otherwise.  
  
##  <a name="multi_link_registry__count_method"></a>  multi_link_registry::count Method  
 Counts the number of items in the `multi_link_registry` object.  
  
```
virtual size_t count();
```  
  
### Return Value  
 The number of items in the `multi_link_registry` object.  
  
##  <a name="multi_link_registry__multi_link_registry_constructor"></a>  multi_link_registry::multi_link_registry Constructor  
 Constructs a `multi_link_registry` object.  
  
```
multi_link_registry();
```  
  
##  <a name="multi_link_registry___dtormulti_link_registry_destructor"></a>  multi_link_registry::~multi_link_registry Destructor  
 Destroys the `multi_link_registry` object.  
  
```
virtual ~multi_link_registry();
```  
  
### Remarks  
 The method throws an [invalid_operation](../../../parallel/concrt/reference/invalid-operation-class.md) exception if called before all links are removed.  
  
##  <a name="multi_link_registry__remove_method"></a>  multi_link_registry::remove Method  
 Removes a link from the `multi_link_registry` object.  
  
```
virtual bool remove(_EType _Link);
```  
  
### Parameters  
 `_Link`  
 A pointer to a block to be removed, if found.  
  
### Return Value  
 `true` if the link was found and removed, `false` otherwise.  
  
##  <a name="multi_link_registry__set_bound_method"></a>  multi_link_registry::set_bound Method  
 Sets an upper bound on the number of links that the `multi_link_registry` object can hold.  
  
```
void set_bound(size_t _MaxLinks);
```  
  
### Parameters  
 `_MaxLinks`  
 The maximum number of links that the `multi_link_registry` object can hold.  
  
### Remarks  
 After a bound is set, unlinking an entry will cause the `multi_link_registry` object to enter an immutable state where further calls to `add` will throw an `invalid_link_target` exception.  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [single_link_registry Class](../../../parallel/concrt/reference/single-link-registry-class.md)
