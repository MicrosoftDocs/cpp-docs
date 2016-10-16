---
title: "VerifyInheritanceHelper::Verify Method"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details::VerifyInheritanceHelper::Verify"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Verify method"
ms.assetid: 3360082b-81ad-4191-9ec3-b4372f7207d7
caps.latest.revision: 5
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# VerifyInheritanceHelper::Verify Method
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
 [Microsoft::WRL::Details Namespace](../windows/microsoft--wrl--details-namespace.md)