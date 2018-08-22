---
title: "Swap Function (Windows Runtime C++ Template Library) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["internal/Microsoft::WRL::Details::Swap"]
dev_langs: ["C++"]
ms.assetid: ed134a08-ceb7-4279-aa02-a183c3a426ea
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Swap Function (Windows Runtime C++ Template Library)

Supports the WRL infrastructure and is not intended to be used directly from your code.

## Syntax

```cpp  
WRL_NOTHROW inline void Swap(  
   _Inout_ T& left,  
   _Inout_ T& right  
);  
```

### Parameters

*left*  
The first argument.

*right*  
The second argument.

## Return Value

## Remarks

Exchanges the values of the two specified arguments.

## Requirements

**Header:** internal.h

**Namespace:** Microsoft::WRL::Details

## See Also

[Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)