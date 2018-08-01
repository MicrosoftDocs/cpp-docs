---
title: "AsyncBase::ContinueAsyncOperation Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::ContinueAsyncOperation"]
dev_langs: ["C++"]
helpviewer_keywords: ["ContinueAsyncOperation method"]
ms.assetid: ce38181d-2fc3-4579-b0ce-237a3c7648bc
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::ContinueAsyncOperation Method
Determines whether the asynchronous operation should continue processing or should halt.  
  
## Syntax  
  
```  
inline bool ContinueAsyncOperation();  
```  
  
## Return Value  
 **true** if the current state of the asynchronous operation is *started*, which means the operation should continue. Otherwise, **false**, which means the operation should halt.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../windows/asyncbase-class.md)