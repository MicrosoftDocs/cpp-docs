---
title: "IsSame Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["internal/Microsoft::WRL::Details::IsSame"]
dev_langs: ["C++"]
helpviewer_keywords: ["IsSame structure"]
ms.assetid: 1eddbc3f-3cc5-434f-8495-e4477e1f868e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# IsSame Structure
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template <  
   typename T1,  
   typename T2  
>  
struct IsSame;  
template <  
   typename T1  
>  
struct IsSame<T1, T1>;  
```  
  
### Parameters  
 *T1*  
 A type.  
  
 *T2*  
 Another type.  
  
## Remarks  
 Tests whether one specified type is the same as another specified type.  
  
## Members  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[IsSame::value Constant](../windows/issame-value-constant.md)|Indicates whether one type is the same as another.|  
  
## Inheritance Hierarchy  
 `IsSame`  
  
## Requirements  
 **Header:** internal.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)