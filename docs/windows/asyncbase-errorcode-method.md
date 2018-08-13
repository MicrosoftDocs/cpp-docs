---
title: "AsyncBase::ErrorCode Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::ErrorCode"]
dev_langs: ["C++"]
helpviewer_keywords: ["ErrorCode method"]
ms.assetid: 3f5f0f69-d60a-4a67-8cc6-a55fdc89a192
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::ErrorCode Method
Retrieves the error code for the current asynchronous operation.  
  
## Syntax  
  
```cpp  
inline void ErrorCode(  
   HRESULT *error  
);  
```  
  
### Parameters  
 *error*  
 The location where this operation stores the current error code.  
  
## Remarks  
 This operation is thread-safe.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../windows/asyncbase-class.md)