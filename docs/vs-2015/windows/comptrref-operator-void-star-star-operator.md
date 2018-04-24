---
title: "ComPtrRef::operator void** Operator | Microsoft Docs"
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
  - "client/Microsoft::WRL::Details::ComPtrRef::operator void**"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator void** operator"
ms.assetid: f020045c-9de4-4392-8783-73f0fc0761c6
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ComPtrRef::operator void** Operator
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ComPtrRef::operator void** Operator](https://docs.microsoft.com/cpp/windows/comptrref-operator-void-star-star-operator).  
  
  
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
operator void**() const;  
```  
  
## Remarks  
 Deletes the current ComPtrRef object, casts the pointer to the interface that was represented by the ComPtrRef object as a pointer-to-pointer-to `void`, and then returns the cast pointer.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [ComPtrRef Class](../windows/comptrref-class.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)

