---
description: "Learn more about: choice Class"
title: "choice Class"
ms.date: "11/04/2016"
f1_keywords: ["choice", "AGENTS/concurrency::choice", "AGENTS/concurrency::choice::choice", "AGENTS/concurrency::choice::accept", "AGENTS/concurrency::choice::acquire_ref", "AGENTS/concurrency::choice::consume", "AGENTS/concurrency::choice::has_value", "AGENTS/concurrency::choice::index", "AGENTS/concurrency::choice::link_target", "AGENTS/concurrency::choice::release", "AGENTS/concurrency::choice::release_ref", "AGENTS/concurrency::choice::reserve", "AGENTS/concurrency::choice::unlink_target", "AGENTS/concurrency::choice::unlink_targets", "AGENTS/concurrency::choice::value"]
helpviewer_keywords: ["choice class"]
ms.assetid: 4157a539-d5c2-4161-b1ab-536ce2888397
---
# choice Class

A `choice` messaging block is a multi-source, single-target block that represents a control-flow interaction with a set of sources. The choice block will wait for any one of multiple sources to produce a message and will propagate the index of the source that produced the message.

## Syntax

```cpp
template<
    class T
>
class choice: public ISource<size_t>;
```

### Parameters

*T*<br/>
A `tuple`-based type representing the payloads of the input sources.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`type`|A type alias for `T`.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[choice](#ctor)|Overloaded. Constructs a `choice` messaging block.|
|[~choice Destructor](#dtor)|Destroys the `choice` messaging block.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[accept](#accept)|Accepts a message that was offered by this `choice` block, transferring ownership to the caller.|
|[acquire_ref](#acquire_ref)|Acquires a reference count on this `choice` messaging block, to prevent deletion.|
|[consume](#consume)|Consumes a message previously offered by this `choice` messaging block and successfully reserved by the target, transferring ownership to the caller.|
|[has_value](#has_value)|Checks whether this `choice` messaging block has been initialized with a value yet.|
|[index](#index)|Returns an index into the `tuple` representing the element selected by the `choice` messaging block.|
|[link_target](#link_target)|Links a target block to this `choice` messaging block.|
|[release](#release)|Releases a previous successful message reservation.|
|[release_ref](#release_ref)|Releases a reference count on this `choice` messaging block.|
|[reserve](#reserve)|Reserves a message previously offered by this `choice` messaging block.|
|[unlink_target](#unlink_target)|Unlinks a target block from this `choice` messaging block.|
|[unlink_targets](#unlink_targets)|Unlinks all targets from this `choice` messaging block. (Overrides [ISource::unlink_targets](isource-class.md#unlink_targets).)|
|[value](#value)|Gets the message whose index was selected by the `choice` messaging block.|

## Remarks

The choice block ensures that only one of the incoming messages is consumed.

For more information, see [Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md).

## Inheritance Hierarchy

[ISource](isource-class.md)

`choice`

## Requirements

**Header:** agents.h

**Namespace:** concurrency

## <a name="accept"></a> accept

Accepts a message that was offered by this `choice` block, transferring ownership to the caller.

```cpp
virtual message<size_t>* accept(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<size_t>* _PTarget);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the offered `message` object.

*_PTarget*<br/>
A pointer to the target block that is calling the `accept` method.

### Return Value

A pointer to the message that the caller now has ownership of.

## <a name="acquire_ref"></a> acquire_ref

Acquires a reference count on this `choice` messaging block, to prevent deletion.

```cpp
virtual void acquire_ref(_Inout_ ITarget<size_t>* _PTarget);
```

### Parameters

*_PTarget*<br/>
A pointer to the target block that is calling this method.

### Remarks

This method is called by an `ITarget` object that is being linked to this source during the `link_target` method.

## <a name="ctor"></a> choice

Constructs a `choice` messaging block.

```cpp
explicit choice(
    T _Tuple);

choice(
    Scheduler& _PScheduler,
    T _Tuple);

choice(
    ScheduleGroup& _PScheduleGroup,
    T _Tuple);

choice(
    choice&& _Choice);
```

### Parameters

*_Tuple*<br/>
A `tuple` of sources for the choice.

*_PScheduler*<br/>
The `Scheduler` object within which the propagation task for the `choice` messaging block is scheduled.

*_PScheduleGroup*<br/>
The `ScheduleGroup` object within which the propagation task for the `choice` messaging block is scheduled. The `Scheduler` object used is implied by the schedule group.

*_Choice*<br/>
A `choice` messaging block to copy from. Note that the original object is orphaned, making this a move constructor.

### Remarks

The runtime uses the default scheduler if you do not specify the `_PScheduler` or `_PScheduleGroup` parameters.

Move construction is not performed under a lock, which means that it is up to the user to make sure that there are no light-weight tasks in flight at the time of moving. Otherwise, numerous races can occur, leading to exceptions or inconsistent state.

## <a name="dtor"></a> ~choice

Destroys the `choice` messaging block.

```cpp
~choice();
```

## <a name="consume"></a> consume

Consumes a message previously offered by this `choice` messaging block and successfully reserved by the target, transferring ownership to the caller.

```cpp
virtual message<size_t>* consume(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<size_t>* _PTarget);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the reserved `message` object.

*_PTarget*<br/>
A pointer to the target block that is calling the `consume` method.

### Return Value

A pointer to the `message` object that the caller now has ownership of.

### Remarks

The `consume` method is similar to `accept`, but must always be preceded by a call to `reserve` that returned **`true`**.

## <a name="has_value"></a> has_value

Checks whether this `choice` messaging block has been initialized with a value yet.

```cpp
bool has_value() const;
```

### Return Value

**`true`** if the block has received a value, **`false`** otherwise.

## <a name="index"></a> index

Returns an index into the `tuple` representing the element selected by the `choice` messaging block.

```cpp
size_t index();
```

### Return Value

The message index.

### Remarks

The message payload can be extracted using the `get` method.

## <a name="link_target"></a> link_target

Links a target block to this `choice` messaging block.

```cpp
virtual void link_target(_Inout_ ITarget<size_t>* _PTarget);
```

### Parameters

*_PTarget*<br/>
A pointer to an `ITarget` block to link to this `choice` messaging block.

## <a name="release"></a> release

Releases a previous successful message reservation.

```cpp
virtual void release(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<size_t>* _PTarget);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the `message` object being released.

*_PTarget*<br/>
A pointer to the target block that is calling the `release` method.

## <a name="release_ref"></a> release_ref

Releases a reference count on this `choice` messaging block.

```cpp
virtual void release_ref(_Inout_ ITarget<size_t>* _PTarget);
```

### Parameters

*_PTarget*<br/>
A pointer to the target block that is calling this method.

### Remarks

This method is called by an `ITarget` object that is being unlinked from this source. The source block is allowed to release any resources reserved for the target block.

## <a name="reserve"></a> reserve

Reserves a message previously offered by this `choice` messaging block.

```cpp
virtual bool reserve(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<size_t>* _PTarget);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the `message` object being reserved.

*_PTarget*<br/>
A pointer to the target block that is calling the `reserve` method.

### Return Value

**`true`** if the message was successfully reserved, **`false`** otherwise. Reservations can fail for many reasons, including: the message was already reserved or accepted by another target, the source could deny reservations, and so forth.

### Remarks

After you call `reserve`, if it succeeds, you must call either `consume` or `release` in order to take or give up possession of the message, respectively.

## <a name="unlink_target"></a> unlink_target

Unlinks a target block from this `choice` messaging block.

```cpp
virtual void unlink_target(_Inout_ ITarget<size_t>* _PTarget);
```

### Parameters

*_PTarget*<br/>
A pointer to an `ITarget` block to unlink from this `choice` messaging block.

## <a name="unlink_targets"></a> unlink_targets

Unlinks all targets from this `choice` messaging block.

```cpp
virtual void unlink_targets();
```

### Remarks

This method does not need to be called from the destructor because destructor for the internal `single_assignment` block will unlink properly.

## <a name="value"></a> value

Gets the message whose index was selected by the `choice` messaging block.

```cpp
template <
    typename _Payload_type
>
_Payload_type const& value();
```

### Parameters

*_Payload_type*<br/>
The type of the message payload.

### Return Value

The payload of the message.

### Remarks

Because a `choice` messaging block can take inputs with different payload types, you must specify the type of the payload at the point of retrieval. You can determine the type based on the result of the `index` method.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[join Class](join-class.md)<br/>
[single_assignment Class](single-assignment-class.md)
