---
title: "Mutex::Mutex Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::Mutex::Mutex"]
dev_langs: ["C++"]
helpviewer_keywords: ["Mutex, constructor"]
ms.assetid: 504afcdc-775a-4c98-a06f-4fb4663eba3f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Mutex::Mutex Constructor
Initializes a new instance of the **Mutex** class.  
  
## Syntax  
  
```  
explicit Mutex(  
   HANDLE h  
);  
  
Mutex(  
   _Inout_ Mutex&& h  
);  
```  
  
### Parameters  
 *h*  
 A handle, or an rvalue-reference to a handle, to a **Mutex** object.  
  
## Remarks  
 The first constructor initializes a **Mutex** object from the specified handle. The second constructor initializes a **Mutex** object from the specified handle, and then moves ownership of the mutex to the current **Mutex** object.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers
 
 ## See Also
 [Mutex Class](../windows/mutex-class1.md)