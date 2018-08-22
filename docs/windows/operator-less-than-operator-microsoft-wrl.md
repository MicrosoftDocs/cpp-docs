---
title: "operator&lt; Operator (Microsoft::WRL) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::operator<"]
dev_langs: ["C++"]
ms.assetid: bfae0e1c-1648-482b-99c2-3217d62aba46
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# operator&lt; Operator (Microsoft::WRL)

Determines if the address of one object is less than another.

## Syntax

```cpp
template<class T, class U>
bool operator<(const ComPtr<T>& a, const ComPtr<U>& b) throw();
template<class T, class U>
bool operator<(const Details::ComPtrRef<ComPtr<T>>& a, const Details::ComPtrRef<ComPtr<U>>& b) throw();
```

### Parameters

*a*  
The left object.

*b*  
The right object.

## Return Value

**true** if the address of *a* is less than the address of *b*; otherwise, **false**.

## Requirements

**Header:** client.h

**Namespace:** Microsoft::WRL

## See Also

[Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)