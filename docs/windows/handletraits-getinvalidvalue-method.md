---
title: "HANDLETraits::GetInvalidValue Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits::GetInvalidValue"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetInvalidValue method"]
ms.assetid: e95d2cc1-e70f-463f-8ff0-183cdeac1138
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HANDLETraits::GetInvalidValue Method

Represents an invalid handle.

## Syntax

```cpp
inline static HANDLE GetInvalidValue();
```

## Return Value

Always returns INVALID_HANDLE_VALUE. (INVALID_HANDLE_VALUE is defined by Windows.)

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## See Also

[HANDLETraits Structure](../windows/handletraits-structure.md)