---
title: "Semaphore::Semaphore Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::Semaphore::Semaphore"]
dev_langs: ["C++"]
helpviewer_keywords: ["Semaphore, constructor"]
ms.assetid: 91c22ae7-181e-460d-ad40-70c3a53b26fd
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Semaphore::Semaphore Constructor
Initializes a new instance of the Semaphore class.  
  
## Syntax  
  
```  
explicit Semaphore(  
   HANDLE h  
);  
  
WRL_NOTHROW Semaphore(  
   _Inout_ Semaphore&& h  
);  
```  
  
#### Parameters  
 `h`  
 A handle or an rvalue-reference to a Semaphore object.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers
 
 ## See Also
 [Semaphore Class](../windows/semaphore-class.md)