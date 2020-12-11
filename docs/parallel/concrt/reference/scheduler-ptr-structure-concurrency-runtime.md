---
description: "Learn more about: scheduler_ptr Structure"
title: "scheduler_ptr Structure"
ms.date: "11/04/2016"
f1_keywords: ["scheduler_ptr", "PPLINTERFACE/concurrency::scheduler_ptr", "PPLINTERFACE/concurrency::scheduler_ptr::scheduler_ptr::scheduler_ptr", "PPLINTERFACE/concurrency::scheduler_ptr::scheduler_ptr::get", "PPLINTERFACE/concurrency::scheduler_ptr::scheduler_ptr::operator bool"]
ms.assetid: e88c84af-c306-476d-aef1-f42a0fa0a80f
---
# scheduler_ptr Structure

Represents a pointer to a scheduler. This class exists to allow the specification of a shared lifetime by using shared_ptr or just a plain reference by using raw pointer.

## Syntax

```cpp
struct scheduler_ptr;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[scheduler_ptr::scheduler_ptr](#ctor)|Overloaded. Creates a scheduler pointer from shared_ptr to scheduler|

### Public Methods

|Name|Description|
|----------|-----------------|
|[scheduler_ptr::get](#get)|Returns the raw pointer to the scheduler|

### Public Operators

|Name|Description|
|----------|-----------------|
|[scheduler_ptr::operator bool](#operator_bool)|Test whether the scheduler pointer is non-null|
|[scheduler_ptr::operator-&gt;](#operator_ptr)|Behave like a pointer|

## Inheritance Hierarchy

`scheduler_ptr`

## Requirements

**Header:** pplinterface.h

**Namespace:** concurrency

## <a name="get"></a> scheduler_ptr::get Method

Returns the raw pointer to the scheduler.

```cpp
scheduler_interface* get() const;
```

### Return Value

## <a name="operator_bool"></a> scheduler_ptr::operator bool

Tests whether the scheduler pointer is non-null.

```cpp
operator bool() const;
```

## <a name="operator_ptr"></a> scheduler_ptr::operator-&gt;

Behaves like a pointer.

```cpp
scheduler_interface* operator->() const;
```

### Return Value

## <a name="ctor"></a> scheduler_ptr::scheduler_ptr Constructor

Creates a scheduler pointer from shared_ptr to scheduler.

```cpp
explicit scheduler_ptr(std::shared_ptr<scheduler_interface> scheduler);
explicit scheduler_ptr(_In_opt_ scheduler_interface* pScheduler);
```

### Parameters

*scheduler*<br/>
The scheduler to convert.

*pScheduler*<br/>
The scheduler pointer to convert.

## See also

[concurrency Namespace](concurrency-namespace.md)
