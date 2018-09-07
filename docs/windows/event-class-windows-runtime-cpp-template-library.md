---
title: "Event Class (Windows Runtime C++ Template Library) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::Event"]
dev_langs: ["C++"]
ms.assetid: 55dfc9fc-62d4-4bb2-9d85-5b6dd88569e8
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Event Class (Windows Runtime C++ Template Library)

Represents an event.

## Syntax

```cpp
class Event : public HandleT<HandleTraits::EventTraits>;
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[Event::Event Constructor (Windows Runtime C++ Template Library)](../windows/event-event-constructor-windows-runtime-cpp-template-library.md)|Initializes a new instance of the **Event** class.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[Event::operator= Operator](../windows/event-operator-assign-operator.md)|Assigns the specified **Event** reference to the current **Event** instance.|

## Inheritance Hierarchy

`HandleT`

`Event`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See Also

[Microsoft::WRL::Wrappers Namespace](../windows/microsoft-wrl-wrappers-namespace.md)