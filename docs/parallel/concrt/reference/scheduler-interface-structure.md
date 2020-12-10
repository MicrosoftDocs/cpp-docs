---
description: "Learn more about: scheduler_interface Structure"
title: "scheduler_interface Structure"
ms.date: "11/04/2016"
f1_keywords: ["scheduler_interface", "PPLINTERFACE/concurrency::scheduler_interface", "PPLINTERFACE/concurrency::scheduler_interface::scheduler_interface::schedule"]
ms.assetid: 4de61c78-a2c6-4698-bd47-964baf7fa287
---
# scheduler_interface Structure

Scheduler Interface

## Syntax

```cpp
struct __declspec(novtable) scheduler_interface;
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[scheduler_interface::schedule](#schedule)||

## Inheritance Hierarchy

`scheduler_interface`

## Requirements

**Header:** pplinterface.h

**Namespace:** concurrency

## <a name="schedule"></a> scheduler_interface::schedule Method

```cpp
virtual void schedule(
    TaskProc_t,
void*) = 0;
```

## See also

[concurrency Namespace](concurrency-namespace.md)
