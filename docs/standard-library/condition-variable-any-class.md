---
description: "Learn more about: condition_variable_any Class"
title: "condition_variable_any Class"
ms.date: "11/04/2016"
f1_keywords: ["condition_variable/std::condition_variable_any", "condition_variable/std::condition_variable_any::condition_variable_any", "condition_variable/std::condition_variable_any::notify_all", "condition_variable/std::condition_variable_any::notify_one", "condition_variable/std::condition_variable_any::wait", "condition_variable/std::condition_variable_any::wait_for", "condition_variable/std::condition_variable_any::wait_until"]
ms.assetid: d8afe5db-1561-4ec2-8e85-21ea03ee4321
helpviewer_keywords: ["std::condition_variable_any", "std::condition_variable_any::condition_variable_any", "std::condition_variable_any::notify_all", "std::condition_variable_any::notify_one", "std::condition_variable_any::wait", "std::condition_variable_any::wait_for", "std::condition_variable_any::wait_until"]
---
# condition_variable_any Class

Use the class `condition_variable_any` to wait for an event that has any `mutex` type.

## Syntax

```cpp
class condition_variable_any;
```

## Members

### Constructors

|Name|Description|
|-|-|
|[condition_variable_any](#condition_variable_any)|Constructs a `condition_variable_any` object.|

### Functions

|Name|Description|
|-|-|
|[notify_all](#notify_all)|Unblocks all threads that are waiting for the `condition_variable_any` object.|
|[notify_one](#notify_one)|Unblocks one of the threads that are waiting for the `condition_variable_any` object.|
|[wait](#wait)|Blocks a thread.|
|[wait_for](#wait_for)|Blocks a thread, and sets a time interval after which the thread unblocks.|
|[wait_until](#wait_until)|Blocks a thread, and sets a maximum point in time at which the thread unblocks.|

## <a name="condition_variable_any"></a> condition_variable_any

Constructs a `condition_variable_any` object.

```cpp
condition_variable_any();
```

### Remarks

If not enough memory is available, the constructor throws a [system_error](../standard-library/system-error-class.md) object that has a `not_enough_memory` error code. If the object cannot be constructed because some other resource is not available, the constructor throws a `system_error` object that has a `resource_unavailable_try_again` error code.

## <a name="notify_all"></a> notify_all

Unblocks all threads that are waiting for the `condition_variable_any` object.

```cpp
void notify_all() noexcept;
```

## <a name="notify_one"></a> notify_one

Unblocks one of the threads that are waiting on the `condition_variable_any` object.

```cpp
void notify_one() noexcept;
```

## <a name="wait"></a> wait

Blocks a thread.

```cpp
template <class Lock>
void wait(Lock& Lck);

template <class Lock, class Predicate>
void wait(Lock& Lck, Predicate Pred);
```

### Parameters

*Lck*\
A `mutex` object of any type.

*Pred*\
Any expression that returns **`true`** or **`false`**.

### Remarks

The first method blocks until the `condition_variable_any` object is signaled by a call to [notify_one](../standard-library/condition-variable-class.md#notify_one) or [notify_all](../standard-library/condition-variable-class.md#notify_all). It can also wake up spuriously.

The second method in effect executes the following code.

```cpp
while (!Pred())
    wait(Lck);
```

## <a name="wait_for"></a> wait_for

Blocks a thread, and sets a time interval after which the thread unblocks.

```cpp
template <class Lock, class Rep, class Period>
bool wait_for(Lock& Lck, const chrono::duration<Rep, Period>& Rel_time);

template <class Lock, class Rep, class Period, class Predicate>
bool wait_for(Lock& Lck, const chrono::duration<Rep, Period>& Rel_time, Predicate Pred);
```

### Parameters

*Lck*\
A `mutex` object of any type.

*Rel_time*\
A `chrono::duration` object that specifies the amount of time before the thread wakes up.

*Pred*\
Any expression that returns **`true`** or **`false`**.

### Return Value

The first method returns `cv_status::timeout` if the wait terminates when *Rel_time* has elapsed. Otherwise, the method returns `cv_status::no_timeout`.

The second method returns the value of *Pred*.

### Remarks

The first method blocks until the `condition_variable_any` object is signaled by a call to [notify_one](../standard-library/condition-variable-class.md#notify_one) or [notify_all](../standard-library/condition-variable-class.md#notify_all), or until the time interval *Rel_time* has elapsed. It can also wake up spuriously.

The second method in effect executes the following code.

```cpp
while(!Pred())
    if(wait_for(Lck, Rel_time) == cv_status::timeout)
    return Pred();

return true;
```

## <a name="wait_until"></a> wait_until

Blocks a thread, and sets a maximum point in time at which the thread unblocks.

```cpp
template <class Lock, class Clock, class Duration>
void wait_until(Lock& Lck, const chrono::time_point<Clock, Duration>& Abs_time);

template <class Lock, class Clock, class Duration, class Predicate>
void wait_until(
    Lock& Lck,
    const chrono::time_point<Clock, Duration>& Abs_time,
    Predicate Pred);

template <class Lock>
void wait_until(Lock Lck, const xtime* Abs_time);

template <class Lock, class Predicate>
void wait_until(
    Lock Lck,
    const xtime* Abs_time,
    Predicate Pred);
```

### Parameters

*Lck*\
A mutex object.

*Abs_time*\
A [chrono::time_point](../standard-library/time-point-class.md) object.

*Pred*\
Any expression that returns **`true`** or **`false`**.

### Return Value

Methods that return a `cv_status` type return `cv_status::timeout` if the wait terminates when *Abs_time* elapses. Otherwise, the methods return `cv_status::no_timeout`.

Methods that return a **`bool`** return the value of *Pred*.

### Remarks

The first method blocks until the `condition_variable` object is signaled by a call to [notify_one](../standard-library/condition-variable-class.md#notify_one) or [notify_all](../standard-library/condition-variable-class.md#notify_all), or until *Abs_time*. It can also wake up spuriously.

The second method in effect executes the following code.

```cpp
while(!Pred())
    if(wait_until(Lck, Abs_time) == cv_status::timeout)
    return Pred();

return true;
```

The third and fourth methods use a pointer to an object of type `xtime` to replace the `chrono::time_point` object. The `xtime` object specifies the maximum amount of time to wait for a signal.
