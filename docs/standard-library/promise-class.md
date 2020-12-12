---
description: "Learn more about: promise Class"
title: "promise Class"
ms.date: "10/18/2018"
f1_keywords: ["future/std::promise", "future/std::promise::promise", "future/std::promise::get_future", "future/std::promise::set_exception", "future/std::promise::set_exception_at_thread_exit", "future/std::promise::set_value", "future/std::promise::set_value_at_thread_exit", "future/std::promise::swap"]
ms.assetid: 2931558c-d94a-4ba1-ac4f-20bf7b6e23f9
helpviewer_keywords: ["std::promise [C++]", "std::promise [C++], promise", "std::promise [C++], get_future", "std::promise [C++], set_exception", "std::promise [C++], set_exception_at_thread_exit", "std::promise [C++], set_value", "std::promise [C++], set_value_at_thread_exit", "std::promise [C++], swap"]
---
# promise Class

Describes an *asynchronous provider*.

## Syntax

```cpp
template <class Ty>
class promise;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[promise](#promise)|Constructs a `promise` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[get_future](#get_future)|Returns a [future](../standard-library/future-class.md) associated with this promise.|
|[set_exception](#set_exception)|Atomically sets the result of this promise to indicate an exception.|
|[set_exception_at_thread_exit](#set_exception_at_thread_exit)|Atomically sets the result of this promise to indicate an exception, and delivers the notification only after all thread-local objects in the current thread have been destroyed (usually at thread exit).|
|[set_value](#set_value)|Atomically sets the result of this promise to indicate a value.|
|[set_value_at_thread_exit](#set_value_at_thread_exit)|Atomically sets the result of this promise to indicate a value, and delivers the notification only after all thread-local objects in the current thread have been destroyed (usually at thread exit).|
|[swap](#swap)|Exchanges the *associated asynchronous state* of this promise with that of a specified promise object.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[promise::operator=](#op_eq)|Assignment of the shared state of this promise object.|

## Inheritance Hierarchy

*promise*

## Requirements

**Header:** \<future>

**Namespace:** std

## <a name="get_future"></a> promise::get_future

Returns a [future](../standard-library/future-class.md) object that has the same *associated asynchronous state* as this promise.

```cpp
future<Ty> get_future();
```

### Remarks

If the promise object is empty, this method throws a [future_error](../standard-library/future-error-class.md) that has an [error_code](../standard-library/error-code-class.md) of `no_state`.

If this method has already been called for a promise object that has the same associated asynchronous state, the method throws a `future_error` that has an `error_code` of `future_already_retrieved`.

## <a name="op_eq"></a> promise::operator=

Transfers the *associated asynchronous state* from a specified `promise` object.

```cpp
promise& operator=(promise&& Other) noexcept;
```

### Parameters

*Other*\
A `promise` object.

### Return Value

`*this`

### Remarks

This operator transfers the associated asynchronous state from *Other*. After the transfer, *Other* is *empty*.

## <a name="promise"></a> promise::promise Constructor

Constructs a `promise` object.

```cpp
promise();
template <class Alloc>
promise(allocator_arg_t, const Alloc& Al);
promise(promise&& Other) noexcept;
```

### Parameters

*Al*\
A memory allocator. See [\<allocators>](../standard-library/allocators-header.md) for more information.

*Other*\
A `promise` object.

### Remarks

The first constructor constructs an *empty* `promise` object.

The second constructor constructs an empty `promise` object and uses *Al* for memory allocation.

The third constructor constructs a `promise` object and transfers the associated asynchronous state from *Other*, and leaves *Other* empty.

## <a name="set_exception"></a> promise::set_exception

Atomically stores an exception as the result of this `promise` object and sets the *associated asynchronous state* to *ready*.

```cpp
void set_exception(exception_ptr Exc);
```

### Parameters

*Exc*\
An [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr) that's stored by this method as the exception result.

### Remarks

If the `promise` object has no associated asynchronous state, this method throws a [future_error](../standard-library/future-error-class.md) that has an error code of `no_state`.

If `set_exception`, [set_exception_at_thread_exit](#set_exception_at_thread_exit), [set_value](#set_value), or [set_value_at_thread_exit](#set_value_at_thread_exit) has already been called for a `promise` object that has the same associated asynchronous state, this method throws a `future_error` that has an error code of `promise_already_satisfied`.

As a result of this method, any threads that are blocked on the associated asynchronous state become unblocked.

## <a name="set_exception_at_thread_exit"></a> promise::set_exception_at_thread_exit

Atomically sets the result of this `promise` to indicate an exception, delivering the notification only after all thread-local objects in the current thread have been destroyed (usually at thread exit).

```cpp
void set_exception_at_thread_exit(exception_ptr Exc);
```

### Parameters

*Exc*\
An [exception_ptr](../standard-library/exception-typedefs.md#exception_ptr) that's stored by this method as the exception result.

### Remarks

If the promise object has no *associated asynchronous state*, this method throws a [future_error](../standard-library/future-error-class.md) that has an error code of `no_state`.

If [set_exception](#set_exception), `set_exception_at_thread_exit`, [set_value](#set_value), or [set_value_at_thread_exit](#set_value_at_thread_exit) has already been called for a `promise` object that has the same associated asynchronous state, this method throws a `future_error` that has an error code of `promise_already_satisfied`.

In contrast to [set_exception](#set_exception), this method does not set the associated asynchronous state to ready until after all thread-local objects in the current thread have been destroyed. Typically, threads that are blocked on the associated asynchronous state are not unblocked until the current thread exits.

## <a name="set_value"></a> promise::set_value

Atomically stores a value as the result of this `promise` object and sets the *associated asynchronous state* to *ready*.

```cpp
void promise::set_value(const Ty& Val);
void promise::set_value(Ty&& Val);
void promise<Ty&>::set_value(Ty& Val);
void promise<void>::set_value();
```

### Parameters

*Val*\
The value to be stored as the result.

### Remarks

If the `promise` object has no associated asynchronous state, this method throws a [future_error](../standard-library/future-error-class.md) that has an error code of `no_state`.

If [set_exception](#set_exception), [set_exception_at_thread_exit](#set_exception_at_thread_exit), `set_value`, or [set_value_at_thread_exit](#set_value_at_thread_exit) has already been called for a `promise` object that has the same associated asynchronous state, this method throws a `future_error` that has an error code of `promise_already_satisfied`.

As a result of this method, any threads that are blocked on the associated asynchronous state become unblocked.

The first method also throws any exception that is thrown when *Val* is copied into the associated asynchronous state. In this situation, the associated asynchronous state is not set to ready.

The second method also throws any exception that is thrown when *Val* is moved into the associated asynchronous state. In this situation, the associated asynchronous state is not set to ready.

For the partial specialization `promise<Ty&>`, the stored value is in effect a reference to *Val*.

For the specialization `promise<void>`, no stored value exists.

## <a name="set_value_at_thread_exit"></a> promise::set_value_at_thread_exit

Atomically stores a value as the result of this `promise` object.

```cpp
void promise::set_value_at_thread_exit(const Ty& Val);
void promise::set_value_at_thread_exit(Ty&& Val);
void promise<Ty&>::set_value_at_thread_exit(Ty& Val);
void promise<void>::set_value_at_thread_exit();
```

### Parameters

*Val*\
The value to be stored as the result.

### Remarks

If the promise object has no *associated asynchronous state*, this method throws a [future_error](../standard-library/future-error-class.md) that has an error code of `no_state`.

If [set_exception](#set_exception), [set_exception_at_thread_exit](#set_exception_at_thread_exit), [set_value](#set_value), or `set_value_at_thread_exit` has already been called for a `promise` object that has the same associated asynchronous state, this method throws a `future_error` that has an error code of `promise_already_satisfied`.

In contrast to `set_value`, the associated asynchronous state is not set to ready until after all thread-local objects in the current thread have been destroyed. Typically, threads that are blocked on the associated asynchronous state are not unblocked until the current thread exits.

The first method also throws any exception that is thrown when *Val* is copied into the associated asynchronous state.

The second method also throws any exception that is thrown when *Val* is moved into the associated asynchronous state.

For the partial specialization `promise<Ty&>`, the stored value is effectively a reference to *Val*.

For the specialization `promise<void>`, no stored value exists.

## <a name="swap"></a> promise::swap

Exchanges the *associated asynchronous state* of this promise object with that of a specified object.

```cpp
void swap(promise& Other) noexcept;
```

### Parameters

*Other*\
A `promise` object.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
