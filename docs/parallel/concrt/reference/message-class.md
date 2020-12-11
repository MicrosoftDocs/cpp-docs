---
description: "Learn more about: message Class"
title: "message Class"
ms.date: "11/04/2016"
f1_keywords: ["message", "AGENTS/concurrency::message", "AGENTS/concurrency::message::message", "AGENTS/concurrency::message::add_ref", "AGENTS/concurrency::message::msg_id", "AGENTS/concurrency::message::remove_ref", "AGENTS/concurrency::message::payload"]
helpviewer_keywords: ["message class"]
ms.assetid: 3e1f3505-6c0c-486c-8191-666d0880ec62
---
# message Class

The basic message envelope containing the data payload being passed between messaging blocks.

## Syntax

```cpp
template<class T>
class message : public ::Concurrency::details::_Runtime_object;
```

### Parameters

*T*<br/>
The data type of the payload within the message.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|`type`|A type alias for `T`.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[message](#ctor)|Overloaded. Constructs a `message` object.|
|[~message Destructor](#dtor)|Destroys the `message` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[add_ref](#add_ref)|Adds to the reference count for the `message` object. Used for message blocks that need reference counting to determine message lifetimes.|
|[msg_id](#msg_id)|Returns the ID of the `message` object.|
|[remove_ref](#remove_ref)|Subtracts from the reference count for the `message` object. Used for message blocks that need reference counting to determine message lifetimes.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[payload](#payload)|The payload of the `message` object.|

## Remarks

For more information, see [Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md).

## Inheritance Hierarchy

`message`

## Requirements

**Header:** agents.h

**Namespace:** concurrency

## <a name="add_ref"></a> add_ref

Adds to the reference count for the `message` object. Used for message blocks that need reference counting to determine message lifetimes.

```cpp
long add_ref();
```

### Return Value

The new value of the reference count.

## <a name="ctor"></a> message

Constructs a `message` object.

```cpp
message(
    T const& _P);

message(
    T const& _P,
    runtime_object_identity _Id);

message(
    message const& _Msg);

message(
    _In_ message const* _Msg);
```

### Parameters

*_P*<br/>
The payload of this message.

*_Id*<br/>
The unique ID of this message.

*_Msg*<br/>
A reference or pointer to a `message` object.

### Remarks

The constructor that takes a pointer to a `message` object as an argument throws an [invalid_argument](../../../standard-library/invalid-argument-class.md) exception if the parameter `_Msg` is `NULL`.

## <a name="dtor"></a> ~message

Destroys the `message` object.

```cpp
virtual ~message();
```

## <a name="msg_id"></a> msg_id

Returns the ID of the `message` object.

```cpp
runtime_object_identity msg_id() const;
```

### Return Value

The `runtime_object_identity` of the `message` object.

## <a name="payload"></a> payload

The payload of the `message` object.

```cpp
T const payload;
```

## <a name="remove_ref"></a> remove_ref

Subtracts from the reference count for the `message` object. Used for message blocks that need reference counting to determine message lifetimes.

```cpp
long remove_ref();
```

### Return Value

The new value of the reference count.

## See also

[concurrency Namespace](concurrency-namespace.md)
