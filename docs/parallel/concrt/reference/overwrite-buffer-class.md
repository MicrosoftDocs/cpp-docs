---
title: "overwrite_buffer Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::overwrite_buffer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "overwrite_buffer class"
ms.assetid: 5cc428fe-3697-419c-9fb2-78f6181c9293
caps.latest.revision: 22
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
# overwrite_buffer Class
An `overwrite_buffer` messaging block is a multi-target, multi-source, ordered `propagator_block` capable of storing a single message at a time. New messages overwrite previously held ones.  
  
## Syntax  
  
```
template<class T>
class overwrite_buffer : public propagator_block<multi_link_registry<ITarget<T>>, multi_link_registry<ISource<T>>>;
```  
  
#### Parameters  
 `T`  
 The payload type of the messages stored and propagated by the buffer.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[overwrite_buffer::overwrite_buffer Constructor](#ctor)|Overloaded. Constructs an `overwrite_buffer` messaging block.|  
|[overwrite_buffer::~overwrite_buffer Destructor](#dtor)|Destroys the `overwrite_buffer` messaging block.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[overwrite_buffer::has_value Method](#has_value)|Checks whether this `overwrite_buffer` messaging block has a value yet.|  
|[overwrite_buffer::value Method](#value)|Gets a reference to the current payload of the message being stored in the `overwrite_buffer` messaging block.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[overwrite_buffer::accept_message Method](#accept_message)|Accepts a message that was offered by this `overwrite_buffer` messaging block, returning a copy of the message to the caller.|  
|[overwrite_buffer::consume_message Method](#consume_message)|Consumes a message previously offered by the `overwrite_buffer` messaging block and reserved by the target, returning a copy of the message to the caller.|  
|[overwrite_buffer::link_target_notification Method](#link_target_notification)|A callback that notifies that a new target has been linked to this `overwrite_buffer` messaging block.|  
|[overwrite_buffer::propagate_message Method](#propagate_message)|Asynchronously passes a message from an `ISource` block to this `overwrite_buffer` messaging block. It is invoked by the `propagate` method, when called by a source block.|  
|[overwrite_buffer::propagate_to_any_targets Method](#propagate_to_any_targets)|Places the `message``_PMessage` in this `overwrite_buffer` messaging block and offers it to all of the linked targets.|  
|[overwrite_buffer::release_message Method](#release_message)|Releases a previous message reservation. (Overrides [source_block::release_message](source-block-class.md#release_message).)|  
|[overwrite_buffer::reserve_message Method](#reserve_message)|Reserves a message previously offered by this `overwrite_buffer` messaging block. (Overrides [source_block::reserve_message](source-block-class.md#reserve_message).)|  
|[overwrite_buffer::resume_propagation Method](#resume_propagation)|Resumes propagation after a reservation has been released. (Overrides [source_block::resume_propagation](source-block-class.md#resume_propagation).)|  
|[overwrite_buffer::send_message Method](#send_message)|Synchronously passes a message from an `ISource` block to this `overwrite_buffer` messaging block. It is invoked by the `send` method, when called by a source block.|  
|[overwrite_buffer::supports_anonymous_source Method](#supports_anonymous_source)|Overrides the `supports_anonymous_source` method to indicate that this block can accept messages offered to it by a source that is not linked. (Overrides [ITarget::supports_anonymous_source](itarget-class.md#supports_anonymous_source).)|  
  
## Remarks  
 An `overwrite_buffer` messaging block propagates out copies of its stored message to each of its targets.  
  
 For more information, see [Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## Inheritance Hierarchy  
 [ISource](isource-class.md)  
  
 [ITarget](itarget-class.md)  
  
 [source_block](source-block-class.md)  
  
 [propagator_block](propagator-block-class.md)  
  
 `overwrite_buffer`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="accept_message"></a>  overwrite_buffer::accept_message Method  
 Accepts a message that was offered by this `overwrite_buffer` messaging block, returning a copy of the message to the caller.  
  
```
virtual message<T>* accept_message(runtime_object_identity _MsgId);
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the offered `message` object.  
  
### Return Value  
 A pointer to the `message` object that the caller now has ownership of.  
  
### Remarks  
 The `overwrite_buffer` messaging block returns copies of the message to its targets, rather than transferring ownership of the currently held message.  
  
##  <a name="consume_message"></a>  overwrite_buffer::consume_message Method  
 Consumes a message previously offered by the `overwrite_buffer` messaging block and reserved by the target, returning a copy of the message to the caller.  
  
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
  
##  <a name="has_value"></a>  overwrite_buffer::has_value Method  
 Checks whether this `overwrite_buffer` messaging block has a value yet.  
  
```
bool has_value() const;
```  
  
### Return Value  
 `true` if the block has received a value, `false` otherwise.  
  
##  <a name="link_target_notification"></a>  overwrite_buffer::link_target_notification Method  
 A callback that notifies that a new target has been linked to this `overwrite_buffer` messaging block.  
  
```
virtual void link_target_notification(_Inout_ ITarget<T>* _PTarget);
```  
  
### Parameters  
 `_PTarget`  
 A pointer to the newly linked target.  
  
##  <a name="dtor"></a>  overwrite_buffer::~overwrite_buffer Destructor  
 Destroys the `overwrite_buffer` messaging block.  
  
```
~overwrite_buffer();
```  
  
##  <a name="ctor"></a>  overwrite_buffer::overwrite_buffer Constructor  
 Constructs an `overwrite_buffer` messaging block.  
  
```
overwrite_buffer();

overwrite_buffer(
    filter_method const& _Filter);

overwrite_buffer(
    Scheduler& _PScheduler);

overwrite_buffer(
    Scheduler& _PScheduler,
    filter_method const& _Filter);

overwrite_buffer(
    ScheduleGroup& _PScheduleGroup);

overwrite_buffer(
    ScheduleGroup& _PScheduleGroup,
    filter_method const& _Filter);
```  
  
### Parameters  
 `_Filter`  
 A filter function which determines whether offered messages should be accepted.  
  
 `_PScheduler`  
 The `Scheduler` object within which the propagation task for the `overwrite_buffer` messaging block is scheduled.  
  
 `_PScheduleGroup`  
 The `ScheduleGroup` object within which the propagation task for the `overwrite_buffer` messaging block is scheduled. The `Scheduler` object used is implied by the schedule group.  
  
### Remarks  
 The runtime uses the default scheduler if you do not specify the `_PScheduler` or `_PScheduleGroup` parameters.  
  
 The type `filter_method` is a functor with signature `bool (T const &)` which is invoked by this `overwrite_buffer` messaging block to determine whether or not it should accept an offered message.  
  
##  <a name="propagate_message"></a>  overwrite_buffer::propagate_message Method  
 Asynchronously passes a message from an `ISource` block to this `overwrite_buffer` messaging block. It is invoked by the `propagate` method, when called by a source block.  
  
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
  
##  <a name="propagate_to_any_targets"></a>  overwrite_buffer::propagate_to_any_targets Method  
 Places the `message``_PMessage` in this `overwrite_buffer` messaging block and offers it to all of the linked targets.  
  
```
virtual void propagate_to_any_targets(_Inout_ message<T>* _PMessage);
```  
  
### Parameters  
 `_PMessage`  
 A pointer to a `message` object that this `overwrite_buffer` has taken ownership of.  
  
### Remarks  
 This method overwrites the current message in the `overwrite_buffer` with the newly accepted message `_PMessage`.  
  
##  <a name="send_message"></a>  overwrite_buffer::send_message Method  
 Synchronously passes a message from an `ISource` block to this `overwrite_buffer` messaging block. It is invoked by the `send` method, when called by a source block.  
  
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
  
##  <a name="supports_anonymous_source"></a>  overwrite_buffer::supports_anonymous_source Method  
 Overrides the `supports_anonymous_source` method to indicate that this block can accept messages offered to it by a source that is not linked.  
  
```
virtual bool supports_anonymous_source();
```  
  
### Return Value  
 `true` because the block does not postpone offered messages.  
  
##  <a name="release_message"></a>  overwrite_buffer::release_message Method  
 Releases a previous message reservation.  
  
```
virtual void release_message(runtime_object_identity _MsgId);
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the `message` object being released.  
  
##  <a name="reserve_message"></a>  overwrite_buffer::reserve_message Method  
 Reserves a message previously offered by this `overwrite_buffer` messaging block.  
  
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
  
##  <a name="resume_propagation"></a>  overwrite_buffer::resume_propagation Method  
 Resumes propagation after a reservation has been released.  
  
```
virtual void resume_propagation();
```  
  
##  <a name="value"></a>  overwrite_buffer::value Method  
 Gets a reference to the current payload of the message being stored in the `overwrite_buffer` messaging block.  
  
```
T value();
```  
  
### Return Value  
 The payload of the currently stored message.  
  
### Remarks  
 The value stored in the `overwrite_buffer` could change immediately after this method returns. This method will wait until a message arrives if no message is currently stored in the `overwrite_buffer`.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [unbounded_buffer Class](unbounded-buffer-class.md)   
 [single_assignment Class](single-assignment-class.md)
