---
title: "AsyncBase::OnClose Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["async/Microsoft::WRL::AsyncBase::OnClose"]
dev_langs: ["C++"]
helpviewer_keywords: ["OnClose method"]
ms.assetid: 96766450-c262-4611-8534-7d190b799142
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AsyncBase::OnClose Method
When overridden in a derived class, closes an asynchronous operation.  
  
## Syntax  
  
```cpp  
virtual void OnClose(  
   void  
) = 0;  
```  
  
## Requirements  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [AsyncBase Class](../windows/asyncbase-class.md)   
 [AsyncBase::Close Method](../windows/asyncbase-close-method.md)