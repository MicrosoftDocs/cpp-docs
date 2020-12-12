---
description: "Learn more about: timed_mutex Class"
title: "timed_mutex Class"
ms.date: "11/04/2016"
f1_keywords: ["mutex/std::timed_mutex", "mutex/std::timed_mutex::timed_mutex", "mutex/std::timed_mutex::lock", "mutex/std::timed_mutex::try_lock", "mutex/std::timed_mutex::try_lock_for", "mutex/std::timed_mutex::try_lock_until", "mutex/std::timed_mutex::unlock"]
ms.assetid: cd198081-6f38-447a-9dba-e06dfbfafe59
helpviewer_keywords: ["std::timed_mutex [C++]", "std::timed_mutex [C++], timed_mutex", "std::timed_mutex [C++], lock", "std::timed_mutex [C++], try_lock", "std::timed_mutex [C++], try_lock_for", "std::timed_mutex [C++], try_lock_until", "std::timed_mutex [C++], unlock"]
---
# timed_mutex Class

Represents a *timed mutex type*. Objects of this type are used to enforce mutual exclusion through time-limited blocking within a program.

## Syntax

```cpp
class timed_mutex;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[timed_mutex](#timed_mutex)|Constructs a `timed_mutex` object that's not locked.|
|[timed_mutex::~timed_mutex Destructor](#dtortimed_mutex_destructor)|Releases any resources that are used by the `timed_mutex` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[lock](#lock)|Blocks the calling thread until the thread obtains ownership of the `mutex`.|
|[try_lock](#try_lock)|Attempts to obtain ownership of the `mutex` without blocking.|
|[try_lock_for](#try_lock_for)|Attempts to obtain ownership of the `mutex` for a specified time interval.|
|[try_lock_until](#try_lock_until)|Attempts to obtain ownership of the `mutex` until a specified time.|
|[unlock](#unlock)|Releases ownership of the `mutex`.|

## Requirements

**Header:** \<mutex>

**Namespace:** std

## <a name="lock"></a> timed_mutex::lock

Blocks the calling thread until the thread obtains ownership of the `mutex`.

```cpp
void lock();
```

### Remarks

If the calling thread already owns the `mutex`, the behavior is undefined.

## <a name="timed_mutex"></a> timed_mutex::timed_mutex Constructor

Constructs a `timed_mutex` object that is not locked.

```cpp
timed_mutex();
```

## <a name="dtortimed_mutex_destructor"></a> timed_mutex::~timed_mutex Destructor

Releases any resources that are used by the `mutex` object.

```cpp
~timed_mutex();
```

### Remarks

If the object is locked when the destructor runs, the behavior is undefined.

## <a name="try_lock"></a> timed_mutex::try_lock

Attempts to obtain ownership of the `mutex` without blocking.

```cpp
bool try_lock();
```

### Return Value

**`true`** if the method successfully obtains ownership of the `mutex`; otherwise, **`false`**.

### Remarks

If the calling thread already owns the `mutex`, the behavior is undefined.

## <a name="try_lock_for"></a> timed_mutex::try_lock_for

Attempts to obtain ownership of the `mutex` without blocking.

```cpp
template <class Rep, class Period>
bool try_lock_for(const chrono::duration<Rep, Period>& Rel_time);
```

### Parameters

*Rel_time*\
A [chrono::duration](../standard-library/duration-class.md) object that specifies the maximum amount of time that the method attempts to obtain ownership of the `mutex`.

### Return Value

**`true`** if the method successfully obtains ownership of the `mutex`; otherwise, **`false`**.

### Remarks

If the calling thread already owns the `mutex`, the behavior is undefined.

## <a name="try_lock_until"></a> timed_mutex::try_lock_until

Attempts to obtain ownership of the `mutex` without blocking.

```cpp
template <class Clock, class Duration>
bool try_lock_for(const chrono::time_point<Clock, Duration>& Abs_time);

bool try_lock_until(const xtime* Abs_time);
```

### Parameters

*Abs_time*\
A point in time that specifies the threshold after which the method no longer attempts to obtain ownership of the `mutex`.

### Return Value

**`true`** if the method successfully obtains ownership of the `mutex`; otherwise, **`false`**.

### Remarks

If the calling thread already owns the `mutex`, the behavior is undefined.

## <a name="unlock"></a> timed_mutex::unlock

Releases ownership of the `mutex`.

```cpp
void unlock();
```

### Remarks

If the calling thread does not own the `mutex`, the behavior is undefined.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[\<mutex>](../standard-library/mutex.md)
