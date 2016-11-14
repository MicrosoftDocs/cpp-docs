---
title: "Microsoft::WRL::Details Namespace | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
ms.assetid: d71fe149-d804-4c6f-961d-43fe21ef8630
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Microsoft::WRL::Details Namespace
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
namespace Microsoft::WRL::Details;  
```  
  
## Members  
  
### Classes  
  
|Name|Description|  
|----------|-----------------|  
|[ComPtrRef Class](../windows/comptrref-class.md)|Represents a reference to an object of type ComPtr\<T>.|  
|[ComPtrRefBase Class](../windows/comptrrefbase-class.md)|Represents the base class for the [ComPtrRef](../windows/comptrref-class.md) class.|  
|[DontUseNewUseMake Class](../windows/dontusenewusemake-class.md)|Prevents using operator `new` in `RuntimeClass`. Consequently, you must use the [Make function](../windows/make-function.md) instead.|  
|[EventTargetArray Class](../windows/eventtargetarray-class.md)|Represents an array of event handlers.|  
|[MakeAllocator Class](../windows/makeallocator-class.md)|Allocates memory for an activatable class, with or without weak reference support.|  
|[ModuleBase Class](../windows/modulebase-class.md)|Represents the base class of the [Module](../windows/module-class.md) classes.|  
|[RemoveIUnknown Class](../windows/removeiunknown-class.md)|Makes a type that is equivalent to an `IUnknown`-based type, but has non-virtual `QueryInterface`, `AddRef`, and `Release` methods.|  
|[WeakReference Class](../windows/weakreference-class1.md)|Represents a *weak reference* that can be used with the Windows Runtime or classic COM. A weak reference represents an object that might or might not be accessible.|  
  
### Structures  
  
|Name|Description|  
|----------|-----------------|  
|[ArgTraits Structure](../windows/argtraits-structure.md)|Declares a specified delegate interface and an anonymous member function that has a specified number of parameters.|  
|[ArgTraitsHelper Structure](../windows/argtraitshelper-structure.md)|Helps define common characteristics of delegate arguments.|  
|[BoolStruct Structure](../windows/boolstruct-structure.md)|Defines whether a ComPtr is managing the object lifetime of an interface. BoolStruct is used internally by the [BoolType()](../windows/comptr-operator-microsoft-wrl-details-booltype-operator.md) operator.|  
|[CreatorMap Structure](../windows/creatormap-structure.md)|Contains information about how to initialize, register, and unregister objects.|  
|[DerefHelper Structure](../windows/derefhelper-structure.md)|Represent a dereferenced pointer to the `T*` template parameter.|  
|[EnableIf Structure](../windows/enableif-structure.md)|Defines a data member of the type specified by the second template parameter if the first template parameter evaluates to `true`.|  
|[FactoryCache Structure](../windows/factorycache-structure.md)|Contains the location of a class factory and a value that identifies a registered [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] or COM class object.|  
|[ImplementsBase Structure](../windows/implementsbase-structure.md)|Used to validate template parameter types in [Implements Structure](../windows/implements-structure.md).|  
|[ImplementsHelper Structure](../windows/implementshelper-structure.md)|Helps implement the [Implements](../windows/implements-structure.md) structure.|  
|[InterfaceList Structure](../windows/interfacelist-structure.md)|Used to create a recursive list of interfaces.|  
|[InterfaceListHelper Structure](../windows/interfacelisthelper-structure.md)|Builds an `InterfaceList` type by recursively applying the specified template parameter arguments.|  
|[InterfaceTraits Structure](../windows/interfacetraits-structure.md)|Implements common characteristics of an interface.|  
|[InvokeHelper Structure](../windows/invokehelper-structure.md)|Provides an implementation of the Invoke() method based on the specified number and type of arguments.|  
|[IsBaseOfStrict Structure](../windows/isbaseofstrict-structure.md)|Tests whether one type is the base of another.|  
|[IsSame Structure](../windows/issame-structure.md)|Tests whether one specified type is the same as another specified type.|  
|[Nil Structure](../windows/nil-structure.md)|Used to indicate an unspecified, optional template parameter.|  
|[RemoveReference Structure](../windows/removereference-structure.md)|Strips the reference or rvalue-reference trait from the specified class template parameter.|  
|[RuntimeClassBase Structure](../windows/runtimeclassbase-structure.md)|Used to detect `RuntimeClass` in the [Make](../windows/make-function.md) function.|  
|[RuntimeClassBaseT Structure](../windows/runtimeclassbaset-structure.md)|Provides helper methods for `QueryInterface` operations and getting interface IDs.|  
|[VerifyInheritanceHelper Structure](../windows/verifyinheritancehelper-structure.md)|Tests whether one interface is derived from another interface.|  
|[VerifyInterfaceHelper Structure](../windows/verifyinterfacehelper-structure.md)|Verifies that the interface specified by the template parameter meets certain requirements.|  
  
### Enumerations  
  
|Name|Description|  
|----------|-----------------|  
|[AsyncStatusInternal Enumeration](../windows/asyncstatusinternal-enumeration.md)|Specifies a mapping between internal enumerations for the state of asynchronous operations and the **Windows::Foundation::AsyncStatus** enumeration.|  
  
### Functions  
  
|Name|Description|  
|----------|-----------------|  
|[ActivationFactoryCallback Function](../windows/activationfactorycallback-function.md)|Gets the activation factory for the specified activation ID.|  
|[Move Function](../windows/move-function.md)|Moves the specified argument from one location to another.|  
|[RaiseException Function](../windows/raiseexception-function.md)|Raises an exception in the calling thread.|  
|[Swap Function (Windows Runtime C++ Template Library)](../windows/swap-function-windows-runtime-cpp-template-library.md)|Exchanges the values of the two specified arguments.|  
|[TerminateMap Function](../windows/terminatemap-function.md)|Shuts down the class factories in the specified module.|  
  
## Requirements  
 **Header:** async.h, client.h, corewrappers.h, event.h, ftm.h, implements.h, internal.h, module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)   
 [Microsoft::WRL::Wrappers Namespace](../windows/microsoft-wrl-wrappers-namespace.md)