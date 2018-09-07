---
title: "invalid_oversubscribe_operation Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-concrt"]
ms.topic: "reference"
f1_keywords: ["invalid_oversubscribe_operation", "CONCRT/concurrency::invalid_oversubscribe_operation", "CONCRT/concurrency::invalid_oversubscribe_operation::invalid_oversubscribe_operation"]
dev_langs: ["C++"]
helpviewer_keywords: ["invalid_oversubscribe_operation class"]
ms.assetid: 0a9c5f08-d5e6-4ad0-90a9-517472b3ac28
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# invalid_oversubscribe_operation Class
This class describes an exception thrown when the `Context::Oversubscribe` method is called with the `_BeginOversubscription` parameter set to `false` without a prior call to the `Context::Oversubscribe` method with the `_BeginOversubscription` parameter set to `true`.  
  
## Syntax  
  
```  
class invalid_oversubscribe_operation : public std::exception;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[invalid_oversubscribe_operation](#ctor)|Overloaded. Constructs an `invalid_oversubscribe_operation` object.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `invalid_oversubscribe_operation`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="ctor"></a> invalid_oversubscribe_operation 

 Constructs an `invalid_oversubscribe_operation` object.  
  
```  
explicit _CRTIMP invalid_oversubscribe_operation(_In_z_ const char* _Message) throw();

 
invalid_oversubscribe_operation() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
