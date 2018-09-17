---
title: "unsupported_feature Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-amp"]
ms.topic: "reference"
f1_keywords: ["unsupported_feature", "AMPRT/unsupported_feature", "AMPRT/Concurrency::unsupported_feature"]
dev_langs: ["C++"]
helpviewer_keywords: ["unsupported_feature class"]
ms.assetid: 6b1ab917-df13-48c7-9648-7cb2465a0ff5
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# unsupported_feature Class
The exception that is thrown when an unsupported feature is used.  
  
## Syntax  
  
```  
class unsupported_feature : public runtime_exception;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[unsupported_feature Constructor](#ctor)|Constructs a new instance of the `unsupported_feature` exception.|  

  
## Inheritance Hierarchy  
 `exception`  
  
 `runtime_exception`  
  
 `unsupported_feature`  
  
## <a name="unsupported_feature__ctor"></a> unsupported_feature 

  Constructs a new instance of the unsupported_feature exception.  
  
### Syntax  
  
```  
explicit unsupported_feature(  
    const char * _Message ) throw();  
  
unsupported_feature() throw();  
```  
  
### Parameters  
*_Message*<br/>
A description of the error.  
  
### Return Value  
 The `unsupported_feature` object.  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
