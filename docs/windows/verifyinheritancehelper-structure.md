---
title: "VerifyInheritanceHelper Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 5
author: "mikeblome"
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
# VerifyInheritanceHelper Structure
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