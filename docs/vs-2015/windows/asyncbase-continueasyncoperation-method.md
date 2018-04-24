---
title: "AsyncBase::ContinueAsyncOperation Method | Microsoft Docs"
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
  - "async/Microsoft::WRL::AsyncBase::ContinueAsyncOperation"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ContinueAsyncOperation method"
ms.assetid: ce38181d-2fc3-4579-b0ce-237a3c7648bc
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# AsyncBase::ContinueAsyncOperation Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [AsyncBase::ContinueAsyncOperation Method](https://docs.microsoft.com/cpp/windows/asyncbase-continueasyncoperation-method).  
  
  
Determines whether the asynchronous operation should continue processing or should halt.  
  
## Syntax  
  
```  
inline bool ContinueAsyncOperation();  
```  
  
## Return Value  
 `true` if the current state of the asynchronous operation is *started*, which means the operation should continue. Otherwise, `false`, which means the operation should halt.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../windows/asyncbase-class.md)

