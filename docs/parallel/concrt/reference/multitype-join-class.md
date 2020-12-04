---
description: "Learn more about: multitype_join Class"
title: "multitype_join Class"
ms.date: "11/04/2016"
f1_keywords: ["multitype_join", "AGENTS/concurrency::multitype_join", "AGENTS/concurrency::multitype_join::multitype_join", "AGENTS/concurrency::multitype_join::accept", "AGENTS/concurrency::multitype_join::acquire_ref", "AGENTS/concurrency::multitype_join::consume", "AGENTS/concurrency::multitype_join::link_target", "AGENTS/concurrency::multitype_join::release", "AGENTS/concurrency::multitype_join::release_ref", "AGENTS/concurrency::multitype_join::reserve", "AGENTS/concurrency::multitype_join::unlink_target", "AGENTS/concurrency::multitype_join::unlink_targets"]
helpviewer_keywords: ["multitype_join class"]
ms.assetid: 236e87a0-4867-49fd-869a-bef4010e49a7
---
# multitype_join Class

A `multitype_join` messaging block is a multi-source, single-target messaging block that combines together messages of different types from each of its sources and offers a tuple of the combined messages to its targets.

## Syntax

```cpp
template<
    typename T,
    join_type _Jtype = non_greedy
>
class multitype_join: public ISource<typename _Unwrap<T>::type>;
```

### Parameters

*T*<br/>
The `tuple` payload type of the messages joined and propagated by the block.

*_Jtype*<br/>
The kind of `join` block this is, either `greedy` or `non_greedy`

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`type`|A type alias for `T`.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[multitype_join](#ctor)|Overloaded. Constructs a `multitype_join` messaging block.|
|[~multitype_join Destructor](#dtor)|Destroys the `multitype_join` messaging block.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[accept](#accept)|Accepts a message that was offered by this `multitype_join` block, transferring ownership to the caller.|
|[acquire_ref](#acquire_ref)|Acquires a reference count on this `multitype_join` messaging block, to prevent deletion.|
|[consume](#consume)|Consumes a message previously offered by the `multitype_join` messaging block and successfully reserved by the target, transferring ownership to the caller.|
|[link_target](#link_target)|Links a target block to this `multitype_join` messaging block.|
|[release](#release)|Releases a previous successful message reservation.|
|[release_ref](#release_ref)|Releases a reference count on this `multiple_join` messaging block.|
|[reserve](#reserve)|Reserves a message previously offered by this `multitype_join` messaging block.|
|[unlink_target](#unlink_target)|Unlinks a target block from this `multitype_join` messaging block.|
|[unlink_targets](#unlink_targets)|Unlinks all targets from this `multitype_join` messaging block. (Overrides [ISource::unlink_targets](isource-class.md#unlink_targets).)|

## Remarks

For more information, see [Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md).

## Inheritance Hierarchy

[ISource](isource-class.md)

`multitype_join`

## Requirements

**Header:** agents.h

**Namespace:** concurrency

## <a name="accept"></a> accept

Accepts a message that was offered by this `multitype_join` block, transferring ownership to the caller.

```cpp
virtual message<_Destination_type>* accept(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Destination_type>* _PTarget);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the offered `message` object.

*_PTarget*<br/>
A pointer to the target block that is calling the `accept` method.

### Return Value

A pointer to the message that the caller now has ownership of.

## <a name="acquire_ref"></a> acquire_ref

Acquires a reference count on this `multitype_join` messaging block, to prevent deletion.

```cpp
virtual void acquire_ref(_Inout_ ITarget<_Destination_type>* _PTarget);
```

### Parameters

*_PTarget*<br/>
A pointer to the target block that is calling this method.

### Remarks

This method is called by an `ITarget` object that is being linked to this source during the `link_target` method.

## <a name="consume"></a> consume

Consumes a message previously offered by the `multitype_join` messaging block and successfully reserved by the target, transferring ownership to the caller.

```cpp
virtual message<_Destination_type>* consume(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Destination_type>* _PTarget);
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

## <a name="link_target"></a> link_target

Links a target block to this `multitype_join` messaging block.

```cpp
virtual void link_target(_Inout_ ITarget<_Destination_type>* _PTarget);
```

### Parameters

*_PTarget*<br/>
A pointer to an `ITarget` block to link to this `multitype_join` messaging block.

## <a name="ctor"></a> multitype_join

Constructs a `multitype_join` messaging block.

```cpp
explicit multitype_join(
    T _Tuple);

multitype_join(
    Scheduler& _PScheduler,
    T _Tuple);

multitype_join(
    ScheduleGroup& _PScheduleGroup,
    T _Tuple);

multitype_join(
    multitype_join&& _Join);
```

### Parameters

*_Tuple*<br/>
A `tuple` of sources for this `multitype_join` messaging block.

*_PScheduler*<br/>
The `Scheduler` object within which the propagation task for the `multitype_join` messaging block is scheduled.

*_PScheduleGroup*<br/>
The `ScheduleGroup` object within which the propagation task for the `multitype_join` messaging block is scheduled. The `Scheduler` object used is implied by the schedule group.

*_Join*<br/>
A `multitype_join` messaging block to copy from. Note that the original object is orphaned, making this a move constructor.

### Remarks

The runtime uses the default scheduler if you do not specify the `_PScheduler` or `_PScheduleGroup` parameters.

Move construction is not performed under a lock, which means that it is up to the user to make sure that there are no light-weight tasks in flight at the time of moving. Otherwise, numerous races can occur, leading to exceptions or inconsistent state.

## <a name="dtor"></a> ~multitype_join

Destroys the `multitype_join` messaging block.

```cpp
~multitype_join();
```

## <a name="release"></a> release

Releases a previous successful message reservation.

```cpp
virtual void release(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Destination_type>* _PTarget);
```

### Parameters

*_MsgId*<br/>
The `runtime_object_identity` of the `message` object being released.

*_PTarget*<br/>
A pointer to the target block that is calling the `release` method.

## <a name="release_ref"></a> release_ref

Releases a reference count on this `multiple_join` messaging block.

```cpp
virtual void release_ref(_Inout_ ITarget<_Destination_type>* _PTarget);
```

### Parameters

*_PTarget*<br/>
A pointer to the target block that is calling this method.

### Remarks

This method is called by an `ITarget` object that is being unlinked from this source. The source block is allowed to release any resources reserved for the target block.

## <a name="reserve"></a> reserve

Reserves a message previously offered by this `multitype_join` messaging block.

```cpp
virtual bool reserve(
    runtime_object_identity _MsgId,
    _Inout_ ITarget<_Destination_type>* _PTarget);
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

Unlinks a target block from this `multitype_join` messaging block.

```cpp
virtual void unlink_target(_Inout_ ITarget<_Destination_type>* _PTarget);
```

### Parameters

*_PTarget*<br/>
A pointer to an `ITarget` block to unlink from this `multitype_join` messaging block.

## <a name="unlink_targets"></a> unlink_targets

Unlinks all targets from this `multitype_join` messaging block.

```cpp
virtual void unlink_targets();
```

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[choice Class](choice-class.md)<br/>
[join Class](join-class.md)
