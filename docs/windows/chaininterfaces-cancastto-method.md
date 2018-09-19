---
title: "ChainInterfaces::CanCastTo Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::ChainInterfaces::CanCastTo"]
dev_langs: ["C++"]
helpviewer_keywords: ["CanCastTo method"]
ms.assetid: 8be44875-53ed-494b-91a0-0f8e399685bb
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ChainInterfaces::CanCastTo Method

Indicates whether the specified interface ID can be cast to each of the specializations defined by the non-default template parameters.

## Syntax

```cpp
__forceinline bool CanCastTo(
   REFIID riid,
   _Deref_out_ void **ppv
);
```

### Parameters

*riid*<br/>
An interface ID.

*ppv*<br/>
A pointer to the last interface ID that was cast successfully.

## Return Value

**true** if all the cast operations succeeded; otherwise, **false**.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL

## See Also

[ChainInterfaces Structure](../windows/chaininterfaces-structure.md)