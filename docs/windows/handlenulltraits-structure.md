---
title: "HANDLENullTraits Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits"]
dev_langs: ["C++"]
helpviewer_keywords: ["HANDLENullTraits structure"]
ms.assetid: 88a29a14-c516-40cb-a0ca-ee897a668623
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HANDLENullTraits Structure
Defines common characteristics of an uninitialized handle.  
  
## Syntax  
  
```  
struct HANDLENullTraits;  
```  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`Type`|A synonym for HANDLE.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[HANDLENullTraits::Close Method](../windows/handlenulltraits-close-method.md)|Closes the specified handle.|  
|[HANDLENullTraits::GetInvalidValue Method](../windows/handlenulltraits-getinvalidvalue-method.md)|Represents an invalid handle.|  
  
## Inheritance Hierarchy  
 `HANDLENullTraits`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## See Also  
 [Microsoft::WRL::Wrappers::HandleTraits Namespace](../windows/microsoft-wrl-wrappers-handletraits-namespace.md)