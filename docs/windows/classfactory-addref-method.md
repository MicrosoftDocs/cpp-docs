---
title: "ClassFactory::AddRef Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::ClassFactory::AddRef"]
dev_langs: ["C++"]
helpviewer_keywords: ["AddRef method"]
ms.assetid: 5b091785-dea4-42b6-a502-0db5fc7a5a2e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ClassFactory::AddRef Method

Increments the reference count for the current **ClassFactory** object.

## Syntax

```cpp  
STDMETHOD_(  
   ULONG,  
   AddRef  
)();  
```

## Return Value

S_OK if successful; otherwise, an HRESULT that describes the failure.

## Requirements

**Header:** module.h

**Namespace:** Microsoft::WRL

## See Also

[ClassFactory Class](../windows/classfactory-class.md)