---
title: "CriticalSectionTraits::GetInvalidValue Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::GetInvalidValue"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetInvalidValue method"]
ms.assetid: 665f30a6-ca9c-4968-8c03-8f84e6b2329b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# CriticalSectionTraits::GetInvalidValue Method

Specializes a **CriticalSection** template so that the template is always invalid.

## Syntax

```cpp
inline static Type GetInvalidValue();
```

## Return Value

Always returns a pointer to an invalid critical section.

## Remarks

The `Type` modifier is defined as `typedef CRITICAL_SECTION* Type;`.

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## See Also

[CriticalSectionTraits Structure](../windows/criticalsectiontraits-structure.md)