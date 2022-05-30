---
description: "Learn more about: <new> typedefs"
title: "<new> typedefs"
ms.date: 05/27/2022
f1_keywords: ["new/std::new_handler"]
ms.assetid: aef01de1-06b5-4b6c-aebc-2c9f423d7e47
---
# `<new>` typedefs

## <a name="hardware_constructive_interference_size"></a> `hardware_constructive_interference_size`

```cpp
inline constexpr size_t hardware_constructive_interference_size = implementation-defined;
```

### Remarks

This number is the maximum recommended size of contiguous memory occupied by two objects accessed with temporal locality by concurrent threads. It must be at least `alignof(max_align_t)`.

### Example

```cpp
struct together {
    atomic<int> dog;
    int puppy;
};

struct kennel {
    // Other data members...
    alignas(sizeof(together)) together pack;
    // Other data members...
};

static_assert(sizeof(together) <= hardware_constructive_interference_size);
```

## <a name="hardware_destructive_interference_size"></a> `hardware_destructive_interference_size`

```cpp
inline constexpr size_t hardware_destructive_interference_size = implementation-defined;
```

### Remarks

This number is the minimum recommended offset between two concurrently accessed objects to avoid performance degradation due to contention introduced by the implementation. It must be at least `alignof(max_align_t)`.

### Example

```cpp
struct keep_apart {
    alignas(hardware_destructive_interference_size) atomic<int> cat;
    alignas(hardware_destructive_interference_size) atomic<int> dog;
};
```

## <a name="new_handler"></a> `new_handler`

The `new_handler` type points to a function suitable for use as a *`new handler`*, a function that can reclaim or release memory.

```cpp
typedef void (*new_handler)();
```

### Remarks

When of function of this type is set by [`std::set_new_handler`](../standard-library/new-functions.md#set_new_handler), the function is called by `operator new` or `operator new[]` when they can't satisfy a request for more storage.

### Example

For an example that uses `new_handler` as a return value, see [`set_new_handler`](../standard-library/new-functions.md#set_new_handler).
