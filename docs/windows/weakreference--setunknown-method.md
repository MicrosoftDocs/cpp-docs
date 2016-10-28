---
title: "WeakReference::SetUnknown Method"
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
  - "implements/Microsoft::WRL::Details::WeakReference::SetUnknown"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetUnknown method"
ms.assetid: 5dddb9e3-a7c1-4195-8166-97c5ab6e972f
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
# WeakReference::SetUnknown Method
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
void SetUnknown(  
   _In_ IUnknown* unk  
);  
```  
  
#### Parameters  
 `unk`  
 A pointer to the `IUnknown` interface of an object.  
  
## Remarks  
 Sets the strong reference of the current `WeakReference` object to the specified interface pointer.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft--wrl--details-namespace.md)