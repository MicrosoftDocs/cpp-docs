---
title: "operation_timed_out Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 963efe1d-a6e0-477c-9a70-d93d8412c897
caps.latest.revision: 17
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# operation_timed_out Class
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
explicit _CRTIMP operation_timed_out(  
    _In_z_ const char * _Message ) throw();  
  
operation_timed_out() throw();  
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](../VS_visualcpp/concurrency-Namespace.md)