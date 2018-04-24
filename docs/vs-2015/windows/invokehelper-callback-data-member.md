---
title: "InvokeHelper::callback_ Data Member | Microsoft Docs"
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
  - "event/Microsoft::WRL::Details::InvokeHelper::callback_"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "callback_ data member"
ms.assetid: 6f0cbf6d-0448-46f8-ba71-bd6fd8702e3a
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# InvokeHelper::callback_ Data Member
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [InvokeHelper::callback_ Data Member](https://docs.microsoft.com/cpp/windows/invokehelper-callback-data-member).  
  
  
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
TCallback callback_;  
```  
  
## Remarks  
 Represents the event handler to call when an event occurs.  
  
 The `TCallback` template parameter specifies the type of the event handler.  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [InvokeHelper Structure](../windows/invokehelper-structure.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)

