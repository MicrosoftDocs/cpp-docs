---
description: "Learn more about: affinity_partitioner Class"
title: "affinity_partitioner Class"
ms.date: "11/04/2016"
f1_keywords: ["affinity_partitioner", "PPL/concurrency::affinity_partitioner", "PPL/concurrency::affinity_partitioner::affinity_partitioner"]
helpviewer_keywords: ["affinity_partitioner class"]
ms.assetid: 31bf7bb1-bd01-491c-9760-d9d60edfccad
---
# affinity_partitioner Class

The `affinity_partitioner` class is similar to the `static_partitioner` class, but it improves cache affinity by its choice of mapping subranges to worker threads. It can improve performance significantly when a loop is re-executed over the same data set, and the data fits in cache. Note that the same `affinity_partitioner` object must be used with subsequent iterations of a parallel loop that is executed over a particular data set, to benefit from data locality.

## Syntax

```cpp
class affinity_partitioner;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[affinity_partitioner](#ctor)|Constructs an `affinity_partitioner` object.|
|[~affinity_partitioner Destructor](#dtor)|Destroys an `affinity_partitioner` object.|

## Inheritance Hierarchy

`affinity_partitioner`

## Requirements

**Header:** ppl.h

**Namespace:** concurrency

## <a name="dtor"></a> ~affinity_partitioner

Destroys an `affinity_partitioner` object.

```cpp
~affinity_partitioner();
```

## <a name="ctor"></a> affinity_partitioner

Constructs an `affinity_partitioner` object.

```cpp
affinity_partitioner();
```

## See also

[concurrency Namespace](concurrency-namespace.md)
