---
title: "IsSame::value Constant | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["internal/Microsoft::WRL::Details::IsSame::value"]
dev_langs: ["C++"]
helpviewer_keywords: ["value constant"]
ms.assetid: ee72deff-54a2-4482-9967-49a86d07f834
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# IsSame::value Constant

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp  
template <typename T1, typename T2>  
struct IsSame  
{  
    static const bool value = false;  
};

template <typename T1>  
struct IsSame<T1, T1>  
{  
    static const bool value = true;  
};  
```

## Remarks

Indicates whether one type is the same as another.

**value** is **true** if the template parameters are the same, and **false** if the template parameters are different.

## Requirements

**Header:** internal.h

**Namespace:** Microsoft::WRL::Details

## See Also

[IsSame Structure](../windows/issame-structure.md)  
[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)