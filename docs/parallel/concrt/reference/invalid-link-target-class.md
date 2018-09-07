---
title: "invalid_link_target Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-concrt"]
ms.topic: "reference"
f1_keywords: ["invalid_link_target", "CONCRT/concurrency::invalid_link_target", "CONCRT/concurrency::invalid_link_target::invalid_link_target"]
dev_langs: ["C++"]
helpviewer_keywords: ["invalid_link_target class"]
ms.assetid: 33b64885-34d8-4d4e-a893-02e9f19c958e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# invalid_link_target Class
This class describes an exception thrown when the `link_target` method of a messaging block is called and the messaging block is unable to link to the target. This can be the result of exceeding the number of links the messaging block is allowed or attempting to link a specific target twice to the same source.  
  
## Syntax  
  
```
class invalid_link_target : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[invalid_link_target](#ctor)|Overloaded. Constructs an `invalid_link_target` object.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `invalid_link_target`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="ctor"></a> invalid_link_target 

 Constructs an `invalid_link_target` object.  
  
```
explicit _CRTIMP invalid_link_target(_In_z_ const char* _Message) throw();

invalid_link_target() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)   
 [Asynchronous Message Blocks](../../../parallel/concrt/asynchronous-message-blocks.md)



