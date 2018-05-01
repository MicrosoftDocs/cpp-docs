---
title: "ActivationFactory::AddRef Method | Microsoft Docs"
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
  - "module/Microsoft::WRL::ActivationFactory::AddRef"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddRef method"
ms.assetid: dfe96189-ddbe-410a-9f8d-5d8ecc8cc7e6
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ActivationFactory::AddRef Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ActivationFactory::AddRef Method](https://docs.microsoft.com/cpp/windows/activationfactory-addref-method).  
  
  
Increments the reference count of the current ActivationFactory object.  
  
## Syntax  
  
```  
STDMETHOD_(  
   ULONG,  
   AddRef  
)();  
```  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that describes the failure.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ActivationFactory Class](../windows/activationfactory-class.md)

