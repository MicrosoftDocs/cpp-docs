---
description: "Learn more about: mutex Class (C++ Standard Library)"
title: "mutex Class (C++ Standard Library)| Microsoft Docs"
ms.date: "11/04/2016"
f1_keywords: ["mutex/std::mutex", "mutex/std::mutex::mutex", "mutex/std::mutex::lock", "mutex/std::mutex::native_handle", "mutex/std::mutex::try_lock", "mutex/std::mutex::unlock"]
ms.assetid: 7999d055-f74f-4303-810f-8d3c9cde2f69
helpviewer_keywords: ["std::mutex [C++]", "std::mutex [C++], mutex", "std::mutex [C++], lock", "std::mutex [C++], native_handle", "std::mutex [C++], try_lock", "std::mutex [C++], unlock"]
---
# mutex Class (C++ Standard Library)

Represents a *mutex type*. Objects of this type can be used to enforce mutual exclusion within a program.

## Syntax

```cpp
class mutex;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[mutex](#mutex)|Constructs a `mutex` object.|
|[mutex::~mutex Destructor](#dtormutex_destructor)|Releases any resources that were used by the `mutex` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[lock](#lock)|Blocks the calling thread until the thread obtains ownership of the `mutex`.|
|[native_handle](#native_handle)|Returns the implementation-specific type that represents the mutex handle.|
|[try_lock](#try_lock)|Attempts to obtain ownership of the `mutex` without blocking.|
|[unlock](#unlock)|Releases ownership of the `mutex`.|

## Requirements

**Header:** \<mutex>

**Namespace:** std

## <a name="lock"></a> mutex::lock

Blocks the calling thread until the thread obtains ownership of the `mutex`.

```cpp
void lock();
```

### Remarks

If the calling thread already owns the `mutex`, the behavior is undefined.

## <a name="mutex"></a> mutex::mutex Constructor

Constructs a `mutex` object that is not locked.

```cpp
constexpr mutex() noexcept;
```

## <a name="dtormutex_destructor"></a> mutex::~mutex Destructor

Releases any resources that are used by the `mutex` object.

```cpp
~mutex();
```

### Remarks

If the object is locked when the destructor runs, the behavior is undefined.

## <a name="native_handle"></a> mutex::native_handle

Returns the implementation-specific type that represents the mutex handle. The mutex handle can be used in implementation-specific ways.

```cpp
native_handle_type native_handle();
```

### Return Value

`native_handle_type` is defined as a `Concurrency::critical_section *` that's cast as `void *`.

## <a name="try_lock"></a> mutex::try_lock

Attempts to obtain ownership of the `mutex` without blocking.

```cpp
bool try_lock();
```

### Return Value

**`true`** if the method successfully obtains ownership of the `mutex`; otherwise, **`false`**.

### Remarks

If the calling thread already owns the `mutex`, the behavior is undefined.

## <a name="unlock"></a> mutex::unlock

Releases ownership of the `mutex`.

```cpp
void unlock();
```

### Remarks

If the calling thread does not own the `mutex`, the behavior is undefined.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[\<mutex>](../standard-library/mutex.md)
