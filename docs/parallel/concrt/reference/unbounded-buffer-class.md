---
title: "unbounded_buffer Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "unbounded_buffer"
dev_langs: 
  - "C++"
ms.assetid: 6b1a939a-1819-4385-b1d8-708f83d4ec47
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---


An `unbounded_buffer` messaging block is a multi-target, multi-source, ordered `propagator_block` capable of storing an unbounded number of messages.  
  
## Syntax  
  
```  
template<  
   class             _Type  
>  
class unbounded_buffer : public propagator_block<multi_link_registry<ITarget<            _Type>>, multi_link_registry<ISource<            _Type>>>;  
```  
  
#### Parameters  
 `_Type`  
 The payload type of the messages stored and propagated by the buffer.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[unbounded_buffer::unbounded_buffer Constructor](#ctor)|Overloaded. Constructs an `unbounded_buffer` messaging block.|  
|[unbounded_buffer::~unbounded_buffer Destructor](#dtor)|Destroys the `unbounded_buffer` messaging block.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[unbounded_buffer::dequeue Method](#dequeue)|Removes an item from the `unbounded_buffer` messaging block.|  
|[unbounded_buffer::enqueue Method](#enqueue)|Adds an item to the `unbounded_buffer` messaging block.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[unbounded_buffer::accept_message Method](#accept_message)|Accepts a message that was offered by this `unbounded_buffer` messaging block, transferring ownership to the caller.|  
|[unbounded_buffer::consume_message Method](#consume_message)|Consumes a message previously offered by the `unbounded_buffer` messaging block and reserved by the target, transferring ownership to the caller.|  
|[unbounded_buffer::link_target_notification Method](#link_target_notification)|A callback that notifies that a new target has been linked to this `unbounded_buffer` messaging block.|  
|[unbounded_buffer::process_input_messages Method](#process_input_messages)|Places the `message``_PMessage` in this `unbounded_buffer` messaging block and tries to offer it to all of the linked targets.|  
|[unbounded_buffer::propagate_message Method](#propagate_message)|Asynchronously passes a message from an `ISource` block to this `unbounded_buffer` messaging block. It is invoked by the `propagate` method, when called by a source block.|  
|[unbounded_buffer::propagate_output_messages Method](#propagate_output_messages)|Places the `message``_PMessage` in this `unbounded_buffer` messaging block and tries to offer it to all of the linked targets. (Overrides [source_block::propagate_output_messages](source-block-class.md#propagate_output_messages).)|  
|[unbounded_buffer::release_message Method](#release_message)|Releases a previous message reservation. (Overrides [source_block::release_message](source-block-class.md#release_message).)|  
|[unbounded_buffer::reserve_message Method](#reserve_message)|Reserves a message previously offered by this `unbounded_buffer` messaging block. (Overrides [source_block::reserve_message](source-block-class.md#reserve_message).)|  
|[unbounded_buffer::resume_propagation Method](#resume_propagation)|Resumes propagation after a reservation has been released. (Overrides [source_block::resume_propagation](source-block-class.md#resume_propagation).)|  
|[unbounded_buffer::send_message Method](#send_message)|Synchronously passes a message from an `ISource` block to this `unbounded_buffer` messaging block. It is invoked by the `send` method, when called by a source block.|  
|[unbounded_buffer::supports_anonymous_source Method](#supports_anonymous_source)|Overrides the `supports_anonymous_source` method to indicate that this block can accept messages offered to it by a source that is not linked. (Overrides [ITarget::supports_anonymous_source](itarget-class.md#supports_anonymous_source).)|  

 For more information, see [Asynchronous Message Blocks](../asynchronous-message-blocks.md).  
  
## Inheritance Hierarchy  
 [ISource](isource-class.md)  
  
 [ITarget](itarget-class.md)  
  
 [source_block](source-block-class.md)  
  
 [propagator_block](propagator-block-class.md)  
  
 `unbounded_buffer`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="accept_message"></a>  unbounded_buffer::accept_message Method  
 Accepts a message that was offered by this `unbounded_buffer` messaging block, transferring ownership to the caller.  
  
```  
virtual message<_Type> * accept_message(  
   runtime_object_identity                 _MsgId  
);  
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the offered `message` object.  
  
### Return Value  
 A pointer to the `message` object that the caller now has ownership of.  
  
##  <a name="consume_message"></a>  unbounded_buffer::consume_message Method  
 Consumes a message previously offered by the `unbounded_buffer` messaging block and reserved by the target, transferring ownership to the caller.  
  
```  
virtual message<_Type> * consume_message(  
   runtime_object_identity                 _MsgId  
);  
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the `message` object being consumed.  
  
### Return Value  
 A pointer to the `message` object that the caller now has ownership of.  
  
### Remarks  
 Similar to `accept`, but is always preceded by a call to `reserve`.  
  
##  <a name="dequeue"></a>  unbounded_buffer::dequeue Method  
 Removes an item from the `unbounded_buffer` messaging block.  
  
```  
_Type dequeue();  
```  
  
### Return Value  
 The payload of the message removed from the `unbounded_buffer`.  
  
##  <a name="enqueue"></a>  unbounded_buffer::enqueue Method  
 Adds an item to the `unbounded_buffer` messaging block.  
  
```  
bool enqueue(  
   _Type const&                 _Item  
);  
```  
  
### Parameters  
 `_Item`  
 The item to add.  
  
### Return Value  
 `true` if the item was accepted, `false` otherwise.  
  
##  <a name="link_target_notification"></a>  unbounded_buffer::link_target_notification Method  
 A callback that notifies that a new target has been linked to this `unbounded_buffer` messaging block.  
  
```  
virtual void link_target_notification(  
   _Inout_ ITarget<_Type> *                 _PTarget  
);  
```  
  
### Parameters  
 `_PTarget`  
 A pointer to the newly linked target.  
  
##  <a name="propagate_message"></a>  unbounded_buffer::propagate_message Method  
 Asynchronously passes a message from an `ISource` block to this `unbounded_buffer` messaging block. It is invoked by the `propagate` method, when called by a source block.  
  
```  
virtual message_status propagate_message(  
   _Inout_ message<_Type> *                 _PMessage,  
   _Inout_ ISource<_Type> *                 _PSource  
);  
```  
  
### Parameters  
 `_PMessage`  
 A pointer to the `message` object.  
  
 `_PSource`  
 A pointer to the source block offering the message.  
  
### Return Value  
 A [message_status](concurrency-namespace-enums.md#message_status) indication of what the target decided to do with the message.  
  
##  <a name="propagate_output_messages"></a>  unbounded_buffer::propagate_output_messages Method  
 Places the `message``_PMessage` in this `unbounded_buffer` messaging block and tries to offer it to all of the linked targets.  
  
```  
virtual void propagate_output_messages();  
```  
  
### Remarks  
 If another message is already ahead of this one in the `unbounded_buffer`, propagation to linked targets will not occur until any earlier messages have been accepted or consumed. The first linked target to successfully `accept` or `consume` the message takes ownership, and no other target can then get the message.  
  
##  <a name="process_input_messages"></a>  unbounded_buffer::process_input_messages Method  
 Places the `message``_PMessage` in this `unbounded_buffer` messaging block and tries to offer it to all of the linked targets.  
  
```  
virtual void process_input_messages(  
   _Inout_ message<_Type> *                 _PMessage  
);  
```  
  
### Parameters  
 `_PMessage`  
  
##  <a name="release_message"></a>  unbounded_buffer::release_message Method  
 Releases a previous message reservation.  
  
```  
virtual void release_message(  
   runtime_object_identity                 _MsgId  
);  
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the `message` object being released.  
  
##  <a name="reserve_message"></a>  unbounded_buffer::reserve_message Method  
 Reserves a message previously offered by this `unbounded_buffer` messaging block.  
  
```  
virtual bool reserve_message(  
   runtime_object_identity                 _MsgId  
);  
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the `message` object being reserved.  
  
### Return Value  
 `true` if the message was successfully reserved, `false` otherwise.  
  
### Remarks  
 After `reserve` is called, if it returns `true`, either `consume` or `release` must be called to either take or release ownership of the message.  
  
##  <a name="resume_propagation"></a>  unbounded_buffer::resume_propagation Method  
 Resumes propagation after a reservation has been released.  
  
```  
virtual void resume_propagation();  
```  
  
##  <a name="send_message"></a>  unbounded_buffer::send_message Method  
 Synchronously passes a message from an `ISource` block to this `unbounded_buffer` messaging block. It is invoked by the `send` method, when called by a source block.  
  
```  
virtual message_status send_message(  
   _Inout_ message<_Type> *                 _PMessage,  
   _Inout_ ISource<_Type> *                 _PSource  
);  
```  
  
### Parameters  
 `_PMessage`  
 A pointer to the `message` object.  
  
 `_PSource`  
 A pointer to the source block offering the message.  
  
### Return Value  
 A [message_status](concurrency-namespace-enums.md#message_status) indication of what the target decided to do with the message.  
  
##  <a name="supports_anonymous_source"></a>  unbounded_buffer::supports_anonymous_source Method  
 Overrides the `supports_anonymous_source` method to indicate that this block can accept messages offered to it by a source that is not linked.  
  
```  
virtual bool supports_anonymous_source();  
```  
  
### Return Value  
 `true` because the block does not postpone offered messages.  
  
##  <a name="ctor"></a>  unbounded_buffer::unbounded_buffer Constructor  
 Constructs an `unbounded_buffer` messaging block.  
  
```  
unbounded_buffer();  
  
unbounded_buffer(  
   filter_method const&                 _Filter  
);  
  
unbounded_buffer(  
   Scheduler&                 _PScheduler  
);  
  
unbounded_buffer(  
   Scheduler&                 _PScheduler,  
   filter_method const&                 _Filter  
);  
  
unbounded_buffer(  
   ScheduleGroup&                 _PScheduleGroup  
);  
  
unbounded_buffer(  
   ScheduleGroup&                 _PScheduleGroup,  
   filter_method const&                 _Filter  
);  
```  
  
### Parameters  
 `_Filter`  
 A filter function which determines whether offered messages should be accepted.  
  
 `_PScheduler`  
 The `Scheduler` object within which the propagation task for the `unbounded_buffer` messaging block is scheduled.  
  
 `_PScheduleGroup`  
 The `ScheduleGroup` object within which the propagation task for the `unbounded_buffer` messaging block is scheduled. The `Scheduler` object used is implied by the schedule group.  
  
### Remarks  
 The runtime uses the default scheduler if you do not specify the `_PScheduler` or `_PScheduleGroup` parameters.  
  
 The type `filter_method` is a functor with signature `bool (_Type const &)` which is invoked by this `unbounded_buffer` messaging block to determine whether or not it should accept an offered message.  
  
##  <a name="dtor"></a>  unbounded_buffer::~unbounded_buffer Destructor  
 Destroys the `unbounded_buffer` messaging block.  
  
```  
~unbounded_buffer();  
```  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [overwrite_buffer Class](overwrite-buffer-class.md)   
 [single_assignment Class](single-assignment-class.md)


