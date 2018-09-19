---
title: "Module::RegisterObjects Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Module::RegisterObjects"]
dev_langs: ["C++"]
helpviewer_keywords: ["RegisterObjects method"]
ms.assetid: db4077b7-068d-4534-aaa5-41b5444ccb49
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Module::RegisterObjects Method

Registers COM or Windows Runtime objects so other applications can connect to them.

## Syntax

```cpp
HRESULT RegisterObjects(
   ModuleBase* module,
   const wchar_t* serverName);
```

### Parameters

*module*<br/>
An array of COM or Windows Runtime objects.

*serverName*<br/>
Name of the server that created the objects.

## Return Value

S_OK if successful; otherwise, an HRESULT that indicates the reason the operation failed.

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## See Also

[Module Class](../windows/module-class.md)