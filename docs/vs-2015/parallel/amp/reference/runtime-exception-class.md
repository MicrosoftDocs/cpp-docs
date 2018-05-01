---
title: "runtime_exception Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp/Concurrency::direct3d_abort"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "runtime_exception class"
ms.assetid: 8fe3ce2c-3d4c-4b9c-95e8-e592f37adefd
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# runtime_exception Class
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

The base type for exceptions in the C++ Accelerated Massive Parallelism (AMP) library.  
  
## Syntax  
  
```  
class runtime_exception : public std::exception;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[runtime_exception::runtime_exception Constructor](http://msdn.microsoft.com/library/192dce0f-36e4-40e8-8f1b-42910b89bb6b)|Initializes a new instance of the `runtime_exception` class.|  
|[runtime_exception::~runtime_exception Destructor](http://msdn.microsoft.com/library/b7164f00-ea8f-496e-9dbd-008fd626462a)|Destroys the `runtime_exception` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[runtime_exception::get_error_code Method](http://msdn.microsoft.com/library/b383ddce-aacd-45ed-8ecf-f83d89f37df7)|Returns the error code that caused the exception.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[runtime_exception::operator= Operator](http://msdn.microsoft.com/library/6d767645-b9c6-41c0-aa24-1bbb10a0952b)|Copies the contents of the specified `runtime_exception` object into this one.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `runtime_exception`  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
