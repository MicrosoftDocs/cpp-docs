---
title: "RuntimeClass::GetWeakReference Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::RuntimeClass::GetWeakReference"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetWeakReference method"]
ms.assetid: 26656ace-7f20-4364-87c9-4a75dd30912e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# RuntimeClass::GetWeakReference Method

Gets a pointer to the weak reference object for the current **RuntimeClass** object.

## Syntax

```cpp  
STDMETHOD(  
   GetWeakReference  
)(_Deref_out_ IWeakReference **weakReference);  
```

### Parameters

*weakReference*  
When this operation completes, a pointer to a weak reference object.

## Return Value

Always S_OK.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL

## See Also

[RuntimeClass Class](../windows/runtimeclass-class.md)