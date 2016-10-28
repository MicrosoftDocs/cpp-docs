---
title: "runtime_exception Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "amp/Concurrency::direct3d_abort"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "runtime_exception class"
ms.assetid: 8fe3ce2c-3d4c-4b9c-95e8-e592f37adefd
caps.latest.revision: 8
ms.author: "mithom"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# runtime_exception Class
The base type for exceptions in the C++ Accelerated Massive Parallelism (AMP) library.  
  
## Syntax  
  
```  
class runtime_exception : public std::exception;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[runtime_exception::runtime_exception Constructor](../Topic/runtime_exception::runtime_exception%20Constructor.md)|Initializes a new instance of the `runtime_exception` class.|  
|[runtime_exception::~runtime_exception Destructor](../Topic/runtime_exception::~runtime_exception%20Destructor.md)|Destroys the `runtime_exception` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[runtime_exception::get_error_code Method](../Topic/runtime_exception::get_error_code%20Method.md)|Returns the error code that caused the exception.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[runtime_exception::operator= Operator](../Topic/runtime_exception::operator=%20Operator.md)|Copies the contents of the specified `runtime_exception` object into this one.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `runtime_exception`  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../parallel/concurrency-namespace--c---amp-.md)