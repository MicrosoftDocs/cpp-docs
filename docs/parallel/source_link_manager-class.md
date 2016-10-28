---
title: "source_link_manager Class"
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
  - "agents/concurrency::source_link_manager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "source_link_manager class"
ms.assetid: 287487cf-e0fe-4c35-aa3c-24f081d1ddae
caps.latest.revision: 16
ms.author: "mithom"
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
|[source_link_manager::source_link_manager Constructor](#source_link_manager__source_link_manager_constructor)|Constructs a `source_link_manager` object.|  
|[source_link_manager::~source_link_manager Destructor](#source_link_manager___dtorsource_link_manager_destructor)|Destroys the `source_link_manager` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[source_link_manager::add Method](#source_link_manager__add_method)|Adds a source link to the `source_link_manager` object.|  
|[source_link_manager::begin Method](#source_link_manager__begin_method)|Returns an iterator to the first element in the `source_link_manager` object.|  
|[source_link_manager::contains Method](#source_link_manager__contains_method)|Searches the `network_link_registry` within this `source_link_manager` object for a specified block.|  
|[source_link_manager::count Method](#source_link_manager__count_method)|Counts the number of linked blocks in the `source_link_manager` object.|  
|[source_link_manager::reference Method](#source_link_manager__reference_method)|Acquires a reference on the `source_link_manager` object.|  
|[source_link_manager::register_target_block Method](#source_link_manager__register_target_block_method)|Registers the target block that holds this `source_link_manager` object.|  
|[source_link_manager::release Method](#source_link_manager__release_method)|Releases the reference on the `source_link_manager` object.|  
|[source_link_manager::remove Method](#source_link_manager__remove_method)|Removes a link from the `source_link_manager` object.|  
|[source_link_manager::set_bound Method](#source_link_manager__set_bound_method)|Sets the maximum number of source links that can be added to this `source_link_manager` object.|  
  
## Remarks  
 Currently, the source blocks are reference counted. This is a wrapper on a `network_link_registry` object that allows concurrent access to the links and provides the ability to reference the links through callbacks. Message blocks ( `target_block`s or `propagator_block`s) should use this class for their source links.  
  
## Inheritance Hierarchy  
 `source_link_manager`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="source_link_manager__add_method"></a>  source_link_manager::add Method  
 Adds a source link to the `source_link_manager` object.  
  
```
void add(_EType _Link);
```  
  
### Parameters  
 `_Link`  
 A pointer to a block to be added.  
  
##  <a name="source_link_manager__begin_method"></a>  source_link_manager::begin Method  
 Returns an iterator to the first element in the `source_link_manager` object.  
  
```
iterator begin();
```  
  
### Return Value  
 An iterator addressing the first element in the `source_link_manager` object.  
  
### Remarks  
 The end state of the iterator is indicated by a `NULL` link.  
  
##  <a name="source_link_manager__contains_method"></a>  source_link_manager::contains Method  
 Searches the `network_link_registry` within this `source_link_manager` object for a specified block.  
  
```
bool contains(_EType _Link);
```  
  
### Parameters  
 `_Link`  
 A pointer to a block that is to be searched for in the `source_link_manager` object.  
  
### Return Value  
 `true` if the specified block was found, `false` otherwise.  
  
##  <a name="source_link_manager__count_method"></a>  source_link_manager::count Method  
 Counts the number of linked blocks in the `source_link_manager` object.  
  
```
size_t count();
```  
  
### Return Value  
 The number of linked blocks in the `source_link_manager` object.  
  
##  <a name="source_link_manager__reference_method"></a>  source_link_manager::reference Method  
 Acquires a reference on the `source_link_manager` object.  
  
```
void reference();
```  
  
##  <a name="source_link_manager__register_target_block_method"></a>  source_link_manager::register_target_block Method  
 Registers the target block that holds this `source_link_manager` object.  
  
```
void register_target_block(_Inout_ ITarget<typename _Block::source_type>* _PTarget);
```  
  
### Parameters  
 `_PTarget`  
 The target block holding this `source_link_manager` object.  
  
##  <a name="source_link_manager__release_method"></a>  source_link_manager::release Method  
 Releases the reference on the `source_link_manager` object.  
  
```
void release();
```  
  
##  <a name="source_link_manager__remove_method"></a>  source_link_manager::remove Method  
 Removes a link from the `source_link_manager` object.  
  
```
bool remove(_EType _Link);
```  
  
### Parameters  
 `_Link`  
 A pointer to a block to be removed, if found.  
  
### Return Value  
 `true` if the link was found and removed, `false` otherwise.  
  
##  <a name="source_link_manager__set_bound_method"></a>  source_link_manager::set_bound Method  
 Sets the maximum number of source links that can be added to this `source_link_manager` object.  
  
```
void set_bound(size_t _MaxLinks);
```  
  
### Parameters  
 `_MaxLinks`  
 The maximum number of links.  
  
##  <a name="source_link_manager__source_link_manager_constructor"></a>  source_link_manager::source_link_manager Constructor  
 Constructs a `source_link_manager` object.  
  
```
source_link_manager();
```  
  
##  <a name="source_link_manager___dtorsource_link_manager_destructor"></a>  source_link_manager::~source_link_manager Destructor  
 Destroys the `source_link_manager` object.  
  
```
~source_link_manager();
```  
  
## See Also  
 [concurrency Namespace](../parallel/concurrency-namespace.md)   
 [single_link_registry Class](../parallel/single_link_registry-class.md)   
 [multi_link_registry Class](../parallel/multi_link_registry-class.md)

