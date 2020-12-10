---
description: "Learn more about: CreatorMap Structure"
title: "CreatorMap Structure"
ms.date: "09/21/2018"
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Details::CreatorMap", "implements/Microsoft::WRL::Details::CreatorMap", "module/Microsoft::WRL::Details::CreatorMap::activationId", "module/Microsoft::WRL::Details::CreatorMap::factoryCache", "module/Microsoft::WRL::Details::CreatorMap::factoryCreator", "module/Microsoft::WRL::Details::CreatorMap::serverName"]
helpviewer_keywords: ["Microsoft::WRL::Details::CreatorMap structure", "Microsoft::WRL::Details::CreatorMap::activationId data member", "Microsoft::WRL::Details::CreatorMap::factoryCache data member", "Microsoft::WRL::Details::CreatorMap::factoryCreator data member", "Microsoft::WRL::Details::CreatorMap::serverName data member"]
ms.assetid: 94e40927-90c3-4107-bca3-3ad2dc4beda9
---
# CreatorMap Structure

Supports the Windows Runtime C++ Template Library infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
struct CreatorMap;
```

## Remarks

Contains information about how to initialize, register, and unregister objects.

`CreatorMap` contains the following information:

- How to initialize, register, and unregister objects.

- How to compare activation data depending on a classic COM or Windows Runtime factory.

- Information about the factory cache and server name for an interface.

## Members

### Public Data Members

Name                                          | Description
--------------------------------------------- | ------------------------------------------------------------------------------------------------------
[CreatorMap::activationId](#activationid)     | Represents an object ID that is identified either by a classic COM class ID or a Windows Runtime name.
[CreatorMap::factoryCache](#factorycache)     | Stores the pointer to the factory cache for the `CreatorMap`.
[CreatorMap::factoryCreator](#factorycreator) | Creates a factory for the specified `CreatorMap`.
[CreatorMap::serverName](#servername)         | Stores the server name for the `CreatorMap`.

## Inheritance Hierarchy

`CreatorMap`

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL::Details

## <a name="activationid"></a> CreatorMap::activationId

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
union {
   const IID* clsid;
   const wchar_t* (*getRuntimeName)();
} activationId;
```

### Parameters

*clsid*<br/>
An interface ID.

*getRuntimeName*<br/>
A function that retrieves the Windows runtime name of an object.

### Remarks

Represents an object ID that is identified either by a classic COM class ID or a Windows runtime name.

## <a name="factorycache"></a> CreatorMap::factoryCache

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
FactoryCache* factoryCache;
```

### Remarks

Stores the pointer to the factory cache for the `CreatorMap`.

## <a name="factorycreator"></a> CreatorMap::factoryCreator

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
HRESULT (*factoryCreator)(
   unsigned int* currentflags,
   const CreatorMap* entry,
   REFIID iidClassFactory,
IUnknown** factory);
```

### Parameters

*currentflags*<br/>
One of the [RuntimeClassType](runtimeclasstype-enumeration.md) enumerators.

*entry*<br/>
A CreatorMap.

*iidClassFactory*<br/>
The interface ID of a class factory.

*factory*<br/>
When the operation completes, the address of a class factory.

### Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

### Remarks

Creates a factory for the specified CreatorMap.

## <a name="servername"></a> CreatorMap::serverName

Supports the WRL infrastructure and is not intended to be used directly from your code.

```cpp
const wchar_t* serverName;
```

### Remarks

Stores the server name for the CreatorMap.
