---
title: "unsupported_os Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-concrt"]
ms.topic: "reference"
f1_keywords: ["unsupported_os", "CONCRT/concurrency::unsupported_os", "CONCRT/concurrency::unsupported_os::unsupported_os"]
dev_langs: ["C++"]
helpviewer_keywords: ["unsupported_os class"]
ms.assetid: 6fa57636-341b-4b51-84cc-261d283ff736
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# unsupported_os Class
This class describes an exception thrown when an unsupported operating system is used.  
  
## Syntax  
  
```
class unsupported_os : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[unsupported_os](#ctor)|Overloaded. Constructs an `unsupported_os` object.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `unsupported_os`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="ctor"></a> unsupported_os 

 Constructs an `unsupported_os` object.  
  
```
explicit _CRTIMP unsupported_os(_In_z_ const char* _Message) throw();

unsupported_os() throw();
```  
  
### Parameters  
*_Message*<br/>
A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](concurrency-namespace.md)
