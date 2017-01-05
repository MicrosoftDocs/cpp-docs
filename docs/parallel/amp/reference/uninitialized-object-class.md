---
title: "uninitialized_object Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amprt/Concurrency::uninitialized_object"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "uninitialized_object class"
ms.assetid: 6ae3c4e8-64a6-4511-a158-03be197b63af
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
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
|[uninitialized_object::uninitialized_object Constructor](#ctor)|Initializes a new instance of the `uninitialized_object` class.|  

  
## Inheritance Hierarchy  
 `exception`  
  
 `runtime_exception`  
  
 `uninitialized_object`  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
## <a name="uninitialized_object__ctor"></a> unsupported_feature::unsupported_feature Constructor
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
