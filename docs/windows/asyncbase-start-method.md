---
title: "AsyncBase::Start Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "async/Microsoft::WRL::AsyncBase::Start"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Start method"
ms.assetid: 67405c9d-0d1a-4c1e-8ea4-6ba01c1f90d9
caps.latest.revision: 3
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
# AsyncBase::Start Method
Starts the asynchronous operation.  
  
## Syntax  
  
```  
STDMETHOD(  
   Start  
)(void);  
```  
  
## Return Value  
 S_OK if the operation starts or is already started; otherwise, E_ILLEGAL_STATE_CHANGE.  
  
## Remarks  
 Start() is a default implementation of IAsyncInfo::Start, and does no actual work. To actually start an asynchronous operation, override the OnStart() pure virtual method.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../windows/asyncbase-class.md)