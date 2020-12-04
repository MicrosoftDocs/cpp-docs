---
description: "Learn more about: recursive_mutex Class"
title: "recursive_mutex Class"
ms.date: "11/04/2016"
f1_keywords: ["mutex/std::recursive_mutex", "mutex/std::recursive_mutex::recursive_mutex", "mutex/std::recursive_mutex::lock", "mutex/std::recursive_mutex::try_lock", "mutex/std::recursive_mutex::unlock"]
ms.assetid: eb5ffd1b-7e78-4559-8391-bb220ead42fc
helpviewer_keywords: ["std::recursive_mutex [C++]", "std::recursive_mutex [C++], recursive_mutex", "std::recursive_mutex [C++], lock", "std::recursive_mutex [C++], try_lock", "std::recursive_mutex [C++], unlock"]
---
# recursive_mutex Class

Represents a *mutex type*. In contrast to [mutex](../standard-library/mutex-class-stl.md), the behavior of calls to locking methods for objects that are already locked is well-defined.

## Syntax

```cpp
class recursive_mutex;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[recursive_mutex](#recursive_mutex)|Constructs a `recursive_mutex` object.|
|[~recursive_mutex Destructor](#dtorrecursive_mutex_destructor)|Releases any resources that are used by the `recursive_mutex` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[lock](#lock)|Blocks the calling thread until the thread obtains ownership of the mutex.|
|[try_lock](#try_lock)|Attempts to obtain ownership of the mutex without blocking.|
|[unlock](#unlock)|Releases ownership of the mutex.|

## Requirements

**Header:** \<mutex>

**Namespace:** std

## <a name="lock"></a> lock

Blocks the calling thread until the thread obtains ownership of the `mutex`.

```cpp
void lock();
```

### Remarks

If the calling thread already owns the `mutex`, the method returns immediately, and the previous lock remains in effect.

## <a name="recursive_mutex"></a> recursive_mutex

Constructs a `recursive_mutex` object that is not locked.

```cpp
recursive_mutex();
```

## <a name="dtorrecursive_mutex_destructor"></a>  ~recursive_mutex

Releases any resources that are used by the object.

```cpp
~recursive_mutex();
```

### Remarks

If the object is locked when the destructor runs, the behavior is undefined.

## <a name="try_lock"></a> try_lock

Attempts to obtain ownership of the `mutex` without blocking.

```cpp
bool try_lock() noexcept;
```

### Return Value

**`true`** if the method successfully obtains ownership of the `mutex` or if the calling thread already owns the `mutex**; otherwise, **false`.

### Remarks

If the calling thread already owns the `mutex`, the function immediately returns **`true`**, and the previous lock remains in effect.

## <a name="unlock"></a> unlock

Releases ownership of the mutex.

```cpp
void unlock();
```

### Remarks

This method releases ownership of the `mutex` only after it is called as many times as [lock](#lock) and [try_lock](#try_lock) have been called successfully on the `recursive_mutex` object.

If the calling thread does not own the `mutex`, the behavior is undefined.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[\<mutex>](../standard-library/mutex.md)
