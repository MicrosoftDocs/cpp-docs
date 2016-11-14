---
title: "single_link_registry Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::single_link_registry"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "single_link_registry class"
ms.assetid: 09540a4e-c34e-4ff9-af49-21b8612b6ab3
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
# single_link_registry Class
The `single_link_registry` object is a `network_link_registry` that manages only a single source or target block.  
  
## Syntax  
  
```
template<class _Block>
class single_link_registry : public network_link_registry<_Block>;
```  
  
#### Parameters  
 `_Block`  
 The block data type being stored in the `single_link_registry` object.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[single_link_registry::single_link_registry Constructor](#single_link_registry__single_link_registry_constructor)|Constructs a `single_link_registry` object.|  
|[single_link_registry::~single_link_registry Destructor](#single_link_registry___dtorsingle_link_registry_destructor)|Destroys the `single_link_registry` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[single_link_registry::add Method](#single_link_registry__add_method)|Adds a link to the `single_link_registry` object. (Overrides [network_link_registry::add](../../../parallel/concrt/reference/network-link-registry-class.md#network_link_registry__add_method).)|  
|[single_link_registry::begin Method](#single_link_registry__begin_method)|Returns an iterator to the first element in the `single_link_registry` object. (Overrides [network_link_registry::begin](../../../parallel/concrt/reference/network-link-registry-class.md#network_link_registry__begin_method).)|  
|[single_link_registry::contains Method](#single_link_registry__contains_method)|Searches the `single_link_registry` object for a specified block. (Overrides [network_link_registry::contains](../../../parallel/concrt/reference/network-link-registry-class.md#network_link_registry__contains_method).)|  
|[single_link_registry::count Method](#single_link_registry__count_method)|Counts the number of items in the `single_link_registry` object. (Overrides [network_link_registry::count](../../../parallel/concrt/reference/network-link-registry-class.md#network_link_registry__count_method).)|  
|[single_link_registry::remove Method](#single_link_registry__remove_method)|Removes a link from the `single_link_registry` object. (Overrides [network_link_registry::remove](../../../parallel/concrt/reference/network-link-registry-class.md#network_link_registry__remove_method).)|  
  
## Inheritance Hierarchy  
 [network_link_registry](../../../parallel/concrt/reference/network-link-registry-class.md)  
  
 `single_link_registry`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="single_link_registry__add_method"></a>  single_link_registry::add Method  
 Adds a link to the `single_link_registry` object.  
  
```
virtual void add(_EType _Link);
```  
  
### Parameters  
 `_Link`  
 A pointer to a block to be added.  
  
### Remarks  
 The method throws an [invalid_link_target](../../../parallel/concrt/reference/invalid-link-target-class.md) exception if there is already a link in this registry.  
  
##  <a name="single_link_registry__begin_method"></a>  single_link_registry::begin Method  
 Returns an iterator to the first element in the `single_link_registry` object.  
  
```
virtual iterator begin();
```  
  
### Return Value  
 An iterator addressing the first element in the `single_link_registry` object.  
  
### Remarks  
 The end state is indicated by a `NULL` link.  
  
##  <a name="single_link_registry__contains_method"></a>  single_link_registry::contains Method  
 Searches the `single_link_registry` object for a specified block.  
  
```
virtual bool contains(_EType _Link);
```  
  
### Parameters  
 `_Link`  
 A pointer to a block that is to be searched for in the `single_link_registry` object.  
  
### Return Value  
 `true` if the link was found, `false` otherwise.  
  
##  <a name="single_link_registry__count_method"></a>  single_link_registry::count Method  
 Counts the number of items in the `single_link_registry` object.  
  
```
virtual size_t count();
```  
  
### Return Value  
 The number of items in the `single_link_registry` object.  
  
##  <a name="single_link_registry__remove_method"></a>  single_link_registry::remove Method  
 Removes a link from the `single_link_registry` object.  
  
```
virtual bool remove(_EType _Link);
```  
  
### Parameters  
 `_Link`  
 A pointer to a block to be removed, if found.  
  
### Return Value  
 `true` if the link was found and removed, `false` otherwise.  
  
##  <a name="single_link_registry__single_link_registry_constructor"></a>  single_link_registry::single_link_registry Constructor  
 Constructs a `single_link_registry` object.  
  
```
single_link_registry();
```  
  
##  <a name="single_link_registry___dtorsingle_link_registry_destructor"></a>  single_link_registry::~single_link_registry Destructor  
 Destroys the `single_link_registry` object.  
  
```
virtual ~single_link_registry();
```  
  
### Remarks  
 The method throws an [invalid_operation](../../../parallel/concrt/reference/invalid-operation-class.md) exception if it is called before the link is removed.  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [multi_link_registry Class](../../../parallel/concrt/reference/multi-link-registry-class.md)
