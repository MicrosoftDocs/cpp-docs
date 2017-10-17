---
title: "runtime_exception Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["runtime_exception", "AMPRT/runtime_exception", "AMPRT/Concurrency::runtime_exception", "AMPRT/Concurrency::runtime_exception::get_error_code"]
dev_langs: ["C++"]
helpviewer_keywords: ["runtime_exception class"]
ms.assetid: 8fe3ce2c-3d4c-4b9c-95e8-e592f37adefd
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# runtime_exception Class
The base type for exceptions in the C++ Accelerated Massive Parallelism (AMP) library.  
  
### Syntax  
  
```  
class runtime_exception : public std::exception;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[runtime_exception Constructor](#ctor)|Initializes a new instance of the `runtime_exception` class.|  
|[~runtime_exception Destructor](#dtor)|Destroys the `runtime_exception` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[get_error_code](#runtime_exception__get_error_code)|Returns the error code that caused the exception.|  

  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[operator=](#operator_eq)|Copies the contents of the specified `runtime_exception` object into this one.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `runtime_exception`  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  

## <a name="runtime_exception__ctor"></a>  runtime_exception Constructor  
Initializes a new instance of the class.  
  
### Syntax  
  
```  
runtime_exception(  
    const char * _Message,  
    HRESULT _Hresult ) throw();  
  
explicit runtime_exception(  
    HRESULT _Hresult ) throw();  
  
runtime_exception(  
    const runtime_exception & _Other ) throw();  
```  
  
### Parameters  
 `_Message`  
 A description of the error that caused the exception.  
  
 `_Hresult`  
 The HRESULT of error that caused the exception.  
  
 `_Other`  
 The `runtime_exception` object to copy.  
  
### Return Value  
 The `runtime_exception` object.  

## <a name="dtor"></a>  ~runtime_exception Destructor  
Destroys the object.  
  
### Syntax  
  
```  
virtual ~runtime_exception() throw();  
```  
  
## <a name="runtime_exception__get_error_code"></a>  get_error_code   
Returns the error code that caused the exception.  
  
### Syntax  
  
```  
HRESULT get_error_code() const throw();  
```  
  
### Return Value  
 The HRESULT of error that caused the exception.  
  
## <a name="runtime_exception__operator_eq"></a>  operator=   
  Copies the contents of the specified `runtime_exception` object into this one.  
  
### Syntax  
  
```  
runtime_exception & operator= (    const runtime_exception & _Other ) throw();  
```  
  
### Parameters  
 `_Other`  
 The `runtime_exception` object to copy.  
  
### Return Value  
 A reference to this `runtime_exception` object.  
  

  
## See Also  
 [Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
