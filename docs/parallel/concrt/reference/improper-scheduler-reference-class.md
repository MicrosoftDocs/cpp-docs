---
title: "improper_scheduler_reference Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-concrt"]
ms.topic: "reference"
f1_keywords: ["improper_scheduler_reference", "CONCRT/concurrency::improper_scheduler_reference", "CONCRT/concurrency::improper_scheduler_reference::improper_scheduler_reference"]
dev_langs: ["C++"]
helpviewer_keywords: ["improper_scheduler_reference class"]
ms.assetid: 434a7512-7796-4255-92a7-f3bf71c6a7a7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# improper_scheduler_reference Class

This class describes an exception thrown when the `Reference` method is called on a `Scheduler` object that is shutting down, from a context that is not part of that scheduler.

## Syntax

```
class improper_scheduler_reference : public std::exception;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[improper_scheduler_reference](#ctor)|Overloaded. Constructs an `improper_scheduler_reference` object.|

## Inheritance Hierarchy

`exception`

`improper_scheduler_reference`

## Requirements

**Header:** concrt.h

**Namespace:** concurrency

##  <a name="ctor"></a> improper_scheduler_reference

Constructs an `improper_scheduler_reference` object.

```
explicit _CRTIMP improper_scheduler_reference(_In_z_ const char* _Message) throw();

improper_scheduler_reference() throw();
```

### Parameters

*_Message*<br/>
A descriptive message of the error.

## See Also

[concurrency Namespace](concurrency-namespace.md)<br/>
[Scheduler Class](scheduler-class.md)
