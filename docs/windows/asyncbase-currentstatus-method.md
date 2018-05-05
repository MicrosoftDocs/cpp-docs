---
title: "AsyncBase::CurrentStatus Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::CurrentStatus"]
dev_langs: ["C++"]
helpviewer_keywords: ["CurrentStatus method"]
ms.assetid: 26ee4c4a-6525-4a5f-b49c-3ca40c365eb6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::CurrentStatus Method
Retrieves the status of the current asynchronous operation.  
  
## Syntax  
  
```  
inline void CurrentStatus(  
   Details::AsyncStatusInternal *status  
);  
```  
  
#### Parameters  
 `status`  
 The location where this operation stores the current status.  
  
## Remarks  
 This operation is thread-safe.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../windows/asyncbase-class.md)   
 [AsyncStatusInternal Enumeration](../windows/asyncstatusinternal-enumeration.md)