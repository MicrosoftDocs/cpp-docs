---
title: "Microsoft::WRL Namespace"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 01118a8f-f564-4859-b87e-9444848585a1
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Microsoft::WRL Namespace
Defines the fundamental types that make up the WRL.  
  
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
|[ActivationFactory Class](../VS_visualcpp/ActivationFactory-Class.md)|Enables one or more classes to be activated by the Windows Runtime.|  
|[AsyncBase Class](../VS_visualcpp/AsyncBase-Class.md)|Implements the Windows Runtime asynchronous state machine.|  
|[ClassFactory Class](../VS_visualcpp/ClassFactory-Class.md)|Implements the basic functionality of the `IClassFactory` interface.|  
|[ComPtr Class](../VS_visualcpp/ComPtr-Class.md)|Creates a *smart pointer* type that represents the interface specified by the template parameter. ComPtr automatically maintains a reference count for the underlying interface pointer and releases the interface when the reference count goes to zero.|  
|[DeferrableEventArgs Class](../VS_visualcpp/DeferrableEventArgs-Class.md)|A template class used for the event argument types for deferrals.|  
|[EventSource Class](../VS_visualcpp/EventSource-Class.md)|Represents an event. `EventSource` member functions add, remove, and invoke event handlers.|  
|[FtmBase Class](../VS_visualcpp/FtmBase-Class.md)|Represents a free-threaded marshaler object.|  
|[Module Class](../VS_visualcpp/Module-Class.md)|Represents a collection of related objects.|  
|[RuntimeClass Class](../VS_visualcpp/RuntimeClass-Class.md)|Represents an instantiated class that inherits the specified number of interfaces, and provides the specified Windows Runtime, classic COM, and weak reference support.|  
|[SimpleActivationFactory Class](../VS_visualcpp/SimpleActivationFactory-Class.md)|Provides a fundamental mechanism to create a Windows Runtime or classic COM base class.|  
|[SimpleClassFactory Class](../VS_visualcpp/SimpleClassFactory-Class.md)|Provides a fundamental mechanism to create a base class.|  
|[WeakRef Class](../VS_visualcpp/WeakRef-Class.md)|Represents a *weak reference* that can be used by only the Windows Runtime, not classic COM. A weak reference represents an object that might or might not be accessible.|  
  
### Structures  
  
|Name|Description|  
|----------|-----------------|  
|[ChainInterfaces Structure](../VS_visualcpp/ChainInterfaces-Structure.md)|Specifies verification and initialization functions that can be applied to a set of interface IDs.|  
|[CloakedIid Structure](../VS_visualcpp/CloakedIid-Structure.md)|Indicates to the RuntimeClass, Implements and ChainInterfaces templates that the specified interface is not accessible in the IID list.|  
|[Implements Structure](../VS_visualcpp/Implements-Structure.md)|Implements QueryInterface and GetIid for the specified interfaces.|  
|[MixIn Structure](../VS_visualcpp/MixIn-Structure.md)|Ensures that a runtime class derives from Windows Runtime interfaces, if any, and then classic COM interfaces.|  
|[RuntimeClassFlags Structure](../VS_visualcpp/RuntimeClassFlags-Structure.md)|Contains the type for an instance of a [RuntimeClass](../VS_visualcpp/RuntimeClass-Class.md).|  
  
### Enumerations  
  
|Name|Description|  
|----------|-----------------|  
|[AsyncResultType Enumeration](../VS_visualcpp/AsyncResultType-Enumeration.md)|Specifies the type of result returned by the GetResults() method.|  
|[ModuleType Enumeration](../VS_visualcpp/ModuleType-Enumeration.md)|Specifies whether a module should support an in-process server or an out-of-process server.|  
|[RuntimeClassType Enumeration](../VS_visualcpp/RuntimeClassType-Enumeration.md)|Specifies the type of [RuntimeClass](../VS_visualcpp/RuntimeClass-Class.md) instance that is supported.|  
  
### Functions  
  
|Name|Description|  
|----------|-----------------|  
|[AsWeak Function](../VS_visualcpp/AsWeak-Function.md)|Retrieves a weak reference to a specified instance.|  
|[Callback Function](../VS_visualcpp/Callback-Function--Windows-Runtime-C---Template-Library-.md)|Creates an object whose member function is a callback method.|  
|[CreateActivationFactory Function](../VS_visualcpp/CreateActivationFactory-Function.md)|Creates a factory that produces instances of the specified class that can be activated by the Windows Runtime.|  
|[CreateClassFactory Function](../VS_visualcpp/CreateClassFactory-Function.md)|Creates a factory that produces instances of the specified class.|  
|[Make Function](../VS_visualcpp/Make-Function.md)|Initializes the specified Windows Runtime class.|  
  
## Requirements  
 **Header:** async.h, client.h, corewrappers.h, event.h, ftm.h, implements.h, internal.h, module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL::Wrappers Namespace](../VS_visualcpp/Microsoft--WRL--Wrappers-Namespace.md)