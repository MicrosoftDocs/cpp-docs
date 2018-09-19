---
title: "HStringReference::Operator== Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HStringReference::operator=="]
dev_langs: ["C++"]
ms.assetid: cad3d52d-cd67-4194-a270-5239b1121a09
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HStringReference::Operator== Operator

Indicates whether the two parameters are equal.

## Syntax

```cpp
inline bool operator==(
               const HStringReference& lhs,
               const HStringReference& rhs) throw()

inline bool operator==(
               const HSTRING& lhs,
               const HStringReference& rhs) throw()

inline bool operator==(
               const HStringReference& lhs,
               const HSTRING& rhs) throw()  
```

### Parameters

*lhs*<br/>
The first parameter to compare. *lhs* can be an **HStringReference** object or an HSTRING handle.

*rhs*<br/>
The second parameter to compare.  *rhs* can be an **HStringReference** object or an HSTRING handle.

## Return Value

**true** if the *lhs* and *rhs* parameters are equal; otherwise, **false**.

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See Also

[HStringReference Class](../windows/hstringreference-class.md)