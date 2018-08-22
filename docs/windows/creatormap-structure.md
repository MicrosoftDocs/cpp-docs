---
title: "CreatorMap Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Details::CreatorMap", "implements/Microsoft::WRL::Details::CreatorMap"]
dev_langs: ["C++"]
helpviewer_keywords: ["CreatorMap structure"]
ms.assetid: 94e40927-90c3-4107-bca3-3ad2dc4beda9
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# CreatorMap Structure

Supports the Windows Runtime C++ Template Library infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
struct CreatorMap;
```

## Remarks

Contains information about how to initialize, register, and unregister objects.

**CreatorMap** contains the following information:

- How to initialize, register, and unregister objects.

- How to compare activation data depending on a classic COM or Windows Runtime factory.

- Information about the factory cache and server name for an interface.

## Members

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CreatorMap::activationId Data Member](../windows/creatormap-activationid-data-member.md)|Represents an object ID that is identified either by a classic COM class ID or a Windows Runtime name.|
|[CreatorMap::factoryCache Data Member](../windows/creatormap-factorycache-data-member.md)|Stores the pointer to the factory cache for the **CreatorMap**.|
|[CreatorMap::factoryCreator Data Member](../windows/creatormap-factorycreator-data-member.md)|Creates a factory for the specified **CreatorMap**.|
|[CreatorMap::serverName Data Member](../windows/creatormap-servername-data-member.md)|Stores the server name for the **CreatorMap**.|

## Inheritance Hierarchy

`CreatorMap`

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL::Details

## See Also

[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)