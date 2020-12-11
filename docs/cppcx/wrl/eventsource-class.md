---
description: "Learn more about: EventSource Class"
title: "EventSource Class"
ms.date: "09/12/2018"
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::EventSource", "event/Microsoft::WRL::EventSource::Add", "event/Microsoft::WRL::EventSource::addRemoveLock_", "event/Microsoft::WRL::EventSource::EventSource", "event/Microsoft::WRL::EventSource::GetSize", "event/Microsoft::WRL::EventSource::InvokeAll", "event/Microsoft::WRL::EventSource::Remove", "event/Microsoft::WRL::EventSource::targets_", "event/Microsoft::WRL::EventSource::targetsPointerLock_"]
helpviewer_keywords: ["Microsoft::WRL::EventSource class", "Microsoft::WRL::EventSource::Add method", "Microsoft::WRL::EventSource::addRemoveLock_ data member", "Microsoft::WRL::EventSource::EventSource, constructor", "Microsoft::WRL::EventSource::GetSize method", "Microsoft::WRL::EventSource::InvokeAll method", "Microsoft::WRL::EventSource::Remove method", "Microsoft::WRL::EventSource::targets_ data member", "Microsoft::WRL::EventSource::targetsPointerLock_ data member"]
ms.assetid: 91f1c072-6af4-44e6-b6d8-ac6d0c688dde
---
# EventSource Class

Represents a non-agile event. `EventSource` member functions add, remove, and invoke event handlers. For agile events, use [AgileEventSource](agileeventsource-class.md).

## Syntax

```cpp
template<typename TDelegateInterface>
class EventSource;
```

### Parameters

*TDelegateInterface*<br/>
The interface to a delegate that represents an event handler.

## Members

### Public Constructors

