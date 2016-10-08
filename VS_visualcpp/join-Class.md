---
title: "join Class"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: d2217119-70a1-40b6-809f-c1c13a571c3f
caps.latest.revision: 18
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# join Class
A `join` messaging block is a single-target, multi-source, ordered `propagator_block` which combines together messages of type `_Type` from each of its sources.  
  
## Syntax  
  
```  
template<  
    class _Type,  
    join_type _Jtype = non_greedy  
>  
class join : public propagator_block<single_link_registry<ITarget<std::vector< _Type>>>, multi_link_registry<ISource< _Type>>>;  
```  
  
#### Parameters  
 `_Type`  
 The payload type of the messages joined and propagated by the block.  
  
 `_Jtype`  
 The kind of `join` block this is, either `greedy` or `non_greedy`  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[join::join Constructor](#join__join_constructor)|Overloaded. Constructs a `join` messaging block.|  
|[join::~join Destructor](#join___dtorjoin_destructor)|Destroys the `join` block.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[join::accept_message Method](#join__accept_message_method)|Accepts a message that was offered by this `join` messaging block, transferring ownership to the caller.|  
|[join::consume_message Method](#join__consume_message_method)|Consumes a message previously offered by the `join` messaging block and reserved by the target, transferring ownership to the caller.|  
|[join::link_target_notification Method](#join__link_target_notification_method)|A callback that notifies that a new target has been linked to this `join` messaging block.|  
|[join::propagate_message Method](#join__propagate_message_method)|Asynchronously passes a message from an `ISource` block to this `join` messaging block. It is invoked by the `propagate` method, when called by a source block.|  
|[join::propagate_to_any_targets Method](#join__propagate_to_any_targets_method)|Constructs an output message containing an input message from each source when they have all propagated a message. Sends this output message out to each of its targets.|  
|[join::release_message Method](#join__release_message_method)|Releases a previous message reservation. (Overrides [source_block::release_message](../VS_visualcpp/source_block-Class.md#source_block__release_message_method).)|  
|[join::reserve_message Method](#join__reserve_message_method)|Reserves a message previously offered by this `join` messaging block. (Overrides [source_block::reserve_message](../VS_visualcpp/source_block-Class.md#source_block__reserve_message_method).)|  
|[join::resume_propagation Method](#join__resume_propagation_method)|Resumes propagation after a reservation has been released. (Overrides [source_block::resume_propagation](../VS_visualcpp/source_block-Class.md#source_block__resume_propagation_method).)|  
  
## Remarks  
 For more information, see [Asynchronous Message Blocks](../VS_visualcpp/Asynchronous-Message-Blocks.md).  
  
## Inheritance Hierarchy  
 [ISource](../VS_visualcpp/ISource-Class.md)  
  
 [ITarget](../VS_visualcpp/ITarget-Class.md)  
  
 [source_block](../VS_visualcpp/source_block-Class.md)  
  
 [propagator_block](../VS_visualcpp/propagator_block-Class.md)  
  
 `join`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="join__accept_message_method"></a>  join::accept_message Method  
 Accepts a message that was offered by this `join` messaging block, transferring ownership to the caller.  
  
```  
virtual message<_OutputType> * accept_message(    runtime_object_identity _MsgId );  
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the offered `message` object.  
  
### Return Value  
 A pointer to the `message` object that the caller now has ownership of.  
  
##  <a name="join__consume_message_method"></a>  join::consume_message Method  
 Consumes a message previously offered by the `join` messaging block and reserved by the target, transferring ownership to the caller.  
  
```  
virtual message<_OutputType> * consume_message(    runtime_object_identity _MsgId );  
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the `message` object being consumed.  
  
### Return Value  
 A pointer to the `message` object that the caller now has ownership of.  
  
### Remarks  
 Similar to `accept`, but is always preceded by a call to `reserve`.  
  
##  <a name="join__join_constructor"></a>  join::join Constructor  
 Constructs a `join` messaging block.  
  
```  
join(  
    size_t _NumInputs );  
  
join(  
    size_t _NumInputs,  
    filter_method const& _Filter );  
  
join(  
    Scheduler& _PScheduler,  
    size_t _NumInputs );  
  
join(  
    Scheduler& _PScheduler,  
    size_t _NumInputs,  
    filter_method const& _Filter );  
  
join(  
    ScheduleGroup& _PScheduleGroup,  
    size_t _NumInputs );  
  
join(  
    ScheduleGroup& _PScheduleGroup,  
    size_t _NumInputs,  
    filter_method const& _Filter );  
```  
  
### Parameters  
 `_NumInputs`  
 The number of inputs this `join` block will be allowed.  
  
 `_Filter`  
 A filter function which determines whether offered messages should be accepted.  
  
 `_PScheduler`  
 The `Scheduler` object within which the propagation task for the `join` messaging block is scheduled.  
  
 `_PScheduleGroup`  
 The `ScheduleGroup` object within which the propagation task for the `join` messaging block is scheduled. The `Scheduler` object used is implied by the schedule group.  
  
### Remarks  
 The runtime uses the default scheduler if you do not specify the `_PScheduler` or `_PScheduleGroup` parameters.  
  
 The type `filter_method` is a functor with signature `bool (_Type const &)` which is invoked by this `join` messaging block to determine whether or not it should accept an offered message.  
  
##  <a name="join___dtorjoin_destructor"></a>  join::~join Destructor  
 Destroys the `join` block.  
  
```  
~join();  
```  
  
##  <a name="join__link_target_notification_method"></a>  join::link_target_notification Method  
 A callback that notifies that a new target has been linked to this `join` messaging block.  
  
```  
virtual void link_target_notification(    _Inout_ ITarget<std::vector<_Type>> *);  
```  
  
##  <a name="join__propagate_message_method"></a>  join::propagate_message Method  
 Asynchronously passes a message from an `ISource` block to this `join` messaging block. It is invoked by the `propagate` method, when called by a source block.  
  
```  
message_status propagate_message(  
    _Inout_ message<_Type> * _PMessage,  
    _Inout_ ISource<_Type> * _PSource );  
```  
  
### Parameters  
 `_PMessage`  
 A pointer to the `message` object.  
  
 `_PSource`  
 A pointer to the source block offering the message.  
  
### Return Value  
 A [message_status](concurrency_namespace_Enumerations) indication of what the target decided to do with the message.  
  
##  <a name="join__propagate_to_any_targets_method"></a>  join::propagate_to_any_targets Method  
 Constructs an output message containing an input message from each source when they have all propagated a message. Sends this output message out to each of its targets.  
  
```  
void propagate_to_any_targets(    _Inout_opt_ message<_OutputType> *);  
```  
  
##  <a name="join__release_message_method"></a>  join::release_message Method  
 Releases a previous message reservation.  
  
```  
virtual void release_message(    runtime_object_identity _MsgId );  
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the `message` object being released.  
  
##  <a name="join__reserve_message_method"></a>  join::reserve_message Method  
 Reserves a message previously offered by this `join` messaging block.  
  
```  
virtual bool reserve_message(    runtime_object_identity _MsgId );  
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the offered `message` object.  
  
### Return Value  
 `true` if the message was successfully reserved, `false` otherwise.  
  
### Remarks  
 After `reserve` is called, if it returns `true`, either `consume` or `release` must be called to either take or release ownership of the message.  
  
##  <a name="join__resume_propagation_method"></a>  join::resume_propagation Method  
 Resumes propagation after a reservation has been released.  
  
```  
virtual void resume_propagation();  
```  
  
## See Also  
 [concurrency Namespace](../VS_visualcpp/concurrency-Namespace.md)   
 [choice Class](../VS_visualcpp/choice-Class.md)   
 [multitype_join Class](../VS_visualcpp/multitype_join-Class.md)   
 [join_type Enumeration](concurrency_namespace_Enumerations)