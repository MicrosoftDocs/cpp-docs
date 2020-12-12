---
description: "Learn more about: &lt;mutex&gt; functions and variables"
title: "&lt;mutex&gt; functions and variables"
ms.date: "11/04/2016"
f1_keywords: ["mutex/std::adopt_lock", "mutex/std::call_once", "mutex/std::defer_lock", "mutex/std::lock", "mutex/std::try_to_lock"]
ms.assetid: 78ab3c8b-c7db-4226-ac93-e2e78ff8b964
helpviewer_keywords: ["std::adopt_lock [C++]", "std::call_once [C++]", "std::defer_lock [C++]", "std::lock [C++]", "std::try_to_lock [C++]"]
---
# &lt;mutex&gt; functions and variables

## <a name="adopt_lock"></a> adopt_lock

Represents an object that can be passed to constructors for [lock_guard](../standard-library/lock-guard-class.md) and [unique_lock](../standard-library/unique-lock-class.md) to indicate that the mutex object that is also being passed to the constructor is locked.

```cpp
const adopt_lock_t adopt_lock;
```

## <a name="call_once"></a> call_once

Provides a mechanism for calling a specified callable object exactly once during execution.

```cpp
template <class Callable, class... Args>
void call_once(once_flag& Flag,
    Callable F&&, Args&&... A);
```

### Parameters

*Flag*\
A [once_flag](../standard-library/once-flag-structure.md) object that ensures that the callable object is only called once.

*F*\
A callable object.

*A*\
An argument list.

### Remarks

If *Flag* is not valid, the function throws a [system_error](../standard-library/system-error-class.md) that has an error code of `invalid_argument`. Otherwise, the template function uses its *Flag* argument to ensure that it calls `F(A...)` successfully exactly once, regardless of how many times the template function is called. If `F(A...)` exits by throwing an exception, the call was not successful.

## <a name="defer_lock"></a> defer_lock

Represents an object that can be passed to the constructor for [unique_lock](../standard-library/unique-lock-class.md). This indicates that the constructor should not lock the mutex object that's also being passed to it.

```cpp
const defer_lock_t defer_lock;
```

## <a name="lock"></a> lock

Attempts to lock all arguments without deadlock.

```cpp
template <class L1, class L2, class... L3>
void lock(L1&, L2&, L3&...);
```

### Remarks

The arguments to the template function must be *mutex types*, except that calls to `try_lock` might throw exceptions.

The function locks all of its arguments without deadlock by calls to `lock`, `try_lock`, and `unlock`. If a call to `lock` or `try_lock` throws an exception, the function calls `unlock` on any of the mutex objects that were successfully locked before rethrowing the exception.

## <a name="swap"></a> swap

```cpp
template <class Mutex>
void swap(unique_lock<Mutex>& x, unique_lock<Mutex>& y) noexcept;
```

## <a name="try_lock"></a> try_lock

```cpp
template <class L1, class L2, class... L3> int try_lock(L1&, L2&, L3&...);
```

## <a name="try_to_lock"></a> try_to_lock

Represents an object that can be passed to the constructor for [unique_lock](../standard-library/unique-lock-class.md) to indicate that the constructor should try to unlock the `mutex` that is also being passed to it without blocking.

```cpp
const try_to_lock_t try_to_lock;
```
