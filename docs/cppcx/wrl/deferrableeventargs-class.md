---
description: "Learn more about: DeferrableEventArgs Class"
title: "DeferrableEventArgs Class"
ms.date: "10/03/2018"
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::DeferrableEventArgs", "event/Microsoft::WRL::DeferrableEventArgs::GetDeferral", "event/Microsoft::WRL::DeferrableEventArgs::InvokeAllFinished"]
helpviewer_keywords: ["Microsoft::WRL::DeferrableEventArgs class", "Microsoft::WRL::DeferrableEventArgs::GetDeferral method", "Microsoft::WRL::DeferrableEventArgs::InvokeAllFinished method"]
ms.assetid: ece89267-7b72-40e1-8185-550c865b070a
---
# DeferrableEventArgs Class

A template class used for the event argument types for deferrals.

## Syntax

```cpp
template <typename TEventArgsInterface, typename TEventArgsClass>
class DeferrableEventArgs : public TEventArgsInterface;
```

### Parameters

*TEventArgsInterface*<br/>
The interface type that declares the arguments for a deferred event.

*TEventArgsClass*<br/>
The class that implements *TEventArgsInterface*.

## Members

### Public Methods

| Name | Description |
|--|--|
| [DeferrableEventArgs::GetDeferral](#getdeferral) | Gets a reference to the [Deferral](/uwp/api/windows.foundation.deferral) object which represents a deferred event. |
| [DeferrableEventArgs::InvokeAllFinished](#invokeallfinished) | Called to indicate that all processing to handle a deferred event is complete. |

## Remarks

Instances of this class are passed to event handlers for deferred events. The template parameters represent an interface that defines the details of the event arguments for a specific type of deferred event, and a class that implements that interface.

The class appears as the first argument to an event handler for a deferred event. You can call the [GetDeferral](#getdeferral) method to get the [Deferral](/uwp/api/windows.foundation.deferral) object from which you can get all the information about the deferred event. After completing the event handling, you should call Complete on the Deferral object. You should then call [InvokeAllFinished](#invokeallfinished) at the end of the event handler method, which ensures that the completion of all deferred events is communicated properly.

## Requirements

**Header:** event.h

**Namespace:** Microsoft::WRL

## <a name="getdeferral"></a> DeferrableEventArgs::GetDeferral

Gets a reference to the [Deferral](/uwp/api/windows.foundation.deferral) object which represents a deferred event.

```cpp
HRESULT GetDeferral([out, retval] Windows::Foundation::IDeferral** result)
```

### Parameters

*result*<br/>
A pointer that will reference the [Deferral](/uwp/api/windows.foundation.deferral) object when the call completes.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

## <a name="invokeallfinished"></a> DeferrableEventArgs::InvokeAllFinished

Called to indicate that all processing to handle a deferred event is complete.

```cpp
void InvokeAllFinished()
```

### Remarks

You should call this method after the event source calls [InvokeAll](eventsource-class.md#invokeall). Calling this method prevents further deferrals from being taken and forces the completion handler to execute if no deferrals were taken.
