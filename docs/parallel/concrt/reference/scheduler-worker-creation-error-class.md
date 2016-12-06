---
title: "scheduler_worker_creation_error Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "concrt/concurrency::scheduler_worker_creation_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "scheduler_worker_creation_error class"
ms.assetid: 4aec1c3e-c32a-41b2-899d-2d898f23b3c7
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# scheduler_worker_creation_error Class
This class describes an exception thrown because of a failure to create a worker execution context in the Concurrency Runtime.  
  
## Syntax  
  
```
class scheduler_worker_creation_error : public scheduler_resource_allocation_error;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[scheduler_worker_creation_error::scheduler_worker_creation_error Constructor](#ctor)|Overloaded. Constructs a `scheduler_worker_creation_error` object.|  
  
## Remarks  
 This exception is typically thrown when a call to the operating system to create execution contexts from within the Concurrency Runtime fails. Execution contexts are threads that execute tasks in the Concurrency Runtime. The error code which would normally be returned from a call to the Win32 method `GetLastError` is converted to a value of type `HRESULT` and can be retrieved using the base class method `get_error_code`.  
  
## Inheritance Hierarchy  
 `exception`  
  
 [scheduler_resource_allocation_error](scheduler-resource-allocation-error-class.md)  
  
 `scheduler_worker_creation_error`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="ctor"></a>  scheduler_worker_creation_error::scheduler_worker_creation_error Constructor  
 Constructs a `scheduler_worker_creation_error` object.  
  
```
scheduler_worker_creation_error(
    _In_z_ const char* _Message,
    HRESULT _Hresult) throw();

explicit _CRTIMP scheduler_worker_creation_error(
    HRESULT _Hresult) throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
 `_Hresult`  
 The `HRESULT` value of the error that caused the exception.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
