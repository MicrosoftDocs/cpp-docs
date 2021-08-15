---
description: "Learn more about: future Class"
title: "future Class"
ms.date: "11/04/2016"
f1_keywords: ["future/std::future", "future/std::future::future", "future/std::future::get", "future/std::future::share", "future/std::future::valid", "future/std::future::wait", "future/std::future::wait_for", "future/std::future::wait_until"]
ms.assetid: 495e82c3-5341-4e37-87dd-b40107fbdfb6
helpviewer_keywords: ["std::future [C++]", "std::future [C++], future", "std::future [C++], get", "std::future [C++], share", "std::future [C++], valid", "std::future [C++], wait", "std::future [C++], wait_for", "std::future [C++], wait_until"]
---
# future Class

Describes an *asynchronous return object*.

## Syntax

```cpp
template <class Ty>
class future;
```

## Remarks

Each standard *asynchronous provider* returns an object whose type is an instantiation of this template. A `future` object provides the only access to the asynchronous provider that it is associated with. If you need multiple asynchronous return objects that are associated with the same asynchronous provider, copy the `future` object to a [shared_future](../standard-library/shared-future-class.md) object.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[future](#future)|Constructs a `future` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[get](#get)|Retrieves the result that is stored in the associated asynchronous state.|
|[share](#share)|Converts the object to a `shared_future`.|
|[valid](#valid)|Specifies whether the object is not empty.|
|[wait](#wait)|Blocks the current thread until the associated asynchronous state is ready.|
|[wait_for](#wait_for)|Blocks until the associated asynchronous state is ready or until the specified time has elapsed.|
|[wait_until](#wait_until)|Blocks until the associated asynchronous state is ready or until a specified point in time.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[future::operator=](#op_eq)|Transfers the associated asynchronous state from a specified object.|

## Requirements

**Header:** \<future>

**Namespace:** std

## <a name="future"></a> future::future Constructor

Constructs a `future` object.

```cpp
future() noexcept;
future(future&& Other) noexcept;
```

### Parameters

*Other*\
A `future` object.

### Remarks

The first constructor constructs a `future` object that has no associated asynchronous state.

The second constructor constructs a `future` object and transfers the associated asynchronous state from *Other*. *Other* no longer has an associated asynchronous state.

## <a name="get"></a> future::get

Retrieves the result that is stored in the associated asynchronous state.

```cpp
Ty get();
```

### Return Value

If the result is an exception, the method rethrows it. Otherwise, the result is returned.

### Remarks

Before it retrieves the result, this method blocks the current thread until the associated asynchronous state is ready.

For the partial specialization `future<Ty&>`, the stored value is effectively a reference to the object that was passed to the asynchronous provider as the return value.

Because no stored value exists for the specialization `future<void>`, the method returns **`void`**.

In other specializations, the method moves its return value from the stored value. Therefore, call this method only once.

## <a name="op_eq"></a> future::operator=

Transfers an associated asynchronous state from a specified object.

```cpp
future& operator=(future&& Right) noexcept;
```

### Parameters

*Right*\
A `future` object.

### Return Value

`*this`

### Remarks

After the transfer, *Right* no longer has an associated asynchronous state.

## <a name="share"></a> future::share

Converts the object to a [shared_future](../standard-library/shared-future-class.md) object.

```cpp
shared_future<Ty> share();
```

### Return Value

`shared_future(move(*this))`

## <a name="valid"></a> future::valid

Specifies whether the object has an associated asynchronous state.

```cpp
bool valid() noexcept;
```

### Return Value

**`true`** if the object has an associated asynchronous state; otherwise, **`false`**.

## <a name="wait"></a> future::wait

Blocks the current thread until the associated asynchronous state is *ready*.

```cpp
void wait() const;
```

### Remarks

An associated asynchronous state is *ready* only if its asynchronous provider has stored a return value or stored an exception.

## <a name="wait_for"></a> future::wait_for

Blocks the current thread until the associated asynchronous state is *ready* or until a specified time interval has elapsed.

```cpp
template <class Rep, class Period>
future_status wait_for(const chrono::duration<Rep, Period>& Rel_time) const;
```

### Parameters

*Rel_time*\
A [chrono::duration](../standard-library/duration-class.md) object that specifies a maximum time interval that the thread blocks.

### Return Value

A [future_status](../standard-library/future-enums.md#future_status) that indicates the reason for returning.

### Remarks

An associated asynchronous state is ready only if its asynchronous provider has stored a return value or stored an exception.

## <a name="wait_until"></a> future::wait_until

Blocks the current thread until the associated asynchronous state is *ready* or until after a specified time point.

```cpp
template <class Clock, class Duration>
future_status wait_until(const chrono::time_point<Clock, Duration>& Abs_time) const;
```

### Parameters

*Abs_time*\
A [chrono::time_point](../standard-library/time-point-class.md) object that specifies a time after which the thread can unblock.

### Return Value

A [future_status](../standard-library/future-enums.md#future_status) that indicates the reason for returning.

### Remarks

An associated asynchronous state is *ready* only if its asynchronous provider has stored a return value or stored an exception.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[\<future>](../standard-library/future.md)
