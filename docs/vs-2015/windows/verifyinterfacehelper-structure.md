---
title: "VerifyInterfaceHelper Structure | Microsoft Docs"
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
  - "implements/Microsoft::WRL::Details::VerifyInterfaceHelper"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VerifyInterfaceHelper structure"
ms.assetid: ea95b641-199a-4fdf-964b-186b40cb3ba7
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# VerifyInterfaceHelper Structure
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [VerifyInterfaceHelper Structure](https://docs.microsoft.com/cpp/windows/verifyinterfacehelper-structure).  
  
  
Supports the [!INCLUDE[cppwrl](../includes/cppwrl-md.md)] infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template <  
   bool isWinRTInterface,  
   typename I  
>  
struct VerifyInterfaceHelper;  
  
template <  
   typename I  
>  
struct VerifyInterfaceHelper<false, I>;  
```  
  
#### Parameters  
 `I`  
 An interface to verify.  
  
 `isWinRTInterface`  
  
## Remarks  
 Verifies that the interface specified by the template parameter meets certain requirements.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[VerifyInterfaceHelper::Verify Method](../windows/verifyinterfacehelper-verify-method.md)||  
  
## Inheritance Hierarchy  
 `VerifyInterfaceHelper`  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)

