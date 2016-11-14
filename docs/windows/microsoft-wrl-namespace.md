---
title: "Microsoft::WRL Namespace | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL"
  - "module/Microsoft::WRL"
  - "async/Microsoft::WRL"
  - "internal/Microsoft::WRL"
  - "event/Microsoft::WRL"
  - "ftm/Microsoft::WRL"
  - "client/Microsoft::WRL"
  - "corewrappers/Microsoft::WRL"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WRL namespace"
ms.assetid: 01118a8f-f564-4859-b87e-9444848585a1
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Microsoft::WRL Namespace
Defines the fundamental types that make up the [!INCLUDE[cppwrl_short](../windows/includes/cppwrl_short_md.md)].  
  
## Syntax  
  
```  
namespace Microsoft::WRL;  
```  
  
## Members  
  
### Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`InhibitWeakReferencePolicy`|`RuntimeClassFlags<WinRt &#124; InhibitWeakReference>`|  
  
### Classes  
  
|Name|Description|  
|----------|-----------------|  
|[ActivationFactory Class](../windows/activationfactory-class.md)|Enables one or more classes to be activated by the Windows Runtime.|  
|[AsyncBase Class](../windows/asyncbase-class.md)|Implements the Windows Runtime asynchronous state machine.|  
|[ClassFactory Class](../windows/classfactory-class.md)|Implements the basic functionality of the `IClassFactory` interface.|  
|[ComPtr Class](../windows/comptr-class.md)|Creates a *smart pointer* type that represents the interface specified by the template parameter. ComPtr automatically maintains a reference count for the underlying interface pointer and releases the interface when the reference count goes to zero.|  
|[DeferrableEventArgs Class](../windows/deferrableeventargs-class.md)|A template class used for the event argument types for deferrals.|  
|[EventSource Class](../windows/eventsource-class.md)|Represents an event. `EventSource` member functions add, remove, and invoke event handlers.|  
|[FtmBase Class](../windows/ftmbase-class.md)|Represents a free-threaded marshaler object.|  
|[Module Class](../windows/module-class.md)|Represents a collection of related objects.|  
|[RuntimeClass Class](../windows/runtimeclass-class.md)|Represents an instantiated class that inherits the specified number of interfaces, and provides the specified Windows Runtime, classic COM, and weak reference support.|  
|[SimpleActivationFactory Class](../windows/simpleactivationfactory-class.md)|Provides a fundamental mechanism to create a Windows Runtime or classic COM base class.|  
|[SimpleClassFactory Class](../windows/simpleclassfactory-class.md)|Provides a fundamental mechanism to create a base class.|  
|[WeakRef Class](../windows/weakref-class.md)|Represents a *weak reference* that can be used by only the Windows Runtime, not classic COM. A weak reference represents an object that might or might not be accessible.|  
  
### Structures  
  
|Name|Description|  
|----------|-----------------|  
|[ChainInterfaces Structure](../windows/chaininterfaces-structure.md)|Specifies verification and initialization functions that can be applied to a set of interface IDs.|  
|[CloakedIid Structure](../windows/cloakediid-structure.md)|Indicates to the RuntimeClass, Implements and ChainInterfaces templates that the specified interface is not accessible in the IID list.|  
|[Implements Structure](../windows/implements-structure.md)|Implements QueryInterface and GetIid for the specified interfaces.|  
|[MixIn Structure](../windows/mixin-structure.md)|Ensures that a runtime class derives from Windows Runtime interfaces, if any, and then classic COM interfaces.|  
|[RuntimeClassFlags Structure](../windows/runtimeclassflags-structure.md)|Contains the type for an instance of a [RuntimeClass](../windows/runtimeclass-class.md).|  
  
### Enumerations  
  
|Name|Description|  
|----------|-----------------|  
|[AsyncResultType Enumeration](../windows/asyncresulttype-enumeration.md)|Specifies the type of result returned by the GetResults() method.|  
|[ModuleType Enumeration](../windows/moduletype-enumeration.md)|Specifies whether a module should support an in-process server or an out-of-process server.|  
|[RuntimeClassType Enumeration](../windows/runtimeclasstype-enumeration.md)|Specifies the type of [RuntimeClass](../windows/runtimeclass-class.md) instance that is supported.|  
  
### Functions  
  
|Name|Description|  
|----------|-----------------|  
|[AsWeak Function](../windows/asweak-function.md)|Retrieves a weak reference to a specified instance.|  
|[Callback Function](../windows/callback-function-windows-runtime-cpp-template-library.md)|Creates an object whose member function is a callback method.|  
|[CreateActivationFactory Function](../windows/createactivationfactory-function.md)|Creates a factory that produces instances of the specified class that can be activated by the Windows Runtime.|  
|[CreateClassFactory Function](../windows/createclassfactory-function.md)|Creates a factory that produces instances of the specified class.|  
|[Make Function](../windows/make-function.md)|Initializes the specified [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] class.|  
  
## Requirements  
 **Header:** async.h, client.h, corewrappers.h, event.h, ftm.h, implements.h, internal.h, module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL::Wrappers Namespace](../windows/microsoft-wrl-wrappers-namespace.md)