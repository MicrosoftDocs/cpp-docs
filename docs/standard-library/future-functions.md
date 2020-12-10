---
description: "Learn more about: &lt;future&gt; functions"
title: "&lt;future&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["future/std::async", "future/std::future_category", "future/std::make_error_code", "future/std::make_error_condition", "future/std::swap"]
ms.assetid: 1e3acc1e-736a-42dc-ade2-b2fe69aa96bc
helpviewer_keywords: ["std::async [C++]", "std::future_category [C++]", "std::make_error_code [C++]", "std::make_error_condition [C++]", "std::swap [C++]"]
---
# &lt;future&gt; functions

[async](#async)\
[future_category](#future_category)\
[make_error_code](#make_error_code)\
[make_error_condition](#make_error_condition)\
[swap](#swap)|

## <a name="async"></a> async

Represents an *asynchronous provider*.

```cpp
template <class Fn, class... ArgTypes>
future<typename result_of<Fn(ArgTypes...)>::type>
    async(Fn&& fn, ArgTypes&&... args);

template <class Fn, class... ArgTypes>
future<typename result_of<Fn(ArgTypes...)>::type>
    async(launch policy, Fn&& fn, ArgTypes&&... args);
```

### Parameters

*policy*\
A [launch](../standard-library/future-enums.md#launch) value.

### Remarks

Definitions of abbreviations:

|Abbreviation|Description|
|-|-|
|*dfn*|The result of calling `decay_copy(forward<Fn>(fn))`.|
|*dargs*|The results of the calls `decay_copy(forward<ArgsTypes>(args...))`.|
|*Ty*|The type `result_of<Fn(ArgTypes...)>::type`.|

The first template function returns `async(launch::any, fn, args...)`.

The second function returns a `future<Ty>` object whose *associated asynchronous state* holds a result together with the values of *dfn* and *dargs* and a thread object to manage a separate thread of execution.

Unless `decay<Fn>::type` is a type other than launch, the second function does not participate in overload resolution.

The C++ standard states that if policy is launch::async, the function creates a new thread. However the Microsoft implementation is currently non-conforming. It obtains its threads from the Windows ThreadPool, which in some cases may provide a recycled thread rather than a new one. This means that the `launch::async` policy is actually implemented as `launch::async|launch::deferred`.  Another implication of the ThreadPool-based implementation is that there is no guarantee that thread-local variables will be destroyed when the thread completes. If the thread is recycled and provided to a new call to `async`, the old variables will still exist. We therefore recommend that you do not use thread-local variables with `async`.

If *policy* is `launch::deferred`, the function marks its associated asynchronous state as holding a *deferred function* and returns. The first call to any non-timed function that waits for the associated asynchronous state to be ready in effect calls the deferred function by evaluating `INVOKE(dfn, dargs..., Ty)`.

In all cases, the associated asynchronous state of the `future` object is not set to *ready* until the evaluation of `INVOKE(dfn, dargs..., Ty)` completes, either by throwing an exception or by returning normally. The result of the associated asynchronous state is an exception if one was thrown, or any value that's returned by the evaluation.

> [!NOTE]
> For a `future`—or the last [shared_future](../standard-library/shared-future-class.md)—that's attached to a task started with `std::async`, the destructor blocks if the task has not completed; that is, it blocks if this thread did not yet call `.get()` or `.wait()` and the task is still running. If a `future` obtained from `std::async` is moved outside the local scope, other code that uses it must be aware that its destructor may block for the shared state to become ready.

The pseudo-function `INVOKE` is defined in [\<functional>](../standard-library/functional.md).

## <a name="future_category"></a> future_category

Returns a reference to the [error_category](../standard-library/error-category-class.md) object that characterizes errors that are associated with `future` objects.

```cpp
const error_category& future_category() noexcept;
```

## <a name="make_error_code"></a> make_error_code

Creates an [error_code](../standard-library/error-code-class.md) together with the [error_category](../standard-library/error-category-class.md) object that characterizes [future](../standard-library/future-class.md) errors.

```cpp
inline error_code make_error_code(future_errc Errno) noexcept;
```

### Parameters

*Errno*\
A [future_errc](../standard-library/future-enums.md#future_errc) value that identifies the reported error.

### Return Value

`error_code(static_cast<int>(Errno), future_category());`

## <a name="make_error_condition"></a> make_error_condition

Creates an [error_condition](../standard-library/error-condition-class.md) together with the [error_category](../standard-library/error-category-class.md) object that characterizes [future](../standard-library/future-class.md) errors.

```cpp
inline error_condition make_error_condition(future_errc Errno) noexcept;
```

### Parameters

*Errno*\
A [future_errc](../standard-library/future-enums.md#future_errc) value that identifies the reported error.

### Return Value

`error_condition(static_cast<int>(Errno), future_category());`

## <a name="swap"></a> swap

Exchanges the *associated asynchronous state* of one `promise` object with that of another.

```cpp
template <class Ty>
void swap(promise<Ty>& Left, promise<Ty>& Right) noexcept;

template <class Ty, class... ArgTypes>
void swap(packaged_task<Ty(ArgTypes...)>& Left, packaged_task<Ty(ArgTypes...)>& Right) noexcept;
```

### Parameters

*Left*\
The left `promise` object.

*Right*\
The right `promise` object.

## See also

[\<future>](../standard-library/future.md)
