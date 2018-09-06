---
title: "ComPtr::operator-&gt; Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::ComPtr::operator->"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""operator-> operator""]"]
ms.assetid: 7b7faefd-d1e4-4f31-a77d-17a42e0d6b6a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtr::operator-&gt; Operator

Retrieves a pointer to the type specified by the current template parameter.

## Syntax

```cpp
WRL_NOTHROW Microsoft::WRL::Details::RemoveIUnknown<InterfaceType>* operator->() const;
```

## Return Value

Pointer to the type specified by the current template type name.

## Remarks

This helper function removes unnecessary overhead caused by using the STDMETHOD macro. This function makes `IUnknown` types **private** instead of **virtual**.

## Requirements

**Header:** client.h

**Namespace:** Microsoft::WRL

## See Also

[ComPtr Class](../windows/comptr-class.md)