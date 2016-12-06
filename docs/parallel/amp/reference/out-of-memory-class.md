---
title: "out_of_memory Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amprt/Concurrency::out_of_memory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "out_of_memory class"
ms.assetid: 3aa7e682-8f13-4ae6-9188-31fb423956e4
caps.latest.revision: 11
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
# out_of_memory Class
The exception that is thrown when a method fails because of a lack of system or device memory.  
  
## Syntax  
  
```  
class out_of_memory : public runtime_exception;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[out_of_memory::out_of_memory Constructor](#ctor)|Initializes a new instance of the `out_of_memory` class.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `runtime_exception`  
  
 `out_of_memory`  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
## <a name="ctor"></a> out_of_memory::out_of_memory Constructor
 Initializes a new instance of the class.  
  
### Syntax  
  
```  
explicit out_of_memory(  
    const char * _Message ) throw();  
  
out_of_memory () throw();  
```  
  
### Parameters  
 `_Message`  
 A description of the error.  
  
### Return Value  
 A new instance of the `out_of_memory` class.  
  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
