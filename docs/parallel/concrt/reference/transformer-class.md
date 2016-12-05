---
title: "transformer Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::transformer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "transformer class"
ms.assetid: eea71925-7043-4a92-bfd4-dbc0ece5d081
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
# transformer Class
A `transformer` messaging block is a single-target, multi-source, ordered `propagator_block` which can accept messages of one type and is capable of storing an unbounded number of messages of a different type.  
  
## Syntax  
  
```
template<class _Input, class _Output>
class transformer : public propagator_block<single_link_registry<ITarget<_Output>>,
    multi_link_registry<ISource<_Input>>>;
```   
  
#### Parameters  
 `_Input`  
 The payload type of the messages accepted by the buffer.  
  
 `_Output`  
 The payload type of the messages stored and propagated out by the buffer.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[transformer::transformer Constructor](#ctor)|Overloaded. Constructs a `transformer` messaging block.|  
|[transformer::~transformer Destructor](#dtor)|Destroys the `transformer` messaging block.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[transformer::accept_message Method](#accept_message)|Accepts a message that was offered by this `transformer` messaging block, transferring ownership to the caller.|  
|[transformer::consume_message Method](#consume_message)|Consumes a message previously offered by the `transformer` and reserved by the target, transferring ownership to the caller.|  
|[transformer::link_target_notification Method](#link_target_notification)|A callback that notifies that a new target has been linked to this `transformer` messaging block.|  
|[transformer::propagate_message Method](#propagate_message)|Asynchronously passes a message from an `ISource` block to this `transformer` messaging block. It is invoked by the `propagate` method, when called by a source block.|  
|[transformer::propagate_to_any_targets Method](#propagate_to_any_targets)|Executes the transformer function on the input messages.|  
|[transformer::release_message Method](#release_message)|Releases a previous message reservation. (Overrides [source_block::release_message](source-block-class.md#release_message).)|  
|[transformer::reserve_message Method](#reserve_message)|Reserves a message previously offered by this `transformer` messaging block. (Overrides [source_block::reserve_message](source-block-class.md#reserve_message).)|  
|[transformer::resume_propagation Method](#resume_propagation)|Resumes propagation after a reservation has been released. (Overrides [source_block::resume_propagation](source-block-class.md#resume_propagation).)|  
|[transformer::send_message Method](#send_message)|Synchronously passes a message from an `ISource` block to this `transformer` messaging block. It is invoked by the `send` method, when called by a source block.|  
|[transformer::supports_anonymous_source Method](#supports_anonymous_source)|Overrides the `supports_anonymous_source` method to indicate that this block can accept messages offered to it by a source that is not linked. (Overrides [ITarget::supports_anonymous_source](itarget-class.md#supports_anonymous_source).)|  
  
## Remarks  
 For more information, see [Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## Inheritance Hierarchy  
 [ISource](isource-class.md)  
  
 [ITarget](itarget-class.md)  
  
 [source_block](source-block-class.md)  
  
 [propagator_block](propagator-block-class.md)  
  
 `transformer`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="accept_message"></a>  transformer::accept_message Method  
 Accepts a message that was offered by this `transformer` messaging block, transferring ownership to the caller.  
  
```
virtual message<_Output>* accept_message(runtime_object_identity _MsgId);
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the offered `message` object.  
  
### Return Value  
 A pointer to the `message` object that the caller now has ownership of.  
  
##  <a name="consume_message"></a>  transformer::consume_message Method  
 Consumes a message previously offered by the `transformer` and reserved by the target, transferring ownership to the caller.  
  
```
virtual message<_Output>* consume_message(runtime_object_identity _MsgId);
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the `message` object being consumed.  
  
### Return Value  
 A pointer to the `message` object that the caller now has ownership of.  
  
### Remarks  
 Similar to `accept`, but is always preceded by a call to `reserve`.  
  
##  <a name="link_target_notification"></a>  transformer::link_target_notification Method  
 A callback that notifies that a new target has been linked to this `transformer` messaging block.  
  
```
virtual void link_target_notification(_Inout_ ITarget<_Output> *);
```  
  
##  <a name="propagate_message"></a>  transformer::propagate_message Method  
 Asynchronously passes a message from an `ISource` block to this `transformer` messaging block. It is invoked by the `propagate` method, when called by a source block.  
  
```
virtual message_status propagate_message(
    _Inout_ message<_Input>* _PMessage,
    _Inout_ ISource<_Input>* _PSource);
```  
  
### Parameters  
 `_PMessage`  
 A pointer to the `message` object.  
  
 `_PSource`  
 A pointer to the source block offering the message.  
  
### Return Value  
 A [message_status](concurrency-namespace-enums.md) indication of what the target decided to do with the message.  
  
##  <a name="propagate_to_any_targets"></a>  transformer::propagate_to_any_targets Method  
 Executes the transformer function on the input messages.  
  
```
virtual void propagate_to_any_targets(_Inout_opt_ message<_Output> *);
```  
  
##  <a name="release_message"></a>  transformer::release_message Method  
 Releases a previous message reservation.  
  
```
virtual void release_message(runtime_object_identity _MsgId);
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the `message` object being released.  
  
##  <a name="reserve_message"></a>  transformer::reserve_message Method  
 Reserves a message previously offered by this `transformer` messaging block.  
  
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
  
##  <a name="resume_propagation"></a>  transformer::resume_propagation Method  
 Resumes propagation after a reservation has been released.  
  
```
virtual void resume_propagation();
```  
  
##  <a name="send_message"></a>  transformer::send_message Method  
 Synchronously passes a message from an `ISource` block to this `transformer` messaging block. It is invoked by the `send` method, when called by a source block.  
  
```
virtual message_status send_message(
    _Inout_ message<_Input>* _PMessage,
    _Inout_ ISource<_Input>* _PSource);
```  
  
### Parameters  
 `_PMessage`  
 A pointer to the `message` object.  
  
 `_PSource`  
 A pointer to the source block offering the message.  
  
### Return Value  
 A [message_status](concurrency-namespace-enums.md) indication of what the target decided to do with the message.  
  
##  <a name="supports_anonymous_source"></a>  transformer::supports_anonymous_source Method  
 Overrides the `supports_anonymous_source` method to indicate that this block can accept messages offered to it by a source that is not linked.  
  
```
virtual bool supports_anonymous_source();
```  
  
### Return Value  
 `true` because the block does not postpone offered messages.  
  
##  <a name="ctor"></a>  transformer::transformer Constructor  
 Constructs a `transformer` messaging block.  
  
```
transformer(
    _Transform_method const& _Func,
    _Inout_opt_ ITarget<_Output>* _PTarget = NULL);

transformer(
    _Transform_method const& _Func,
    _Inout_opt_ ITarget<_Output>* _PTarget,
    filter_method const& _Filter);

transformer(
    Scheduler& _PScheduler,
    _Transform_method const& _Func,
    _Inout_opt_ ITarget<_Output>* _PTarget = NULL);

transformer(
    Scheduler& _PScheduler,
    _Transform_method const& _Func,
    _Inout_opt_ ITarget<_Output>* _PTarget,
    filter_method const& _Filter);

transformer(
    ScheduleGroup& _PScheduleGroup,
    _Transform_method const& _Func,
    _Inout_opt_ ITarget<_Output>* _PTarget = NULL);

transformer(
    ScheduleGroup& _PScheduleGroup,
    _Transform_method const& _Func,
    _Inout_opt_ ITarget<_Output>* _PTarget,
    filter_method const& _Filter);
```  
  
### Parameters  
 `_Func`  
 A function that will be invoked for each accepted message.  
  
 `_PTarget`  
 A pointer to a target block to link with the transformer.  
  
 `_Filter`  
 A filter function which determines whether offered messages should be accepted.  
  
 `_PScheduler`  
 The `Scheduler` object within which the propagation task for the `transformer` messaging block is scheduled.  
  
 `_PScheduleGroup`  
 The `ScheduleGroup` object within which the propagation task for the `transformer` messaging block is scheduled. The `Scheduler` object used is implied by the schedule group.  
  
### Remarks  
 The runtime uses the default scheduler if you do not specify the `_PScheduler` or `_PScheduleGroup` parameters.  
  
 The type `_Transform_method` is a functor with signature `_Output (_Input const &)` which is invoked by this `transformer` messaging block to process a message.  
  
 The type `filter_method` is a functor with signature `bool (_Input const &)` which is invoked by this `transformer` messaging block to determine whether or not it should accept an offered message.  
  
##  <a name="dtor"></a>  transformer::~transformer Destructor  
 Destroys the `transformer` messaging block.  
  
```
~transformer();
```  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [call Class](call-class.md)
