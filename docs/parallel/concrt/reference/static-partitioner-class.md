---
title: "static_partitioner Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-concrt"]
ms.topic: "reference"
f1_keywords: ["static_partitioner", "PPL/concurrency::static_partitioner", "PPL/concurrency::static_partitioner::static_partitioner"]
dev_langs: ["C++"]
helpviewer_keywords: ["static_partitioner class"]
ms.assetid: 2b3dbdf0-6eb9-49f6-8639-03df1d974143
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
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

## See Also

[concurrency Namespace](concurrency-namespace.md)
