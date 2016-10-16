---
title: "multitype_join Class"
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
  - "agents/concurrency::multitype_join"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "multitype_join class"
ms.assetid: 236e87a0-4867-49fd-869a-bef4010e49a7
caps.latest.revision: 18
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
# multitype_join Class
A `multitype_join` messaging block is a multi-source, single-target messaging block that combines together messages of different types from each of its sources and offers a tuple of the combined messages to its targets.  
  
## Syntax  
  
```  
template<  
    typename _Type,  
    join_type _Jtype = non_greedy  
>  
class multitype_join: public ISource<typename _Unwrap< _Type>::type>;  
```  
  
#### Parameters  
 `_Type`  
 The `tuple` payload type of the messages joined and propagated by the block.  
  
 `_Jtype`  
 The kind of `join` block this is, either `greedy` or `non_greedy`  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`type`|A type alias for `_Type`.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[multitype_join::multitype_join Constructor](#multitype_join__multitype_join_constructor)|Overloaded. Constructs a `multitype_join` messaging block.|  
|[multitype_join::~multitype_join Destructor](#multitype_join___dtormultitype_join_destructor)|Destroys the `multitype_join` messaging block.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[multitype_join::accept Method](#multitype_join__accept_method)|Accepts a message that was offered by this `multitype_join` block, transferring ownership to the caller.|  
|[multitype_join::acquire_ref Method](#multitype_join__acquire_ref_method)|Acquires a reference count on this `multitype_join` messaging block, to prevent deletion.|  
|[multitype_join::consume Method](#multitype_join__consume_method)|Consumes a message previously offered by the `multitype_join` messaging block and successfully reserved by the target, transferring ownership to the caller.|  
|[multitype_join::link_target Method](#multitype_join__link_target_method)|Links a target block to this `multitype_join` messaging block.|  
|[multitype_join::release Method](#multitype_join__release_method)|Releases a previous successful message reservation.|  
|[multitype_join::release_ref Method](#multitype_join__release_ref_method)|Releases a reference count on this `multiple_join` messaging block.|  
|[multitype_join::reserve Method](#multitype_join__reserve_method)|Reserves a message previously offered by this `multitype_join` messaging block.|  
|[multitype_join::unlink_target Method](#multitype_join__unlink_target_method)|Unlinks a target block from this `multitype_join` messaging block.|  
|[multitype_join::unlink_targets Method](#multitype_join__unlink_targets_method)|Unlinks all targets from this `multitype_join` messaging block. (Overrides [ISource::unlink_targets](../parallel/isource-class.md#isource__unlink_targets_method).)|  
  
## Remarks  
 For more information, see [Asynchronous Message Blocks](../parallel/asynchronous-message-blocks.md).  
  
## Inheritance Hierarchy  
 [ISource](../parallel/isource-class.md)  
  
 `multitype_join`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="multitype_join__accept_method"></a>  multitype_join::accept Method  
 Accepts a message that was offered by this `multitype_join` block, transferring ownership to the caller.  
  
```  
virtual message<_Destination_type> * accept(  
    runtime_object_identity _MsgId,  
    _Inout_ ITarget<_Destination_type> * _PTarget );  
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the offered `message` object.  
  
 `_PTarget`  
 A pointer to the target block that is calling the `accept` method.  
  
### Return Value  
 A pointer to the message that the caller now has ownership of.  
  
##  <a name="multitype_join__acquire_ref_method"></a>  multitype_join::acquire_ref Method  
 Acquires a reference count on this `multitype_join` messaging block, to prevent deletion.  
  
```  
virtual void acquire_ref(    _Inout_ ITarget<_Destination_type> * _PTarget );  
```  
  
### Parameters  
 `_PTarget`  
 A pointer to the target block that is calling this method.  
  
### Remarks  
 This method is called by an `ITarget` object that is being linked to this source during the `link_target` method.  
  
##  <a name="multitype_join__consume_method"></a>  multitype_join::consume Method  
 Consumes a message previously offered by the `multitype_join` messaging block and successfully reserved by the target, transferring ownership to the caller.  
  
```  
virtual message<_Destination_type> * consume(  
    runtime_object_identity _MsgId,  
    _Inout_ ITarget<_Destination_type> * _PTarget );  
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
  
##  <a name="multitype_join__link_target_method"></a>  multitype_join::link_target Method  
 Links a target block to this `multitype_join` messaging block.  
  
```  
virtual void link_target(    _Inout_ ITarget<_Destination_type> * _PTarget );  
```  
  
### Parameters  
 `_PTarget`  
 A pointer to an `ITarget` block to link to this `multitype_join` messaging block.  
  
##  <a name="multitype_join__multitype_join_constructor"></a>  multitype_join::multitype_join Constructor  
 Constructs a `multitype_join` messaging block.  
  
```  
explicit multitype_join(  
    _Type _Tuple );  
  
multitype_join(  
    Scheduler& _PScheduler,  
    _Type _Tuple );  
  
multitype_join(  
    ScheduleGroup& _PScheduleGroup,  
    _Type _Tuple );  
  
multitype_join(  
    multitype_join && _Join );  
```  
  
### Parameters  
 `_Tuple`  
 A `tuple` of sources for this `multitype_join` messaging block.  
  
 `_PScheduler`  
 The `Scheduler` object within which the propagation task for the `multitype_join` messaging block is scheduled.  
  
 `_PScheduleGroup`  
 The `ScheduleGroup` object within which the propagation task for the `multitype_join` messaging block is scheduled. The `Scheduler` object used is implied by the schedule group.  
  
 `_Join`  
 A `multitype_join` messaging block to copy from. Note that the original object is orphaned, making this a move constructor.  
  
### Remarks  
 The runtime uses the default scheduler if you do not specify the `_PScheduler` or `_PScheduleGroup` parameters.  
  
 Move construction is not performed under a lock, which means that it is up to the user to make sure that there are no light-weight tasks in flight at the time of moving. Otherwise, numerous races can occur, leading to exceptions or inconsistent state.  
  
##  <a name="multitype_join___dtormultitype_join_destructor"></a>  multitype_join::~multitype_join Destructor  
 Destroys the `multitype_join` messaging block.  
  
```  
~multitype_join();  
```  
  
##  <a name="multitype_join__release_method"></a>  multitype_join::release Method  
 Releases a previous successful message reservation.  
  
```  
virtual void release(  
    runtime_object_identity _MsgId,  
    _Inout_ ITarget<_Destination_type> * _PTarget );  
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the `message` object being released.  
  
 `_PTarget`  
 A pointer to the target block that is calling the `release` method.  
  
##  <a name="multitype_join__release_ref_method"></a>  multitype_join::release_ref Method  
 Releases a reference count on this `multiple_join` messaging block.  
  
```  
virtual void release_ref(    _Inout_ ITarget<_Destination_type> * _PTarget );  
```  
  
### Parameters  
 `_PTarget`  
 A pointer to the target block that is calling this method.  
  
### Remarks  
 This method is called by an `ITarget` object that is being unlinked from this source. The source block is allowed to release any resources reserved for the target block.  
  
##  <a name="multitype_join__reserve_method"></a>  multitype_join::reserve Method  
 Reserves a message previously offered by this `multitype_join` messaging block.  
  
```  
virtual bool reserve(  
    runtime_object_identity _MsgId,  
    _Inout_ ITarget<_Destination_type> * _PTarget );  
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
  
##  <a name="multitype_join__unlink_target_method"></a>  multitype_join::unlink_target Method  
 Unlinks a target block from this `multitype_join` messaging block.  
  
```  
virtual void unlink_target(    _Inout_ ITarget<_Destination_type> * _PTarget );  
```  
  
### Parameters  
 `_PTarget`  
 A pointer to an `ITarget` block to unlink from this `multitype_join` messaging block.  
  
##  <a name="multitype_join__unlink_targets_method"></a>  multitype_join::unlink_targets Method  
 Unlinks all targets from this `multitype_join` messaging block.  
  
```  
virtual void unlink_targets();  
```  
  
## See Also  
 [concurrency Namespace](../parallel/concurrency-namespace.md)   
 [choice Class](../parallel/choice-class.md)   
 [join Class](../parallel/join-class.md)   
 [join_type Enumeration](concurrency_namespace_Enumerations)   
 [make_join Function](concurrency_namespace_Functions)   
 [make_greedy_join Function](concurrency_namespace_Functions)