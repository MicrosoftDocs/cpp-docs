---
title: "operation_timed_out Class | Microsoft Docs"
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
  - "concrt/concurrency::operation_timed_out"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operation_timed_out class"
ms.assetid: 963efe1d-a6e0-477c-9a70-d93d8412c897
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# operation_timed_out Class
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

This class describes an exception thrown when an operation has timed out.  
  
## Syntax  
  
```
class operation_timed_out : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[operation_timed_out::operation_timed_out Constructor](#operation_timed_out__operation_timed_out_constructor)|Overloaded. Constructs an `operation_timed_out` object.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `operation_timed_out`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="operation_timed_out__operation_timed_out_constructor"></a>  operation_timed_out::operation_timed_out Constructor  
 Constructs an `operation_timed_out` object.  
  
```
explicit _CRTIMP operation_timed_out(_In_z_ const char* _Message) throw();

operation_timed_out() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)
