---
description: "Learn more about: DispatchState Structure"
title: "DispatchState Structure"
ms.date: "11/04/2016"
f1_keywords: ["DispatchState", "CONCRTRM/concurrency::DispatchState", "CONCRTRM/concurrency::DispatchState::DispatchState::DispatchState", "CONCRTRM/concurrency::DispatchState::DispatchState::m_dispatchStateSize", "CONCRTRM/concurrency::DispatchState::DispatchState::m_fIsPreviousContextAsynchronouslyBlocked", "CONCRTRM/concurrency::DispatchState::DispatchState::m_reserved"]
helpviewer_keywords: ["DispatchState structure"]
ms.assetid: 8c52546e-1650-48a0-985f-7e4a0fc26a90
---
# DispatchState Structure

The `DispatchState` structure is used to transfer state to the `IExecutionContext::Dispatch` method. It describes the circumstances under which the `Dispatch` method is invoked on an `IExecutionContext` interface.

## Syntax

```cpp
struct DispatchState;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[DispatchState::DispatchState](#ctor)|Constructs a new `DispatchState` object.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[DispatchState::m_dispatchStateSize](#m_dispatchstatesize)|Size of this structure, which is used for versioning.|
|[DispatchState::m_fIsPreviousContextAsynchronouslyBlocked](#m_fispreviouscontextasynchronouslyblocked)|Tells whether this context has entered the `Dispatch` method because the previous context asynchronously blocked. This is used only on the UMS scheduling context, and is set to the value `0` for all other execution contexts.|
|[DispatchState::m_reserved](#m_reserved)|Bits reserved for future information passing.|

## Inheritance Hierarchy

`DispatchState`

## Requirements

**Header:** concrtrm.h

**Namespace:** concurrency

## <a name="ctor"></a> DispatchState::DispatchState Constructor

Constructs a new `DispatchState` object.

```cpp
DispatchState();
```

## <a name="m_dispatchstatesize"></a> DispatchState::m_dispatchStateSize Data Member

Size of this structure, which is used for versioning.

```cpp
unsigned long m_dispatchStateSize;
```

## <a name="m_fispreviouscontextasynchronouslyblocked"></a> DispatchState::m_fIsPreviousContextAsynchronouslyBlocked Data Member

Tells whether this context has entered the `Dispatch` method because the previous context asynchronously blocked. This is used only on the UMS scheduling context, and is set to the value `0` for all other execution contexts.

```cpp
unsigned int m_fIsPreviousContextAsynchronouslyBlocked : 1;
```

## <a name="m_reserved"></a> DispatchState::m_reserved Data Member

Bits reserved for future information passing.

```cpp
unsigned int m_reserved : 31;
```

## See also

[concurrency Namespace](concurrency-namespace.md)
