---
title: "message_not_found Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-concrt"]
ms.topic: "reference"
f1_keywords: ["message_not_found", "CONCRT/concurrency::message_not_found", "CONCRT/concurrency::message_not_found::message_not_found"]
dev_langs: ["C++"]
helpviewer_keywords: ["message_not_found class"]
ms.assetid: a96b9995-5ad7-4600-83c8-c15e329ff10e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# message_not_found Class
This class describes an exception thrown when a messaging block is unable to find a requested message.  
  
## Syntax  
  
```
class message_not_found : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[message_not_found](#ctor)|Overloaded. Constructs a `message_not_found` object.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `message_not_found`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="ctor"></a> message_not_found 

 Constructs a `message_not_found` object.  
  
```
explicit _CRTIMP message_not_found(_In_z_ const char* _Message) throw();

message_not_found() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md)



