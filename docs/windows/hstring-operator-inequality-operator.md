---
title: "HString::Operator!= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HString::operator!="]
dev_langs: ["C++"]
ms.assetid: dcdd2aca-e7d6-4bf1-b2de-03efbb430a93
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HString::Operator!= Operator

Indicates whether the two parameters are not equal.

## Syntax

```cpp  
inline bool operator!=( const HString& lhs,   
                        const HString& rhs) throw()

inline bool operator!=( const HStringReference& lhs,   
                        const HString& rhs) throw()

inline bool operator!=( const HString& lhs,   
                        const HStringReference& rhs) throw()

inline bool operator!=( const HSTRING& lhs,   
                        const HString& rhs) throw()

inline bool operator!=( const HString& lhs,   
                        const HSTRING& rhs) throw()  
```

### Parameters

*lhs*  
The first parameter to compare. *lhs* can be an **HString** or `HStringReference` object, or an HSTRING handle.

*rhs*  
The second parameter to compare.*rhs* can be an **HString** or `HStringReference` object, or an HSTRING handle.

## Return Value

**true** if the *lhs* and *rhs* parameters are not equal; otherwise, **false**.

## Requirements

**Header:** corewrappers.h

**Namespace:** Microsoft::WRL::Wrappers

## See Also

[HString Class](../windows/hstring-class.md)