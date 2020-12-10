---
description: "Learn more about: packaged_task Class"
title: "packaged_task Class"
ms.date: "11/04/2016"
f1_keywords: ["future/std::packaged_task", "future/std::packaged_task::packaged_task", "future/std::packaged_task::get_future", "future/std::packaged_task::make_ready_at_thread_exit", "future/std::packaged_task::reset", "future/std::packaged_task::swap", "future/std::packaged_task::valid", "future/std::packaged_task::operator()", "future/std::packaged_task::operator bool"]
ms.assetid: 0a72cbe3-f22a-4bfe-8e50-dcb268c98780
helpviewer_keywords: ["std::packaged_task [C++]", "std::packaged_task [C++], packaged_task", "std::packaged_task [C++], get_future", "std::packaged_task [C++], make_ready_at_thread_exit", "std::packaged_task [C++], reset", "std::packaged_task [C++], swap", "std::packaged_task [C++], valid"]
---
# packaged_task Class

Describes an *asynchronous provider* that is a call wrapper whose call signature is `Ty(ArgTypes...)`. Its *associated asynchronous state* holds a copy of its callable object in addition to the potential result.

## Syntax

```cpp
template <class>
class packaged_task;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[packaged_task](#packaged_task)|Constructs a `packaged_task` object.|
|[packaged_task::~packaged_task Destructor](#dtorpackaged_task_destructor)|Destroys a `packaged_task` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[get_future](#get_future)|Returns a [future](../standard-library/future-class.md) object that has the same associated asynchronous state.|
|[make_ready_at_thread_exit](#make_ready_at_thread_exit)|Calls the callable object that's stored in the associated asynchronous state and atomically stores the returned value.|
|[reset](#reset)|Replaces the associated asynchronous state.|
|[swap](#swap)|Exchanges the associated asynchronous state with that of a specified object.|
|[valid](#valid)|Specifies whether the object has an associated asynchronous state.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[packaged_task::operator=](#op_eq)|Transfers an associated asynchronous state from a specified object.|
|[packaged_task::operator()](#op_call)|Calls the callable object that's stored in the associated asynchronous state, atomically stores the returned value, and sets the state to *ready*.|
|[packaged_task::operator bool](#op_bool)|Specifies whether the object has an associated asynchronous state.|

## Requirements

**Header:** \<future>

**Namespace:** std

## <a name="get_future"></a> packaged_task::get_future

Returns an object of type `future<Ty>` that has the same *associated asynchronous state*.

```cpp
future<Ty> get_future();
```

### Remarks

If the `packaged_task` object does not have an associated asynchronous state, this method throws a [future_error](../standard-library/future-error-class.md) that has an error code of `no_state`.

If this method has already been called for a `packaged_task` object that has the same associated asynchronous state, the method throws a `future_error` that has an error code of `future_already_retrieved`.

## <a name="make_ready_at_thread_exit"></a> packaged_task::make_ready_at_thread_exit

Calls the callable object that's stored in the *associated asynchronous state* and atomically stores the returned value.

```cpp
void make_ready_at_thread_exit(ArgTypes... args);
```

### Remarks

If the `packaged_task` object doesn't have an associated asynchronous state, this method throws a [future_error](../standard-library/future-error-class.md) that has an error code of `no_state`.

If this method or [make_ready_at_thread_exit](#make_ready_at_thread_exit) has already been called for a `packaged_task` object that has the same associated asynchronous state, the method throws a `future_error` that has an error code of `promise_already_satisfied`.

Otherwise, this operator calls `INVOKE(fn, args..., Ty)`, where *fn* is the callable object that's stored in the associated asynchronous state. Any returned value is stored atomically as the returned result of the associated asynchronous state.

In contrast to [packaged_task::operator()](#op_call), the associated asynchronous state is not set to `ready` until after all thread-local objects in the calling thread have been destroyed. Typically, threads that are blocked on the associated asynchronous state are not unblocked until the calling thread exits.

## <a name="op_eq"></a> packaged_task::operator=

Transfers the *associated asynchronous state* from a specified object.

```cpp
packaged_task& operator=(packaged_task&& Right);
```

### Parameters

*Right*\
A `packaged_task` object.

### Return Value

`*this`

### Remarks

After the operation, *Right* no longer has an associated asynchronous state.

## <a name="op_call"></a> packaged_task::operator()

Calls the callable object that's stored in the *associated asynchronous state*, atomically stores the returned value, and sets the state to *ready*.

```cpp
void operator()(ArgTypes... args);
```

### Remarks

If the `packaged_task` object doesn't have an associated asynchronous state, this method throws a [future_error](../standard-library/future-error-class.md) that has an error code of `no_state`.

If this method or [make_ready_at_thread_exit](#make_ready_at_thread_exit) has already been called for a `packaged_task` object that has the same associated asynchronous state, the method throws a `future_error` that has an error code of `promise_already_satisfied`.

Otherwise, this operator calls `INVOKE(fn, args..., Ty)`, where *fn* is the callable object that's stored in the associated asynchronous state. Any returned value is stored atomically as the returned result of the associated asynchronous state, and the state is set to ready. As a result, any threads that are blocked on the associated asynchronous state become unblocked.

## <a name="op_bool"></a> packaged_task::operator bool

Specifies whether the object has an `associated asynchronous state`.

```cpp
operator bool() const noexcept;
```

### Return Value

**`true`** if the object has an associated asynchronous state; otherwise, **`false`**.

## <a name="packaged_task"></a> packaged_task::packaged_task Constructor

Constructs a `packaged_task` object.

```cpp
packaged_task() noexcept;
packaged_task(packaged_task&& Right) noexcept;
template <class Fn>
   explicit packaged_task(Fn&& fn);

