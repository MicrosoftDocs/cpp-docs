---
title: "Module Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Module"]
dev_langs: ["C++"]
helpviewer_keywords: ["Module class"]
ms.assetid: dd67e3b8-c2e1-4f53-8c0f-565a140ba649
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
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

*moduleType*  
A combination of one or more [ModuleType](../windows/moduletype-enumeration.md) enumeration values.

## Members

### Protected Classes

Name                                                                                | Description
----------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------
[Module::GenericReleaseNotifier](../windows/module-genericreleasenotifier-class.md) | Invokes an event handler when the last object in the current module is released. The event handler is specified by on a lambda, functor, or pointer-to-function.
[Module::MethodReleaseNotifier](../windows/module-methodreleasenotifier-class.md)   | Invokes an event handler when the last object in the current module is released. The event handler is specified by an object and its pointer-to-a-method member.
[Module::ReleaseNotifier](../windows/module-releasenotifier-class.md)               | Invokes an event handler when the last object in a module is released.

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
[Module::objectCount_](#objectcount)         | Keeps track of how many classes have been created with the [Make](../windows/make-function.md) function.
[Module::releaseNotifier_](#releasenotifier) | Holds a pointer to a `ReleaseNotifier` object.

### Macros

Name                                                         | Description
------------------------------------------------------------ | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
[ActivatableClass](../windows/activatableclass)              | Populates an internal cache that contains a factory that can create an instance of the specified class. This macro specifies default factory and group ID parameters.
[ActivatableClassWithFactory](../windows/activatableclass)   | Populates an internal cache that contains a factory that can create an instance of the specified class. This macro enables you to specify a particular factory parameter.
[ActivatableClassWithFactoryEx](../windows/activatableclass) | Populates an internal cache that contains a factory that can create an instance of the specified class. This macro enables you to specify particular factory and group ID parameters.

## Inheritance Hierarchy

`ModuleBase`

`Module`

`Module`

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

