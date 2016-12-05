---
title: "source_block Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::source_block"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "source_block class"
ms.assetid: fbdd4146-e8d0-42e8-b714-fe633f69ffbf
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
# source_block Class
The `source_block` class is an abstract base class for source-only blocks. The class provides basic link management functionality as well as common error checks.  
  
## Syntax  
  
```
template<class _TargetLinkRegistry, class _MessageProcessorType = ordered_message_processor<typename _TargetLinkRegistry::type::type>>
class source_block : public ISource<typename _TargetLinkRegistry::type::type>;
```  
  
#### Parameters  
 `_TargetLinkRegistry`  
 Link registry to be used for holding the target links.  
  
 `_MessageProcessorType`  
 Processor type for message processing.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`target_iterator`|The iterator to walk the connected targets.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[source_block::source_block Constructor](#ctor)|Constructs a `source_block` object.|  
|[source_block::~source_block Destructor](#dtor)|Destroys the `source_block` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[source_block::accept Method](#accept)|Accepts a message that was offered by this `source_block` object, transferring ownership to the caller.|  
|[source_block::acquire_ref Method](#acquire_ref)|Acquires a reference count on this `source_block` object, to prevent deletion.|  
|[source_block::consume Method](#consume)|Consumes a message previously offered by this `source_block` object and successfully reserved by the target, transferring ownership to the caller.|  
|[source_block::link_target Method](#link_target)|Links a target block to this `source_block` object.|  
|[source_block::release Method](#release)|Releases a previous successful message reservation.|  
|[source_block::release_ref Method](#release_ref)|Releases a reference count on this `source_block` object.|  
|[source_block::reserve Method](#reserve)|Reserves a message previously offered by this `source_block` object.|  
|[source_block::unlink_target Method](#unlink_target)|Unlinks a target block from this `source_block` object.|  
|[source_block::unlink_targets Method](#unlink_targets)|Unlinks all target blocks from this `source_block` object. (Overrides [ISource::unlink_targets](isource-class.md#unlink_targets).)|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[source_block::accept_message Method](#accept_message)|When overridden in a derived class, accepts an offered message by the source. Message blocks should override this method to validate the `_MsgId` and return a message.|  
|[source_block::async_send Method](#async_send)|Asynchronously queues up messages and starts a propagation task, if this has not been done already|  
|[source_block::consume_message Method](#consume_message)|When overridden in a derived class, consumes a message that was previously reserved.|  
|[source_block::enable_batched_processing Method](#enable_batched_processing)|Enables batched processing for this block.|  
|[source_block::initialize_source Method](#initialize_source)|Initializes the `message_propagator` within this `source_block`.|  
|[source_block::link_target_notification Method](#link_target_notification)|A callback that notifies that a new target has been linked to this `source_block` object.|  
|[source_block::process_input_messages Method](#process_input_messages)|Process input messages. This is only useful for propagator blocks, which derive from source_block|  
|[source_block::propagate_output_messages Method](#propagate_output_messages)|Propagate messages to targets.|  
|[source_block::propagate_to_any_targets Method](#propagate_to_any_targets)|When overridden in a derived class, propagates the given message to any or all of the linked targets. This is the main propagation routine for message blocks.|  
|[source_block::release_message Method](#release_message)|When overridden in a derived class, releases a previous message reservation.|  
|[source_block::remove_targets Method](#remove_targets)|Removes all target links for this source block. This should be called from the destructor.|  
|[source_block::reserve_message Method](#reserve_message)|When overridden in a derived class, reserves a message previously offered by this `source_block` object.|  
|[source_block::resume_propagation Method](#resume_propagation)|When overridden in a derived class, resumes propagation after a reservation has been released.|  
|[source_block::sync_send Method](#sync_send)|Synchronously queues up messages and starts a propagation task, if this has not been done already.|  
|[source_block::unlink_target_notification Method](#unlink_target_notification)|A callback that notifies that a target has been unlinked from this `source_block` object.|  
|[source_block::wait_for_outstanding_async_sends Method](#wait_for_outstanding_async_sends)|Waits for all asynchronous propagations to complete. This propagator-specific spin wait is used in destructors of message blocks to make sure that all asynchronous propagations have time to finish before destroying the block.|  
  
## Remarks  
 Message blocks should derive from this block to take advantage of link management and synchronization provided by this class.  
  
## Inheritance Hierarchy  
 [ISource](isource-class.md)  
  
 `source_block`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="accept"></a>  source_block::accept Method  
 Accepts a message that was offered by this `source_block` object, transferring ownership to the caller.  
  
```
virtual message<_Target_type>* accept(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Target_type>* _PTarget);
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the offered `message` object.  
  
 `_PTarget`  
 A pointer to the target block that is calling the `accept` method.  
  
### Return Value  
 A pointer to the `message` object that the caller now has ownership of.  
  
### Remarks  
 The method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if the parameter `_PTarget` is `NULL`.  
  
 The `accept` method is called by a target while a message is being offered by this `ISource` block. The message pointer returned may be different from the one passed into the `propagate` method of the `ITarget` block, if this source decides to make a copy of the message.  
  
##  <a name="accept_message"></a>  source_block::accept_message Method  
 When overridden in a derived class, accepts an offered message by the source. Message blocks should override this method to validate the `_MsgId` and return a message.  
  
```
virtual message<_Target_type>* accept_message(runtime_object_identity _MsgId) = 0;
```  
  
### Parameters  
 `_MsgId`  
 The runtime object identity of the `message` object.  
  
### Return Value  
 A pointer to the message that the caller now has ownership of.  
  
### Remarks  
 To transfer ownership, the original message pointer should be returned. To maintain ownership, a copy of message payload needs to be made and returned.  
  
##  <a name="acquire_ref"></a>  source_block::acquire_ref Method  
 Acquires a reference count on this `source_block` object, to prevent deletion.  
  
```
virtual void acquire_ref(_Inout_ ITarget<_Target_type> *);
```  
  
### Remarks  
 This method is called by an `ITarget` object that is being linked to this source during the `link_target` method.  
  
##  <a name="async_send"></a>  source_block::async_send Method  
 Asynchronously queues up messages and starts a propagation task, if this has not been done already  
  
```
virtual void async_send(_Inout_opt_ message<_Target_type>* _Msg);
```  
  
### Parameters  
 `_Msg`  
 A pointer to a `message` object to asynchronously send.  
  
##  <a name="consume"></a>  source_block::consume Method  
 Consumes a message previously offered by this `source_block` object and successfully reserved by the target, transferring ownership to the caller.  
  
```
virtual message<_Target_type>* consume(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Target_type>* _PTarget);
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the reserved `message` object.  
  
 `_PTarget`  
 A pointer to the target block that is calling the `consume` method.  
  
### Return Value  
 A pointer to the `message` object that the caller now has ownership of.  
  
### Remarks  
 The method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if the parameter `_PTarget` is `NULL`.  
  
 The method throws a [bad_target](bad-target-class.md) exception if the parameter `_PTarget` does not represent the target that called `reserve`.  
  
 The `consume` method is similar to `accept`, but must always be preceded by a call to `reserve` that returned `true`.  
  
##  <a name="consume_message"></a>  source_block::consume_message Method  
 When overridden in a derived class, consumes a message that was previously reserved.  
  
```
virtual message<_Target_type>* consume_message(runtime_object_identity _MsgId) = 0;
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the `message` object being consumed.  
  
### Return Value  
 A pointer to the message that the caller now has ownership of.  
  
### Remarks  
 Similar to `accept`, but is always preceded by a call to `reserve`.  
  
##  <a name="enable_batched_processing"></a>  source_block::enable_batched_processing Method  
 Enables batched processing for this block.  
  
```
void enable_batched_processing();
```  
  
##  <a name="initialize_source"></a>  source_block::initialize_source Method  
 Initializes the `message_propagator` within this `source_block`.  
  
```
void initialize_source(
    _Inout_opt_ Scheduler* _PScheduler = NULL,
    _Inout_opt_ ScheduleGroup* _PScheduleGroup = NULL);
```  
  
### Parameters  
 `_PScheduler`  
 The scheduler to be used for scheduling tasks.  
  
 `_PScheduleGroup`  
 The schedule group to be used for scheduling tasks.  
  
##  <a name="link_target"></a>  source_block::link_target Method  
 Links a target block to this `source_block` object.  
  
```
virtual void link_target(_Inout_ ITarget<_Target_type>* _PTarget);
```  
  
### Parameters  
 `_PTarget`  
 A pointer to an `ITarget` block to link to this `source_block` object.  
  
### Remarks  
 The method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if the parameter `_PTarget` is `NULL`.  
  
##  <a name="link_target_notification"></a>  source_block::link_target_notification Method  
 A callback that notifies that a new target has been linked to this `source_block` object.  
  
```
virtual void link_target_notification(_Inout_ ITarget<_Target_type> *);
```  
  
##  <a name="process_input_messages"></a>  source_block::process_input_messages Method  
 Process input messages. This is only useful for propagator blocks, which derive from source_block  
  
```
virtual void process_input_messages(_Inout_ message<_Target_type>* _PMessage);
```  
  
### Parameters  
 `_PMessage`  
  
##  <a name="propagate_output_messages"></a>  source_block::propagate_output_messages Method  
 Propagate messages to targets.  
  
```
virtual void propagate_output_messages();
```  
  
##  <a name="propagate_to_any_targets"></a>  source_block::propagate_to_any_targets Method  
 When overridden in a derived class, propagates the given message to any or all of the linked targets. This is the main propagation routine for message blocks.  
  
```
virtual void propagate_to_any_targets(_Inout_opt_ message<_Target_type>* _PMessage);
```  
  
### Parameters  
 `_PMessage`  
 A pointer to the message that is to be propagated.  
  
##  <a name="release"></a>  source_block::release Method  
 Releases a previous successful message reservation.  
  
```
virtual void release(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Target_type>* _PTarget);
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the reserved `message` object.  
  
 `_PTarget`  
 A pointer to the target block that is calling the `release` method.  
  
### Remarks  
 The method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if the parameter `_PTarget` is `NULL`.  
  
 The method throws a [bad_target](bad-target-class.md) exception if the parameter `_PTarget` does not represent the target that called `reserve`.  
  
##  <a name="release_message"></a>  source_block::release_message Method  
 When overridden in a derived class, releases a previous message reservation.  
  
```
virtual void release_message(runtime_object_identity _MsgId) = 0;
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the `message` object being released.  
  
##  <a name="release_ref"></a>  source_block::release_ref Method  
 Releases a reference count on this `source_block` object.  
  
```
virtual void release_ref(_Inout_ ITarget<_Target_type>* _PTarget);
```  
  
### Parameters  
 `_PTarget`  
 A pointer to the target block that is calling this method.  
  
### Remarks  
 This method is called by an `ITarget` object that is being unlinked from this source. The source block is allowed to release any resources reserved for the target block.  
  
##  <a name="remove_targets"></a>  source_block::remove_targets Method  
 Removes all target links for this source block. This should be called from the destructor.  
  
```
void remove_targets();
```  
  
##  <a name="reserve"></a>  source_block::reserve Method  
 Reserves a message previously offered by this `source_block` object.  
  
```
virtual bool reserve(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Target_type>* _PTarget);
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the offered `message` object.  
  
 `_PTarget`  
 A pointer to the target block that is calling the `reserve` method.  
  
### Return Value  
 `true` if the message was successfully reserved, `false` otherwise. Reservations can fail for many reasons, including: the message was already reserved or accepted by another target, the source could deny reservations, and so forth.  
  
### Remarks  
 The method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if the parameter `_PTarget` is `NULL`.  
  
 After you call `reserve`, if it succeeds, you must call either `consume` or `release` in order to take or give up possession of the message, respectively.  
  
##  <a name="reserve_message"></a>  source_block::reserve_message Method  
 When overridden in a derived class, reserves a message previously offered by this `source_block` object.  
  
```
virtual bool reserve_message(runtime_object_identity _MsgId) = 0;
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the `message` object being reserved.  
  
### Return Value  
 `true` if the message was successfully reserved, `false` otherwise.  
  
### Remarks  
 After `reserve` is called, if it returns `true`, either `consume` or `release` must be called to either take or release ownership of the message.  
  
##  <a name="resume_propagation"></a>  source_block::resume_propagation Method  
 When overridden in a derived class, resumes propagation after a reservation has been released.  
  
```
virtual void resume_propagation() = 0;
```  
  
##  <a name="ctor"></a>  source_block::source_block Constructor  
 Constructs a `source_block` object.  
  
```
source_block();
```  
  
##  <a name="dtor"></a>  source_block::~source_block Destructor  
 Destroys the `source_block` object.  
  
```
virtual ~source_block();
```  
  
##  <a name="sync_send"></a>  source_block::sync_send Method  
 Synchronously queues up messages and starts a propagation task, if this has not been done already.  
  
```
virtual void sync_send(_Inout_opt_ message<_Target_type>* _Msg);
```  
  
### Parameters  
 `_Msg`  
 A pointer to a `message` object to synchronously send.  
  
##  <a name="unlink_target"></a>  source_block::unlink_target Method  
 Unlinks a target block from this `source_block` object.  
  
```
virtual void unlink_target(_Inout_ ITarget<_Target_type>* _PTarget);
```  
  
### Parameters  
 `_PTarget`  
 A pointer to an `ITarget` block to unlink from this `source_block` object.  
  
### Remarks  
 The method throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if the parameter `_PTarget` is `NULL`.  
  
##  <a name="unlink_target_notification"></a>  source_block::unlink_target_notification Method  
 A callback that notifies that a target has been unlinked from this `source_block` object.  
  
```
virtual void unlink_target_notification(_Inout_ ITarget<_Target_type>* _PTarget);
```  
  
### Parameters  
 `_PTarget`  
 The `ITarget` block that was unlinked.  
  
##  <a name="unlink_targets"></a>  source_block::unlink_targets Method  
 Unlinks all target blocks from this `source_block` object.  
  
```
virtual void unlink_targets();
```  
  
##  <a name="wait_for_outstanding_async_sends"></a>  source_block::wait_for_outstanding_async_sends Method  
 Waits for all asynchronous propagations to complete. This propagator-specific spin wait is used in destructors of message blocks to make sure that all asynchronous propagations have time to finish before destroying the block.  
  
```
void wait_for_outstanding_async_sends();
```  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [ISource Class](isource-class.md)
