---
description: "Learn more about: Module Class"
title: "Module Class"
ms.date: "10/18/2018"
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Module", "module/Microsoft::WRL::Module::Create", "module/Microsoft::WRL::Module::DecrementObjectCount", "module/Microsoft::WRL::Module::GetActivationFactory", "module/Microsoft::WRL::Module::GetClassObject", "module/Microsoft::WRL::Module::GetModule", "module/Microsoft::WRL::Module::GetObjectCount", "module/Microsoft::WRL::Module::IncrementObjectCount", "module/Microsoft::WRL::Module::Module", "module/Microsoft::WRL::Module::objectCount_Data", "module/Microsoft::WRL::Module::RegisterCOMObject", "module/Microsoft::WRL::Module::RegisterObjects", "module/Microsoft::WRL::Module::RegisterWinRTObject", "module/Microsoft::WRL::Module::releaseNotifier_", "module/Microsoft::WRL::Module::Terminate", "module/Microsoft::WRL::Module::~Module", "module/Microsoft::WRL::Module::UnregisterCOMObject", "module/Microsoft::WRL::Module::UnregisterObjects", "module/Microsoft::WRL::Module::UnregisterWinRTObject"]
helpviewer_keywords: ["Microsoft::WRL::Module class", "Microsoft::WRL::Module::Create method", "Microsoft::WRL::Module::DecrementObjectCount method", "Microsoft::WRL::Module::GetActivationFactory method", "Microsoft::WRL::Module::GetClassObject method", "Microsoft::WRL::Module::GetModule method", "Microsoft::WRL::Module::GetObjectCount method", "Microsoft::WRL::Module::IncrementObjectCount method", "Microsoft::WRL::Module::Module, constructor", "Microsoft::WRL::Module::objectCount_ data member", "Microsoft::WRL::Module::RegisterCOMObject method", "Microsoft::WRL::Module::RegisterObjects method", "Microsoft::WRL::Module::RegisterWinRTObject method", "Microsoft::WRL::Module::releaseNotifier_ data member", "Microsoft::WRL::Module::Terminate method", "Microsoft::WRL::Module::~Module, destructor", "Microsoft::WRL::Module::UnregisterCOMObject method", "Microsoft::WRL::Module::UnregisterObjects method", "Microsoft::WRL::Module::UnregisterWinRTObject method"]
ms.assetid: dd67e3b8-c2e1-4f53-8c0f-565a140ba649
---
# Module Class

Represents a collection of related objects.

## Syntax

```cpp
template<ModuleType moduleType>
class Module;

template<>
class Module<InProc> : public Details::ModuleBase;

template<>
class Module<OutOfProc> : public Module<InProc>;
```

### Parameters

*moduleType*<br/>
A combination of one or more [ModuleType](moduletype-enumeration.md) enumeration values.

## Members

### Protected Classes

Name                                                                                | Description
----------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------
[Module::GenericReleaseNotifier](module-genericreleasenotifier-class.md) | Invokes an event handler when the last object in the current module is released. The event handler is specified by on a lambda, functor, or pointer-to-function.
[Module::MethodReleaseNotifier](module-methodreleasenotifier-class.md)   | Invokes an event handler when the last object in the current module is released. The event handler is specified by an object and its pointer-to-a-method member.
[Module::ReleaseNotifier](module-releasenotifier-class.md)               | Invokes an event handler when the last object in a module is released.

### Public Constructors

