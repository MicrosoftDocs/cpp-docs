---
title: "timer Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/01/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "agents/concurrency::timer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "timer class"
ms.assetid: 4f4dea51-de9f-40f9-93f5-dd724c567b49
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
# timer Class
A `timer` messaging block is a single-target `source_block` capable of sending a message to its target after a specified time period has elapsed or at specific intervals.  
  
## Syntax  
  
```
template<class T>
class timer : public Concurrency::details::_Timer, public source_block<single_link_registry<ITarget<T>>>;
```  
  
#### Parameters  
 `T`  
 The payload type of the output messages of this block.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[timer::timer Constructor](#timer__timer_constructor)|Overloaded. Constructs a `timer` messaging block that will fire a given message after a specified interval.|  
|[timer::~timer Destructor](#timer___dtortimer_destructor)|Destroys a `timer` messaging block.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[timer::pause Method](#timer__pause_method)|Stops the `timer` messaging block. If it is a repeating `timer` messaging block, it can be restarted with a subsequent `start()` call. For non-repeating timers, this has the same effect as a `stop` call.|  
|[timer::start Method](#timer__start_method)|Starts the `timer` messaging block. The specified number of milliseconds after this is called, the specified value will be propagated downstream as a `message`.|  
|[timer::stop Method](#timer__stop_method)|Stops the `timer` messaging block.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[timer::accept_message Method](#timer__accept_message_method)|Accepts a message that was offered by this `timer` messaging block, transferring ownership to the caller.|  
|[timer::consume_message Method](#timer__consume_message_method)|Consumes a message previously offered by the `timer` and reserved by the target, transferring ownership to the caller.|  
|[timer::link_target_notification Method](#timer__link_target_notification_method)|A callback that notifies that a new target has been linked to this `timer` messaging block.|  
|[timer::propagate_to_any_targets Method](#timer__propagate_to_any_targets_method)|Tries to offer the message produced by the `timer` block to all of the linked targets.|  
|[timer::release_message Method](#timer__release_message_method)|Releases a previous message reservation. (Overrides [source_block::release_message](../../../parallel/concrt/reference/source-block-class.md#source_block__release_message_method).)|  
|[timer::reserve_message Method](#timer__reserve_message_method)|Reserves a message previously offered by this `timer` messaging block. (Overrides [source_block::reserve_message](../../../parallel/concrt/reference/source-block-class.md#source_block__reserve_message_method).)|  
|[timer::resume_propagation Method](#timer__resume_propagation_method)|Resumes propagation after a reservation has been released. (Overrides [source_block::resume_propagation](../../../parallel/concrt/reference/source-block-class.md#source_block__resume_propagation_method).)|  
  
## Remarks  
 For more information, see [Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md).  
  
## Inheritance Hierarchy  
 [ISource](../../../parallel/concrt/reference/isource-class.md)  
  
 [source_block](../../../parallel/concrt/reference/source-block-class.md)  
  
 `timer`  
  
## Requirements  
 **Header:** agents.h  
  
 **Namespace:** concurrency  
  
##  <a name="timer__accept_message_method"></a>  timer::accept_message Method  
 Accepts a message that was offered by this `timer` messaging block, transferring ownership to the caller.  
  
```
virtual message<T>* accept_message(runtime_object_identity _MsgId);
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the offered `message` object.  
  
### Return Value  
 A pointer to the `message` object that the caller now has ownership of.  
  
##  <a name="timer__consume_message_method"></a>  timer::consume_message Method  
 Consumes a message previously offered by the `timer` and reserved by the target, transferring ownership to the caller.  
  
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
  
##  <a name="timer__link_target_notification_method"></a>  timer::link_target_notification Method  
 A callback that notifies that a new target has been linked to this `timer` messaging block.  
  
```
virtual void link_target_notification(_Inout_ ITarget<T>* _PTarget);
```  
  
### Parameters  
 `_PTarget`  
 A pointer to the newly linked target.  
  
##  <a name="timer__pause_method"></a>  timer::pause Method  
 Stops the `timer` messaging block. If it is a repeating `timer` messaging block, it can be restarted with a subsequent `start()` call. For non-repeating timers, this has the same effect as a `stop` call.  
  
```
void pause();
```  
  
##  <a name="timer__propagate_to_any_targets_method"></a>  timer::propagate_to_any_targets Method  
 Tries to offer the message produced by the `timer` block to all of the linked targets.  
  
```
virtual void propagate_to_any_targets(_Inout_opt_ message<T> *);
```  
  
##  <a name="timer__release_message_method"></a>  timer::release_message Method  
 Releases a previous message reservation.  
  
```
virtual void release_message(runtime_object_identity _MsgId);
```  
  
### Parameters  
 `_MsgId`  
 The `runtime_object_identity` of the `message` object being released.  
  
##  <a name="timer__reserve_message_method"></a>  timer::reserve_message Method  
 Reserves a message previously offered by this `timer` messaging block.  
  
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
  
##  <a name="timer__resume_propagation_method"></a>  timer::resume_propagation Method  
 Resumes propagation after a reservation has been released.  
  
```
virtual void resume_propagation();
```  
  
##  <a name="timer__start_method"></a>  timer::start Method  
 Starts the `timer` messaging block. The specified number of milliseconds after this is called, the specified value will be propagated downstream as a `message`.  
  
```
void start();
```  
  
##  <a name="timer__stop_method"></a>  timer::stop Method  
 Stops the `timer` messaging block.  
  
```
void stop();
```  
  
##  <a name="timer__timer_constructor"></a>  timer::timer Constructor  
 Constructs a `timer` messaging block that will fire a given message after a specified interval.  
  
```
timer(
    unsigned int _Ms,
    T const& value,
    ITarget<T>* _PTarget = NULL,
    bool _Repeating = false);

timer(
    Scheduler& _Scheduler,
    unsigned int _Ms,
    T const& value,
    _Inout_opt_ ITarget<T>* _PTarget = NULL,
    bool _Repeating = false);

timer(
    ScheduleGroup& _ScheduleGroup,
    unsigned int _Ms,
    T const& value,
    _Inout_opt_ ITarget<T>* _PTarget = NULL,
    bool _Repeating = false);
```  
  
### Parameters  
 `_Ms`  
 The number of milliseconds that must elapse after the call to start for the specified message to be propagated downstream.  
  
 `value`  
 The value which will be propagated downstream when the timer elapses.  
  
 `_PTarget`  
 The target to which the timer will propagate its message.  
  
 `_Repeating`  
 If true, indicates that the timer will fire periodically every `_Ms` milliseconds.  
  
 `_Scheduler`  
 The `Scheduler` object within which the propagation task for the `timer` messaging block is scheduled is scheduled.  
  
 `_ScheduleGroup`  
 The `ScheduleGroup` object within which the propagation task for the `timer` messaging block is scheduled. The `Scheduler` object used is implied by the schedule group.  
  
### Remarks  
 The runtime uses the default scheduler if you do not specify the `_Scheduler` or `_ScheduleGroup` parameters.  
  
##  <a name="timer___dtortimer_destructor"></a>  timer::~timer Destructor  
 Destroys a `timer` messaging block.  
  
```
~timer();
```  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)
