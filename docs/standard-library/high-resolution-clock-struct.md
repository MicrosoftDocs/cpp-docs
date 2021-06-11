---
description: "Learn more about: high_resolution_clock struct"
title: "high_resolution_clock struct | Microsoft Docs"
ms.custom: ""
ms.date: "06/09/2021"
ms.technology: "cpp-standard-libraries"
ms.topic: "reference"
f1_keywords: ["chrono/std::chrono::high_resolution_clock"]
dev_langs: ["C++"]
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# high_resolution_clock struct

Represents a *high_resolution* clock with a nanosecond tick period.\
Specifically, the period is `ratio<1, 1000000000>`  

## Syntax

```cpp
class high_resolution_clock
```

## Members

### Typedefs

|Name|Description|
|----------|-----------------|
|`duration`|A synonym for `nanoseconds`, defined in `<chrono>`.|
|`period`|A synonym for `nano`, defined in `<ratio>`.|
|`rep`|A synonym for **`long long`**, the type that is used to represent the number of clock ticks in the contained instantiation of `duration`.|
|`time_point`|A synonym for `chrono::time_point<high_resolution_clock>`.|

## Functions

|Name|Description|
|-|-|
|`now`|Returns the current time as a `time_point` value.|

## Constants

|Name|Description|
|----------|-----------------|
|`is_steady`|Holds **`true`**. A `high_resolution_clock` is *steady*.|
