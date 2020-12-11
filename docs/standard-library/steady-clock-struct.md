---
description: "Learn more about: steady_clock struct"
title: "steady_clock struct"
ms.date: "05/22/2018"
f1_keywords: ["chrono/std::chrono::steady_clock"]
ms.assetid: 970d12ec-fc80-4391-a2f7-b57b2aec668d
---
# steady_clock struct

Represents a *steady* clock.

## Syntax

```cpp
struct steady_clock;
```

## Remarks

On Windows, `steady_clock` wraps the `QueryPerformanceCounter` function.

A clock is *monotonic* if the value that is returned by a first call to `now` is always less than or equal to the value that is returned by a subsequent call to `now`. A clock is *steady* if it is *monotonic* and if the time between clock ticks is constant.

`high_resolution_clock` is a typedef for `steady_clock`.

### Public typedefs

|Name|Description|
|----------|-----------------|
|`steady_clock::duration`|A synonym for `nanoseconds`, defined in \<chrono>.|
|`steady_clock::period`|A synonym for `nano`, defined in \<ratio>.|
|`steady_clock::rep`|A synonym for **`long long`**, the type that is used to represent the number of clock ticks in the contained instantiation of `duration`.|
|`steady_clock::time_point`|A synonym for `chrono::time_point<steady_clock>`.|

## Public functions

|Function|Description|
|--------------|-----------------|
|`now`|Returns the current time as a `time_point` value.|

## Public constants

|Name|Description|
|----------|-----------------|
|`steady_clock::is_steady`|Holds **`true`**. A `steady_clock` is *steady*.|

## Requirements

**Header:** \<chrono>

**Namespace:** std::chrono

## See also

- [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
- [\<chrono>](../standard-library/chrono.md)
- [system_clock Structure](../standard-library/system-clock-structure.md)
