---
title: "ISource Class | Microsoft Docs"
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
  - "agents/concurrency::ISource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ISource class"
ms.assetid: c7b73463-42f6-4dcc-801a-81379b12d35a
caps.latest.revision: 20
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
# ISource Class
The `ISource` class is the interface for all source blocks. Source blocks propagate messages to `ITarget` blocks.  
  
## Syntax  
  
```
template<class T>
class ISource;
```  
  
#### Parameters  
 `T`  
 The data type of the payload within the messages produced by the source block.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`source_type`|A type alias for `T`.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[ISource::~ISource Destructor](#isource___dtorisource_destructor)|Destroys the `ISource` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ISource::accept Method](#isource__accept_method)|When overridden in a derived class, accepts a message that was offered by this `ISource` block, transferring ownership to the caller.|  
|[ISource::acquire_ref Method](#isource__acquire_ref_method)|When overridden in a derived class, acquires a reference count on this `ISource` block, to prevent deletion.|  
|[ISource::consume Method](#isource__consume_method)|When overridden in a derived class, consumes a message previously offered by this `ISource` block and successfully reserved by the target, transferring ownership to the caller.|  
|[ISource::link_target Method](#isource__link_target_method)|When overridden in a derived class, links a target block to this `ISource` block.|  
|[ISource::release Method](#isource__release_method)|When overridden in a derived class, releases a previous successful message reservation.|  
|[ISource::release_ref Method](#isource__release_ref_method)|When overridden in a derived class, releases a reference count on this `ISource` block.|  
|[ISource::reserve Method](#isource__reserve_method)|When overridden in a derived class, reserves a message previously offered by this `ISource` block.|  
|[ISource::unlink_target Method](#isource__unlink_target_method)|When overridden in a derived class, unlinks a target block from this `ISource` block, if found to be previously linked.|  
|[ISource::unlink_targets Method](#isource__unlink_targets_method)|When overridden in a derived class, unlinks all target blocks from this `ISource` block.|  
  
## Remarks  
 For more information, see [Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## Inheritance Hierarchy  
 `ISource`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="isource__accept_method"></a>  ISource::accept Method  
 When overridden in a derived class, accepts a message that was offered by this `ISource` block, transferring ownership to the caller.  
  
```
virtual message<T>* accept(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<T>* _PTarget) = 0;
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the offered `message` object.  
  
 `_PTarget`  
 A pointer to the target block that is calling the `accept` method.  
  
### Return Value  
 A pointer to the message that the caller now has ownership of.  
  
### Remarks  
 The `accept` method is called by a target while a message is being offered by this `ISource` block. The message pointer returned may be different from the one passed into the `propagate` method of the `ITarget` block, if this source decides to make a copy of the message.  
  
##  <a name="isource__acquire_ref_method"></a>  ISource::acquire_ref Method  
 When overridden in a derived class, acquires a reference count on this `ISource` block, to prevent deletion.  
  
```
virtual void acquire_ref(_Inout_ ITarget<T>* _PTarget) = 0;
```  
  
### Parameters  
 `_PTarget`  
 A pointer to the target block that is calling this method.  
  
### Remarks  
 This method is called by an `ITarget` object that is being linked to this source during the `link_target` method.  
  
##  <a name="isource__consume_method"></a>  ISource::consume Method  
 When overridden in a derived class, consumes a message previously offered by this `ISource` block and successfully reserved by the target, transferring ownership to the caller.  
  
```
virtual message<T>* consume(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<T>* _PTarget) = 0;
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the reserved `message` object.  
  
 `_PTarget`  
 A pointer to the target block that is calling the `consume` method.  
  
### Return Value  
 A pointer to the `message` object that the caller now has ownership of.  
  
### Remarks  
 The `consume` method is similar to `accept`, but must always be preceded by a call to `reserve` that returned `true`.  
  
##  <a name="isource___dtorisource_destructor"></a>  ISource::~ISource Destructor  
 Destroys the `ISource` object.  
  
```
virtual ~ISource();
```  
  
##  <a name="isource__link_target_method"></a>  ISource::link_target Method  
 When overridden in a derived class, links a target block to this `ISource` block.  
  
```
virtual void link_target(_Inout_ ITarget<T>* _PTarget) = 0;
```  
  
### Parameters  
 `_PTarget`  
 A pointer to the target block being linked to this `ISource` block.  
  
##  <a name="isource__release_method"></a>  ISource::release Method  
 When overridden in a derived class, releases a previous successful message reservation.  
  
```
virtual void release(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<T>* _PTarget) = 0;
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the reserved `message` object.  
  
 `_PTarget`  
 A pointer to the target block that is calling the `release` method.  
  
##  <a name="isource__release_ref_method"></a>  ISource::release_ref Method  
 When overridden in a derived class, releases a reference count on this `ISource` block.  
  
```
virtual void release_ref(_Inout_ ITarget<T>* _PTarget) = 0;
```  
  
### Parameters  
 `_PTarget`  
 A pointer to the target block that is calling this method.  
  
### Remarks  
 This method is called by an `ITarget` object that is being unlinked from this source. The source block is allowed to release any resources reserved for the target block.  
  
##  <a name="isource__reserve_method"></a>  ISource::reserve Method  
 When overridden in a derived class, reserves a message previously offered by this `ISource` block.  
  
```
virtual bool reserve(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<T>* _PTarget) = 0;
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the offered `message` object.  
  
 `_PTarget`  
 A pointer to the target block that is calling the `reserve` method.  
  
### Return Value  
 `true` if the message was successfully reserved, `false` otherwise. Reservations can fail for many reasons, including: the message was already reserved or accepted by another target, the source could deny reservations, and so forth.  
  
### Remarks  
 After you call `reserve`, if it succeeds, you must call either `consume` or `release` in order to take or give up possession of the message, respectively.  
  
##  <a name="isource__unlink_target_method"></a>  ISource::unlink_target Method  
 When overridden in a derived class, unlinks a target block from this `ISource` block, if found to be previously linked.  
  
```
virtual void unlink_target(_Inout_ ITarget<T>* _PTarget) = 0;
```  
  
### Parameters  
 `_PTarget`  
 A pointer to the target block being unlinked from this `ISource` block.  
  
##  <a name="isource__unlink_targets_method"></a>  ISource::unlink_targets Method  
 When overridden in a derived class, unlinks all target blocks from this `ISource` block.  
  
```
virtual void unlink_targets() = 0;
```  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)   
 [ITarget Class](../../../parallel/concrt/reference/itarget-class.md)
