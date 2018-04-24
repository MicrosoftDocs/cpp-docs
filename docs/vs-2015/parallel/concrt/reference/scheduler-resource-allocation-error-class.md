---
title: "scheduler_resource_allocation_error Class | Microsoft Docs"
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
  - "concrt/concurrency::scheduler_resource_allocation_error"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "scheduler_resource_allocation_error class"
ms.assetid: 8b40449a-7abb-4d0a-bb85-c0e9a495ae97
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# scheduler_resource_allocation_error Class
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

This class describes an exception thrown because of a failure to acquire a critical resource in the Concurrency Runtime.  
  
## Syntax  
  
```
class scheduler_resource_allocation_error : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[scheduler_resource_allocation_error::scheduler_resource_allocation_error Constructor](#scheduler_resource_allocation_error__scheduler_resource_allocation_error_constructor)|Overloaded. Constructs a `scheduler_resource_allocation_error` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[scheduler_resource_allocation_error::get_error_code Method](#scheduler_resource_allocation_error__get_error_code_method)|Returns the error code that caused the exception.|  
  
## Remarks  
 This exception is typically thrown when a call to the operating system from within the Concurrency Runtime fails. The error code which would normally be returned from a call to the Win32 method `GetLastError` is converted to a value of type `HRESULT` and can be retrieved using the `get_error_code` method.  
  
## Inheritance Hierarchy  
 `exception`  
  
 `scheduler_resource_allocation_error`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="scheduler_resource_allocation_error__get_error_code_method"></a>  scheduler_resource_allocation_error::get_error_code Method  
 Returns the error code that caused the exception.  
  
```
HRESULT get_error_code() const throw();
```  
  
### Return Value  
 The `HRESULT` value of the error that caused the exception.  
  
##  <a name="scheduler_resource_allocation_error__scheduler_resource_allocation_error_constructor"></a>  scheduler_resource_allocation_error::scheduler_resource_allocation_error Constructor  
 Constructs a `scheduler_resource_allocation_error` object.  
  
```
scheduler_resource_allocation_error(
    _In_z_ const char* _Message,
    HRESULT _Hresult) throw();

explicit _CRTIMP scheduler_resource_allocation_error(
    HRESULT _Hresult) throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
 `_Hresult`  
 The `HRESULT` value of the error that caused the exception.  
  
## See Also  
 [concurrency Namespace](../../../parallel/concrt/reference/concurrency-namespace.md)
