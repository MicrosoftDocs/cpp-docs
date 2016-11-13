---
title: "Key WRL APIs by Category | Microsoft Docs"
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
ms.assetid: 7367bacf-6b7c-4ecd-a0ce-a662db46fc66
caps.latest.revision: 8
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
# Key WRL APIs by Category
The following tables list primary [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] classes, structs, functions, and macros. Constructs in helper namespaces and classes are omitted. These lists augment the API documentation, which is arranged by namespace.  
  
### Classes  
  
|Title|Description|  
|-----------|-----------------|  
|[ActivationFactory Class](../windows/activationfactory-class.md)|Enables one or more classes to be activated by the Windows Runtime.|  
|[AsyncBase Class](../windows/asyncbase-class.md)|Implements the Windows Runtime asynchronous state machine.|  
|[ClassFactory Class](../windows/classfactory-class.md)|Implements the basic functionality of the `IClassFactory` interface.|  
|[ComPtr Class](../windows/comptr-class.md)|Creates a *smart pointer* type that represents the interface specified by the template parameter. ComPtr automatically maintains a reference count for the underlying interface pointer and releases the interface when the reference count goes to zero.|  
|[Event Class (Windows Runtime C++ Template Library)](../windows/event-class-windows-runtime-cpp-template-library.md)|Represents an event.|  
|[EventSource Class](../windows/eventsource-class.md)|Represents an event. `EventSource` member functions add, remove, and invoke event handlers.|  
|[FtmBase Class](../windows/ftmbase-class.md)|Represents a free-threaded marshaler object.|  
|[HandleT Class](../windows/handlet-class.md)|Represents a handle to an object.|  
|[HString Class](../windows/hstring-class.md)|Provides support for manipulating HSTRING handles.|  
|[HStringReference Class](../windows/hstringreference-class.md)|Represents an HSTRING that is created from an existing string.|  
|[Module Class](../windows/module-class.md)|Represents a collection of related objects.|  
|[Module::GenericReleaseNotifier Class](../windows/module-genericreleasenotifier-class.md)|Invokes an event handler when the last object in the current module is released. The event handler is specified by on a lambda, functor, or pointer-to-function.|  
|[Module::MethodReleaseNotifier Class](../windows/module-methodreleasenotifier-class.md)|Invokes an event handler when the last object in the current module is released. The event handler is specified by an object and its pointer-to-a-method member.|  
|[Module::ReleaseNotifier Class](../windows/module-releasenotifier-class.md)|Invokes an event handler when the last object in a module is released.|  
|[RoInitializeWrapper Class](../windows/roinitializewrapper-class.md)|Initializes the [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)].|  
|[RuntimeClass Class](../windows/runtimeclass-class.md)|Represents an instantiated class that inherits the specified number of interfaces, and provides the specified Windows Runtime, classic COM, and weak reference support.|  
|[SimpleActivationFactory Class](../windows/simpleactivationfactory-class.md)|Provides a fundamental mechanism to create a Windows Runtime or classic COM base class.|  
|[SimpleClassFactory Class](../windows/simpleclassfactory-class.md)|Provides a fundamental mechanism to create a base class.|  
|[WeakRef Class](../windows/weakref-class.md)|Represents a *weak reference* that can be used by only the Windows Runtime, not classic COM. A weak reference represents an object that might or might not be accessible.|  
  
### Structures  
  
|Title|Description|  
|-----------|-----------------|  
|[ChainInterfaces Structure](../windows/chaininterfaces-structure.md)|Specifies verification and initialization functions that can be applied to a set of interface IDs.|  
|[CloakedIid Structure](../windows/cloakediid-structure.md)|Indicates to the `RuntimeClass`, `Implements` and `ChainInterfaces` templates that the specified interface is not accessible in the IID list.|  
|[Implements Structure](../windows/implements-structure.md)|Implements `QueryInterface` and `GetIid` for the specified interfaces.|  
|[MixIn Structure](../windows/mixin-structure.md)|Ensures that a runtime class derives from Windows Runtime interfaces, if any, and then classic COM interfaces.|  
  
### Functions  
  
|Title|Description|  
|-----------|-----------------|  
|[ActivateInstance Function](../windows/activateinstance-function.md)|Registers and retrieves an instance of a specified type defined in a specified class ID.|  
|[AsWeak Function](../windows/asweak-function.md)|Retrieves a weak reference to a specified instance.|  
|[Callback Function](../windows/callback-function-windows-runtime-cpp-template-library.md)|Creates an object whose member function is a callback method.|  
|[CreateActivationFactory Function](../windows/createactivationfactory-function.md)|Creates a factory that produces instances of the specified class that can be activated by the Windows Runtime.|  
|[CreateClassFactory Function](../windows/createclassfactory-function.md)|Creates a factory that produces instances of the specified class.|  
|[GetActivationFactory Function](../windows/getactivationfactory-function.md)|Retrieves an activation factory for the type specified by the template parameter.|  
|[Make Function](../windows/make-function.md)|Initializes the specified [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] class.|  
  
### Macros  
  
|Title|Description|  
|-----------|-----------------|  
|[ActivatableClass Macros](../windows/activatableclass-macros.md)|Populates an internal cache that contains a factory that can create an instance of the specified class.|  
|[InspectableClass Macro](../windows/inspectableclass-macro.md)|Sets the runtime class name and trust level.|  
  
## See Also  
 [Windows Runtime C++ Template Library (WRL)](../windows/windows-runtime-cpp-template-library-wrl.md)