---
description: "Learn more about: message_processor Class"
title: "message_processor Class"
ms.date: "11/04/2016"
f1_keywords: ["message_processor", "AGENTS/concurrency::message_processor", "AGENTS/concurrency::message_processor::async_send", "AGENTS/concurrency::message_processor::sync_send", "AGENTS/concurrency::message_processor::wait", "AGENTS/concurrency::message_processor::process_incoming_message"]
helpviewer_keywords: ["message_processor class"]
ms.assetid: 23afb052-daa7-44ed-bf24-d2513db748da
---
# message_processor Class

The `message_processor` class is the abstract base class for processing of `message` objects. There is no guarantee on the ordering of the messages.

## Syntax

```cpp
template<class T>
class message_processor;
```

### Parameters

*T*<br/>
The data type of the payload within messages handled by this `message_processor` object.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`type`|A type alias for `T`.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[async_send](#async_send)|When overridden in a derived class, places messages into the block asynchronously.|
|[sync_send](#sync_send)|When overridden in a derived class, places messages into the block synchronously.|
|[wait](#wait)|When overridden in a derived class, waits for all asynchronous operations to complete.|

### Protected Methods

|Name|Description|
|----------|-----------------|
|[process_incoming_message](#process_incoming_message)|When overridden in a derived class, performs the forward processing of messages into the block. Called once every time a new message is added and the queue is found to be empty.|

## Inheritance Hierarchy

`message_processor`

## Requirements

**Header:** agents.h

**Namespace:** concurrency

## <a name="async_send"></a> async_send

When overridden in a derived class, places messages into the block asynchronously.

```cpp
virtual void async_send(_Inout_opt_ message<T>* _Msg) = 0;
```

### Parameters

*_Msg*<br/>
A `message` object to send asynchronously.

### Remarks

Processor implementations should override this method.

## <a name="process_incoming_message"></a> process_incoming_message

When overridden in a derived class, performs the forward processing of messages into the block. Called once every time a new message is added and the queue is found to be empty.

```cpp
virtual void process_incoming_message() = 0;
```

### Remarks

Message block implementations should override this method.

## <a name="sync_send"></a> sync_send

When overridden in a derived class, places messages into the block synchronously.

```cpp
virtual void sync_send(_Inout_opt_ message<T>* _Msg) = 0;
```

### Parameters

*_Msg*<br/>
A `message` object to send synchronously.

### Remarks

Processor implementations should override this method.

## <a name="wait"></a> wait

When overridden in a derived class, waits for all asynchronous operations to complete.

```cpp
virtual void wait() = 0;
```

### Remarks

Processor implementations should override this method.

## See also

[concurrency Namespace](concurrency-namespace.md)<br/>
[ordered_message_processor Class](ordered-message-processor-class.md)
