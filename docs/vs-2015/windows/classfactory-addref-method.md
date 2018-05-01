---
title: "ClassFactory::AddRef Method | Microsoft Docs"
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
  - "module/Microsoft::WRL::ClassFactory::AddRef"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddRef method"
ms.assetid: 5b091785-dea4-42b6-a502-0db5fc7a5a2e
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ClassFactory::AddRef Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ClassFactory::AddRef Method](https://docs.microsoft.com/cpp/windows/classfactory-addref-method).  
  
  
Increments the reference count for the current ClassFactory object.  
  
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
 [ClassFactory Class](../windows/classfactory-class.md)

