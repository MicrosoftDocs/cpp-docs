---
title: "SyncLockWithStatusT::GetStatus Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::Details::SyncLockWithStatusT::GetStatus"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetStatus method"]
ms.assetid: d448b51d-a63d-40d9-a9ee-4aad3204118d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SyncLockWithStatusT::GetStatus Method
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```cpp  
DWORD GetStatus() const;  
```  
  
## Return Value  
 The result of a wait operation on the object that is based on the **SyncLockWithStatusT** class, such as a [Mutex](../windows/mutex-class1.md) or [Semaphore](../windows/semaphore-class.md). Zero (0) indicates the wait operation returned the signaled state; otherwise, another state occurred, such as time-out value elapsed.  
  
## Remarks  
 Retrieves the wait status of the current **SyncLockWithStatusT** object.  
  
 The GetStatus() function retrieves the value of the underlying [status_](../windows/synclockwithstatust-status-data-member.md) data member. When an object based on the **SyncLockWithStatusT** class performs a lock operation, the object first waits for the object to become available. The result of that wait operation is stored in the `status_` data member. The possible values of the `status_` data member are the return values of the wait operation. For more information, see the return values of the `WaitForSingleObjectEx()` function in the MSDN Library.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::Details  
  
## See Also  
 [SyncLockWithStatusT Class](../windows/synclockwithstatust-class.md)