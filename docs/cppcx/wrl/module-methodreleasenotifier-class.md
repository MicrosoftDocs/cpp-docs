---
description: "Learn more about: Module::MethodReleaseNotifier Class"
title: "Module::MethodReleaseNotifier Class"
ms.date: "09/17/2018"
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Module::MethodReleaseNotifier", "module/Microsoft::WRL::Module::MethodReleaseNotifier::Invoke", "module/Microsoft::WRL::Module::MethodReleaseNotifier::method_", "module/Microsoft::WRL::Module::MethodReleaseNotifier::MethodReleaseNotifier", "module/Microsoft::WRL::Module::MethodReleaseNotifier::object_"]
helpviewer_keywords: ["Microsoft::WRL::Module::MethodReleaseNotifier class", "Microsoft::WRL::Module::MethodReleaseNotifier::Invoke method", "Microsoft::WRL::Module::MethodReleaseNotifier::method_ data member", "Microsoft::WRL::Module::MethodReleaseNotifier::MethodReleaseNotifier, constructor", "Microsoft::WRL::Module::MethodReleaseNotifier::object_ data member"]
ms.assetid: 5c2902be-964b-488f-9f1c-adf504995cbc
---
# Module::MethodReleaseNotifier Class

Invokes an event handler when the last object in the current module is released. The event handler is specified by an object and its pointer-to-a-method member.

## Syntax

```cpp
template<typename T>
class MethodReleaseNotifier : public ReleaseNotifier;
```

### Parameters

*T*<br/>
The type of the object whose member function is the event handler.

## Members

### Public Constructors

Name                                                                                                 | Description
---------------------------------------------------------------------------------------------------- | ------------------------------------------------------------------------
[Module::MethodReleaseNotifier::MethodReleaseNotifier](#methodreleasenotifier-methodreleasenotifier) | Initializes a new instance of the `Module::MethodReleaseNotifier` class.

### Public Methods

Name                                                                   | Description
---------------------------------------------------------------------- | -------------------------------------------------------------------------------------------
[Module::MethodReleaseNotifier::Invoke](#methodreleasenotifier-invoke) | Calls the event handler associated with the current `Module::MethodReleaseNotifier` object.

### Protected Data Members

Name                                                                    | Description
----------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------
[Module::MethodReleaseNotifier::method_](#methodreleasenotifier-method) | Holds a pointer to the event handler for the current `Module::MethodReleaseNotifier` object.
[Module::MethodReleaseNotifier::object_](#methodreleasenotifier-object) | Holds a pointer to the object whose member function is the event handler for the current `Module::MethodReleaseNotifier` object.

## Inheritance Hierarchy

`ReleaseNotifier`

`MethodReleaseNotifier`

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## <a name="methodreleasenotifier-invoke"></a> Module::MethodReleaseNotifier::Invoke

Calls the event handler associated with the current `Module::MethodReleaseNotifier` object.

```cpp
void Invoke();
```

## <a name="methodreleasenotifier-method"></a> Module::MethodReleaseNotifier::method_

Holds a pointer to the event handler for the current `Module::MethodReleaseNotifier` object.

```cpp
void (T::* method_)();
```

## <a name="methodreleasenotifier-methodreleasenotifier"></a> Module::MethodReleaseNotifier::MethodReleaseNotifier

Initializes a new instance of the `Module::MethodReleaseNotifier` class.

```cpp
MethodReleaseNotifier(
   _In_ T* object,
   _In_ void (T::* method)(),
   bool release) throw() :
            ReleaseNotifier(release), object_(object),
            method_(method);
```

### Parameters

*object*<br/>
An object whose member function is an event handler.

*method*<br/>
The member function of parameter *object* that is the event handler.

*release*<br/>
Specify **`true`** to enable calling the underlying [Module::ReleaseNotifier::Release()](module-releasenotifier-class.md#releasenotifier-release) method; otherwise, specify **`false`**.

## <a name="methodreleasenotifier-object"></a> Module::MethodReleaseNotifier::object_

Holds a pointer to the object whose member function is the event handler for the current `Module::MethodReleaseNotifier` object.

```cpp
T* object_;
```
