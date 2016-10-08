---
title: "bad_target Class"
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
ms.assetid: e6dcddbf-9217-4fac-ac7f-7b8b4781d2f5
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
# bad_target Class
This class describes an exception thrown when a messaging block is given a pointer to a target which is invalid for the operation being performed.  
  
## Syntax  
  
```  
class bad_target : public std::exception;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[bad_target::bad_target Constructor](#bad_target__bad_target_constructor)|Overloaded. Constructs a `bad_target` object.|  
  
## Remarks  
 This exception is typically thrown for reasons such as a target attempting to consume a message which is reserved for a different target or releasing a reservation that it does not hold.  
  
## Inheritance Hierarchy  
 `exception`  
  
 `bad_target`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="bad_target__bad_target_constructor"></a>  bad_target::bad_target Constructor  
 Constructs a `bad_target` object.  
  
```  
explicit _CRTIMP bad_target(  
    _In_z_ const char * _Message ) throw();  
  
bad_target() throw();  
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](../VS_visualcpp/concurrency-Namespace.md)   
 [Asynchronous Message Blocks](../VS_visualcpp/Asynchronous-Message-Blocks.md)