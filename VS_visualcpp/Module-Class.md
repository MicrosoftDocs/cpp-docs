---
title: "Module Class"
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
ms.assetid: dd67e3b8-c2e1-4f53-8c0f-565a140ba649
caps.latest.revision: 6
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
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
 A combination of one or more [ModuleType](../VS_visualcpp/ModuleType-Enumeration.md) enumeration values.  
  
## Members  
  
### Protected Classes  
  
|Name|Description|  
|----------|-----------------|  
|[Module::GenericReleaseNotifier Class](../VS_visualcpp/Module--GenericReleaseNotifier-Class.md)|Invokes an event handler when the last object in the current module is released. The event handler is specified by on a lambda, functor, or pointer-to-function.|  
|[Module::MethodReleaseNotifier Class](../VS_visualcpp/Module--MethodReleaseNotifier-Class.md)|Invokes an event handler when the last object in the current module is released. The event handler is specified by an object and its pointer-to-a-method member.|  
|[Module::ReleaseNotifier Class](../VS_visualcpp/Module--ReleaseNotifier-Class.md)|Invokes an event handler when the last object in a module is released.|  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[Module::~Module Destructor](../VS_visualcpp/Module--~Module-Destructor.md)|Deinitializes the current instance of the Module class.|  
  
### Protected Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[Module::Module Constructor](../VS_visualcpp/Module--Module-Constructor.md)|Initializes a new instance of the Module class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[Module::Create Method](../VS_visualcpp/Module--Create-Method.md)|Creates an instance of a module.|  
|[Module::DecrementObjectCount Method](../VS_visualcpp/Module--DecrementObjectCount-Method.md)|Decrements the number of objects tracked by the module.|  
|[Module::GetActivationFactory Method](../VS_visualcpp/Module--GetActivationFactory-Method.md)|Gets an activation factory for the module.|  
|[Module::GetClassObject Method](../VS_visualcpp/Module--GetClassObject-Method.md)|Retreives a cache of class factories.|  
|[Module::GetModule Method](../VS_visualcpp/Module--GetModule-Method.md)|Creates an instance of a module.|  
|[Module::GetObjectCount Method](../VS_visualcpp/Module--GetObjectCount-Method.md)|Retrieves the number of objects managed by this module.|  
|[Module::IncrementObjectCount Method](../VS_visualcpp/Module--IncrementObjectCount-Method.md)|Increments the number of objects tracked by the module.|  
|[Module::RegisterCOMObject Method](../VS_visualcpp/Module--RegisterCOMObject-Method.md)|Registers one or more COM objects so other applications can connect to them.|  
|[Module::RegisterObjects Method](../VS_visualcpp/Module--RegisterObjects-Method.md)|Registers COM or Windows Runtime objects so other applications can connect to them.|  
|[Module::RegisterWinRTObject Method](../VS_visualcpp/Module--RegisterWinRTObject-Method.md)|Registers one or more Windows Runtime objects so other applications can connect to them.|  
|[Module::Terminate Method](../VS_visualcpp/Module--Terminate-Method.md)|Causes all factories instantiated by the module to shut down.|  
|[Module::UnregisterCOMObject Method](../VS_visualcpp/Module--UnregisterCOMObject-Method.md)|Unregisters one or more COM objects, which prevents other applications from connecting to them.|  
|[Module::UnregisterObjects Method](../VS_visualcpp/Module--UnregisterObjects-Method.md)|Unregisters the objects in the specified module so that other applications cannot connect to them.|  
|[Module::UnregisterWinRTObject Method](../VS_visualcpp/Module--UnregisterWinRTObject-Method.md)|Unregisters one or more Windows Runtime objects so that other applications cannot connect to them.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[Module::Create Method](../VS_visualcpp/Module--Create-Method.md)|Creates an instance of a module.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[Module::objectCount_ Data Member](../VS_visualcpp/Module--objectCount_-Data-Member.md)|Keeps track of how many classes have been created with the [Make](../VS_visualcpp/Make-Function.md) function.|  
|[Module::releaseNotifier_ Data Member](../VS_visualcpp/Module--releaseNotifier_-Data-Member.md)|Holds a pointer to a ReleaseNotifier object.|  
  
### Macros  
  
|||  
|-|-|  
|[ActivatableClass](../VS_visualcpp/ActivatableClass-Macros.md)|Populates an internal cache that contains a factory that can create an instance of the specified class. This macro specifies default factory and group ID parameters.|  
|[ActivatableClassWithFactory](../VS_visualcpp/ActivatableClass-Macros.md)|Populates an internal cache that contains a factory that can create an instance of the specified class. This macro enables you to specify a particular factory parameter.|  
|[ActivatableClassWithFactoryEx](../VS_visualcpp/ActivatableClass-Macros.md)|Populates an internal cache that contains a factory that can create an instance of the specified class. This macro enables you to specify particular factory and group ID parameters.|  
  
## Inheritance Hierarchy  
 `ModuleBase`  
  
 `Module`  
  
 `Module`  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../VS_visualcpp/Microsoft--WRL-Namespace.md)