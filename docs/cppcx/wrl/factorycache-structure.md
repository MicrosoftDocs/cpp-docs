---
description: "Learn more about: FactoryCache Structure"
title: "FactoryCache Structure"
ms.date: "09/21/2018"
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Details::FactoryCache", "module/Microsoft::WRL::Details::FactoryCache::cookie", "module/Microsoft::WRL::Details::FactoryCache::factory"]
helpviewer_keywords: ["Microsoft::WRL::Details::FactoryCache structure", "Microsoft::WRL::Details::FactoryCache::cookie data member", "Microsoft::WRL::Details::FactoryCache::factory data member"]
ms.assetid: 624544e6-0989-47f6-a3e9-edb60e1ee6d4
---
# FactoryCache Structure

Supports the Windows Runtime C++ Template Library infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
struct FactoryCache;
```

## Remarks

Contains the location of a class factory and a value that identifies a registered wrt or COM class object.

## Members

### Public Data Members

Name                              | Description
--------------------------------- | ------------------------------------------------------------------------------------------------------------------------------
[FactoryCache::cookie](#cookie)   | Contains a value that identifies a registered Windows Runtime or COM class object, and is later used to unregister the object.
[FactoryCache::factory](#factory) | Points to a Windows Runtime or COM class factory.

## Inheritance Hierarchy

`FactoryCache`

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL::Details

## <a name="cookie"></a> FactoryCache::cookie

Supports the Windows Runtime C++ Template Library infrastructure and is not intended to be used directly from your code.

```cpp
union {
   WINRT_REGISTRATION_COOKIE winrt;
   DWORD com;
} cookie;
```

### Remarks

Contains a value that identifies a registered Windows Runtime or COM class object, and is later used to unregister the object.

## <a name="factory"></a> FactoryCache::factory

Supports the Windows Runtime C++ Template Library infrastructure and is not intended to be used directly from your code.

```cpp
IUnknown* factory;
```

### Remarks

Points to a Windows Runtime or COM class factory.
