---
title: "uninitialized_object Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-amp"]
ms.topic: "reference"
f1_keywords: ["uninitialized_object", "AMPRT/uninitialized_object", "AMPRT/Concurrency::uninitialized_object"]
dev_langs: ["C++"]
helpviewer_keywords: ["uninitialized_object class"]
ms.assetid: 6ae3c4e8-64a6-4511-a158-03be197b63af
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# uninitialized_object Class
The exception that is thrown when an uninitialized object is used.  
  
## Syntax  
  
```  
class uninitialized_object : public runtime_exception;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[uninitialized_object Constructor](#ctor)|Initializes a new instance of the `uninitialized_object` class.|  

  
## Inheritance Hierarchy  
 `exception`  
  
 `runtime_exception`  
  
 `uninitialized_object`  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
## <a name="uninitialized_object__ctor"></a> unsupported_feature 

Constructs a new instance of the unsupported_feature exception.  
  
### Syntax  
  
```  
explicit unsupported_feature(  
    const char * _Message ) throw();  
  
unsupported_feature() throw();  
```  
  
### Parameters  
 `_Message`  
 A description of the error.  
  
### Return Value  
 The `unsupported_feature` object. 

## See Also  
 [Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
