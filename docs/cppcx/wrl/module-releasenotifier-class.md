---
description: "Learn more about: Module::ReleaseNotifier Class"
title: "Module::ReleaseNotifier Class"
ms.date: "09/17/2018"
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Module::ReleaseNotifier", "module/Microsoft::WRL::Module::ReleaseNotifier::~ReleaseNotifier", "module/Microsoft::WRL::Module::ReleaseNotifier::Invoke", "module/Microsoft::WRL::Module::ReleaseNotifier::Release", "module/Microsoft::WRL::Module::ReleaseNotifier::ReleaseNotifier"]
helpviewer_keywords: ["Microsoft::WRL::Module::ReleaseNotifier class", "Microsoft::WRL::Module::ReleaseNotifier::~ReleaseNotifier, destructor", "Microsoft::WRL::Module::ReleaseNotifier::Invoke method", "Microsoft::WRL::Module::ReleaseNotifier::Release method", "Microsoft::WRL::Module::ReleaseNotifier::ReleaseNotifier, constructor"]
ms.assetid: 17249cd1-4d88-42e3-8146-da9e942d12bd
---
# Module::ReleaseNotifier Class

Invokes an event handler when the last object in a module is released.

## Syntax

```cpp
class ReleaseNotifier;
```

## Members

### Public Constructors

Name                                                                                | Description
----------------------------------------------------------------------------------- | --------------------------------------------------------------------------
[Module::ReleaseNotifier::~ReleaseNotifier](#releasenotifier-tilde-releasenotifier) | Deinitializes the current instance of the `Module::ReleaseNotifier` class.
[Module::ReleaseNotifier::ReleaseNotifier](#releasenotifier-releasenotifier)        | Initializes a new instance of the `Module::ReleaseNotifier` class.

### Public Methods

Name                                                         | Description
------------------------------------------------------------ | --------------------------------------------------------------------------------------------------------------
[Module::ReleaseNotifier::Invoke](#releasenotifier-invoke)   | When implemented, calls an event handler when the last object in a module is released.
[Module::ReleaseNotifier::Release](#releasenotifier-release) | Deletes the current `Module::ReleaseNotifier` object if the object was constructed with a parameter of **`true`**.

## Inheritance Hierarchy

`ReleaseNotifier`

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## <a name="releasenotifier-tilde-releasenotifier"></a> Module::ReleaseNotifier::~ReleaseNotifier

Deinitializes the current instance of the `Module::ReleaseNotifier` class.

```cpp
WRL_NOTHROW virtual ~ReleaseNotifier();
```

## <a name="releasenotifier-invoke"></a> Module::ReleaseNotifier::Invoke

When implemented, calls an event handler when the last object in a module is released.

```cpp
virtual void Invoke() = 0;
```

## <a name="releasenotifier-release"></a> Module::ReleaseNotifier::Release

Deletes the current `Module::ReleaseNotifier` object if the object was constructed with a parameter of **`true`**.

```cpp
void Release() throw();
```

## <a name="releasenotifier-releasenotifier"></a> Module::ReleaseNotifier::ReleaseNotifier

Initializes a new instance of the `Module::ReleaseNotifier` class.

```cpp
ReleaseNotifier(bool release) throw();
```

### Parameters

*release*<br/>
**`true`** to delete this instance when the `Release` method is called; **`false`** to not delete this instance.
