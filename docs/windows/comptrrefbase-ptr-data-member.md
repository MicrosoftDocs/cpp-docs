---
title: "ComPtrRefBase::ptr_ Data Member | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "client/Microsoft::WRL::Details::ComPtrRefBase::ptr_"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ptr_ data member"
ms.assetid: 9b1c07f9-531f-41c2-9ac0-f7cf49f5f586
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
# ComPtrRefBase::ptr_ Data Member
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
T* ptr_;  
```  
  
## Remarks  
 Pointer to the type specified by the current template parameter.  
  
## Remarks  
 `ptr_` is the protected data member.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [ComPtrRefBase Class](../windows/comptrrefbase-class.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)