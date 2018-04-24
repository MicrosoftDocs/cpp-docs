---
title: "AsyncBase::ErrorCode Method | Microsoft Docs"
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
  - "async/Microsoft::WRL::AsyncBase::ErrorCode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ErrorCode method"
ms.assetid: 3f5f0f69-d60a-4a67-8cc6-a55fdc89a192
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# AsyncBase::ErrorCode Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [AsyncBase::ErrorCode Method](https://docs.microsoft.com/cpp/windows/asyncbase-errorcode-method).  
  
  
Retrieves the error code for the current asynchronous operation.  
  
## Syntax  
  
```  
inline void ErrorCode(  
   HRESULT *error  
);  
```  
  
#### Parameters  
 `error`  
 The location where this operation stores the current error code.  
  
## Remarks  
 This operation is thread-safe.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../windows/asyncbase-class.md)

