---
title: "static_partitioner Class"
ms.date: "11/04/2016"
f1_keywords: ["static_partitioner", "PPL/concurrency::static_partitioner", "PPL/concurrency::static_partitioner::static_partitioner"]
helpviewer_keywords: ["static_partitioner class"]
ms.assetid: 2b3dbdf0-6eb9-49f6-8639-03df1d974143
---
# static_partitioner Class

The `static_partitioner` class represents a static partitioning of the range iterated over by `parallel_for`. The partitioner divides the range into as many chunks as there are workers available to the underyling scheduler.

## Syntax

```
class static_partitioner;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[static_partitioner](#ctor)|Constructs a `static_partitioner` object.|
|[~static_partitioner Destructor](#dtor)|Destroys a `static_partitioner` object.|

## Inheritance Hierarchy

`static_partitioner`

## Requirements

**Header:** ppl.h

**Namespace:** concurrency

##  <a name="dtor"></a> ~static_partitioner

Destroys a `static_partitioner` object.

```
~static_partitioner();
```

##  <a name="ctor"></a> static_partitioner

Constructs a `static_partitioner` object.

```
static_partitioner();
```

## See also

- [concurrency Namespace](concurrency-namespace.md)
