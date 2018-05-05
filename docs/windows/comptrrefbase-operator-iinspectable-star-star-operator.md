---
title: "ComPtrRefBase::operator IInspectable** Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::Details::ComPtrRefBase::operator IInspectable**"]
dev_langs: ["C++"]
helpviewer_keywords: ["operator IInspectable** operator"]
ms.assetid: 06ac1051-606c-449b-a566-cac78ca53762
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtrRefBase::operator IInspectable** Operator

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp
operator IInspectable**() const;
```

## Remarks

Casts the current [ptr_](../windows/comptrrefbase-ptr-data-member.md) data member to a pointer-to-a-pointer-to the IInspectable interface.

An error is emitted if the current ComPtrRefBase doesn't derive from IInspectable.

This cast is available only if **&#95;&#95;WRL_CLASSIC_COM&#95;&#95;** is defined.

## Requirements

**Header:** client.h

**Namespace:** Microsoft::WRL::Details

## See Also

[ComPtrRefBase Class](../windows/comptrrefbase-class.md)   
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)