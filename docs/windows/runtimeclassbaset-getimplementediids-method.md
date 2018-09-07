---
title: "RuntimeClassBaseT::GetImplementedIIDS Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::RuntimeClassBaseT::GetImplementedIIDS"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetImplementedIIDS method"]
ms.assetid: adae54da-521d-4add-87f5-242fbd85f33b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# RuntimeClassBaseT::GetImplementedIIDS Method

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
template<typename T>
__forceinline static HRESULT GetImplementedIIDS(
   _In_ T* implements,
   _Out_ ULONG *iidCount,
   _Deref_out_ _Deref_post_cap_(*iidCount) IID **iids
);
```

### Parameters

*T*  
The type of the *implements* parameter.

*implements*  
Pointer to the type specified by parameter *T*.

*iidCount*  
The maximum number of interface IDs to retrieve.

*iids*  
If this operation completes successfully, an array of the interface IDs implemented by type *T*.

## Return Value

S_OK if successful; otherwise, an HRESULT that describes the error.

## Remarks

Retrieves an array of interface IDs that are implemented by a specified type.

## Requirements

**Header:** implements.h

**Namespace:** Microsoft::WRL::Details

## See Also

[RuntimeClassBaseT Structure](../windows/runtimeclassbaset-structure.md)