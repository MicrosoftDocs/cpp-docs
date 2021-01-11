---
description: "Learn more about: Microsoft::WRL Namespace"
title: "Microsoft::WRL Namespace"
ms.date: "11/04/2016"
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL", "module/Microsoft::WRL", "async/Microsoft::WRL", "internal/Microsoft::WRL", "event/Microsoft::WRL", "ftm/Microsoft::WRL", "client/Microsoft::WRL", "corewrappers/Microsoft::WRL"]
helpviewer_keywords: ["WRL namespace"]
ms.assetid: 01118a8f-f564-4859-b87e-9444848585a1
---
# Microsoft::WRL Namespace

Defines the fundamental types that make up the Windows Runtime C++ Template Library.

## Syntax

```cpp
namespace Microsoft::WRL;
```

## Members

### Typedefs

|Name|Description|
|----------|-----------------|
|`InhibitWeakReferencePolicy`|`RuntimeClassFlags<WinRt | InhibitWeakReference>`|

### Classes

|Name|Description|
|----------|-----------------|
|[ActivationFactory Class](activationfactory-class.md)|Enables one or more classes to be activated by the Windows Runtime.|
|[AsyncBase Class](asyncbase-class.md)|Implements the Windows Runtime asynchronous state machine.|
|[ClassFactory Class](classfactory-class.md)|Implements the basic functionality of the `IClassFactory` interface.|
|[ComPtr Class](comptr-class.md)|Creates a *smart pointer* type that represents the interface specified by the template parameter. ComPtr automatically maintains a reference count for the underlying interface pointer and releases the interface when the reference count goes to zero.|
|[DeferrableEventArgs Class](deferrableeventargs-class.md)|A template class used for the event argument types for deferrals.|
|[EventSource Class](eventsource-class.md)|Represents an event. `EventSource` member functions add, remove, and invoke event handlers.|
|[FtmBase Class](ftmbase-class.md)|Represents a free-threaded marshaler object.|
|[Module Class](module-class.md)|Represents a collection of related objects.|
|[RuntimeClass Class](runtimeclass-class.md)|Represents an instantiated class that inherits the specified number of interfaces, and provides the specified Windows Runtime, classic COM, and weak reference support.|
|[SimpleActivationFactory Class](simpleactivationfactory-class.md)|Provides a fundamental mechanism to create a Windows Runtime or classic COM base class.|
|[SimpleClassFactory Class](simpleclassfactory-class.md)|Provides a fundamental mechanism to create a base class.|
|[WeakRef Class](weakref-class.md)|Represents a *weak reference* that can be used by only the Windows Runtime, not classic COM. A weak reference represents an object that might or might not be accessible.|

### Structures

|Name|Description|
|----------|-----------------|
|[ChainInterfaces Structure](chaininterfaces-structure.md)|Specifies verification and initialization functions that can be applied to a set of interface IDs.|
|[CloakedIid Structure](cloakediid-structure.md)|Indicates to the `RuntimeClass`, `Implements` and `ChainInterfaces` templates that the specified interface is not accessible in the IID list.|
|[Implements Structure](implements-structure.md)|Implements `QueryInterface` and `GetIid` for the specified interfaces.|
|[MixIn Structure](mixin-structure.md)|Ensures that a runtime class derives from Windows Runtime interfaces, if any, and then classic COM interfaces.|
|[RuntimeClassFlags Structure](runtimeclassflags-structure.md)|Contains the type for an instance of a [RuntimeClass](runtimeclass-class.md).|

### Enumerations

|Name|Description|
|----------|-----------------|
|[AsyncResultType Enumeration](asyncresulttype-enumeration.md)|Specifies the type of result returned by the `GetResults()` method.|
|[ModuleType Enumeration](moduletype-enumeration.md)|Specifies whether a module should support an in-process server or an out-of-process server.|
|[RuntimeClassType Enumeration](runtimeclasstype-enumeration.md)|Specifies the type of [RuntimeClass](runtimeclass-class.md) instance that is supported.|

### Functions

|Name|Description|
|----------|-----------------|
|[AsWeak Function](asweak-function.md)|Retrieves a weak reference to a specified instance.|
|[Callback Function (WRL)](callback-function-wrl.md)|Creates an object whose member function is a callback method.|
|[CreateActivationFactory Function](createactivationfactory-function.md)|Creates a factory that produces instances of the specified class that can be activated by the Windows Runtime.|
|[CreateClassFactory Function](createclassfactory-function.md)|Creates a factory that produces instances of the specified class.|
|[Make Function](make-function.md)|Initializes the specified Windows Runtime class.|

## Requirements

**Header:** async.h, client.h, corewrappers.h, event.h, ftm.h, implements.h, internal.h, module.h

**Namespace:** Microsoft::WRL

## See also

[Microsoft::WRL::Wrappers Namespace](microsoft-wrl-wrappers-namespace.md)
