---
description: "Learn more about: ordered_message_processor Class"
title: "ordered_message_processor Class"
ms.date: "11/04/2016"
f1_keywords: ["ordered_message_processor", "AGENTS/concurrency::ordered_message_processor", "AGENTS/concurrency::ordered_message_processor::ordered_message_processor", "AGENTS/concurrency::ordered_message_processor::async_send", "AGENTS/concurrency::ordered_message_processor::initialize", "AGENTS/concurrency::ordered_message_processor::initialize_batched_processing", "AGENTS/concurrency::ordered_message_processor::sync_send", "AGENTS/concurrency::ordered_message_processor::wait", "AGENTS/concurrency::ordered_message_processor::process_incoming_message"]
helpviewer_keywords: ["ordered_message_processor class"]
ms.assetid: 787adfb7-7f79-4a70-864a-80e3b64088cd
---
# ordered_message_processor Class

An `ordered_message_processor` is a `message_processor` that allows message blocks to process messages in the order they were received.

## Syntax

```cpp
template<class T>
class ordered_message_processor : public message_processor<T>;
```

### Parameters

*T*<br/>
The payload type of messages handled by the processor.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`type`|A type alias for `T`.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[ordered_message_processor](#ctor)|Constructs an `ordered_message_processor` object.|
|[~ordered_message_processor Destructor](#dtor)|Destroys the `ordered_message_processor` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[async_send](#async_send)|Asynchronously queues up messages and starts a processing task, if this has not been done already. (Overrides [message_processor::async_send](message-processor-class.md#async_send).)|
|[initialize](#initialize)|Initializes the `ordered_message_processor` object with the appropriate callback function, scheduler and schedule group.|
|[initialize_batched_processing](#initialize_batched_processing)|Initialize batched message processing|
|[sync_send](#sync_send)|Synchronously queues up messages and starts a processing task, if this has not been done already. (Overrides [message_processor::sync_send](message-processor-class.md#sync_send).)|
|[wait](#wait)|A processor-specific spin wait used in destructors of message blocks to make sure that all asynchronous processing tasks have time to finish before destroying the block. (Overrides [message_processor::wait](message-processor-class.md#wait).)|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[process_incoming_message](#process_incoming_message)|The processing function that is called asynchronously. It dequeues messages and begins processing them. (Overrides [message_processor::process_incoming_message](message-processor-class.md#process_incoming_message).)|

## Inheritance Hierarchy

[message_processor](message-processor-class.md)

`ordered_message_processor`

## Requirements

**Header:** agents.h

**Namespace:** concurrency

## <a name="async_send"></a> async_send

Asynchronously queues up messages and starts a processing task, if this has not been done already.

```cpp
virtual void async_send(_Inout_opt_ message<T>* _Msg);
```

### Parameters

*_Msg*<br/>
A pointer to a message.

## <a name="initialize"></a> initialize

Initializes the `ordered_message_processor` object with the appropriate callback function, scheduler and schedule group.

```cpp
void initialize(
    _Inout_opt_ Scheduler* _PScheduler,
    _Inout_opt_ ScheduleGroup* _PScheduleGroup,
    _Handler_method const& _Handler);
```

### Parameters

*_PScheduler*<br/>
A pointer to the scheduler to be used for scheduling light-weight tasks.

*_PScheduleGroup*<br/>
A pointer to the schedule group to be used for scheduling light-weight tasks.

*_Handler*<br/>
The handler functor invoked during callback.

## <a name="initialize_batched_processing"></a> initialize_batched_processing

Initialize batched message processing

```cpp
virtual void initialize_batched_processing(
    _Handler_method const& _Processor,
    _Propagator_method const& _Propagator);
```

### Parameters

*_Processor*<br/>
The processor functor invoked during callback.

*_Propagator*<br/>
The propagator functor invoked during callback.

## <a name="ctor"></a> ordered_message_processor

Constructs an `ordered_message_processor` object.

```cpp
ordered_message_processor();
```

### Remarks

This `ordered_message_processor` will not schedule asynchronous or synchronous handlers until the `initialize` function is called.

## <a name="dtor"></a> ~ordered_message_processor

Destroys the `ordered_message_processor` object.

```cpp
virtual ~ordered_message_processor();
```

### Remarks

Waits for all outstanding asynchronous operations before destroying the processor.

## <a name="process_incoming_message"></a> process_incoming_message

The processing function that is called asynchronously. It dequeues messages and begins processing them.

```cpp
virtual void process_incoming_message();
```

## <a name="sync_send"></a> sync_send

Synchronously queues up messages and starts a processing task, if this has not been done already.

```cpp
virtual void sync_send(_Inout_opt_ message<T>* _Msg);
```

### Parameters

*_Msg*<br/>
A pointer to a message.

## <a name="wait"></a> wait

A processor-specific spin wait used in destructors of message blocks to make sure that all asynchronous processing tasks have time to finish before destroying the block.

```cpp
virtual void wait();
```

## See also

[concurrency Namespace](concurrency-namespace.md)
