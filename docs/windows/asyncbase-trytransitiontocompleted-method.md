---
title: "AsyncBase::TryTransitionToCompleted Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::TryTransitionToCompleted"]
dev_langs: ["C++"]
helpviewer_keywords: ["TryTransitionToCompleted method"]
ms.assetid: 8d038e0a-47ec-4cfc-8aeb-6821282df67a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::TryTransitionToCompleted Method
Indicates whether the current asynchronous operation has completed.  
  
## Syntax  
  
```  
bool TryTransitionToCompleted(  
   void  
);  
```  
  
## Return Value  
 **true** if the asynchronous operation has completed; otherwise, **false**.  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../windows/asyncbase-class.md)