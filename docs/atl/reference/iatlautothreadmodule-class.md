---
title: "IAtlAutoThreadModule Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["IAtlAutoThreadModule", "atlbase/ATL::IAtlAutoThreadModule"]
dev_langs: ["C++"]
helpviewer_keywords: ["IAtlAutoThreadModule class"]
ms.assetid: fcb58cf9-a427-4be9-89eb-04e1ab5cc3a1
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# IAtlAutoThreadModule Class

This class represents an interface to a `CreateInstance` method.

> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
__interface IAtlAutoThreadModule
```

## Remarks

The class [CAtlAutoThreadModuleT](../../atl/reference/catlautothreadmodulet-class.md) derives from `IAtlAutoThreadModule`, using it to provide code for creating an object and retrieving an interface pointer.

## Requirements

**Header:** atlbase.h

## See Also

[Class Overview](../../atl/atl-class-overview.md)
