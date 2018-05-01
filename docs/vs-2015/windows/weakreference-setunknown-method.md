---
title: "WeakReference::SetUnknown Method | Microsoft Docs"
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
  - "implements/Microsoft::WRL::Details::WeakReference::SetUnknown"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetUnknown method"
ms.assetid: 5dddb9e3-a7c1-4195-8166-97c5ab6e972f
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# WeakReference::SetUnknown Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [WeakReference::SetUnknown Method](https://docs.microsoft.com/cpp/windows/weakreference-setunknown-method).  
  
  
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
[WeakReference Class](../windows/weakreference-class1.md)  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)

