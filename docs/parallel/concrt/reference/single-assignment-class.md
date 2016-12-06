---
title: "single_assignment Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::single_assignment"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "single_assignment class"
ms.assetid: ccc34728-8de9-4e07-b83d-a36a58d9d2b9
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
# single_assignment Class
A `single_assignment` messaging block is a multi-target, multi-source, ordered `propagator_block` capable of storing a single, write-once `message`.  
  
## Syntax  
  
```
template<class T>
class single_assignment : public propagator_block<multi_link_registry<ITarget<T>>, multi_link_registry<ISource<T>>>;
```  
  
#### Parameters  
 `T`  
 The payload type of the message stored and propagated by the buffer.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[single_assignment::single_assignment Constructor](#ctor)|Overloaded. Constructs a `single_assignment` messaging block.|  
|[single_assignment::~single_assignment Destructor](#dtor)|Destroys the `single_assignment` messaging block.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[single_assignment::has_value Method](#has_value)|Checks whether this `single_assignment` messaging block has been initialized with a value yet.|  
|[single_assignment::value Method](#value)|Gets a reference to the current payload of the message being stored in the `single_assignment` messaging block.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[single_assignment::accept_message Method](#accept_message)|Accepts a message that was offered by this `single_assignment` messaging block, returning a copy of the message to the caller.|  
|[single_assignment::consume_message Method](#consume_message)|Consumes a message previously offered by the `single_assignment` and reserved by the target, returning a copy of the message to the caller.|  
|[single_assignment::link_target_notification Method](#link_target_notification)|A callback that notifies that a new target has been linked to this `single_assignment` messaging block.|  
|[single_assignment::propagate_message Method](#propagate_message)|Asynchronously passes a message from an `ISource` block to this `single_assignment` messaging block. It is invoked by the `propagate` method, when called by a source block.|  
|[single_assignment::propagate_to_any_targets Method](#propagate_to_any_targets)|Places the `message``_PMessage` in this `single_assignment` messaging block and offers it to all of the linked targets.|  
|[single_assignment::release_message Method](#release_message)|Releases a previous message reservation. (Overrides [source_block::release_message](source-block-class.md#release_message).)|  
|[single_assignment::reserve_message Method](#reserve_message)|Reserves a message previously offered by this `single_assignment` messaging block. (Overrides [source_block::reserve_message](source-block-class.md#reserve_message).)|  
|[single_assignment::resume_propagation Method](#resume_propagation)|Resumes propagation after a reservation has been released. (Overrides [source_block::resume_propagation](source-block-class.md#resume_propagation).)|  
|[single_assignment::send_message Method](#send_message)|Synchronously passes a message from an `ISource` block to this `single_assignment` messaging block. It is invoked by the `send` method, when called by a source block.|  
  
## Remarks  
 A `single_assignment` messaging block propagates out copies of its message to each target.  
  
 For more information, see [Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## Inheritance Hierarchy  
 [ISource](isource-class.md)  
  
 [ITarget](itarget-class.md)  
  
 [source_block](source-block-class.md)  
  
 [propagator_block](propagator-block-class.md)  
  
 `single_assignment`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="accept_message"></a>  single_assignment::accept_message Method  
 Accepts a message that was offered by this `single_assignment` messaging block, returning a copy of the message to the caller.  
  
```
virtual message<T>* accept_message(runtime_object_identity _MsgId);
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the offered `message` object.  
  
### Return Value  
 A pointer to the `message` object that the caller now has ownership of.  
  
### Remarks  
 The `single_assignment` messaging block returns copies of the message to its targets, rather than transferring ownership of the currently held message.  
  
##  <a name="consume_message"></a>  single_assignment::consume_message Method  
 Consumes a message previously offered by the `single_assignment` and reserved by the target, returning a copy of the message to the caller.  
  
```
virtual message<T>* consume_message(runtime_object_identity _MsgId);
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the `message` object being consumed.  
  
### Return Value  
 A pointer to the `message` object that the caller now has ownership of.  
  
### Remarks  
 Similar to `accept`, but is always preceded by a call to `reserve`.  
  
##  <a name="has_value"></a>  single_assignment::has_value Method  
 Checks whether this `single_assignment` messaging block has been initialized with a value yet.  
  
```
bool has_value() const;
```  
  
### Return Value  
 `true` if the block has received a value, `false` otherwise.  
  
##  <a name="link_target_notification"></a>  single_assignment::link_target_notification Method  
 A callback that notifies that a new target has been linked to this `single_assignment` messaging block.  
  
```
virtual void link_target_notification(_Inout_ ITarget<T>* _PTarget);
```  
  
### Parameters  
 `_PTarget`  
 A pointer to the newly linked target.  
  
##  <a name="propagate_message"></a>  single_assignment::propagate_message Method  
 Asynchronously passes a message from an `ISource` block to this `single_assignment` messaging block. It is invoked by the `propagate` method, when called by a source block.  
  
```
virtual message_status propagate_message(
    _Inout_ message<T>* _PMessage,
    _Inout_ ISource<T>* _PSource);
```  
  
### Parameters  
 `_PMessage`  
 A pointer to the `message` object.  
  
 `_PSource`  
 A pointer to the source block offering the message.  
  
### Return Value  
 A [message_status](concurrency-namespace-enums.md) indication of what the target decided to do with the message.  
  
##  <a name="propagate_to_any_targets"></a>  single_assignment::propagate_to_any_targets Method  
 Places the `message``_PMessage` in this `single_assignment` messaging block and offers it to all of the linked targets.  
  
```
virtual void propagate_to_any_targets(_Inout_opt_ message<T>* _PMessage);
```  
  
### Parameters  
 `_PMessage`  
 A pointer to a `message` that this `single_assignment` messaging block has taken ownership of.  
  
##  <a name="release_message"></a>  single_assignment::release_message Method  
 Releases a previous message reservation.  
  
```
virtual void release_message(runtime_object_identity _MsgId);
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the `message` object being released.  
  
##  <a name="reserve_message"></a>  single_assignment::reserve_message Method  
 Reserves a message previously offered by this `single_assignment` messaging block.  
  
```
virtual bool reserve_message(runtime_object_identity _MsgId);
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the `message` object being reserved.  
  
### Return Value  
 `true` if the message was successfully reserved, `false` otherwise.  
  
### Remarks  
 After `reserve` is called, if it returns `true`, either `consume` or `release` must be called to either take or release ownership of the message.  
  
##  <a name="resume_propagation"></a>  single_assignment::resume_propagation Method  
 Resumes propagation after a reservation has been released.  
  
```
virtual void resume_propagation();
```  
  
##  <a name="send_message"></a>  single_assignment::send_message Method  
 Synchronously passes a message from an `ISource` block to this `single_assignment` messaging block. It is invoked by the `send` method, when called by a source block.  
  
```
virtual message_status send_message(
    _Inout_ message<T>* _PMessage,
    _Inout_ ISource<T>* _PSource);
```  
  
### Parameters  
 `_PMessage`  
 A pointer to the `message` object.  
  
 `_PSource`  
 A pointer to the source block offering the message.  
  
### Return Value  
 A [message_status](concurrency-namespace-enums.md) indication of what the target decided to do with the message.  
  
##  <a name="ctor"></a>  single_assignment::single_assignment Constructor  
 Constructs a `single_assignment` messaging block.  
  
```
single_assignment();

single_assignment(
    filter_method const& _Filter);

single_assignment(
    Scheduler& _PScheduler);

single_assignment(
    Scheduler& _PScheduler,
    filter_method const& _Filter);

single_assignment(
    ScheduleGroup& _PScheduleGroup);

single_assignment(
    ScheduleGroup& _PScheduleGroup,
    filter_method const& _Filter);
```  
  
### Parameters  
 `_Filter`  
 A filter function which determines whether offered messages should be accepted.  
  
 `_PScheduler`  
 The `Scheduler` object within which the propagation task for the `single_assignment` messaging block is scheduled.  
  
 `_PScheduleGroup`  
 The `ScheduleGroup` object within which the propagation task for the `single_assignment` messaging block is scheduled. The `Scheduler` object used is implied by the schedule group.  
  
### Remarks  
 The runtime uses the default scheduler if you do not specify the `_PScheduler` or `_PScheduleGroup` parameters.  
  
 The type `filter_method` is a functor with signature `bool (T const &)` which is invoked by this `single_assignment` messaging block to determine whether or not it should accept an offered message.  
  
##  <a name="dtor"></a>  single_assignment::~single_assignment Destructor  
 Destroys the `single_assignment` messaging block.  
  
```
~single_assignment();
```  
  
##  <a name="value"></a>  single_assignment::value Method  
 Gets a reference to the current payload of the message being stored in the `single_assignment` messaging block.  
  
```
T const& value();
```  
  
### Return Value  
 The payload of the stored message.  
  
### Remarks  
 This method will wait until a message arrives if no message is currently stored in the `single_assignment` messaging block.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [overwrite_buffer Class](overwrite-buffer-class.md)   
 [unbounded_buffer Class](unbounded-buffer-class.md)

