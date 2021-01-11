---
description: "Learn more about: InvokeHelper Structure"
title: "InvokeHelper Structure"
ms.date: "10/18/2018"
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::Details::InvokeHelper", "event/Microsoft::WRL::Details::InvokeHelper::callback_", "event/Microsoft::WRL::Details::InvokeHelper::Invoke", "event/Microsoft::WRL::Details::InvokeHelper::InvokeHelper"]
helpviewer_keywords: ["Microsoft::WRL::Details::InvokeHelper structure", "Microsoft::WRL::Details::callback_ data member", "Microsoft::WRL::Details::Invoke method", "Microsoft::WRL::Details::InvokeHelper, constructor"]
ms.assetid: 555ad2bc-4dd6-4e65-a2e2-1242c395f0e5
---
# InvokeHelper Structure

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template<typename TDelegateInterface, typename TCallback, unsigned int argCount>
struct InvokeHelper;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 0> :
    public Microsoft::WRL::RuntimeClass<
        RuntimeClassFlags<Delegate>,
        TDelegateInterface
    >;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 1> :
    public Microsoft::WRL::RuntimeClass<
        RuntimeClassFlags<Delegate>,
        TDelegateInterface
    >;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 2> :
    public Microsoft::WRL::RuntimeClass<
        RuntimeClassFlags<Delegate>,
        TDelegateInterface
    >;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 3> :
    public Microsoft::WRL::RuntimeClass<
        RuntimeClassFlags<Delegate>,
        TDelegateInterface
    >;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 4> :
    Microsoft::WRL::RuntimeClass<
        RuntimeClassFlags<Delegate>,
        TDelegateInterface
    >;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 5> :
    Microsoft::WRL::RuntimeClass<
        RuntimeClassFlags<Delegate>,
        TDelegateInterface
    >;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 6> :
    Microsoft::WRL::RuntimeClass<
        RuntimeClassFlags<Delegate>,
        TDelegateInterface
    >;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 7> :
    Microsoft::WRL::RuntimeClass<
        RuntimeClassFlags<Delegate>,
        TDelegateInterface
    >;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 8> :
    Microsoft::WRL::RuntimeClass<
        RuntimeClassFlags<Delegate>,
        TDelegateInterface
    >;

template<typename TDelegateInterface, typename TCallback>
struct InvokeHelper<TDelegateInterface, TCallback, 9> :
    Microsoft::WRL::RuntimeClass<
        RuntimeClassFlags<Delegate>,
        TDelegateInterface
    >;
```

### Parameters

*TDelegateInterface*<br/>
The delegate interface type.

*TCallback*<br/>
The type of the event handler function.

*argCount*<br/>
The number of arguments in an `InvokeHelper` specialization.

## Remarks

Provides an implementation of the `Invoke()` method based on the specified number and type of arguments.

## Members

### Public Typedefs

Name     | Description
-------- | -----------------------------------------------------------------------------
`Traits` | A synonym for the class that defines the type of each event handler argument.

### Public Constructors

Name                                        | Description
------------------------------------------- | -------------------------------------------------------
[InvokeHelper::InvokeHelper](#invokehelper) | Initializes a new instance of the `InvokeHelper` class.

### Public Methods

Name                            | Description
------------------------------- | -----------------------------------------------------------------------------------
[InvokeHelper::Invoke](#invoke) | Calls the event handler whose signature contains the specified number of arguments.

### Public Data Members

Name                                 | Description
------------------------------------ | ----------------------------------------------------------
[InvokeHelper::callback_](#callback) | Represents the event handler to call when an event occurs.

## Inheritance Hierarchy

`InvokeHelper`

## Requirements

**Header:** event.h

**Namespace:** Microsoft::WRL::Details

## <a name="callback"></a> InvokeHelper::callback_

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
TCallback callback_;
```

### Remarks

Represents the event handler to call when an event occurs.

The `TCallback` template parameter specifies the type of the event handler.

## <a name="invoke"></a> InvokeHelper::Invoke

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
STDMETHOD(
   Invoke
)();
STDMETHOD(
   Invoke
)(typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
STDMETHOD(
   Invoke
)( typename Traits;
```

### Parameters

*arg1*<br/>
Argument 1.

*arg2*<br/>
Argument 2.

*arg3*<br/>
Argument 3.

*arg4*<br/>
Argument 4.

*arg5*<br/>
Argument 5.

*arg6*<br/>
Argument 6.

*arg7*<br/>
Argument 7.

*arg8*<br/>
Argument 8.

*arg9*<br/>
Argument 9.

### Return Value

S_OK if successful; otherwise, an HRESULT that describes the error.

### Remarks

Calls the event handler whose signature contains the specified number of arguments.

## <a name="invokehelper"></a> InvokeHelper::InvokeHelper

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
explicit InvokeHelper(
   TCallback callback
);
```

### Parameters

*callback*<br/>
An event handler.

### Remarks

Initializes a new instance of the `InvokeHelper` class.

The `TCallback` template parameter specifies the type of the event handler.