Name                             | Description
-------------------------------- | -----------------------------------------------------------
[Module::~Module](#tilde-module) | Deinitializes the current instance of the `Module` class.

### Protected Constructors

Name                      | Description
------------------------- | ---------------------------------------------------
[Module::Module](#module) | Initializes a new instance of the `Module` class.

### Public Methods

Name                                                    | Description
------------------------------------------------------- | --------------------------------------------------------------------------------------------------
[Module::Create](#create)                               | Creates an instance of a module.
[Module::DecrementObjectCount](#decrementobjectcount)   | Decrements the number of objects tracked by the module.
[Module::GetActivationFactory](#getactivationfactory)   | Gets an activation factory for the module.
[Module::GetClassObject](#getclassobject)               | Retrieves a cache of class factories.
[Module::GetModule](#getmodule)                         | Creates an instance of a module.
[Module::GetObjectCount](#getobjectcount)               | Retrieves the number of objects managed by this module.
[Module::IncrementObjectCount](#incrementobjectcount)   | Increments the number of objects tracked by the module.
[Module::RegisterCOMObject](#registercomobject)         | Registers one or more COM objects so other applications can connect to them.
[Module::RegisterObjects](#registerobjects)             | Registers COM or Windows Runtime objects so other applications can connect to them.
[Module::RegisterWinRTObject](#registerwinrtobject)     | Registers one or more Windows Runtime objects so other applications can connect to them.
[Module::Terminate](#terminate)                         | Causes all factories instantiated by the module to shut down.
[Module::UnregisterCOMObject](#unregistercomobject)     | Unregisters one or more COM objects, which prevents other applications from connecting to them.
[Module::UnregisterObjects](#unregisterobjects)         | Unregisters the objects in the specified module so that other applications cannot connect to them.
[Module::UnregisterWinRTObject](#unregisterwinrtobject) | Unregisters one or more Windows Runtime objects so that other applications cannot connect to them.

### Protected Methods

Name                      | Description
------------------------- | --------------------------------
[Module::Create](#create) | Creates an instance of a module.

### Protected Data Members

Name                                         | Description
-------------------------------------------- | --------------------------------------------------------------------------------------------------------
[Module::objectCount_](#objectcount)         | Keeps track of how many classes have been created with the [Make](make-function.md) function.
[Module::releaseNotifier_](#releasenotifier) | Holds a pointer to a `ReleaseNotifier` object.

### Macros

Name                                                                   | Description
---------------------------------------------------------------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
[ActivatableClass](activatableclass-macros.md)              | Populates an internal cache that contains a factory that can create an instance of the specified class. This macro specifies default factory and group ID parameters.
[ActivatableClassWithFactory](activatableclass-macros.md)   | Populates an internal cache that contains a factory that can create an instance of the specified class. This macro enables you to specify a particular factory parameter.
[ActivatableClassWithFactoryEx](activatableclass-macros.md) | Populates an internal cache that contains a factory that can create an instance of the specified class. This macro enables you to specify particular factory and group ID parameters.

## Inheritance Hierarchy

`ModuleBase`

`Module`

`Module`

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## <a name="tilde-module"></a> Module::~Module

Deinitializes the current instance of the `Module` class.

```cpp
virtual ~Module();
```

## <a name="create"></a> Module::Create

Creates an instance of a module.

```cpp
WRL_NOTHROW static Module& Create();
template<typename T>
WRL_NOTHROW static Module& Create(
   T callback
);
template<typename T>
WRL_NOTHROW static Module& Create(
   _In_ T* object,
   _In_ void (T::* method)()
);
```

### Parameters

*T*<br/>
Module type.

*callback*<br/>
Called when the last instance object of the module is released.

*object*<br/>
The *object* and *method* parameters are used in combination. Points to the last instance object when the last instance object in the module is released.

*method*<br/>
The *object* and *method* parameters are used in combination. Points to the method of the last instance object when the last instance object in the module is released.

### Return Value

Reference to the module.

## <a name="decrementobjectcount"></a> Module::DecrementObjectCount

Decrements the number of objects tracked by the module.

```cpp
virtual long DecrementObjectCount();
```

### Return Value

The count before the decrement operation.

## <a name="getactivationfactory"></a> Module::GetActivationFactory

Gets an activation factory for the module.

```cpp
WRL_NOTHROW HRESULT GetActivationFactory(
   _In_ HSTRING pActivatibleClassId,
   _Deref_out_ IActivationFactory **ppIFactory,
   wchar_t* serverName = nullptr
);
```

### Parameters

*pActivatibleClassId*<br/>
IID of a runtime class.

*ppIFactory*<br/>
The IActivationFactory for the specified runtime class.

*serverName*<br/>
The name of a subset of class factories in the current module. Specify the server name used in the [ActivatableClassWithFactoryEx](activatableclass-macros.md) macro, or specify **`nullptr`** to get the default server name.

### Return Value

S_OK if successful; otherwise, the HRESULT returned by GetActivationFactory.

## <a name="getclassobject"></a> Module::GetClassObject

Retreives a cache of class factories.

```cpp
HRESULT GetClassObject(
   REFCLSID clsid,
   REFIID riid,
   _Deref_out_ void **ppv,
   wchar_t* serverName = nullptr
);
```

### Parameters

*clsid*<br/>
Class ID.

*riid*<br/>
Interface ID that you request.

*ppv*<br/>
Pointer to returned object.

*serverName*<br/>
The server name that is specified in either the `ActivatableClassWithFactory`, `ActivatableClassWithFactoryEx`, or `ActivatableClass` macro; or **`nullptr`** to get the default server name.

### Return Value

### Remarks

Use this method only for COM, not the Windows Runtime. This method exposes only `IClassFactory` methods.

## <a name="getmodule"></a> Module::GetModule

Creates an instance of a module.

```cpp
static Module& GetModule();
WRL_NOTHROW static Module& GetModule();
```

### Return Value

A reference to a module.

## <a name="getobjectcount"></a> Module::GetObjectCount

Retrieves the number of objects managed by this module.

```cpp
virtual long GetObjectCount() const;
```

### Return Value

The current number of objects managed by this module.

## <a name="incrementobjectcount"></a> Module::IncrementObjectCount

Increments the number of objects tracked by the module.

```cpp
virtual long IncrementObjectCount();
```

### Return Value

The count before the increment operation.

## <a name="module"></a> Module::Module

Initializes a new instance of the `Module` class.

```cpp
Module();
```

### Remarks

This constructor is protected and cannot be called with the **`new`** keyword. Instead, call either [Module::GetModule](#getmodule) or [Module::Create](#create).

## <a name="objectcount"></a> Module::objectCount_

Keeps track of how many classes have been created with the [Make](make-function.md) function.

```cpp
volatile long objectCount_;
```

## <a name="registercomobject"></a> Module::RegisterCOMObject

Registers one or more COM objects so other applications can connect to them.

```cpp
WRL_NOTHROW virtual HRESULT RegisterCOMObject(
   const wchar_t* serverName,
   IID* clsids,
   IClassFactory** factories,
   DWORD* cookies,
   unsigned int count);
```

### Parameters

*serverName*<br/>
Fully-qualified name of a server.

*clsids*<br/>
An array of CLSIDs to register.

*factories*<br/>
An array of IUnknown interfaces of the class objects whose availability is being published.

*cookies*<br/>
When the operation completes, an array of pointers to values that identify the class objects that were registered. These values are later used revoke the registration.

*count*<br/>
The number of CLSIDs to register.

### Return Value

S_OK if successfu; otherwise, an HRESULT such as CO_E_OBJISREG that indicates the reason the operation failed.

### Remarks

The COM objects are registered with the CLSCTX_LOCAL_SERVER enumerator of the CLSCTX enumeration.

The type of connection to the registered objects is specified by a combination of the current *comflag* template parameter and the REGCLS_SUSPENDED enumerator of the REGCLS enumeration.

## <a name="registerobjects"></a> Module::RegisterObjects

Registers COM or Windows Runtime objects so other applications can connect to them.

```cpp
HRESULT RegisterObjects(
   ModuleBase* module,
   const wchar_t* serverName);
```

### Parameters

*module*<br/>
An array of COM or Windows Runtime objects.

*serverName*<br/>
Name of the server that created the objects.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the reason the operation failed.

## <a name="registerwinrtobject"></a> Module::RegisterWinRTObject

Registers one or more Windows Runtime objects so other applications can connect to them.

```cpp
HRESULT RegisterWinRTObject(const wchar_t* serverName,
   wchar_t** activatableClassIds,
   WINRT_REGISTRATION_COOKIE* cookie,
   unsigned int count)
```

### Parameters

*serverName*<br/>
A name that specifies a subset of objects affected by this operation.

*activatableClassIds*<br/>
An array of activatable CLSIDs to register.

*cookie*<br/>
A value that identifies the class objects that were registered. This value is used later to revoke the registration.

*count*<br/>
The number of objects to register.

### Return Value

S_OK if successful; otherwise, an error HRESULT such as CO_E_OBJISREG that indicates the reason the operation failed.

## <a name="releasenotifier"></a> Module::releaseNotifier_

Holds a pointer to a `ReleaseNotifier` object.

```cpp
ReleaseNotifier *releaseNotifier_;
```

## <a name="terminate"></a> Module::Terminate

Causes all factories instantiated by the module to shut down.

```cpp
void Terminate();
```

### Remarks

Releases the factories in the cache.

## <a name="unregistercomobject"></a> Module::UnregisterCOMObject

Unregisters one or more COM objects, which prevents other applications from connecting to them.

```cpp
virtual HRESULT UnregisterCOMObject(
   const wchar_t* serverName,
   DWORD* cookies,
   unsigned int count
```

### Parameters

*serverName*<br/>
(Unused)

*cookies*<br/>
An array of pointers to values that identify the class objects to be unregistered. The array was created by the [RegisterCOMObject](#registercomobject) method.

*count*<br/>
The number of classes to unregister.

### Return Value

S_OK if this operation is successful; otherwise, an error HRESULT that indicates the reason the operation failed.

## <a name="unregisterobjects"></a> Module::UnregisterObjects

Unregisters the objects in the specified module so that other applications cannot connect to them.

```cpp
HRESULT UnregisterObjects(
   ModuleBase* module,
   const wchar_t* serverName);
```

### Parameters

*module*<br/>
Pointer to a module.

*serverName*<br/>
A qualifying name that specifies a subset of objects affected by this operation.

### Return Value

S_OK if this operation is successful; otherwise, an error HRESULT that indicates the reason this operation failed.

## <a name="unregisterwinrtobject"></a> Module::UnregisterWinRTObject

Unregisters one or more Windows Runtime objects so that other applications cannot connect to them.

```cpp
virtual HRESULT UnregisterWinRTObject(
   unsigned int,
   _Inout_ WINRT_REGISTRATION_COOKIE* cookie
);
```

### Parameters

*cookie*<br/>
A pointer to a value that identifies the class object whose registration is to be revoked.
