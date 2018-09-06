---
title: "RuntimeClass::QueryInterface Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::RuntimeClass::QueryInterface"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""QueryInterface method""]"]
ms.assetid: 8f01f4a1-3fa2-4a8e-88c6-03629236cb9f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# RuntimeClass::QueryInterface Method

Retrieves a pointer to the specified interface ID.

## Syntax

```cpp
STDMETHOD(
   QueryInterface
)  
   (REFIID riid,
   _Deref_out_ void **ppvObject);
```

### Parameters

*riid*  
An interface ID.

*ppvObject*  
When this opereation completes, a pointer to the interface specified by the *riid* parameter.

## Return Value

S_OK if successful; otherwise, an HRESULT that indicates the error.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL

## See Also

[RuntimeClass Class](../windows/runtimeclass-class.md)