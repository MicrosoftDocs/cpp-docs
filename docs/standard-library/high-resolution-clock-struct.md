---
title: "high_resolution_clock struct | Microsoft Docs"
ms.custom: ""
ms.date: "05/22/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
f1_keywords: ["chrono/std::chrono::high_resolution_clock"]
dev_langs: ["C++"]
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# steady_clock struct

Represents a *high_resolution* clock.

## Syntax

```cpp
class high_resolution_clock
```

### Public typedefs

|Name|Description|
|----------|-----------------|
|`high_resolution_clock::duration`|A synonym for `nanoseconds`, defined in \<chrono>.|
|`high_resolution_clock::period`|A synonym for `nano`, defined in \<ratio>.|
|`high_resolution_clock::rep`|A synonym for **long** **long**, the type that is used to represent the number of clock ticks in the contained instantiation of `duration`.|
|`high_resolution_clock::time_point`|A synonym for `chrono::time_point<high_resolution_clock>`.|

## Public functions

|Function|Description|
|--------------|-----------------|
|`now`|Returns the current time as a `time_point` value.|

## Public constants

|Name|Description|
|----------|-----------------|
|`high_resolution_clock::is_steady`|Holds **true**. A `high_resolution_clock` is *steady*.|

## Requirements

**Header:** \<chrono>

**Namespace:** std::chrono

## See also

- [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)
- [\<chrono>](../standard-library/chrono.md)
