---
title: "invalid_compute_domain Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-amp"]
ms.topic: "reference"
f1_keywords: ["invalid_compute_domain", "AMPRT/invalid_compute_domain", "AMPRT/Concurrency::invalid_compute_domain::invalid_compute_domain"]
dev_langs: ["C++"]
helpviewer_keywords: ["invalid_compute_domain class"]
ms.assetid: ac7a7166-8bdb-4db1-8caf-ea129ab5117e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# invalid_compute_domain Class
The exception that's thrown when the runtime can't start a kernel by using the compute domain specified at the [parallel_for_each](concurrency-namespace-functions-amp.md#parallel_for_each) call site.  

  
## Syntax  
  
```  
class invalid_compute_domain : public runtime_exception;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[invalid_compute_domain Constructor](#ctor)|Initializes a new instance of the `invalid_compute_domain` class.|  

  
## Inheritance Hierarchy  
 `exception`  
  
 `runtime_exception`  
  
 `invalid_compute_domain`  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  

## <a name="ctor"></a> invalid_compute_domain 

Initializes a new instance of the class.  
  
## Syntax  
  
```  
explicit invalid_compute_domain(  
    const char * _Message ) throw();  
  
invalid_compute_domain() throw();  
```  
  
### Parameters  
 `_Message`  
 A description of the error.  
  
### Return Value  
 An instance of the `invalid_compute_domain` class  
    
## See Also  
 [Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
