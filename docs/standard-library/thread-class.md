---
description: "Learn more about: thread Class"
title: "thread Class"
ms.date: "11/04/2016"
f1_keywords: ["thread/std::thread", "thread/std::thread::id Class", "thread/std::thread::thread", "thread/std::thread::detach", "thread/std::thread::get_id", "thread/std::thread::hardware_concurrency", "thread/std::thread::join", "thread/std::thread::joinable", "thread/std::thread::native_handle", "thread/std::thread::swap"]
ms.assetid: df249bc7-ff81-4ff9-a6d6-5e3d9a8f56a1
helpviewer_keywords: ["std::thread [C++]", "std::thread [C++], thread", "std::thread [C++], detach", "std::thread [C++], get_id", "std::thread [C++], hardware_concurrency", "std::thread [C++], join", "std::thread [C++], joinable", "std::thread [C++], native_handle", "std::thread [C++], swap"]
---
# thread Class

Defines an object that's used to observe and manage a thread of execution within an application.

## Syntax

```cpp
class thread;
```

## Remarks

You can use a `thread` object to observe and manage a thread of execution within an application. A thread object that's created by using the default constructor is not associated with any thread of execution. A thread object that's constructed by using a callable object creates a new thread of execution and calls the callable object in that thread. Thread objects can be moved but not copied. Therefore, a thread of execution can be associated with only one thread object.

Every thread of execution has a unique identifier of type `thread::id`. The function `this_thread::get_id` returns the identifier of the calling thread. The member function `thread::get_id` returns the identifier of the thread that's managed by a thread object. For a default-constructed thread object, the `thread::get_id` method returns an object that has a value that's the same for all default-constructed thread objects and different from the value that's returned by `this_thread::get_id` for any thread of execution that could be joined at the time of the call.

## Members

### Public Classes

|Name|Description|
|----------|-----------------|
|[thread::id Class](#id_class)|Uniquely identifies the associated thread.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[thread](#thread)|Constructs a `thread` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[detach](#detach)|Detaches the associated thread from the `thread` object.|
|[get_id](#get_id)|Returns the unique identifier of the associated thread.|
|[hardware_concurrency](#hardware_concurrency)|Static. Returns an estimate of the number of hardware thread contexts.|
|[join](#join)|Blocks until the associated thread completes.|
|[joinable](#joinable)|Specifies whether the associated thread is joinable.|
|[native_handle](#native_handle)|Returns the implementation-specific type that represents the thread handle.|
|[swap](#swap)|Swaps the object state with a specified `thread` object.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[thread::operator=](#op_eq)|Associates a thread with the current `thread` object.|

## Requirements

**Header:** \<thread>

**Namespace:** std

## <a name="detach"></a> thread::detach

Detaches the associated thread. The operating system becomes responsible for releasing thread resources on termination.

```cpp
void detach();
```

### Remarks

After a call to `detach`, subsequent calls to [get_id](#get_id) return [id](#id_class).

If the thread that's associated with the calling object is not joinable, the function throws a [system_error](../standard-library/system-error-class.md) that has an error code of `invalid_argument`.

If the thread that's associated with the calling object is invalid, the function throws a `system_error` that has an error code of `no_such_process`.

## <a name="get_id"></a> thread::get_id

Returns a unique identifier for the associated thread.

```cpp
id get_id() const noexcept;
```

### Return Value

A [thread::id](#id_class) object that uniquely identifies the associated thread, or `thread::id()` if no thread is associated with the object.

## <a name="hardware_concurrency"></a> thread::hardware_concurrency

Static method that returns an estimate of the number of hardware thread contexts.

```cpp
static unsigned int hardware_concurrency() noexcept;
```

### Return Value

An estimate of the number of hardware thread contexts. If the value cannot be computed or is not well defined, this method returns 0.

## <a name="id_class"></a> thread::id Class

Provides a unique identifier for each thread of execution in the process.

```cpp
class thread::id {
    id() noexcept;
};
```

### Remarks

The default constructor creates an object that does not compare equal to the `thread::id` object for any existing thread.

All default-constructed `thread::id` objects compare equal.

## <a name="join"></a> thread::join

Blocks until the thread of execution that's associated with the calling object completes.

```cpp
void join();
```

### Remarks

If the call succeeds, subsequent calls to [get_id](#get_id) for the calling object return a default [thread::id](#id_class) that does not compare equal to the `thread::id` of any existing thread; if the call does not succeed, the value that's returned by `get_id` is unchanged.

## <a name="joinable"></a> thread::joinable

Specifies whether the associated thread is *joinable*.

```cpp
bool joinable() const noexcept;
```

### Return Value

**`true`** if the associated thread is *joinable*; otherwise, **`false`**.

### Remarks

A thread object is *joinable* if `get_id() != id()`.

## <a name="native_handle"></a> thread::native_handle

Returns the implementation-specific type that represents the thread handle. The thread handle can be used in implementation-specific ways.

```cpp
native_handle_type native_handle();
```

### Return Value

`native_handle_type` is defined as a Win32 `HANDLE` that's cast as `void *`.

## <a name="op_eq"></a> thread::operator=

Associates the thread of a specified object with the current object.

```cpp
thread& operator=(thread&& Other) noexcept;
```

### Parameters

*Other*\
A `thread` object.

### Return Value

`*this`

### Remarks

The method calls detach if the calling object is joinable.

After the association is made, `Other` is set to a default-constructed state.

## <a name="swap"></a> thread::swap

Swaps the object state with that of a specified `thread` object.

```cpp
void swap(thread& Other) noexcept;
```

### Parameters

*Other*\
A `thread` object.

## <a name="thread"></a> thread::thread Constructor

Constructs a `thread` object.

```cpp
thread() noexcept;
template <class Fn, class... Args>
explicit thread(Fn&& F, Args&&... A);

thread(thread&& Other) noexcept;
```

### Parameters

*F*\
An application-defined function to be executed by the thread.

*A*\
A list of arguments to be passed to *F*.

*Other*\
An existing `thread` object.

### Remarks

The first constructor constructs an object that's not associated with a thread of execution. The value that's returned by a call to `get_id` for the constructed object is `thread::id()`.

The second constructor constructs an object that's associated with a new thread of execution and executes the pseudo-function `INVOKE` that's defined in [\<functional>](../standard-library/functional.md). If not enough resources are available to start a new thread, the function throws a [system_error](../standard-library/system-error-class.md) object that has an error code of `resource_unavailable_try_again`. If the call to *F* terminates with an uncaught exception, [terminate](../standard-library/exception-functions.md#terminate) is called.

The third constructor constructs an object that's associated with the thread that's associated with `Other`. `Other` is then set to a default-constructed state.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[\<thread>](../standard-library/thread.md)
