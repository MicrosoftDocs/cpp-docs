---
title: "AsyncBase::get_Status Method | Microsoft Docs"
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
  - "async/Microsoft::WRL::AsyncBase::get_Status"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "get_Status method"
ms.assetid: 9823ecb9-212e-471d-b76f-7b8f21208905
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# AsyncBase::get_Status Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [AsyncBase::get_Status Method](https://docs.microsoft.com/cpp/windows/asyncbase-get-status-method).  
  
  
Retrieves a value that indicates the status of the asynchronous operation.  
  
## Syntax  
  
```  
STDMETHOD(  
   get_Status  
)(AsyncStatus *status) override;  
```  
  
#### Parameters  
 `status`  
 The location where the status is to be stored. For more information, see Windows::Foundation::AsyncStatus enumeration.  
  
## Return Value  
 S_OK if successful; otherwise, E_ILLEGAL_METHOD_CALL.  
  
## Remarks  
 This method implements IAsyncInfo::get_Status.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../windows/asyncbase-class.md)

