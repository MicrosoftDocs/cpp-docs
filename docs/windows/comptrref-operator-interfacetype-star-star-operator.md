---
title: "ComPtrRef::operator InterfaceType** Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::Details::ComPtrRef::operator InterfaceType**"]
dev_langs: ["C++"]
helpviewer_keywords: ["operator InterfaceType** operator"]
ms.assetid: b32e3240-a4f0-4998-a55f-d4e35dc9a15a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtrRef::operator InterfaceType** Operator

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
operator InterfaceType**();
```

## Remarks

Deletes the current **ComPtrRef** object and returns a pointer-to-a-pointer to the interface that was represented by the **ComPtrRef** object.

## Requirements

**Header:** client.h

**Namespace:** Microsoft::WRL::Details

## See Also

[ComPtrRef Class](../windows/comptrref-class.md)<br/>
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)