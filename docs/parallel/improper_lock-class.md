---
title: "improper_lock Class"
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
  - "concrt/concurrency::improper_lock"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "improper_lock class"
ms.assetid: 8f494942-7748-4a2a-8de2-23414bfe6346
caps.latest.revision: 18
ms.author: "mithom"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# improper_lock Class
This class describes an exception thrown when a lock is acquired improperly.  
  
## Syntax  
  
```
class improper_lock : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[improper_lock::improper_lock Constructor](#improper_lock__improper_lock_constructor)|Overloaded. Constructs an `improper_lock exception`.|  
  
## Remarks  
 Typically, this exception is thrown when an attempt is made to acquire a non-reentrant lock recursively on the same context.  
  
## Inheritance Hierarchy  
 `exception`  
  
 `improper_lock`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="improper_lock__improper_lock_constructor"></a>  improper_lock::improper_lock Constructor  
 Constructs an `improper_lock exception`.  
  
```
explicit _CRTIMP improper_lock(_In_z_ const char* _Message) throw();

improper_lock() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](../parallel/concurrency-namespace.md)   
 [critical_section Class](../parallel/critical_section-class.md)   
 [reader_writer_lock Class](../parallel/reader_writer_lock-class.md)

