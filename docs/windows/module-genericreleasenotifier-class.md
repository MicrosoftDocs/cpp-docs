---
title: "Module::GenericReleaseNotifier Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Module::GenericReleaseNotifier"]
dev_langs: ["C++"]
helpviewer_keywords: ["GenericReleaseNotifier class"]
ms.assetid: 244a8fbe-f89b-409b-aa65-db3e37f9b125
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Module::GenericReleaseNotifier Class

Invokes an event handler when the last object in the current module is released. The event handler is specified by on a lambda, functor, or pointer-to-function.

## Syntax

```cpp
template<typename T>
class GenericReleaseNotifier : public ReleaseNotifier;
```

### Parameters

*T*  
The type of the data member that contains the location of the event handler.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[Module::GenericReleaseNotifier::GenericReleaseNotifier Constructor](../windows/module-genericreleasenotifier-genericreleasenotifier-constructor.md)|Initializes a new instance of the **Module::GenericReleaseNotifier** class.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[Module::GenericReleaseNotifier::Invoke Method](../windows/module-genericreleasenotifier-invoke-method.md)|Calls the event handler associated with the current **Module::GenericReleaseNotifier** object.|

### Protected Data Members

|Name|Description|
|----------|-----------------|
|[Module::GenericReleaseNotifier::callback_ Data Member](../windows/module-genericreleasenotifier-callback-data-member.md)|Holds the lambda, functor, or pointer-to-function event handler associated with the current **Module::GenericReleaseNotifier** object.|

## Inheritance Hierarchy

`ReleaseNotifier`

`GenericReleaseNotifier`

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## See Also
[Module Class](../windows/module-class.md)