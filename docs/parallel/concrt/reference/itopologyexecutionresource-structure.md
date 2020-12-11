---
description: "Learn more about: ITopologyExecutionResource Structure"
title: "ITopologyExecutionResource Structure"
ms.date: "11/04/2016"
f1_keywords: ["ITopologyExecutionResource", "CONCRTRM/concurrency::ITopologyExecutionResource", "CONCRTRM/concurrency::ITopologyExecutionResource::ITopologyExecutionResource::GetId", "CONCRTRM/concurrency::ITopologyExecutionResource::ITopologyExecutionResource::GetNext"]
helpviewer_keywords: ["ITopologyExecutionResource structure"]
ms.assetid: e36756f7-4cd9-4fa6-ba60-23fea58ef2bf
---
# ITopologyExecutionResource Structure

An interface to an execution resource as defined by the Resource Manager.

## Syntax

```cpp
struct ITopologyExecutionResource;
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[ITopologyExecutionResource::GetId](#getid)|Returns the Resource Manager's unique identifier for this execution resource.|
|[ITopologyExecutionResource::GetNext](#getnext)|Returns an interface to the next execution resource in enumeration order.|

## Remarks

This interface is typically utilized to walk the topology of the system as observed by the Resource Manager.

## Inheritance Hierarchy

`ITopologyExecutionResource`

## Requirements

**Header:** concrtrm.h

**Namespace:** concurrency

## <a name="getid"></a> ITopologyExecutionResource::GetId Method

Returns the Resource Manager's unique identifier for this execution resource.

```cpp
virtual unsigned int GetId() const = 0;
```

### Return Value

The Resource Manager's unique identifier for this execution resource.

## <a name="getnext"></a> ITopologyExecutionResource::GetNext Method

Returns an interface to the next execution resource in enumeration order.

```cpp
virtual ITopologyExecutionResource *GetNext() const = 0;
```

### Return Value

An interface to the next execution resource in enumeration order. If there are no more nodes in enumeration order of the node to which this execution resource belongs, this method will return the value `NULL`.

## See also

[concurrency Namespace](concurrency-namespace.md)
