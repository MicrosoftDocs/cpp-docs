---
title: "single_assignment Class"
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
  - "agents/concurrency::single_assignment"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "single_assignment class"
ms.assetid: ccc34728-8de9-4e07-b83d-a36a58d9d2b9
caps.latest.revision: 20
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
|[single_assignment::single_assignment Constructor](#single_assignment__single_assignment_constructor)|Overloaded. Constructs a `single_assignment` messaging block.|  
|[single_assignment::~single_assignment Destructor](#single_assignment___dtorsingle_assignment_destructor)|Destroys the `single_assignment` messaging block.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[single_assignment::has_value Method](#single_assignment__has_value_method)|Checks whether this `single_assignment` messaging block has been initialized with a value yet.|  
|[single_assignment::value Method](#single_assignment__value_method)|Gets a reference to the current payload of the message being stored in the `single_assignment` messaging block.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[single_assignment::accept_message Method](#single_assignment__accept_message_method)|Accepts a message that was offered by this `single_assignment` messaging block, returning a copy of the message to the caller.|  
|[single_assignment::consume_message Method](#single_assignment__consume_message_method)|Consumes a message previously offered by the `single_assignment` and reserved by the target, returning a copy of the message to the caller.|  
|[single_assignment::link_target_notification Method](#single_assignment__link_target_notification_method)|A callback that notifies that a new target has been linked to this `single_assignment` messaging block.|  
|[single_assignment::propagate_message Method](#single_assignment__propagate_message_method)|Asynchronously passes a message from an `ISource` block to this `single_assignment` messaging block. It is invoked by the `propagate` method, when called by a source block.|  
|[single_assignment::propagate_to_any_targets Method](#single_assignment__propagate_to_any_targets_method)|Places the `message``_PMessage` in this `single_assignment` messaging block and offers it to all of the linked targets.|  
|[single_assignment::release_message Method](#single_assignment__release_message_method)|Releases a previous message reservation. (Overrides [source_block::release_message](../parallel/source_block-class.md#source_block__release_message_method).)|  
|[single_assignment::reserve_message Method](#single_assignment__reserve_message_method)|Reserves a message previously offered by this `single_assignment` messaging block. (Overrides [source_block::reserve_message](../parallel/source_block-class.md#source_block__reserve_message_method).)|  
|[single_assignment::resume_propagation Method](#single_assignment__resume_propagation_method)|Resumes propagation after a reservation has been released. (Overrides [source_block::resume_propagation](../parallel/source_block-class.md#source_block__resume_propagation_method).)|  
|[single_assignment::send_message Method](#single_assignment__send_message_method)|Synchronously passes a message from an `ISource` block to this `single_assignment` messaging block. It is invoked by the `send` method, when called by a source block.|  
  
## Remarks  
 A `single_assignment` messaging block propagates out copies of its message to each target.  
  
 For more information, see [Asynchronous Message Blocks](../parallel/asynchronous-message-blocks.md).  
  
## Inheritance Hierarchy  
 [ISource](../parallel/isource-class.md)  
  
 [ITarget](../parallel/itarget-class.md)  
  
 [source_block](../parallel/source_block-class.md)  
  
 [propagator_block](../parallel/propagator_block-class.md)  
  
 `single_assignment`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="single_assignment__accept_message_method"></a>  single_assignment::accept_message Method  
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
  
##  <a name="single_assignment__consume_message_method"></a>  single_assignment::consume_message Method  
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
  
##  <a name="single_assignment__has_value_method"></a>  single_assignment::has_value Method  
 Checks whether this `single_assignment` messaging block has been initialized with a value yet.  
  
```
bool has_value() const;
```  
  
### Return Value  
 `true` if the block has received a value, `false` otherwise.  
  
##  <a name="single_assignment__link_target_notification_method"></a>  single_assignment::link_target_notification Method  
 A callback that notifies that a new target has been linked to this `single_assignment` messaging block.  
  
```
virtual void link_target_notification(_Inout_ ITarget<T>* _PTarget);
```  
  
### Parameters  
 `_PTarget`  
 A pointer to the newly linked target.  
  
##  <a name="single_assignment__propagate_message_method"></a>  single_assignment::propagate_message Method  
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
 A [message_status](../parallel/concurrency-namespace-enums.md) indication of what the target decided to do with the message.  
  
##  <a name="single_assignment__propagate_to_any_targets_method"></a>  single_assignment::propagate_to_any_targets Method  
 Places the `message``_PMessage` in this `single_assignment` messaging block and offers it to all of the linked targets.  
  
```
virtual void propagate_to_any_targets(_Inout_opt_ message<T>* _PMessage);
```  
  
### Parameters  
 `_PMessage`  
 A pointer to a `message` that this `single_assignment` messaging block has taken ownership of.  
  
##  <a name="single_assignment__release_message_method"></a>  single_assignment::release_message Method  
 Releases a previous message reservation.  
  
```
virtual void release_message(runtime_object_identity _MsgId);
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the `message` object being released.  
  
##  <a name="single_assignment__reserve_message_method"></a>  single_assignment::reserve_message Method  
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
  
##  <a name="single_assignment__resume_propagation_method"></a>  single_assignment::resume_propagation Method  
 Resumes propagation after a reservation has been released.  
  
```
virtual void resume_propagation();
```  
  
##  <a name="single_assignment__send_message_method"></a>  single_assignment::send_message Method  
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
 A [message_status](../parallel/concurrency-namespace-enums.md) indication of what the target decided to do with the message.  
  
##  <a name="single_assignment__single_assignment_constructor"></a>  single_assignment::single_assignment Constructor  
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
  
##  <a name="single_assignment___dtorsingle_assignment_destructor"></a>  single_assignment::~single_assignment Destructor  
 Destroys the `single_assignment` messaging block.  
  
```
~single_assignment();
```  
  
##  <a name="single_assignment__value_method"></a>  single_assignment::value Method  
 Gets a reference to the current payload of the message being stored in the `single_assignment` messaging block.  
  
```
T const& value();
```  
  
### Return Value  
 The payload of the stored message.  
  
### Remarks  
 This method will wait until a message arrives if no message is currently stored in the `single_assignment` messaging block.  
  
## See Also  
 [concurrency Namespace](../parallel/concurrency-namespace.md)   
 [overwrite_buffer Class](../parallel/overwrite_buffer-class.md)   
 [unbounded_buffer Class](../Topic/unbounded_buffer%20Class.md)

