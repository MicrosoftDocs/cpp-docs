---
description: "Learn more about: &lt;thread&gt; functions"
title: "&lt;thread&gt; functions"
ms.date: "11/04/2016"
f1_keywords: ["thread/std::get_id", "thread/std::sleep_for", "thread/std::sleep_until", "thread/std::swap", "thread/std::yield"]
ms.assetid: bb1aa1ef-fe3f-4e2c-8b6e-e22dbf2f5a19
helpviewer_keywords: ["std::get_id [C++]", "std::sleep_for [C++]", "std::sleep_until [C++]", "std::swap [C++]", "std::yield [C++]"]
---
# &lt;thread&gt; functions

[get_id](#get_id)\
[sleep_for](#sleep_for)\
[sleep_until](#sleep_until)\
[swap](#swap)\
[yield](#yield)

## <a name="get_id"></a> get_id

Uniquely identifies the current thread of execution.

```cpp
thread::id this_thread::get_id() noexcept;
```

### Return Value

An object of type [thread::id](../standard-library/thread-class.md) that uniquely identifies the current thread of execution.

## <a name="sleep_for"></a> sleep_for

Blocks the calling thread.

```cpp
template <class Rep,
class Period>
inline void sleep_for(const chrono::duration<Rep, Period>& Rel_time);
```

### Parameters

*Rel_time*\
A [duration](../standard-library/duration-class.md) object that specifies a time interval.

### Remarks

The function blocks the calling thread for at least the time that's specified by *Rel_time*. This function does not throw any exceptions.

## <a name="sleep_until"></a> sleep_until

Blocks the calling thread at least until the specified time.

```cpp
template <class Clock, class Duration>
void sleep_until(const chrono::time_point<Clock, Duration>& Abs_time);

void sleep_until(const xtime *Abs_time);
```

### Parameters

*Abs_time*\
Represents a point in time.

### Remarks

This function does not throw any exceptions.

## <a name="swap"></a> swap

Swaps the states of two `thread` objects.

```cpp
void swap(thread& Left, thread& Right) noexcept;
```

### Parameters

*Left*\
The left `thread` object.

*Right*\
The right `thread` object.

### Remarks

The function calls `Left.swap(Right)`.

## <a name="yield"></a> yield

Signals the operating system to run other threads, even if the current thread would ordinarily continue to run.

```cpp
inline void yield() noexcept;
```

## See also

[\<thread>](../standard-library/thread.md)
