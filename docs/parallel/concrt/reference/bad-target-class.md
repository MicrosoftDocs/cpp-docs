---
title: "bad_target Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-concrt"]
ms.topic: "reference"
f1_keywords: ["bad_target", "CONCRT/concurrency::bad_target", "CONCRT/concurrency::bad_target::bad_target"]
dev_langs: ["C++"]
helpviewer_keywords: ["bad_target class"]
ms.assetid: e6dcddbf-9217-4fac-ac7f-7b8b4781d2f5
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# bad_target Class
This class describes an exception thrown when a messaging block is given a pointer to a target which is invalid for the operation being performed.  
  
## Syntax  
  
```
class bad_target : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[bad_target](#ctor)|Overloaded. Constructs a `bad_target` object.|  
  
## Remarks  
 This exception is typically thrown for reasons such as a target attempting to consume a message which is reserved for a different target or releasing a reservation that it does not hold.  
  
## Inheritance Hierarchy  
 `exception`  
  
 `bad_target`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="ctor"></a> bad_target 

 Constructs a `bad_target` object.  
  
```
explicit _CRTIMP bad_target(_In_z_ const char* _Message) throw();

bad_target() throw();
```  
  
### Parameters  
*_Message*<br/>
A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md)



