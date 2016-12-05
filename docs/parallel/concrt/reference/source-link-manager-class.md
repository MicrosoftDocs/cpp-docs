---
title: "source_link_manager Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::source_link_manager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "source_link_manager class"
ms.assetid: 287487cf-e0fe-4c35-aa3c-24f081d1ddae
caps.latest.revision: 17
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
# source_link_manager Class
The `source_link_manager` object manages messaging block network links to `ISource` blocks.  
  
## Syntax  
  
```
template<class _LinkRegistry>
class source_link_manager;
```  
  
#### Parameters  
 `_LinkRegistry`  
 The network link registry.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`const_pointer`|A type that provides a pointer to a `const` element in a `source_link_manager` object.|  
|`const_reference`|A type that provides a reference to a `const` element stored in a `source_link_manager` object for reading and performing const operations.|  
|`iterator`|A type that provides an iterator that can read or modify any element in the `source_link_manager` object.|  
|`type`|The type of link registry being managed by the `source_link_manager` object.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[source_link_manager::source_link_manager Constructor](#ctor)|Constructs a `source_link_manager` object.|  
|[source_link_manager::~source_link_manager Destructor](#dtor)|Destroys the `source_link_manager` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[source_link_manager::add Method](#add)|Adds a source link to the `source_link_manager` object.|  
|[source_link_manager::begin Method](#begin)|Returns an iterator to the first element in the `source_link_manager` object.|  
|[source_link_manager::contains Method](#contains)|Searches the `network_link_registry` within this `source_link_manager` object for a specified block.|  
|[source_link_manager::count Method](#count)|Counts the number of linked blocks in the `source_link_manager` object.|  
|[source_link_manager::reference Method](#reference)|Acquires a reference on the `source_link_manager` object.|  
|[source_link_manager::register_target_block Method](#register_target_block)|Registers the target block that holds this `source_link_manager` object.|  
|[source_link_manager::release Method](#release)|Releases the reference on the `source_link_manager` object.|  
|[source_link_manager::remove Method](#remove)|Removes a link from the `source_link_manager` object.|  
|[source_link_manager::set_bound Method](#set_bound)|Sets the maximum number of source links that can be added to this `source_link_manager` object.|  
  
## Remarks  
 Currently, the source blocks are reference counted. This is a wrapper on a `network_link_registry` object that allows concurrent access to the links and provides the ability to reference the links through callbacks. Message blocks ( `target_block`s or `propagator_block`s) should use this class for their source links.  
  
## Inheritance Hierarchy  
 `source_link_manager`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="add"></a>  source_link_manager::add Method  
 Adds a source link to the `source_link_manager` object.  
  
```
void add(_EType _Link);
```  
  
### Parameters  
 `_Link`  
 A pointer to a block to be added.  
  
##  <a name="begin"></a>  source_link_manager::begin Method  
 Returns an iterator to the first element in the `source_link_manager` object.  
  
```
iterator begin();
```  
  
### Return Value  
 An iterator addressing the first element in the `source_link_manager` object.  
  
### Remarks  
 The end state of the iterator is indicated by a `NULL` link.  
  
##  <a name="contains"></a>  source_link_manager::contains Method  
 Searches the `network_link_registry` within this `source_link_manager` object for a specified block.  
  
```
bool contains(_EType _Link);
```  
  
### Parameters  
 `_Link`  
 A pointer to a block that is to be searched for in the `source_link_manager` object.  
  
### Return Value  
 `true` if the specified block was found, `false` otherwise.  
  
##  <a name="count"></a>  source_link_manager::count Method  
 Counts the number of linked blocks in the `source_link_manager` object.  
  
```
size_t count();
```  
  
### Return Value  
 The number of linked blocks in the `source_link_manager` object.  
  
##  <a name="reference"></a>  source_link_manager::reference Method  
 Acquires a reference on the `source_link_manager` object.  
  
```
void reference();
```  
  
##  <a name="register_target_block"></a>  source_link_manager::register_target_block Method  
 Registers the target block that holds this `source_link_manager` object.  
  
```
void register_target_block(_Inout_ ITarget<typename _Block::source_type>* _PTarget);
```  
  
### Parameters  
 `_PTarget`  
 The target block holding this `source_link_manager` object.  
  
##  <a name="release"></a>  source_link_manager::release Method  
 Releases the reference on the `source_link_manager` object.  
  
```
void release();
```  
  
##  <a name="remove"></a>  source_link_manager::remove Method  
 Removes a link from the `source_link_manager` object.  
  
```
bool remove(_EType _Link);
```  
  
### Parameters  
 `_Link`  
 A pointer to a block to be removed, if found.  
  
### Return Value  
 `true` if the link was found and removed, `false` otherwise.  
  
##  <a name="set_bound"></a>  source_link_manager::set_bound Method  
 Sets the maximum number of source links that can be added to this `source_link_manager` object.  
  
```
void set_bound(size_t _MaxLinks);
```  
  
### Parameters  
 `_MaxLinks`  
 The maximum number of links.  
  
##  <a name="ctor"></a>  source_link_manager::source_link_manager Constructor  
 Constructs a `source_link_manager` object.  
  
```
source_link_manager();
```  
  
##  <a name="dtor"></a>  source_link_manager::~source_link_manager Destructor  
 Destroys the `source_link_manager` object.  
  
```
~source_link_manager();
```  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [single_link_registry Class](single-link-registry-class.md)   
 [multi_link_registry Class](multi-link-registry-class.md)
