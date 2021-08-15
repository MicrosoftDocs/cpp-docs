---
description: "Learn more about: simple_partitioner Class"
title: "simple_partitioner Class"
ms.date: "11/04/2016"
f1_keywords: ["simple_partitioner", "PPL/concurrency::simple_partitioner", "PPL/concurrency::simple_partitioner::simple_partitioner"]
helpviewer_keywords: ["simple_partitioner class"]
ms.assetid: d7e997af-54d1-43f5-abe0-def72df6edb3
---
# simple_partitioner Class

The `simple_partitioner` class represents a static partitioning of the range iterated over by `parallel_for`. The partitioner divides the range into chunks such that each chunk has at least the number of iterations specified by the chunk size.

## Syntax

```cpp
class simple_partitioner;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[simple_partitioner](#ctor)|Constructs a `simple_partitioner` object.|
|[~simple_partitioner Destructor](#dtor)|Destroys a `simple_partitioner` object.|

## Inheritance Hierarchy

`simple_partitioner`

## Requirements

**Header:** ppl.h

**Namespace:** concurrency

## <a name="dtor"></a> ~simple_partitioner

Destroys a `simple_partitioner` object.

```cpp
~simple_partitioner();
```

## <a name="ctor"></a> simple_partitioner

Constructs a `simple_partitioner` object.

```cpp
explicit simple_partitioner(_Size_type _Chunk_size);
```

### Parameters

*_Chunk_size*<br/>
The minimum partition size.

## See also

[concurrency Namespace](concurrency-namespace.md)
