---
title: "WeakRef::operator&amp; Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::WeakRef::operator&"]
dev_langs: ["C++"]
helpviewer_keywords: ["operator& operator"]
ms.assetid: 900afb73-3801-4d08-9b41-2e6a62011ccd
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# WeakRef::operator&amp; Operator

Returns a `ComPtrRef` object that represents the current **WeakRef** object.

## Syntax

```cpp  
Details::ComPtrRef<WeakRef> operator&() throw()  
```

## Return Value

A `ComPtrRef` object that represents the current **WeakRef** object.

## Remarks

This is an internal helper operator that is not meant to be used in your code.

## Requirements

**Header:** client.h

**Namespace:** Microsoft::WRL

## See Also

[WeakRef Class](../windows/weakref-class.md)