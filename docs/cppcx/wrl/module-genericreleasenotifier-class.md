---
description: "Learn more about: Module::GenericReleaseNotifier Class"
title: "Module::GenericReleaseNotifier Class"
ms.date: "09/17/2018"
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Module::GenericReleaseNotifier", "module/Microsoft::WRL::Module::GenericReleaseNotifier::callback_", "module/Microsoft::WRL::Module::GenericReleaseNotifier::GenericReleaseNotifier", "module/Microsoft::WRL::Module::GenericReleaseNotifier::Invoke"]
helpviewer_keywords: ["Microsoft::WRL::Module::GenericReleaseNotifier class", "Microsoft::WRL::Module::GenericReleaseNotifier::callback_ data member", "Microsoft::WRL::Module::GenericReleaseNotifier::GenericReleaseNotifier, constructor", "Microsoft::WRL::Module::GenericReleaseNotifier::Invoke method"]
ms.assetid: 244a8fbe-f89b-409b-aa65-db3e37f9b125
---
# Module::GenericReleaseNotifier Class

Invokes an event handler when the last object in the current module is released. The event handler is specified by on a lambda, functor, or pointer-to-function.

## Syntax

```cpp
template<typename T>
class GenericReleaseNotifier : public ReleaseNotifier;
```

### Parameters

*T*<br/>
The type of the data member that contains the location of the event handler.

## Members

### Public Constructors

Name                                                                                                     | Description
-------------------------------------------------------------------------------------------------------- | -------------------------------------------------------------------------
[Module::GenericReleaseNotifier::GenericReleaseNotifier](#genericreleasenotifier-genericreleasenotifier) | Initializes a new instance of the `Module::GenericReleaseNotifier` class.

### Public Methods

Name                                                                     | Description
------------------------------------------------------------------------ | --------------------------------------------------------------------------------------------
[Module::GenericReleaseNotifier::Invoke](#genericreleasenotifier-invoke) | Calls the event handler associated with the current `Module::GenericReleaseNotifier` object.

### Protected Data Members

Name                                                                          | Description
----------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------
[Module::GenericReleaseNotifier::callback_](#genericreleasenotifier-callback) | Holds the lambda, functor, or pointer-to-function event handler associated with the current `Module::GenericReleaseNotifier` object.

## Inheritance Hierarchy

`ReleaseNotifier`

`GenericReleaseNotifier`

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## <a name="genericreleasenotifier-callback"></a> Module::GenericReleaseNotifier::callback_

Holds the lambda, functor, or pointer-to-function event handler associated with the current `Module::GenericReleaseNotifier` object.

```cpp
T callback_;
```

## <a name="genericreleasenotifier-genericreleasenotifier"></a> Module::GenericReleaseNotifier::GenericReleaseNotifier

Initializes a new instance of the `Module::GenericReleaseNotifier` class.

```cpp
GenericReleaseNotifier(
   T callback,
   bool release
) throw() : ReleaseNotifier(release), callback_(callback);
```

### Parameters

*callback*<br/>
A lambda, functor, or pointer-to-function event handler that can be invoked with the parentheses function operator (`()`).

*release*<br/>
Specify **`true`** to enable calling the underlying [Module::ReleaseNotifier::Release()](module-releasenotifier-class.md#releasenotifier-release) method; otherwise, specify **`false`**.

## <a name="genericreleasenotifier-invoke"></a> Module::GenericReleaseNotifier::Invoke

Calls the event handler associated with the current `Module::GenericReleaseNotifier` object.

```cpp
void Invoke();
```
