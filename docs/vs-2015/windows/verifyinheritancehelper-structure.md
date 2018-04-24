---
title: "VerifyInheritanceHelper Structure | Microsoft Docs"
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
  - "implements/Microsoft::WRL::Details::VerifyInheritanceHelper"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VerifyInheritanceHelper structure"
ms.assetid: 8a48a702-0f71-4807-935b-8311f0a7a8b6
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# VerifyInheritanceHelper Structure
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [VerifyInheritanceHelper Structure](https://docs.microsoft.com/cpp/windows/verifyinheritancehelper-structure).  
  
  
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template <  
   typename I,  
   typename Base  
>  
struct VerifyInheritanceHelper;  
template <  
   typename I  
>  
struct VerifyInheritanceHelper<I, Nil>;  
```  
  
#### Parameters  
 `I`  
 A type.  
  
 `Base`  
 Another type.  
  
## Remarks  
 Tests whether one interface is derived from another interface.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[VerifyInheritanceHelper::Verify Method](../windows/verifyinheritancehelper-verify-method.md)|Tests the two interfaces specified by the current template parameters and determines whether one interface is derived from the other.|  
  
## Inheritance Hierarchy  
 `VerifyInheritanceHelper`  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)