template <class Fn, class Alloc>
   explicit packaged_task(
      allocator_arg_t, const Alloc& alloc, Fn&& fn);
```

### Parameters

*Right*\
A `packaged_task` object.

*alloc*\
A memory allocator. For more information, see [\<allocators>](../standard-library/allocators-header.md).

*fn*\
A function object.

### Remarks

The first constructor constructs a `packaged_task` object that has no *associated asynchronous state*.

The second constructor constructs a `packaged_task` object and transfers the associated asynchronous state from *Right*. After the operation, *Right* no longer has an associated asynchronous state.

The third constructor constructs a `packaged_task` object that has a copy of *fn* stored in its associated asynchronous state.

The fourth constructor constructs a `packaged_task` object that has a copy of *fn* stored in its associated asynchronous state, and uses `alloc` for memory allocation.

## <a name="dtorpackaged_task_destructor"></a> packaged_task::~packaged_task Destructor

Destroys a `packaged_task` object.

```cpp
~packaged_task();
```

### Remarks

If the *associated asynchronous state* is not *ready*, the destructor stores a [future_error](../standard-library/future-error-class.md) exception that has an error code of `broken_promise` as the result in the associated asynchronous state, and any threads that are blocked on the associated asynchronous state become unblocked.

## <a name="reset"></a> packaged_task::reset

Uses a new *associated asynchronous state* to replace the existing associated asynchronous state.

```cpp
void reset();
```

### Remarks

In effect, this method executes `*this = packaged_task(move(fn))`, where *fn* is the function object that's stored in the associated asynchronous state for this object. Therefore, the state of the object is cleared, and [get_future](#get_future), [operator()](#op_call), and [make_ready_at_thread_exit](#make_ready_at_thread_exit) can be called as if on a newly-constructed object.

## <a name="swap"></a> packaged_task::swap

Exchanges the associated asynchronous state with that of a specified object.

```cpp
void swap(packaged_task& Right) noexcept;
```

### Parameters

*Right*\
A `packaged_task` object.

## <a name="valid"></a> packaged_task::valid

Specifies whether the object has an `associated asynchronous state`.

```cpp
bool valid() const;
```

### Return Value

**`true`** if the object has an associated asynchronous state; otherwise, **`false`**.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[\<future>](../standard-library/future.md)
