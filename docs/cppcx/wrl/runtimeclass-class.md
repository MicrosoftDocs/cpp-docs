---
description: "Learn more about: RuntimeClass Class"
title: "RuntimeClass Class"
ms.date: "09/11/2018"
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::RuntimeClass", "implements/Microsoft::WRL::RuntimeClass::AddRef", "implements/Microsoft::WRL::RuntimeClass::DecrementReference", "implements/Microsoft::WRL::RuntimeClass::GetIids", "implements/Microsoft::WRL::RuntimeClass::GetRuntimeClassName", "implements/Microsoft::WRL::RuntimeClass::GetTrustLevel", "implements/Microsoft::WRL::RuntimeClass::GetWeakReference", "implements/Microsoft::WRL::RuntimeClass::InternalAddRef", "implements/Microsoft::WRL::RuntimeClass::QueryInterface", "implements/Microsoft::WRL::RuntimeClass::Release", "implements/Microsoft::WRL::RuntimeClass::RuntimeClass", "implements/Microsoft::WRL::RuntimeClass::~RuntimeClass"]
helpviewer_keywords: ["Microsoft::WRL::RuntimeClass class", "Microsoft::WRL::RuntimeClass::AddRef method", "Microsoft::WRL::RuntimeClass::DecrementReference method", "Microsoft::WRL::RuntimeClass::GetIids method", "Microsoft::WRL::RuntimeClass::GetRuntimeClassName method", "Microsoft::WRL::RuntimeClass::GetTrustLevel method", "Microsoft::WRL::RuntimeClass::GetWeakReference method", "Microsoft::WRL::RuntimeClass::InternalAddRef method", "Microsoft::WRL::RuntimeClass::QueryInterface method", "Microsoft::WRL::RuntimeClass::Release method", "Microsoft::WRL::RuntimeClass::RuntimeClass, constructor", "Microsoft::WRL::RuntimeClass::~RuntimeClass, destructor"]
ms.assetid: d52f9d1a-98e5-41f2-a143-8fb629dd0727
---
# RuntimeClass Class

Represents a WinRT or COM class that inherits the specified interfaces and provides the specified Windows Runtime, classic COM, and weak reference support.

This class provides the boilerplate implementation of WinRT and COM classes, providing the implementation of `QueryInterface`, `AddRef`, `Release` etc., manages the reference count of the module and has support for providing the class factory for activatable objects.

## Syntax

```cpp
template <typename ...TInterfaces> class RuntimeClass
template <unsigned int classFlags, typename ...TInterfaces> class RuntimeClass;
```

### Parameters

*classFlags*<br/>
Optional parameter. A combination of one or more [RuntimeClassType](runtimeclasstype-enumeration.md) enumeration values. The `__WRL_CONFIGURATION_LEGACY__` macro can be defined to change the default value of classFlags for all runtime classes in the project. If defined, RuntimeClass instances are non-agile by default. When not defined, RuntimeClass instances are agile by default. To avoid ambiguity always specify the `Microsoft::WRL::FtmBase` in `TInterfaces` or `RuntimeClassType::InhibitFtmBase`. Note, if InhibitFtmBase and FtmBase are both used the object will be agile.

*TInterfaces*<br/>
The list of interfaces the object implements beyond `IUnknown`, `IInspectable` or other interfaces controlled by [RuntimeClassType](runtimeclasstype-enumeration.md). It also may list other classes to be derived from, notably `Microsoft::WRL::FtmBase` to make the object agile and cause it to implement `IMarshal`.

## Members

`RuntimeClassInitialize`<br/>
A function which initializes the object if the `MakeAndInitialize` template function is used to construct the object. It returns S_OK if the object was successfully initialized, or a COM error code if initialization failed. The COM error code is propagated as the return value of `MakeAndInitialize`. Note that the `RuntimeClassInitialize` method is not called if the `Make` template function is used to construct the object.

### Public Constructors

