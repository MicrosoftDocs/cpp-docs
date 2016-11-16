---
title: "Module Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Module"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Module class"
ms.assetid: dd67e3b8-c2e1-4f53-8c0f-565a140ba649
caps.latest.revision: 6
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
# Module Class
Represents a collection of related objects.  
  
## Syntax  
  
```  
  
template<  
   ModuleType moduleType  
>  
class Module;  
  
template<>  
class Module<InProc> : public Details::ModuleBase;  
  
template<>  
class Module<OutOfProc> : public Module<InProc>;  
```  
  
#### Parameters  
 `moduleType`  
 A combination of one or more [ModuleType](../windows/moduletype-enumeration.md) enumeration values.  
  
## Members  
  
### Protected Classes  
  
|Name|Description|  
|----------|-----------------|  
|[Module::GenericReleaseNotifier Class](../windows/module-genericreleasenotifier-class.md)|Invokes an event handler when the last object in the current module is released. The event handler is specified by on a lambda, functor, or pointer-to-function.|  
|[Module::MethodReleaseNotifier Class](../windows/module-methodreleasenotifier-class.md)|Invokes an event handler when the last object in the current module is released. The event handler is specified by an object and its pointer-to-a-method member.|  
|[Module::ReleaseNotifier Class](../windows/module-releasenotifier-class.md)|Invokes an event handler when the last object in a module is released.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[Module::~Module Destructor](../windows/module-tilde-module-destructor.md)|Deinitializes the current instance of the Module class.|  
  
### Protected Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[Module::Module Constructor](../windows/module-module-constructor.md)|Initializes a new instance of the Module class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[Module::Create Method](../windows/module-create-method.md)|Creates an instance of a module.|  
|[Module::DecrementObjectCount Method](../windows/module-decrementobjectcount-method.md)|Decrements the number of objects tracked by the module.|  
|[Module::GetActivationFactory Method](../windows/module-getactivationfactory-method.md)|Gets an activation factory for the module.|  
|[Module::GetClassObject Method](../windows/module-getclassobject-method.md)|Retreives a cache of class factories.|  
|[Module::GetModule Method](../windows/module-getmodule-method.md)|Creates an instance of a module.|  
|[Module::GetObjectCount Method](../windows/module-getobjectcount-method.md)|Retrieves the number of objects managed by this module.|  
|[Module::IncrementObjectCount Method](../windows/module-incrementobjectcount-method.md)|Increments the number of objects tracked by the module.|  
|[Module::RegisterCOMObject Method](../windows/module-registercomobject-method.md)|Registers one or more COM objects so other applications can connect to them.|  
|[Module::RegisterObjects Method](../windows/module-registerobjects-method.md)|Registers COM or [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] objects so other applications can connect to them.|  
|[Module::RegisterWinRTObject Method](../windows/module-registerwinrtobject-method.md)|Registers one or more [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] objects so other applications can connect to them.|  
|[Module::Terminate Method](../windows/module-terminate-method.md)|Causes all factories instantiated by the module to shut down.|  
|[Module::UnregisterCOMObject Method](../windows/module-unregistercomobject-method.md)|Unregisters one or more COM objects, which prevents other applications from connecting to them.|  
|[Module::UnregisterObjects Method](../windows/module-unregisterobjects-method.md)|Unregisters the objects in the specified module so that other applications cannot connect to them.|  
|[Module::UnregisterWinRTObject Method](../windows/module-unregisterwinrtobject-method.md)|Unregisters one or more [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] objects so that other applications cannot connect to them.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[Module::Create Method](../windows/module-create-method.md)|Creates an instance of a module.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[Module::objectCount_ Data Member](../windows/module-objectcount-data-member.md)|Keeps track of how many classes have been created with the [Make](../windows/make-function.md) function.|  
|[Module::releaseNotifier_ Data Member](../windows/module-releasenotifier-data-member.md)|Holds a pointer to a ReleaseNotifier object.|  
  
### Macros  
  
|||  
|-|-|  
|[ActivatableClass](../windows/activatableclass-macros.md)|Populates an internal cache that contains a factory that can create an instance of the specified class. This macro specifies default factory and group ID parameters.|  
|[ActivatableClassWithFactory](../windows/activatableclass-macros.md)|Populates an internal cache that contains a factory that can create an instance of the specified class. This macro enables you to specify a particular factory parameter.|  
|[ActivatableClassWithFactoryEx](../windows/activatableclass-macros.md)|Populates an internal cache that contains a factory that can create an instance of the specified class. This macro enables you to specify particular factory and group ID parameters.|  
  
## Inheritance Hierarchy  
 `ModuleBase`  
  
 `Module`  
  
 `Module`  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)