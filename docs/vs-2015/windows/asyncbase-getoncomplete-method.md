---
title: "AsyncBase::GetOnComplete Method | Microsoft Docs"
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
  - "async/Microsoft::WRL::AsyncBase::GetOnComplete"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetOnComplete method"
ms.assetid: f06ae02d-9a88-41d2-b749-bdc1a7ff8748
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# AsyncBase::GetOnComplete Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [AsyncBase::GetOnComplete Method](https://docs.microsoft.com/cpp/windows/asyncbase-getoncomplete-method).  
  
  
Copies the address of the current completion event handler to the specified variable.  
  
## Syntax  
  
```  
STDMETHOD(  
   GetOnComplete  
)(TComplete** completeHandler);  
```  
  
#### Parameters  
 `completeHandler`  
 The location where the address of the current completion event handler is stored.  
  
## Return Value  
 S_OK if successful; otherwise, E_ILLEGAL_METHOD_CALL.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../windows/asyncbase-class.md)

