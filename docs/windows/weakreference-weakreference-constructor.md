---
title: "WeakReference::WeakReference Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::Details::WeakReference::WeakReference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WeakReference, constructor"
ms.assetid: 4959a9d7-78ea-423d-a46b-50d010d29fff
caps.latest.revision: 8
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
# WeakReference::WeakReference Constructor
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
WeakReference();  
```  
  
## Remarks  
 Initializes a new instance of the [WeakReference class](../windows/weakreference-class1.md).  
  
 The strong reference pointer for the WeakReference object is initialized to `nullptr`, and the strong reference count is initialized to 1.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
    
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)