---
description: "Learn more about: timer Class"
title: "timer Class"
ms.date: "11/04/2016"
f1_keywords: ["timer", "AGENTS/concurrency::timer", "AGENTS/concurrency::timer::timer", "AGENTS/concurrency::timer::pause", "AGENTS/concurrency::timer::start", "AGENTS/concurrency::timer::stop", "AGENTS/concurrency::timer::accept_message", "AGENTS/concurrency::timer::consume_message", "AGENTS/concurrency::timer::link_target_notification", "AGENTS/concurrency::timer::propagate_to_any_targets", "AGENTS/concurrency::timer::release_message", "AGENTS/concurrency::timer::reserve_message", "AGENTS/concurrency::timer::resume_propagation"]
helpviewer_keywords: ["timer class"]
ms.assetid: 4f4dea51-de9f-40f9-93f5-dd724c567b49
---
# timer Class

A `timer` messaging block is a single-target `source_block` capable of sending a message to its target after a specified time period has elapsed or at specific intervals.

## Syntax

```cpp
template<class T>
class timer : public Concurrency::details::_Timer, public source_block<single_link_registry<ITarget<T>>>;
```

### Parameters

*T*<br/>
The payload type of the output messages of this block.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[timer](#ctor)|Overloaded. Constructs a `timer` messaging block that will fire a given message after a specified interval.|
|[~timer Destructor](#dtor)|Destroys a `timer` messaging block.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[pause](#pause)|Stops the `timer` messaging block. If it is a repeating `timer` messaging block, it can be restarted with a subsequent `start()` call. For non-repeating timers, this has the same effect as a `stop` call.|
|[start](#start)|Starts the `timer` messaging block. The specified number of milliseconds after this is called, the specified value will be propagated downstream as a `message`.|
|[stop](#stop)|Stops the `timer` messaging block.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[accept_message](#accept_message)|Accepts a message that was offered by this `timer` messaging block, transferring ownership to the caller.|
|[consume_message](#consume_message)|Consumes a message previously offered by the `timer` and reserved by the target, transferring ownership to the caller.|
|[link_target_notification](#link_target_notification)|A callback that notifies that a new target has been linked to this `timer` messaging block.|
|[propagate_to_any_targets](#propagate_to_any_targets)|Tries to offer the message produced by the `timer` block to all of the linked targets.|
|[release_message](#release_message)|Releases a previous message reservation. (Overrides [source_block::release_message](source-block-class.md#release_message).)|
|[reserve_message](#reserve_message)|Reserves a message previously offered by this `timer` messaging block. (Overrides [source_block::reserve_message](source-block-class.md#reserve_message).)|
|[resume_propagation](#resume_propagation)|Resumes propagation after a reservation has been released. (Overrides [source_block::resume_propagation](source-block-class.md#resume_propagation).)|

## Remarks

For more information, see [Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md).

## Inheritance Hierarchy

[ISource](isource-class.md)

[source_block](source-block-class.md)

`timer`

## Requirements

**Header:** agents.h

**Namespace:** concurrency

## <a name="accept_message"></a> accept_message

Accepts a message that was offered by this `timer` messaging block, transferring ownership to the caller.

```cpp
virtual message<T>* accept_message(runtime_object_identity _MsgId);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the offered `message` object.

### Return Value

A pointer to the `message` object that the caller now has ownership of.

## <a name="consume_message"></a> consume_message

Consumes a message previously offered by the `timer` and reserved by the target, transferring ownership to the caller.

```cpp
virtual message<T>* consume_message(runtime_object_identity _MsgId);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the `message` object being consumed.

### Return Value

A pointer to the `message` object that the caller now has ownership of.

### Remarks

Similar to `accept`, but is always preceded by a call to `reserve`.

## <a name="link_target_notification"></a> link_target_notification

A callback that notifies that a new target has been linked to this `timer` messaging block.

```cpp
virtual void link_target_notification(_Inout_ ITarget<T>* _PTarget);
```

### Parameters

*_PTarget*<br/>
A pointer to the newly linked target.

## <a name="pause"></a> pause

Stops the `timer` messaging block. If it is a repeating `timer` messaging block, it can be restarted with a subsequent `start()` call. For non-repeating timers, this has the same effect as a `stop` call.

```cpp
void pause();
```

## <a name="propagate_to_any_targets"></a> propagate_to_any_targets

Tries to offer the message produced by the `timer` block to all of the linked targets.

```cpp
virtual void propagate_to_any_targets(_Inout_opt_ message<T> *);
```

## <a name="release_message"></a> release_message

Releases a previous message reservation.

```cpp
virtual void release_message(runtime_object_identity _MsgId);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the `message` object being released.

## <a name="reserve_message"></a> reserve_message

Reserves a message previously offered by this `timer` messaging block.

```cpp
virtual bool reserve_message(runtime_object_identity _MsgId);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the `message` object being reserved.

### Return Value

**`true`** if the message was successfully reserved, **`false`** otherwise.

### Remarks

After `reserve` is called, if it returns **`true`**, either `consume` or `release` must be called to either take or release ownership of the message.

## <a name="resume_propagation"></a> resume_propagation

Resumes propagation after a reservation has been released.

```cpp
virtual void resume_propagation();
```

## <a name="start"></a> start

Starts the `timer` messaging block. The specified number of milliseconds after this is called, the specified value will be propagated downstream as a `message`.

```cpp
void start();
```

## <a name="stop"></a> stop

Stops the `timer` messaging block.

```cpp
void stop();
```

## <a name="ctor"></a> timer

Constructs a `timer` messaging block that will fire a given message after a specified interval.

```cpp
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

*_Ms*<br/>
The number of milliseconds that must elapse after the call to start for the specified message to be propagated downstream.

*value*<br/>
The value which will be propagated downstream when the timer elapses.

*_PTarget*<br/>
The target to which the timer will propagate its message.

*_Repeating*<br/>
If true, indicates that the timer will fire periodically every `_Ms` milliseconds.

*_Scheduler*<br/>
The `Scheduler` object within which the propagation task for the `timer` messaging block is scheduled is scheduled.

*_ScheduleGroup*<br/>
The `ScheduleGroup` object within which the propagation task for the `timer` messaging block is scheduled. The `Scheduler` object used is implied by the schedule group.

### Remarks

The runtime uses the default scheduler if you do not specify the `_Scheduler` or `_ScheduleGroup` parameters.

## <a name="dtor"></a> ~timer

Destroys a `timer` messaging block.

```cpp
~timer();
```

## See also

[concurrency Namespace](concurrency-namespace.md)
