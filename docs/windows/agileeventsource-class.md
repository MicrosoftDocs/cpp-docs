---
title: "AgileEventSource Class | Microsoft Docs"
ms.custom: ""
ms.date: "03/22/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::AgileEventSource", "event/Microsoft::WRL::InvokeModeOptions"]
dev_langs: ["C++"]
helpviewer_keywords: ["AgileEventSource class"]
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AgileEventSource Class

Represents an event that is raised by a agile component, which is a component that can be accessed from any thread. Inherits from [EventSource](eventsource-class.md) and overrides the `Add` member function with an additional type parameter for specifying options for how to invoke the agile event.

## Syntax

```cpp
template<typename TDelegateInterface, typename TEventSourceOptions = Microsoft::WRL::InvokeModeOptions<FireAll>>
class AgileEventSource
    : public Microsoft::WRL::EventSource<TDelegateInterface, TEventSourceOptions>;
```

## Parameters

*TDelegateInterface*  
The interface to a delegate that represents an event handler.

*TEventSourceOptions*  
An [InvokeModeOptions](invokemodeoptions-structure.md) stucture whose invokeMode field is set to `InvokeMode::StopOnFirstError` or `InvokeMode::FireAll`.

## Remarks

The vast majority of components in the Windows Runtime are agile components. For more information, see [Threading and Marshaling (C++/CX)](../cppcx/threading-and-marshaling-c-cx.md).

## Inheritance Hierarchy

`EventSource`
`AgileEventSource`

## Requirements

**Header:** event.h

**Namespace:** Microsoft::WRL

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[AgileEventSource::Add Method](#add)|Appends the agile event handler represented by the specified delegate interface to the set of event handlers for the current **AgileEventSource** object.|

## <a name="add"></a> AgileEventSource::Add Method

Appends the event handler represented by the specified delegate interface to the set of event handlers for the current [EventSource](eventsource-class.md) object.

### Syntax

```cpp
HRESULT Add(
   _In_ TDelegateInterface* delegateInterface,
   _Out_ EventRegistrationToken* token
);
```

### Parameters

*delegateInterface*  
The interface to a delegate object, which represents an event handler.

*token*  
When this operation completes, a handle that represents the event. Use this token as the parameter to the `Remove()` method to discard the event handler.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.


## See Also

[Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)