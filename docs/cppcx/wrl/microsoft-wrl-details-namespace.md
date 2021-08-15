---
description: "Learn more about: Microsoft::WRL::Details Namespace"
title: "Microsoft::WRL::Details Namespace"
ms.date: "11/04/2016"
ms.topic: "reference"
ms.assetid: d71fe149-d804-4c6f-961d-43fe21ef8630
---
# Microsoft::WRL::Details Namespace

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
namespace Microsoft::WRL::Details;
```

## Members

### Classes

|Name|Description|
|----------|-----------------|
|[ComPtrRef Class](comptrref-class.md)|Represents a reference to an object of type ComPtr\<T>.|
|[ComPtrRefBase Class](comptrrefbase-class.md)|Represents the base class for the [ComPtrRef](comptrref-class.md) class.|
|[DontUseNewUseMake Class](dontusenewusemake-class.md)|Prevents using operator `new` in `RuntimeClass`. Consequently, you must use the [Make function](make-function.md) instead.|
|[EventTargetArray Class](eventtargetarray-class.md)|Represents an array of event handlers.|
|[MakeAllocator Class](makeallocator-class.md)|Allocates memory for an activatable class, with or without weak reference support.|
|[ModuleBase Class](modulebase-class.md)|Represents the base class of the [Module](module-class.md) classes.|
|[RemoveIUnknown Class](removeiunknown-class.md)|Makes a type that is equivalent to an `IUnknown`-based type, but has non-virtual `QueryInterface`, `AddRef`, and `Release` methods.|
|[WeakReference Class](weakreference-class.md)|Represents a *weak reference* that can be used with the Windows Runtime or classic COM. A weak reference represents an object that might or might not be accessible.|

### Structures

|Name|Description|
|----------|-----------------|
|[ArgTraits Structure](argtraits-structure.md)|Declares a specified delegate interface and an anonymous member function that has a specified number of parameters.|
|[ArgTraitsHelper Structure](argtraitshelper-structure.md)|Helps define common characteristics of delegate arguments.|
|[BoolStruct Structure](boolstruct-structure.md)|Defines whether a `ComPtr` is managing the object lifetime of an interface. `BoolStruct` is used internally by the [BoolType()](comptr-class.md#operator-microsoft-wrl-details-booltype) operator.|
|[CreatorMap Structure](creatormap-structure.md)|Contains information about how to initialize, register, and unregister objects.|
|[DerefHelper Structure](derefhelper-structure.md)|Represent a dereferenced pointer to the `T*` template parameter.|
|[EnableIf Structure](enableif-structure.md)|Defines a data member of the type specified by the second template parameter if the first template parameter evaluates to **`true`**.|
|[FactoryCache Structure](factorycache-structure.md)|Contains the location of a class factory and a value that identifies a registered Windows Runtime or COM class object.|
|[ImplementsBase Structure](implementsbase-structure.md)|Used to validate template parameter types in [Implements Structure](implements-structure.md).|
|[ImplementsHelper Structure](implementshelper-structure.md)|Helps implement the [Implements](implements-structure.md) structure.|
|[InterfaceList Structure](interfacelist-structure.md)|Used to create a recursive list of interfaces.|
|[InterfaceListHelper Structure](interfacelisthelper-structure.md)|Builds an `InterfaceList` type by recursively applying the specified template parameter arguments.|
|[InterfaceTraits Structure](interfacetraits-structure.md)|Implements common characteristics of an interface.|
|[InvokeHelper Structure](invokehelper-structure.md)|Provides an implementation of the `Invoke()` method based on the specified number and type of arguments.|
|[IsBaseOfStrict Structure](isbaseofstrict-structure.md)|Tests whether one type is the base of another.|
|[IsSame Structure](issame-structure.md)|Tests whether one specified type is the same as another specified type.|
|[Nil Structure](nil-structure.md)|Used to indicate an unspecified, optional template parameter.|
|[RemoveReference Structure](removereference-structure.md)|Strips the reference or rvalue-reference trait from the specified class template parameter.|
|[RuntimeClassBase Structure](runtimeclassbase-structure.md)|Used to detect `RuntimeClass` in the [Make](make-function.md) function.|
|[RuntimeClassBaseT Structure](runtimeclassbaset-structure.md)|Provides helper methods for `QueryInterface` operations and getting interface IDs.|
|[VerifyInheritanceHelper Structure](verifyinheritancehelper-structure.md)|Tests whether one interface is derived from another interface.|
|[VerifyInterfaceHelper Structure](verifyinterfacehelper-structure.md)|Verifies that the interface specified by the template parameter meets certain requirements.|

### Enumerations

|Name|Description|
|----------|-----------------|
|[AsyncStatusInternal Enumeration](asyncstatusinternal-enumeration.md)|Specifies a mapping between internal enumerations for the state of asynchronous operations and the `Windows::Foundation::AsyncStatus` enumeration.|

### Functions

|Name|Description|
|----------|-----------------|
|[ActivationFactoryCallback Function](activationfactorycallback-function.md)|Gets the activation factory for the specified activation ID.|
|[Move Function](move-function.md)|Moves the specified argument from one location to another.|
|[RaiseException Function](raiseexception-function.md)|Raises an exception in the calling thread.|
|[Swap Function (WRL)](swap-function-wrl.md)|Exchanges the values of the two specified arguments.|
|[TerminateMap Function](terminatemap-function.md)|Shuts down the class factories in the specified module.|

## Requirements

**Header:** async.h, client.h, corewrappers.h, event.h, ftm.h, implements.h, internal.h, module.h

**Namespace:** Microsoft::WRL::Details

## See also

[Microsoft::WRL Namespace](microsoft-wrl-namespace.md)<br/>
[Microsoft::WRL::Wrappers Namespace](microsoft-wrl-wrappers-namespace.md)
