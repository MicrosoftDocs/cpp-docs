---
title: "HANDLETraits::Close Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits::Close"]
dev_langs: ["C++"]
helpviewer_keywords: ["Close method"]
ms.assetid: 3c631a7c-ccce-472a-b1da-aab8fa815c13
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HANDLETraits::Close Method

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

[HANDLETraits Structure](../windows/handletraits-structure.md)