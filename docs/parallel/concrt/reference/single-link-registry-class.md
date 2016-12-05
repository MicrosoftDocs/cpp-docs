---
title: "single_link_registry Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
|[single_link_registry::single_link_registry Constructor](#ctor)|Constructs a `single_link_registry` object.|  
|[single_link_registry::~single_link_registry Destructor](#dtor)|Destroys the `single_link_registry` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[single_link_registry::add Method](#add)|Adds a link to the `single_link_registry` object. (Overrides [network_link_registry::add](network-link-registry-class.md#add).)|  
|[single_link_registry::begin Method](#begin)|Returns an iterator to the first element in the `single_link_registry` object. (Overrides [network_link_registry::begin](network-link-registry-class.md#begin).)|  
|[single_link_registry::contains Method](#contains)|Searches the `single_link_registry` object for a specified block. (Overrides [network_link_registry::contains](network-link-registry-class.md#contains).)|  
|[single_link_registry::count Method](#count)|Counts the number of items in the `single_link_registry` object. (Overrides [network_link_registry::count](network-link-registry-class.md#count).)|  
|[single_link_registry::remove Method](#remove)|Removes a link from the `single_link_registry` object. (Overrides [network_link_registry::remove](network-link-registry-class.md#remove).)|  
  
## Inheritance Hierarchy  
 [network_link_registry](network-link-registry-class.md)  
  
 `single_link_registry`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="add"></a>  single_link_registry::add Method  
 Adds a link to the `single_link_registry` object.  
  
```
virtual void add(_EType _Link);
```  
  
### Parameters  
 `_Link`  
 A pointer to a block to be added.  
  
### Remarks  
 The method throws an [invalid_link_target](invalid-link-target-class.md) exception if there is already a link in this registry.  
  
##  <a name="begin"></a>  single_link_registry::begin Method  
 Returns an iterator to the first element in the `single_link_registry` object.  
  
```
virtual iterator begin();
```  
  
### Return Value  
 An iterator addressing the first element in the `single_link_registry` object.  
  
### Remarks  
 The end state is indicated by a `NULL` link.  
  
##  <a name="contains"></a>  single_link_registry::contains Method  
 Searches the `single_link_registry` object for a specified block.  
  
```
virtual bool contains(_EType _Link);
```  
  
### Parameters  
 `_Link`  
 A pointer to a block that is to be searched for in the `single_link_registry` object.  
  
### Return Value  
 `true` if the link was found, `false` otherwise.  
  
##  <a name="count"></a>  single_link_registry::count Method  
 Counts the number of items in the `single_link_registry` object.  
  
```
virtual size_t count();
```  
  
### Return Value  
 The number of items in the `single_link_registry` object.  
  
##  <a name="remove"></a>  single_link_registry::remove Method  
 Removes a link from the `single_link_registry` object.  
  
```
virtual bool remove(_EType _Link);
```  
  
### Parameters  
 `_Link`  
 A pointer to a block to be removed, if found.  
  
### Return Value  
 `true` if the link was found and removed, `false` otherwise.  
  
##  <a name="ctor"></a>  single_link_registry::single_link_registry Constructor  
 Constructs a `single_link_registry` object.  
  
```
single_link_registry();
```  
  
##  <a name="dtor"></a>  single_link_registry::~single_link_registry Destructor  
 Destroys the `single_link_registry` object.  
  
```
virtual ~single_link_registry();
```  
  
### Remarks  
 The method throws an [invalid_operation](invalid-operation-class.md) exception if it is called before the link is removed.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [multi_link_registry Class](multi-link-registry-class.md)
