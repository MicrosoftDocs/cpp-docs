---
title: "VerifyInheritanceHelper::Verify Method | Microsoft Docs"
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
  - "implements/Microsoft::WRL::Details::VerifyInheritanceHelper::Verify"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Verify method"
ms.assetid: 3360082b-81ad-4191-9ec3-b4372f7207d7
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# VerifyInheritanceHelper::Verify Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [VerifyInheritanceHelper::Verify Method](https://docs.microsoft.com/cpp/windows/verifyinheritancehelper-verify-method).  
  
  
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
static void Verify();  
```  
  
## Remarks  
 Tests the two interfaces specified by the current template parameters and determines whether one interface is derived from the other.  
  
 An error is emitted if one interface is not derived from the other.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [VerifyInheritanceHelper Structure](../windows/verifyinheritancehelper-structure.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)

