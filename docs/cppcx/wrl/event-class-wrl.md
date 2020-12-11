---
description: "Learn more about: Event Class (WRL)"
title: "Event Class (WRL)"
ms.date: "09/24/2018"
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::Event", "corewrappers/Microsoft::WRL::Wrappers::Event::Event", "corewrappers/Microsoft::WRL::Wrappers::Event::operator="]
helpviewer_keywords: ["Microsoft::WRL::Wrappers::Event class", "Microsoft::WRL::Wrappers::Event::Event, constructor", "Microsoft::WRL::Wrappers::Event::operator= operator"]
ms.assetid: 55dfc9fc-62d4-4bb2-9d85-5b6dd88569e8
---
# Event Class (WRL)

Represents an event.

## Syntax

```cpp
class Event : public HandleT<HandleTraits::EventTraits>;
```

## Members

### Public Constructors

Name                   | Description
---------------------- | ------------------------------------------------
[Event::Event](#event) | Initializes a new instance of the `Event` class.

### Public Operators

Name                                 | Description
------------------------------------ | ------------------------------------------------------------------------
[Event::operator=](#operator-assign) | Assigns the specified `Event` reference to the current `Event` instance.

## Inheritance Hierarchy

`HandleT`

`Event`

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## <a name="event"></a> Event::Event

Initializes a new instance of the `Event` class.

```cpp
explicit Event(
   HANDLE h = HandleT::Traits::GetInvalidValue()
);
WRL_NOTHROW Event(
   _Inout_ Event&& h
);
```

### Parameters

*h*<br/>
Handle to an event. By default, *h* is initialized to **`nullptr`**.

## <a name="operator-assign"></a> Event::operator=

Assigns the specified `Event` reference to the current `Event` instance.

```cpp
WRL_NOTHROW Event& operator=(
   _Inout_ Event&& h
);
```

### Parameters

*h*<br/>
An rvalue-reference to an `Event` instance.

### Return Value

A pointer to the current `Event` instance.
