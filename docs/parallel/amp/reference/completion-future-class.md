---
description: "Learn more about: completion_future Class"
title: "completion_future Class"
ms.date: "11/04/2016"
f1_keywords: ["completion_future", "AMPRT/completion_future", "AMPRT/Concurrency::completion_future::completion_future", "AMPRT/Concurrency::completion_future::get", "AMPRT/Concurrency::completion_future::then", "AMPRT/Concurrency::completion_future::to_task", "AMPRT/Concurrency::completion_future::valid", "AMPRT/Concurrency::completion_future::wait", "AMPRT/Concurrency::completion_future::wait_for", "AMPRT/Concurrency::completion_future::wait_until"]
ms.assetid: 1303c62e-546d-4b02-a578-251ed3fc0b6b
---
# completion_future Class

Represents a future corresponding to a C++ AMP asynchronous operation.

## Syntax

```cpp
class completion_future;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[completion_future Constructor](#ctor)|Initializes a new instance of the `completion_future` class.|
|[~completion_future Destructor](#dtor)|Destroys the `completion_future` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[get](#get)|Waits until the associated asynchronous operation completes.|
|[then](#then)|Chains a callback function object to the `completion_future` object to be executed when the associated asynchronous operation finishes execution.|
|[to_task](#to_task)|Returns a `task` object corresponding to the associated asynchronous operation.|
|[valid](#valid)|Gets a Boolean value that indicates whether the object is associated with an asynchronous operation.|
|[wait](#wait)|Blocks until the associated asynchronous operation completes.|
|[wait_for](#wait_for)|Blocks until the associated asynchronous operation completes or the time specified by `_Rel_time` has elapsed.|
|[wait_until](#wait_until)|Blocks until the associated asynchronous operation completes or until the current time exceeds the value specified by `_Abs_time`.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[operator std::shared_future\<void>](#operator_shared_future)|Implicitly converts the `completion_future` object to an `std::shared_future` object.|
|[operator=](#operator_eq)|Copies the contents of the specified `completion_future` object into this one.|

## Inheritance Hierarchy

`completion_future`

## Requirements

**Header:** amprt.h

**Namespace:** concurrency

## <a name="ctor"></a> completion_future

Initializes a new instance of the `completion_future` class.

### Syntax

```cpp
completion_future();

completion_future(
    const completion_future& _Other );

completion_future(
    completion_future&& _Other );
```

### Parameters

*_Other*<br/>
The `completion_future` object to copy or move.

### Overloads List

|Name|Description|
|----------|-----------------|
|`completion_future();`|Initializes a new instance of the `completion_future` Class|
|`completion_future(const completion_future& _Other);`|Initializes a new instance of the `completion_future` class by copying a constructor.|
|`completion_future(completion_future&& _Other);`|Initializes a new instance of the `completion_future` class by moving a constructor.|

## <a name="get"></a> get

Waits until the associated asynchronous operation completes. Throws the stored exception if one was encountered during the asynchronous operation.

### Syntax

```cpp
void get() const;
```

## <a name="operator_shared_future"></a> operator std::shared_future\<void>

Implicitly converts the `completion_future` object to an `std::shared_future` object.

### Syntax

```cpp
operator std::shared_future<void>() const;
```

### Return Value

An `std::shared_future` object.

## <a name="operator_eq"></a> operator=

Copies the contents of the specified `completion_future` object into this one.

### Syntax

```cpp
completion_future&  operator= (const completion_future& _Other );
completion_future&  operator= (completion_future&& _Other );
```

### Parameters

*_Other*<br/>
The object to copy from.

### Return Value

A reference to this `completion_future` object.

## Overloads List

|Name|Description|
|----------|-----------------|
|`completion_future& operator=(const completion_future& _Other);`|Copies the contents of the specified `completion_future` object into this one, using a deep copy.|
|`completion_future& operator=(completion_future&& _Other);`|Copies the contents of the specified `completion_future` object into this one, using a move assignment.|

## <a name="then"></a> then

Chains a callback function object to the `completion_future` object to be executed when the associated asynchronous operation finishes execution.

### Syntax

```cpp
template <typename _Functor>
void then(const _Functor & _Func ) const;
```

### Parameters

*_Functor*<br/>
The callback functor.

*_Func*<br/>
The callback function object.

## <a name="to_task"></a> to_task

Returns a `task` object corresponding to the associated asynchronous operation.

### Syntax

```cpp
concurrency::task<void> to_task() const;
```

### Return Value

A `task` object corresponding to the associated asynchronous operation.

## <a name="valid"></a> valid

Gets a Boolean value that indicates whether the  object is associated with an asynchronous operation.

### Syntax

```cpp
bool valid() const;
```

### Return Value

**`true`** if the object is associated with an asynchronous operation; otherwise, **`false`**.

## <a name="wait"></a> wait

Blocks until the associated asynchronous operation completes.

### Syntax

```cpp
void wait() const;
```

## <a name="wait_for"></a> wait_for

Blocks until the associated asynchronous operation completes or the time that's specified by `_Rel_time` has elapsed.

### Syntax

```cpp
template <
    class _Rep,
    class _Period
>
std::future_status::future_status wait_for(
    const std::chrono::duration< _Rep, _Period>& _Rel_time ) const;
```

### Parameters

*_Rep*<br/>
An arithmetic type that represents the number of ticks.

*_Period*<br/>
A std::ratio that represents the number of seconds that elapse per tick.

*_Rel_time*<br/>
The maximum amount of time to wait for the operation to complete.

### Return Value

Returns:

- `std::future_status::deferred` if the associated asynchronous operation is not running.

- `std::future_status::ready` if the associated asynchronous operation is finished.

- `std::future_status::timeout` if the specified time period has elapsed.

## <a name="wait_until"></a> wait_until

Blocks until the associated asynchronous operation completes or until the current time exceeds the value specified by `_Abs_time`.

### Syntax

```cpp
template <
    class _Clock,
    class _Duration
>
std::future_status::future_status wait_until(
    const std::chrono::time_point< _Clock, _Duration>& _Abs_time ) const;
```

### Parameters

*_Clock*<br/>
The clock on which this time point is measured.

*_Duration*<br/>
The time interval since the start of `_Clock`’s epoch, after which the function will time out.

*_Abs_time*<br/>
The point in time after which the function will time out.

### Return Value

Returns:

1. `std::future_status::deferred` if the associated asynchronous operation is not running.

1. `std::future_status::ready` if the associated asynchronous operation is finished.

1. `std::future_status::timeout` if the time period specified has elapsed.

## <a name="dtor"></a> ~completion_future

Destroys the `completion_future` object.

### Syntax

```cpp
~completion_future();
```

## See also

[Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