| Name                                     | Description                                            |
| ---------------------------------------- | ------------------------------------------------------ |
| [EventSource::EventSource](#eventsource) | Initializes a new instance of the `EventSource` class. |

### Public Methods

| Name                                 | Description                                                                                                                                                      |
| ------------------------------------ | ---------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| [EventSource::Add](#add)             | Appends the event handler represented by the specified delegate interface to the set of event handlers for the current `EventSource` object.                     |
| [EventSource::GetSize](#getsize)     | Retrieves the number of event handlers associated with the current `EventSource` object.                                                                         |
| [EventSource::InvokeAll](#invokeall) | Calls each event handler associated with the current `EventSource` object using the specified argument types and arguments.                                      |
| [EventSource::Remove](#remove)       | Deletes the event handler represented by the specified event registration token from the set of event handlers associated with the current `EventSource` object. |

### Protected Data Members

| Name                                                    | Description                                                                                                                       |
| ------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------- |
| [EventSource::addRemoveLock_](#addremovelock)           | Synchronizes access to the [targets_](#targets) array when adding, removing, or invoking event handlers.                          |
| [EventSource::targets_](#targets)                       | An array of one or more event handlers.                                                                                           |
| [EventSource::targetsPointerLock_](#targetspointerlock) | Synchronizes access to internal data members even while event handlers for this EventSource are being added, removed, or invoked. |

## Inheritance Hierarchy

`EventSource`

## Requirements

**Header:** event.h

**Namespace:** Microsoft::WRL

## <a name="add"></a> EventSource::Add

Appends the event handler represented by the specified delegate interface to the set of event handlers for the current `EventSource` object.

```cpp
HRESULT Add(
   _In_ TDelegateInterface* delegateInterface,
   _Out_ EventRegistrationToken* token
);
```

### Parameters

*delegateInterface*<br/>
The interface to a delegate object, which represents an event handler.

*token*<br/>
When this operation completes, a handle that represents the event. Use this token as the parameter to the [Remove()](#remove) method to discard the event handler.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

## <a name="addremovelock"></a> EventSource::addRemoveLock_

Synchronizes access to the [targets_](#targets) array when adding, removing, or invoking event handlers.

```cpp
Wrappers::SRWLock addRemoveLock_;
```

## <a name="eventsource"></a> EventSource::EventSource

Initializes a new instance of the `EventSource` class.

```cpp
EventSource();
```

## <a name="getsize"></a> EventSource::GetSize

Retrieves the number of event handlers associated with the current `EventSource` object.

```cpp
size_t GetSize() const;
```

### Return Value

The number of event handlers in [targets_](#targets).

## <a name="invokeall"></a> EventSource::InvokeAll

Calls each event handler associated with the current `EventSource` object using the specified argument types and arguments.

```cpp
void InvokeAll();
template <
   typename T0
>
void InvokeAll(
   T0arg0
);
template <
   typename T0,
   typename T1
>
void InvokeAll(
   T0arg0,
   T1arg1
);
template <
   typename T0,
   typename T1,
   typename T2
>
void InvokeAll(
   T0arg0,
   T1arg1,
   T2arg2
);
template <
   typename T0,
   typename T1,
   typename T2,
   typename T3
>
void InvokeAll(
   T0arg0,
   T1arg1,
   T2arg2,
   T3arg3
);
template <
   typename T0,
   typename T1,
   typename T2,
   typename T3,
   typename T4
>
void InvokeAll(
   T0arg0,
   T1arg1,
   T2arg2,
   T3arg3,
   T4arg4
);
template <
   typename T0,
   typename T1,
   typename T2,
   typename T3,
   typename T4,
   typename T5
>
void InvokeAll(
   T0arg0,
   T1arg1,
   T2arg2,
   T3arg3,
   T4arg4,
   T5arg5
);
template <
   typename T0,
   typename T1,
   typename T2,
   typename T3,
   typename T4,
   typename T5,
   typename T6
>
void InvokeAll(
   T0arg0,
   T1arg1,
   T2arg2,
   T3arg3,
   T4arg4,
   T5arg5,
   T6arg6
);
template <
   typename T0,
   typename T1,
   typename T2,
   typename T3,
   typename T4,
   typename T5,
   typename T6,
   typename T7
>
void InvokeAll(
   T0arg0,
   T1arg1,
   T2arg2,
   T3arg3,
   T4arg4,
   T5arg5,
   T6arg6,
   T7arg7
);
template <
   typename T0,
   typename T1,
   typename T2,
   typename T3,
   typename T4,
   typename T5,
   typename T6,
   typename T7,
   typename T8
>
void InvokeAll(
   T0arg0,
   T1arg1,
   T2arg2,
   T3arg3,
   T4arg4,
   T5arg5,
   T6arg6,
   T7arg7,
   T8arg8
);
template <
   typename T0,
   typename T1,
   typename T2,
   typename T3,
   typename T4,
   typename T5,
   typename T6,
   typename T7,
   typename T8,
   typename T9
>
void InvokeAll(
   T0arg0,
   T1arg1,
   T2arg2,
   T3arg3,
   T4arg4,
   T5arg5,
   T6arg6,
   T7arg7,
   T8arg8,
   T9arg9
);
```

### Parameters

*T0*<br/>
The type of the zeroth event handler argument.

*T1*<br/>
The type of the first event handler argument.

*T2*<br/>
The type of the second event handler argument.

*T3*<br/>
The type of the third event handler argument.

*T4*<br/>
The type of the fourth event handler argument.

*T5*<br/>
The type of the fifth event handler argument.

*T6*<br/>
The type of the sixth event handler argument.

*T7*<br/>
The type of the seventh event handler argument.

*T8*<br/>
The type of the eighth event handler argument.

*T9*<br/>
The type of the ninth event handler argument.

*arg0*<br/>
The zeroth event handler argument.

*arg1*<br/>
The first event handler argument.

*arg2*<br/>
The second event handler argument.

*arg3*<br/>
The third event handler argument.

*arg4*<br/>
The fourth event handler argument.

*arg5*<br/>
The fifth event handler argument.

*arg6*<br/>
The sixth event handler argument.

*arg7*<br/>
The seventh event handler argument.

*arg8*<br/>
The eighth event handler argument.

*arg9*<br/>
The ninth event handler argument.

## <a name="remove"></a> EventSource::Remove

Deletes the event handler represented by the specified event registration token from the set of event handlers associated with the current `EventSource` object.

```cpp
HRESULT Remove(
   EventRegistrationToken token
);
```

### Parameters

*token*<br/>
A handle that represents an event handler. This token was returned when the event handler was registered by the [Add()](#add) method.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

### Remarks

For more information about the `EventRegistrationToken` structure, see the **Windows::Foundation::EventRegistrationToken Structure** topic in the **Windows Runtime** reference documentation.

## <a name="targets"></a> EventSource::targets_

An array of one or more event handlers.

```cpp
ComPtr<Details::EventTargetArray> targets_;
```

### Remarks

When the event that is represented by the current `EventSource` object occurs, the event handlers are called.

## <a name="targetspointerlock"></a> EventSource::targetsPointerLock_

Synchronizes access to internal data members even while event handlers for this `EventSource` are being added, removed, or invoked.

```cpp
Wrappers::SRWLock targetsPointerLock_;
```
