---
title: "Module::UnregisterCOMObject Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Module::UnregisterCOMObject"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""UnregisterCOMObject method""]"]
ms.assetid: 5d377525-0385-482a-a215-6e8a1f032861
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Module::UnregisterCOMObject Method

Unregisters one or more COM objects, which prevents other applications from connecting to them.

## Syntax

```cpp
virtual HRESULT UnregisterCOMObject(
   const wchar_t* serverName,
   DWORD* cookies,
   unsigned int count
```

### Parameters

*serverName*  
(Unused)

*cookies*  
An array of pointers to values that identify the class objects to be unregistered. The array was created by the [RegisterCOMObject](../windows/module-registercomobject-method.md) method.

*count*  
The number of classes to unregister.

## Return Value

S_OK if this operation is successful; otherwise, an error HRESULT that indicates the reason the operation failed.

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## See Also
[Module Class](../windows/module-class.md)