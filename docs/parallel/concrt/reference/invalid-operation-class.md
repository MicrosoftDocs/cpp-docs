---
title: "invalid_operation Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["invalid_operation", "CONCRT/concurrency::invalid_operation", "CONCRT/concurrency::invalid_operation::invalid_operation"]
dev_langs: ["C++"]
helpviewer_keywords: ["invalid_operation class"]
ms.assetid: 26ba07dc-fcdf-44cb-b748-a31d35205b52
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# invalid_operation Class
This class describes an exception thrown when an invalid operation is performed that is not more accurately described by another exception type thrown by the Concurrency Runtime.  
  
## Syntax  
  
```
class invalid_operation : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[invalid_operation](#ctor)|Overloaded. Constructs an `invalid_operation` object.|  
  
## Remarks  
 The various methods which throw this exception will generally document under what circumstances they will throw it.  
  
## Inheritance Hierarchy  
 `exception`  
  
 `invalid_operation`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="ctor"></a> invalid_operation 

 Constructs an `invalid_operation` object.  
  
```
explicit _CRTIMP invalid_operation(_In_z_ const char* _Message) throw();

invalid_operation() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
