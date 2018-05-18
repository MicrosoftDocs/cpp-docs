---
title: "AsyncBase::Cancel Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::Cancel"]
dev_langs: ["C++"]
helpviewer_keywords: ["Cancel method"]
ms.assetid: 8bfebc63-3848-4629-bc89-aa538ed7e7ad
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::Cancel Method
Cancels an asynchronous operation.  
  
## Syntax  
  
```  
STDMETHOD(  
   Cancel  
)(void);  
```  
  
## Return Value  
 By default, always returns S_OK.  
  
## Remarks  
 Cancel() is a default implementation of IAsyncInfo::Cancel, and does no actual work. To actually cancel an asynchronous operation, override the OnCancel() pure virtual method.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../windows/asyncbase-class.md)