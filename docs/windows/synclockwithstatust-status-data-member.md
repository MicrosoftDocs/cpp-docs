---
title: "SyncLockWithStatusT::status_ Data Member | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::status_"]
dev_langs: ["C++"]
helpviewer_keywords: ["status_ data member"]
ms.assetid: 466fa336-b5ff-4d43-8efd-1e87e5fddf88
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# SyncLockWithStatusT::status_ Data Member
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
DWORD status_;  
```  
  
## Remarks  
 Holds the result of the underlying wait operation after a lock operation on an object based on the current SyncLockWithStatusT object.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## See Also  
 [SyncLockWithStatusT Class](../windows/synclockwithstatust-class.md)