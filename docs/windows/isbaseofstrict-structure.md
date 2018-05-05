---
title: "IsBaseOfStrict Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["internal/Microsoft::WRL::Details::IsBaseOfStrict"]
dev_langs: ["C++"]
helpviewer_keywords: ["IsBaseOfStrict structure"]
ms.assetid: 6fed7366-c8d4-4991-b4fb-43ed93f8e1bf
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# IsBaseOfStrict Structure
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template <  
   typename Base,  
   typename Derived  
>  
  
struct IsBaseOfStrict;  
template <  
   typename Base  
>  
struct IsBaseOfStrict<Base, Base>;  
```  
  
#### Parameters  
 `Base`  
 The base type.  
  
 `Derived`  
 The derived type.  
  
## Remarks  
 Tests whether one type is the base of another.  
  
 The first template tests whether a type is derived from a base type, which might yield **true** or **false**. The second template tests whether a type is derived from itself, which always yields **false**.  
  
## Members  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[IsBaseOfStrict::value Constant](../windows/isbaseofstrict-value-constant.md)|Indicates whether one type is the base of another.|  
  
## Inheritance Hierarchy  
 `IsBaseOfStrict`  
  
## Requirements  
 **Header:** internal.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)