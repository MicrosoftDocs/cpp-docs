---
title: "improper_lock Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-concrt"]
ms.topic: "reference"
f1_keywords: ["improper_lock", "CONCRT/concurrency::improper_lock", "CONCRT/concurrency::improper_lock::improper_lock"]
dev_langs: ["C++"]
helpviewer_keywords: ["improper_lock class"]
ms.assetid: 8f494942-7748-4a2a-8de2-23414bfe6346
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# improper_lock Class
This class describes an exception thrown when a lock is acquired improperly.  
  
## Syntax  
  
```
class improper_lock : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[improper_lock](#ctor)|Overloaded. Constructs an `improper_lock exception`.|  
  
## Remarks  
 Typically, this exception is thrown when an attempt is made to acquire a non-reentrant lock recursively on the same context.  
  
## Inheritance Hierarchy  
 `exception`  
  
 `improper_lock`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="ctor"></a> improper_lock 

 Constructs an `improper_lock exception`.  
  
```
explicit _CRTIMP improper_lock(_In_z_ const char* _Message) throw();

improper_lock() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [critical_section Class](critical-section-class.md)   
 [reader_writer_lock Class](reader-writer-lock-class.md)
