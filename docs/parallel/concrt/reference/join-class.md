---
description: "Learn more about: join Class"
title: "join Class"
ms.date: "11/04/2016"
f1_keywords: ["join", "AGENTS/concurrency::join", "AGENTS/concurrency::join::join", "AGENTS/concurrency::join::accept_message", "AGENTS/concurrency::join::consume_message", "AGENTS/concurrency::join::link_target_notification", "AGENTS/concurrency::join::propagate_message", "AGENTS/concurrency::join::propagate_to_any_targets", "AGENTS/concurrency::join::release_message", "AGENTS/concurrency::join::reserve_message", "AGENTS/concurrency::join::resume_propagation"]
helpviewer_keywords: ["join class"]
ms.assetid: d2217119-70a1-40b6-809f-c1c13a571c3f
---
# join Class

A `join` messaging block is a single-target, multi-source, ordered `propagator_block` which combines together messages of type `T` from each of its sources.

## Syntax

```cpp
template<class T,
    join_type _Jtype = non_greedy>
class join : public propagator_block<single_link_registry<ITarget<std::vector<T>>>,
    multi_link_registry<ISource<T>>>;
```

### Parameters

*T*<br/>
The payload type of the messages joined and propagated by the block.

*_Jtype*<br/>
The kind of `join` block this is, either `greedy` or `non_greedy`

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[join](#ctor)|Overloaded. Constructs a `join` messaging block.|
|[~join Destructor](#dtor)|Destroys the `join` block.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[accept_message](#accept_message)|Accepts a message that was offered by this `join` messaging block, transferring ownership to the caller.|
|[consume_message](#consume_message)|Consumes a message previously offered by the `join` messaging block and reserved by the target, transferring ownership to the caller.|
|[link_target_notification](#link_target_notification)|A callback that notifies that a new target has been linked to this `join` messaging block.|
|[propagate_message](#propagate_message)|Asynchronously passes a message from an `ISource` block to this `join` messaging block. It is invoked by the `propagate` method, when called by a source block.|
|[propagate_to_any_targets](#propagate_to_any_targets)|Constructs an output message containing an input message from each source when they have all propagated a message. Sends this output message out to each of its targets.|
|[release_message](#release_message)|Releases a previous message reservation. (Overrides [source_block::release_message](source-block-class.md#release_message).)|
|[reserve_message](#reserve_message)|Reserves a message previously offered by this `join` messaging block. (Overrides [source_block::reserve_message](source-block-class.md#reserve_message).)|
|[resume_propagation](#resume_propagation)|Resumes propagation after a reservation has been released. (Overrides [source_block::resume_propagation](source-block-class.md#resume_propagation).)|

## Remarks

For more information, see [Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md).

## Inheritance Hierarchy

[ISource](isource-class.md)

[ITarget](itarget-class.md)

[source_block](source-block-class.md)

[propagator_block](propagator-block-class.md)

`join`

## Requirements

**Header:** agents.h

**Namespace:** concurrency

## <a name="accept_message"></a> accept_message

Accepts a message that was offered by this `join` messaging block, transferring ownership to the caller.

```cpp
virtual message<_OutputType>* accept_message(runtime_object_identity _MsgId);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the offered `message` object.

### Return Value

A pointer to the `message` object that the caller now has ownership of.

## <a name="consume_message"></a> consume_message

Consumes a message previously offered by the `join` messaging block and reserved by the target, transferring ownership to the caller.

```cpp
virtual message<_OutputType>* consume_message(runtime_object_identity _MsgId);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the `message` object being consumed.

### Return Value

A pointer to the `message` object that the caller now has ownership of.

### Remarks

Similar to `accept`, but is always preceded by a call to `reserve`.

## <a name="ctor"></a> join

Constructs a `join` messaging block.

```cpp
join(
    size_t _NumInputs);

join(
    size_t _NumInputs,
    filter_method const& _Filter);

join(
    Scheduler& _PScheduler,
    size_t _NumInputs);

join(
    Scheduler& _PScheduler,
    size_t _NumInputs,
    filter_method const& _Filter);

join(
    ScheduleGroup& _PScheduleGroup,
    size_t _NumInputs);

join(
    ScheduleGroup& _PScheduleGroup,
    size_t _NumInputs,
    filter_method const& _Filter);
```

### Parameters

*_NumInputs*<br/>
The number of inputs this `join` block will be allowed.

*_Filter*<br/>
A filter function which determines whether offered messages should be accepted.

*_PScheduler*<br/>
The `Scheduler` object within which the propagation task for the `join` messaging block is scheduled.

*_PScheduleGroup*<br/>
The `ScheduleGroup` object within which the propagation task for the `join` messaging block is scheduled. The `Scheduler` object used is implied by the schedule group.

### Remarks

The runtime uses the default scheduler if you do not specify the `_PScheduler` or `_PScheduleGroup` parameters.

The type `filter_method` is a functor with signature `bool (T const &)` which is invoked by this `join` messaging block to determine whether or not it should accept an offered message.

## <a name="dtor"></a> ~join

Destroys the `join` block.

```cpp
~join();
```

## <a name="link_target_notification"></a> link_target_notification

A callback that notifies that a new target has been linked to this `join` messaging block.

```cpp
virtual void link_target_notification(_Inout_ ITarget<std::vector<T>> *);
```

## <a name="propagate_message"></a> propagate_message

Asynchronously passes a message from an `ISource` block to this `join` messaging block. It is invoked by the `propagate` method, when called by a source block.

```cpp
message_status propagate_message(
    _Inout_ message<T>* _PMessage,
    _Inout_ ISource<T>* _PSource);
```

### Parameters

*_PMessage*<br/>
A pointer to the `message` object.

*_PSource*<br/>
A pointer to the source block offering the message.

### Return Value

A [message_status](concurrency-namespace-enums.md) indication of what the target decided to do with the message.

## <a name="propagate_to_any_targets"></a> propagate_to_any_targets

Constructs an output message containing an input message from each source when they have all propagated a message. Sends this output message out to each of its targets.

```cpp
void propagate_to_any_targets(_Inout_opt_ message<_OutputType> *);
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

Reserves a message previously offered by this `join` messaging block.

```cpp
virtual bool reserve_message(runtime_object_identity _MsgId);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the offered `message` object.

### Return Value

**`true`** if the message was successfully reserved, **`false`** otherwise.

### Remarks

After `reserve` is called, if it returns **`true`**, either `consume` or `release` must be called to either take or release ownership of the message.

## <a name="resume_propagation"></a> resume_propagation

Resumes propagation after a reservation has been released.

```cpp
virtual void resume_propagation();
```

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[choice Class](choice-class.md)<br/>
[multitype_join Class](multitype-join-class.md)
