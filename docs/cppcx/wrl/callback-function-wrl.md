---
description: "Learn more about: Callback Function (WRL)"
title: "Callback Function (WRL)"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::Callback"]
ms.assetid: afb15d25-3230-44f7-b321-e17c54872943
---
# Callback Function (WRL)

Creates an object whose member function is a callback method.

## Syntax

```cpp
template<
   typename TDelegateInterface,
   typename TCallback
>
ComPtr<TDelegateInterface> Callback(
   TCallback callback
);
template<
   typename TDelegateInterface,
   typename TCallbackObject,
   typename... TArgs
>
ComPtr<TDelegateInterface> Callback(
   _In_ TCallbackObject *object,
   _In_ HRESULT (TCallbackObject::* method)(TArgs...)
);
```

### Parameters

*TDelegateInterface*<br/>
A template parameter that specifies the interface of the delegate to call when an event occurs.

*TCallback*<br/>
A template parameter that specifies the type of an object that represents an object and its callback member function.

*TCallbackObject*<br/>
A template parameter that specifies the object whose member function is the method to call when an event occurs.

*TArgs*<br/>
A template parameter pack that specifies the types of the callback method arguments.

*callback*<br/>
An object that represents the callback object and its member function.

*object*<br/>
The object whose member function is called when an event occurs.

*method*<br/>
The member function to call when an event occurs.

## Return Value

An object whose member function is the specified callback method.

## Remarks

The base of a delegate object must be `IUnknown`, not `IInspectable`.

## Requirements

**Header:** event.h

**Namespace:** Microsoft::WRL

## See also

[Microsoft::WRL Namespace](microsoft-wrl-namespace.md)
