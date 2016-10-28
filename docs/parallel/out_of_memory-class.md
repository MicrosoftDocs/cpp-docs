---
title: "out_of_memory Class"
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
  - "amprt/Concurrency::out_of_memory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "out_of_memory class"
ms.assetid: 3aa7e682-8f13-4ae6-9188-31fb423956e4
caps.latest.revision: 9
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
|[out_of_memory::out_of_memory Constructor](../Topic/out_of_memory::out_of_memory%20Constructor.md)|Initializes a new instance of the `out_of_memory` class.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `runtime_exception`  
  
 `out_of_memory`  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../parallel/concurrency-namespace--c---amp-.md)