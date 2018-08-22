---
title: "HANDLENullTraits::Close Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits::Close"]
dev_langs: ["C++"]
helpviewer_keywords: ["Close method"]
ms.assetid: 6fb2fa0d-df20-45dc-856f-f78497f8bdf9
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HANDLENullTraits::Close Method

Closes the specified handle.

## Syntax

```cpp
inline static bool Close(
   _In_ Type h
);
```

### Parameters

*h*  
The handle to close.

## Return Value

**true** if handle *h* closed successfully; otherwise, **false**.

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers::HandleTraits

## See Also

[HANDLENullTraits Structure](../windows/handlenulltraits-structure.md)