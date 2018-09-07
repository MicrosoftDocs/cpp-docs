---
title: "RuntimeClass::GetIids Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::RuntimeClass::GetIids"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetIids method"]
ms.assetid: 826a67d1-ebc4-4940-b5d5-7cd66885e4a1
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# RuntimeClass::GetIids Method

Gets an array that can contain the interface IDs implemented by the current **RuntimeClass** object.

## Syntax

```cpp
STDMETHOD(
   GetIids
)  
   (_Out_ ULONG *iidCount,
   _Deref_out_ _Deref_post_cap_(*iidCount) IID **iids);
```

### Parameters

*iidCount*  
When this operation completes, the total number of elements in array *iids*.

*iids*  
When this operation completes, a pointer to an array of interface IDs.

## Return Value

S_OK if successful; otherwise, E_OUTOFMEMORY.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL

## See Also

[RuntimeClass Class](../windows/runtimeclass-class.md)