| Name                                               | Description                                                     |
| -------------------------------------------------- | --------------------------------------------------------------- |
| [RuntimeClass::RuntimeClass](#runtimeclass)        | Initializes the current instance of the `RuntimeClass` class.   |
| [RuntimeClass::~RuntimeClass](#tilde-runtimeclass) | Deinitializes the current instance of the `RuntimeClass` class. |

### Public Methods

| Name                                                      | Description                                                                                        |
| --------------------------------------------------------- | -------------------------------------------------------------------------------------------------- |
| [RuntimeClass::AddRef](#addref)                           | Increments the reference count for the current `RuntimeClass` object.                              |
| [RuntimeClass::DecrementReference](#decrementreference)   | Decrements the reference count for the current `RuntimeClass` object.                              |
| [RuntimeClass::GetIids](#getiids)                         | Gets an array that can contain the interface IDs implemented by the current `RuntimeClass` object. |
| [RuntimeClass::GetRuntimeClassName](#getruntimeclassname) | Gets the runtime class name of the current `RuntimeClass` object.                                  |
| [RuntimeClass::GetTrustLevel](#gettrustlevel)             | Gets the trust level of the current `RuntimeClass` object.                                         |
| [RuntimeClass::GetWeakReference](#getweakreference)       | Gets a pointer to the weak reference object for the current `RuntimeClass` object.                 |
| [RuntimeClass::InternalAddRef](#internaladdref)           | Increments the reference count to the current `RuntimeClass` object.                               |
| [RuntimeClass::QueryInterface](#queryinterface)           | Retrieves a pointer to the specified interface ID.                                                 |
| [RuntimeClass::Release](#release)                         | Performs a COM Release operation on the current `RuntimeClass` object.                             |

## Inheritance Hierarchy

This is an implementation detail.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL

## <a name="tilde-runtimeclass"></a> RuntimeClass::~RuntimeClass

Deinitializes the current instance of the `RuntimeClass` class.

```cpp
virtual ~RuntimeClass();
```

## <a name="addref"></a> RuntimeClass::AddRef

Increments the reference count for the current `RuntimeClass` object.

```cpp
STDMETHOD_(
   ULONG,
   AddRef
)();
```

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

## <a name="decrementreference"></a> RuntimeClass::DecrementReference

Decrements the reference count for the current `RuntimeClass` object.

```cpp
ULONG DecrementReference();
```

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

## <a name="getiids"></a> RuntimeClass::GetIids

Gets an array that can contain the interface IDs implemented by the current `RuntimeClass` object.

```cpp
STDMETHOD(
   GetIids
)
   (_Out_ ULONG *iidCount,
   _Deref_out_ _Deref_post_cap_(*iidCount) IID **iids);
```

### Parameters

*iidCount*<br/>
When this operation completes, the total number of elements in array *iids*.

*iids*<br/>
When this operation completes, a pointer to an array of interface IDs.

### Return Value

S_OK if successful; otherwise, E_OUTOFMEMORY.

## <a name="getruntimeclassname"></a> RuntimeClass::GetRuntimeClassName

Gets the runtime class name of the current `RuntimeClass` object.

```cpp
STDMETHOD( GetRuntimeClassName )(
    _Out_ HSTRING* runtimeName
);
```

### Parameters

*runtimeName*<br/>
When this operation completes, the runtime class name.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

### Remarks

An assert error is emitted if `__WRL_STRICT__` or `__WRL_FORCE_INSPECTABLE_CLASS_MACRO__` isn't defined.

## <a name="gettrustlevel"></a> RuntimeClass::GetTrustLevel

Gets the trust level of the current `RuntimeClass` object.

```cpp
STDMETHOD(GetTrustLevel)(
    _Out_ TrustLevel* trustLvl
);
```

### Parameters

*trustLvl*<br/>
When this operation completes, the trust level of the current `RuntimeClass` object.

### Return Value

Always S_OK.

### Remarks

An assert error is emitted if `__WRL_STRICT__` or `__WRL_FORCE_INSPECTABLE_CLASS_MACRO__` isn't defined.

## <a name="getweakreference"></a> RuntimeClass::GetWeakReference

Gets a pointer to the weak reference object for the current `RuntimeClass` object.

```cpp
STDMETHOD(
   GetWeakReference
)(_Deref_out_ IWeakReference **weakReference);
```

### Parameters

*weakReference*<br/>
When this operation completes, a pointer to a weak reference object.

### Return Value

Always S_OK.

## <a name="internaladdref"></a> RuntimeClass::InternalAddRef

Increments the reference count to the current `RuntimeClass` object.

```cpp
ULONG InternalAddRef();
```

### Return Value

The resulting reference count.

## <a name="queryinterface"></a> RuntimeClass::QueryInterface

Retrieves a pointer to the specified interface ID.

```cpp
STDMETHOD(
   QueryInterface
)
   (REFIID riid,
   _Deref_out_ void **ppvObject);
```

### Parameters

*riid*<br/>
An interface ID.

*ppvObject*<br/>
When this opereation completes, a pointer to the interface specified by the *riid* parameter.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

## <a name="release"></a> RuntimeClass::Release

Performs a COM Release operation on the current `RuntimeClass` object.

```cpp
STDMETHOD_(
   ULONG,
   Release
)();
```

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

### Remarks

If the reference count becomes zero, the `RuntimeClass` object is deleted.

## <a name="runtimeclass"></a> RuntimeClass::RuntimeClass

Initializes the current instance of the `RuntimeClass` class.

```cpp
RuntimeClass();
```
