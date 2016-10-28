---
title: "WeakReference::DecrementStrongReference Method"
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
  - "implements/Microsoft::WRL::Details::WeakReference::DecrementStrongReference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DecrementStrongReference method"
ms.assetid: 97d70d9f-41b8-4f8d-a6fa-4137cc4f9029
caps.latest.revision: 6
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
# WeakReference::DecrementStrongReference Method
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
ULONG DecrementStrongReference();  
```  
  
## Remarks  
 Decrements the strong reference count of the current WeakReference object.  
  
 When the strong reference count becomes zero, the strong reference is set to `nullptr`.  
  
## Return Value  
 The decremented strong reference count.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft--wrl--details-namespace.md)