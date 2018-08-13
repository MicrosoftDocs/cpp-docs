---
title: "DontUseNewUseMake Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::DontUseNewUseMake"]
dev_langs: ["C++"]
helpviewer_keywords: ["DontUseNewUseMake class"]
ms.assetid: 8b38d07b-fc14-4cea-afb9-4c1a7dde0093
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# DontUseNewUseMake Class
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```cpp  
class DontUseNewUseMake;  
```  
  
## Remarks  
 Prevents using operator **new** in `RuntimeClass`. Consequently, you must use the [Make function](../windows/make-function.md) instead.  
  
## Members  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[DontUseNewUseMake::operator new Operator](../windows/dontusenewusemake-operator-new-operator.md)|Overloads operator **new** and prevents it from being used in `RuntimeClass`.|  
  
## Inheritance Hierarchy  
 `DontUseNewUseMake`  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)   
 [Make Function](../windows/make-function.md)