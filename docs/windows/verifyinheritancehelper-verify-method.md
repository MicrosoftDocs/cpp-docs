---
title: "VerifyInheritanceHelper::Verify Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::VerifyInheritanceHelper::Verify"]
dev_langs: ["C++"]
helpviewer_keywords: ["Verify method"]
ms.assetid: 3360082b-81ad-4191-9ec3-b4372f7207d7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# VerifyInheritanceHelper::Verify Method

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp  
static void Verify();  
```

## Remarks

Tests the two interfaces specified by the current template parameters and determines whether one interface is derived from the other.

An error is emitted if one interface is not derived from the other.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## See Also

[VerifyInheritanceHelper Structure](../windows/verifyinheritancehelper-structure.md)  
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)