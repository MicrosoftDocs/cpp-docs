---
title: "ComPtrRef::GetAddressOf Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::Details::ComPtrRef::GetAddressOf"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetAddressOf method"]
ms.assetid: 797df323-a2fa-412b-ab60-32cce3721096
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtrRef::GetAddressOf Method

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp  
InterfaceType* const * GetAddressOf() const;  
```

## Return Value

Address of a pointer to the interface represented by the current **ComPtrRef** object.

## Remarks

Retrieves the address of a pointer to the interface represented by the current **ComPtrRef** object.

## Requirements

**Header:** client.h

**Namespace:** Microsoft::WRL::Details

## See Also

[ComPtrRef Class](../windows/comptrref-class.md)  
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)