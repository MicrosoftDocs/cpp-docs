---
title: "HANDLENullTraits Structure | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLENullTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "HANDLENullTraits structure"
ms.assetid: 88a29a14-c516-40cb-a0ca-ee897a668623
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# HANDLENullTraits Structure
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [HANDLENullTraits Structure](https://docs.microsoft.com/cpp/windows/handlenulltraits-structure).  
  
  
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

