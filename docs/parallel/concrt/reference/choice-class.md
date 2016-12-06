---
title: "choice Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::choice"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "choice class"
ms.assetid: 4157a539-d5c2-4161-b1ab-536ce2888397
caps.latest.revision: 21
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
# choice Class
A `choice` messaging block is a multi-source, single-target block that represents a control-flow interaction with a set of sources. The choice block will wait for any one of multiple sources to produce a message and will propagate the index of the source that produced the message.  
  
## Syntax  
  
```  
template<
    class T  
>  
class choice: public ISource<size_t>;  
```  
  
#### Parameters  
 `T`  
 A `tuple`-based type representing the payloads of the input sources.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`type`|A type alias for `T`.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[choice::choice Constructor](#ctor)|Overloaded. Constructs a `choice` messaging block.|  
|[choice::~choice Destructor](#dtor)|Destroys the `choice` messaging block.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[choice::accept Method](#accept)|Accepts a message that was offered by this `choice` block, transferring ownership to the caller.|  
|[choice::acquire_ref Method](#acquire_ref)|Acquires a reference count on this `choice` messaging block, to prevent deletion.|  
|[choice::consume Method](#consume)|Consumes a message previously offered by this `choice` messaging block and successfully reserved by the target, transferring ownership to the caller.|  
|[choice::has_value Method](#has_value)|Checks whether this `choice` messaging block has been initialized with a value yet.|  
|[choice::index Method](#index)|Returns an index into the `tuple` representing the element selected by the `choice` messaging block.|  
|[choice::link_target Method](#link_target)|Links a target block to this `choice` messaging block.|  
|[choice::release Method](#release)|Releases a previous successful message reservation.|  
|[choice::release_ref Method](#release_ref)|Releases a reference count on this `choice` messaging block.|  
|[choice::reserve Method](#reserve)|Reserves a message previously offered by this `choice` messaging block.|  
|[choice::unlink_target Method](#unlink_target)|Unlinks a target block from this `choice` messaging block.|  
|[choice::unlink_targets Method](#unlink_targets)|Unlinks all targets from this `choice` messaging block. (Overrides [ISource::unlink_targets](isource-class.md#unlink_targets).)|  
|[choice::value Method](#value)|Gets the message whose index was selected by the `choice` messaging block.|  
  
## Remarks  
 The choice block ensures that only one of the incoming messages is consumed.  
  
 For more information, see [Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## Inheritance Hierarchy  
 [ISource](isource-class.md)  
  
 `choice`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="accept"></a>  choice::accept Method  
 Accepts a message that was offered by this `choice` block, transferring ownership to the caller.  
  
```  
virtual message<size_t>* accept(
    runtime_object_identity _MsgId,  
    _Inout_ ITarget<size_t>* _PTarget);
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the offered `message` object.  
  
 `_PTarget`  
 A pointer to the target block that is calling the `accept` method.  
  
### Return Value  
 A pointer to the message that the caller now has ownership of.  
  
##  <a name="acquire_ref"></a>  choice::acquire_ref Method  
 Acquires a reference count on this `choice` messaging block, to prevent deletion.  
  
```  
virtual void acquire_ref(_Inout_ ITarget<size_t>* _PTarget);
```  
  
### Parameters  
 `_PTarget`  
 A pointer to the target block that is calling this method.  
  
### Remarks  
 This method is called by an `ITarget` object that is being linked to this source during the `link_target` method.  
  
##  <a name="ctor"></a>  choice::choice Constructor  
 Constructs a `choice` messaging block.  
  
```  
explicit choice(
    T _Tuple);

 
choice(
    Scheduler& _PScheduler,  
    T _Tuple);

 
choice(
    ScheduleGroup& _PScheduleGroup,  
    T _Tuple);

 
choice(
    choice&& _Choice);
```  
  
### Parameters  
 `_Tuple`  
 A `tuple` of sources for the choice.  
  
 `_PScheduler`  
 The `Scheduler` object within which the propagation task for the `choice` messaging block is scheduled.  
  
 `_PScheduleGroup`  
 The `ScheduleGroup` object within which the propagation task for the `choice` messaging block is scheduled. The `Scheduler` object used is implied by the schedule group.  
  
 `_Choice`  
 A `choice` messaging block to copy from. Note that the original object is orphaned, making this a move constructor.  
  
### Remarks  
 The runtime uses the default scheduler if you do not specify the `_PScheduler` or `_PScheduleGroup` parameters.  
  
 Move construction is not performed under a lock, which means that it is up to the user to make sure that there are no light-weight tasks in flight at the time of moving. Otherwise, numerous races can occur, leading to exceptions or inconsistent state.  
  
##  <a name="dtor"></a>  choice::~choice Destructor  
 Destroys the `choice` messaging block.  
  
```  
~choice();
```  
  
##  <a name="consume"></a>  choice::consume Method  
 Consumes a message previously offered by this `choice` messaging block and successfully reserved by the target, transferring ownership to the caller.  
  
```  
virtual message<size_t>* consume(
    runtime_object_identity _MsgId,  
    _Inout_ ITarget<size_t>* _PTarget);
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
  
##  <a name="has_value"></a>  choice::has_value Method  
 Checks whether this `choice` messaging block has been initialized with a value yet.  
  
```  
bool has_value() const;

 
```  
  
### Return Value  
 `true` if the block has received a value, `false` otherwise.  
  
##  <a name="index"></a>  choice::index Method  
 Returns an index into the `tuple` representing the element selected by the `choice` messaging block.  
  
```  
size_t index();
```  
  
### Return Value  
 The message index.  
  
### Remarks  
 The message payload can be extracted using the `get` method.  
  
##  <a name="link_target"></a>  choice::link_target Method  
 Links a target block to this `choice` messaging block.  
  
```  
virtual void link_target(_Inout_ ITarget<size_t>* _PTarget);
```  
  
### Parameters  
 `_PTarget`  
 A pointer to an `ITarget` block to link to this `choice` messaging block.  
  
##  <a name="release"></a>  choice::release Method  
 Releases a previous successful message reservation.  
  
```  
virtual void release(
    runtime_object_identity _MsgId,  
    _Inout_ ITarget<size_t>* _PTarget);
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the `message` object being released.  
  
 `_PTarget`  
 A pointer to the target block that is calling the `release` method.  
  
##  <a name="release_ref"></a>  choice::release_ref Method  
 Releases a reference count on this `choice` messaging block.  
  
```  
virtual void release_ref(_Inout_ ITarget<size_t>* _PTarget);
```  
  
### Parameters  
 `_PTarget`  
 A pointer to the target block that is calling this method.  
  
### Remarks  
 This method is called by an `ITarget` object that is being unlinked from this source. The source block is allowed to release any resources reserved for the target block.  
  
##  <a name="reserve"></a>  choice::reserve Method  
 Reserves a message previously offered by this `choice` messaging block.  
  
```  
virtual bool reserve(
    runtime_object_identity _MsgId,  
    _Inout_ ITarget<size_t>* _PTarget);
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the `message` object being reserved.  
  
 `_PTarget`  
 A pointer to the target block that is calling the `reserve` method.  
  
### Return Value  
 `true` if the message was successfully reserved, `false` otherwise. Reservations can fail for many reasons, including: the message was already reserved or accepted by another target, the source could deny reservations, and so forth.  
  
### Remarks  
 After you call `reserve`, if it succeeds, you must call either `consume` or `release` in order to take or give up possession of the message, respectively.  
  
##  <a name="unlink_target"></a>  choice::unlink_target Method  
 Unlinks a target block from this `choice` messaging block.  
  
```  
virtual void unlink_target(_Inout_ ITarget<size_t>* _PTarget);
```  
  
### Parameters  
 `_PTarget`  
 A pointer to an `ITarget` block to unlink from this `choice` messaging block.  
  
##  <a name="unlink_targets"></a>  choice::unlink_targets Method  
 Unlinks all targets from this `choice` messaging block.  
  
```  
virtual void unlink_targets();
```  
  
### Remarks  
 This method does not need to be called from the destructor because destructor for the internal `single_assignment` block will unlink properly.  
  
##  <a name="value"></a>  choice::value Method  
 Gets the message whose index was selected by the `choice` messaging block.  
  
```  
template <
    typename _Payload_type  
>  
_Payload_type const& value();
```  
  
### Parameters  
 `_Payload_type`  
 The type of the message payload.  
  
### Return Value  
 The payload of the message.  
  
### Remarks  
 Because a `choice` messaging block can take inputs with different payload types, you must specify the type of the payload at the point of retrieval. You can determine the type based on the result of the `index` method.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [join Class](join-class.md)   
 [single_assignment Class](single-assignment-class.md)
