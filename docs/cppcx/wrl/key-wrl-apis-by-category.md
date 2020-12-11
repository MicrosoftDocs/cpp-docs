---
description: "Learn more about: Key WRL APIs by Category"
title: "Key WRL APIs by Category"
ms.date: "11/04/2016"
ms.topic: "reference"
ms.assetid: 7367bacf-6b7c-4ecd-a0ce-a662db46fc66
---
# Key WRL APIs by Category

The following tables list primary Windows Runtime C++ Template Library classes, structs, functions, and macros. Constructs in helper namespaces and classes are omitted. These lists augment the API documentation, which is arranged by namespace.

## Classes

|Title|Description|
|-----------|-----------------|
|[ActivationFactory Class](activationfactory-class.md)|Enables one or more classes to be activated by the Windows Runtime.|
|[AsyncBase Class](asyncbase-class.md)|Implements the Windows Runtime asynchronous state machine.|
|[ClassFactory Class](classfactory-class.md)|Implements the basic functionality of the `IClassFactory` interface.|
|[ComPtr Class](comptr-class.md)|Creates a *smart pointer* type that represents the interface specified by the template parameter. ComPtr automatically maintains a reference count for the underlying interface pointer and releases the interface when the reference count goes to zero.|
|[Event Class (Windows Runtime C++ Template Library)](event-class-wrl.md)|Represents an event.|
|[EventSource Class](eventsource-class.md)|Represents an event. `EventSource` member functions add, remove, and invoke event handlers.|
|[FtmBase Class](ftmbase-class.md)|Represents a free-threaded marshaler object.|
|[HandleT Class](handlet-class.md)|Represents a handle to an object.|
|[HString Class](hstring-class.md)|Provides support for manipulating HSTRING handles.|
|[HStringReference Class](hstringreference-class.md)|Represents an HSTRING that is created from an existing string.|
|[Module Class](module-class.md)|Represents a collection of related objects.|
|[Module::GenericReleaseNotifier Class](module-genericreleasenotifier-class.md)|Invokes an event handler when the last object in the current module is released. The event handler is specified by on a lambda, functor, or pointer-to-function.|
|[Module::MethodReleaseNotifier Class](module-methodreleasenotifier-class.md)|Invokes an event handler when the last object in the current module is released. The event handler is specified by an object and its pointer-to-a-method member.|
|[Module::ReleaseNotifier Class](module-releasenotifier-class.md)|Invokes an event handler when the last object in a module is released.|
|[RoInitializeWrapper Class](roinitializewrapper-class.md)|Initializes the Windows Runtime.|
|[RuntimeClass Class](runtimeclass-class.md)|Represents an instantiated class that inherits the specified number of interfaces, and provides the specified Windows Runtime, classic COM, and weak reference support.|
|[SimpleActivationFactory Class](simpleactivationfactory-class.md)|Provides a fundamental mechanism to create a Windows Runtime or classic COM base class.|
|[SimpleClassFactory Class](simpleclassfactory-class.md)|Provides a fundamental mechanism to create a base class.|
|[WeakRef Class](weakref-class.md)|Represents a *weak reference* that can be used by only the Windows Runtime, not classic COM. A weak reference represents an object that might or might not be accessible.|

## Structures

|Title|Description|
|-----------|-----------------|
|[ChainInterfaces Structure](chaininterfaces-structure.md)|Specifies verification and initialization functions that can be applied to a set of interface IDs.|
|[CloakedIid Structure](cloakediid-structure.md)|Indicates to the `RuntimeClass`, `Implements` and `ChainInterfaces` templates that the specified interface is not accessible in the IID list.|
|[Implements Structure](implements-structure.md)|Implements `QueryInterface` and `GetIid` for the specified interfaces.|
|[MixIn Structure](mixin-structure.md)|Ensures that a runtime class derives from Windows Runtime interfaces, if any, and then classic COM interfaces.|

## Functions

|Title|Description|
|-----------|-----------------|
|[ActivateInstance Function](activateinstance-function.md)|Registers and retrieves an instance of a specified type defined in a specified class ID.|
|[AsWeak Function](asweak-function.md)|Retrieves a weak reference to a specified instance.|
|[Callback Function](callback-function-wrl.md)|Creates an object whose member function is a callback method.|
|[CreateActivationFactory Function](createactivationfactory-function.md)|Creates a factory that produces instances of the specified class that can be activated by the Windows Runtime.|
|[CreateClassFactory Function](createclassfactory-function.md)|Creates a factory that produces instances of the specified class.|
|[GetActivationFactory Function](getactivationfactory-function.md)|Retrieves an activation factory for the type specified by the template parameter.|
|[Make Function](make-function.md)|Initializes the specified Windows Runtime class.|

## Macros

|Title|Description|
|-----------|-----------------|
|[ActivatableClass Macros](activatableclass-macros.md)|Populates an internal cache that contains a factory that can create an instance of the specified class.|
|[InspectableClass Macro](inspectableclass-macro.md)|Sets the runtime class name and trust level.|

## See also

[Windows Runtime C++ Template Library (WRL)](windows-runtime-cpp-template-library-wrl.md)
