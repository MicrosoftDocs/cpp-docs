---
title: "AsyncBase::Close Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::Close"]
dev_langs: ["C++"]
helpviewer_keywords: ["Close method"]
ms.assetid: a52b1124-754b-4393-b491-64aae0c22f1c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::Close Method
Closes the asynchronous operation.  
  
## Syntax  
  
```  
STDMETHOD(  
   Close  
)(void) override;  
```  
  
## Return Value  
 S_OK if the operation closes or is already closed; otherwise, E_ILLEGAL_STATE_CHANGE.  
  
## Remarks  
 **Close()** is a default implementation of `IAsyncInfo::Close`, and does no actual work. To actually close an asynchronous operation, override the `OnClose()` pure virtual method.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../windows/asyncbase-class.md)