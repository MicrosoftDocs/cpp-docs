---
title: "ComPtrRef::operator void** Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::Details::ComPtrRef::operator void**"]
dev_langs: ["C++"]
helpviewer_keywords: ["operator void** operator"]
ms.assetid: f020045c-9de4-4392-8783-73f0fc0761c6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtrRef::operator void\*\* Operator

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
operator void**() const;
```

## Remarks

Deletes the current **ComPtrRef** object, casts the pointer to the interface that was represented by the **ComPtrRef** object as a pointer-to-pointer-to **void**, and then returns the cast pointer.

## Requirements

**Header:** client.h

**Namespace:** Microsoft::WRL::Details

## See Also

[ComPtrRef Class](../windows/comptrref-class.md)  
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)