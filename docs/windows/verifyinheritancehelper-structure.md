---
title: "VerifyInheritanceHelper Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::VerifyInheritanceHelper"]
dev_langs: ["C++"]
helpviewer_keywords: ["VerifyInheritanceHelper structure"]
ms.assetid: 8a48a702-0f71-4807-935b-8311f0a7a8b6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# VerifyInheritanceHelper Structure

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp  
template <  
   typename I,  
   typename Base  
>  
struct VerifyInheritanceHelper;  
template <  
   typename I  
>  
struct VerifyInheritanceHelper<I, Nil>;  
```

### Parameters

*I*  
A type.

*Base*  
Another type.

## Remarks

Tests whether one interface is derived from another interface.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[VerifyInheritanceHelper::Verify Method](../windows/verifyinheritancehelper-verify-method.md)|Tests the two interfaces specified by the current template parameters and determines whether one interface is derived from the other.|

## Inheritance Hierarchy

`VerifyInheritanceHelper`

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## See Also

[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)