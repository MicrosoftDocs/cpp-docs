---
title: "RuntimeClass::Release Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::RuntimeClass::Release"]
dev_langs: ["C++"]
helpviewer_keywords: ["Release method"]
ms.assetid: 0bd6f9e2-ad90-4de6-adef-a6286f458cb6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# RuntimeClass::Release Method

Performs a COM Release operation on the current **RuntimeClass** object.

## Syntax

```cpp
STDMETHOD_(
   ULONG,
   Release
)();
```

## Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

## Remarks

If the reference count becomes zero, the **RuntimeClass** object is deleted.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL

## See Also

[RuntimeClass Class](../windows/runtimeclass-class.md)