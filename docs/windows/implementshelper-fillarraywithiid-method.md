---
title: "ImplementsHelper::FillArrayWithIid Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::ImplementsHelper::FillArrayWithIid"]
dev_langs: ["C++"]
helpviewer_keywords: ["FillArrayWithIid method"]
ms.assetid: f60035ee-b7d6-4a08-966d-f88c646944c3
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ImplementsHelper::FillArrayWithIid Method

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
void FillArrayWithIid(
   _Inout_ unsigned long *index,
   _Inout_ IID* iids) throw();
```

### Parameters

*index*  
A zero-based index that indicates the starting array element for this operation. When this operation completes, *index* is incremented by 1.

*iids*  
An array of type IIDs.

## Remarks

Inserts the interface ID specified by the current zeroth template parameter into the specified array element.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## See Also

[ImplementsHelper Structure](../windows/implementshelper-structure.md)<br/>
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)