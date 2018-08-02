---
title: "AsyncBase::FireProgress Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::FireProgress"]
dev_langs: ["C++"]
helpviewer_keywords: ["FireProgress method"]
ms.assetid: 4512bef6-0ebc-4465-9b8a-4c9dfa82084c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::FireProgress Method
Invokes the current progress event handler.  
  
## Syntax  
  
```  
void FireProgress(  
   const typename ProgressTraits::Arg2Type arg  
);  
```  
  
#### Parameters  
 *arg*  
 The event handler method to invoke.  
  
## Remarks  
 `ProgressTraits` is derived from [ArgTraitsHelper Structure](../windows/argtraitshelper-structure.md).  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../windows/asyncbase-class.md)