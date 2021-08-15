---
description: "Learn more about: event Class"
title: "event Class"
ms.date: "11/04/2016"
f1_keywords: ["CONCRT/concurrency::event", "CONCRT/concurrency::event::reset", "CONCRT/concurrency::event::set", "CONCRT/concurrency::event::wait", "CONCRT/concurrency::event::wait_for_multiple", "CONCRT/concurrency::event::timeout_infinite"]
helpviewer_keywords: ["event class"]
ms.assetid: fba35a53-6568-4bfa-9aaf-07c0928cf73d
---
# event Class

A manual reset event which is explicitly aware of the Concurrency Runtime.

## Syntax

```cpp
class event;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[~event Destructor](#dtor)|Destroys an event.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[reset](#reset)|Resets the event to a non-signaled state.|
|[set](#set)|Signals the event.|
|[wait](#wait)|Waits for the event to become signaled.|
|[wait_for_multiple](#wait_for_multiple)|Waits for multiple events to become signaled.|

### Public Constants

|Name|Description|
|----------|-----------------|
|[timeout_infinite](#timeout_infinite)|Value indicating that a wait should never time out.|

## Remarks

For more information, see [Synchronization Data Structures](../../../parallel/concrt/synchronization-data-structures.md).

## Inheritance Hierarchy

`event`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

## <a name="ctor"></a> event

Constructs a new event.

```cpp
_CRTIMP event();
```

### Remarks

## <a name="dtor"></a> ~event

Destroys an event.

```cpp
~event();
```

### Remarks

It is expected that there are no threads waiting on the event when the destructor runs. Allowing the event to destruct with threads still waiting on it results in undefined behavior.

## <a name="reset"></a> reset

Resets the event to a non-signaled state.

```cpp
void reset();
```

## <a name="set"></a> set

Signals the event.

```cpp
void set();
```

### Remarks

Signaling the event can cause an arbitrary number of contexts waiting on the event to become runnable.

## <a name="timeout_infinite"></a> timeout_infinite

Value indicating that a wait should never time out.

```cpp
static const unsigned int timeout_infinite = COOPERATIVE_TIMEOUT_INFINITE;
```

## <a name="wait"></a> wait

Waits for the event to become signaled.

```cpp
size_t wait(unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```

### Parameters

*_Timeout*<br/>
Indicates the number of milliseconds before the wait times out. The value `COOPERATIVE_TIMEOUT_INFINITE` signifies that there is no timeout.

### Return Value

If the wait was satisfied, the value `0` is returned; otherwise, the value `COOPERATIVE_WAIT_TIMEOUT` to indicate that the wait timed out without the event becoming signaled.

> [!IMPORTANT]
> In a Universal Windows Platform (UWP) app, do not call `wait` on the ASTA thread because this call can block the current thread and can cause the app to become unresponsive.

## <a name="wait_for_multiple"></a> wait_for_multiple

Waits for multiple events to become signaled.

```cpp
static size_t __cdecl wait_for_multiple(
    _In_reads_(count) event** _PPEvents,
    size_t count,
    bool _FWaitAll,
    unsigned int _Timeout = COOPERATIVE_TIMEOUT_INFINITE);
```

### Parameters

*_PPEvents*<br/>
An array of events to wait on. The number of events within the array is indicated by the `count` parameter.

*count*<br/>
The count of events within the array supplied in the `_PPEvents` parameter.

*_FWaitAll*<br/>
If set to the value **`true`**, the parameter specifies that all events within the array supplied in the `_PPEvents` parameter must become signaled in order to satisfy the wait. If set to the value **`false`**, it specifies that any event within the array supplied in the `_PPEvents` parameter becoming signaled will satisfy the wait.

*_Timeout*<br/>
Indicates the number of milliseconds before the wait times out. The value `COOPERATIVE_TIMEOUT_INFINITE` signifies that there is no timeout.

### Return Value

If the wait was satisfied, the index within the array supplied in the `_PPEvents` parameter which satisfied the wait condition; otherwise, the value `COOPERATIVE_WAIT_TIMEOUT` to indicate that the wait timed out without the condition being satisfied.

### Remarks

If the parameter `_FWaitAll` is set to the value **`true`** to indicate that all events must become signaled to satisfy the wait, the index returned by the function carries no special significance other than the fact that it is not the value `COOPERATIVE_WAIT_TIMEOUT`.

> [!IMPORTANT]
> In a Universal Windows Platform (UWP) app, do not call `wait_for_multiple` on the ASTA thread because this call can block the current thread and can cause the app to become unresponsive.

## See also

[concurrency Namespace](concurrency-namespace.md)
