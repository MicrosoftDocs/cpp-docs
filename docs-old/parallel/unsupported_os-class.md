---
title: "unsupported_os Class"
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
  - "concrt/concurrency::unsupported_os"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unsupported_os class"
ms.assetid: 6fa57636-341b-4b51-84cc-261d283ff736
caps.latest.revision: 19
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
# unsupported_os Class
This class describes an exception thrown when an unsupported operating system is used.  
  
## Syntax  
  
```
class unsupported_os : public std::exception;
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[unsupported_os::unsupported_os Constructor](#unsupported_os__unsupported_os_constructor)|Overloaded. Constructs an `unsupported_os` object.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `unsupported_os`  
  
## Requirements  
 **Header:** concrt.h  
  
 **Namespace:** concurrency  
  
##  <a name="unsupported_os__unsupported_os_constructor"></a>  unsupported_os::unsupported_os Constructor  
 Constructs an `unsupported_os` object.  
  
```
explicit _CRTIMP unsupported_os(_In_z_ const char* _Message) throw();

unsupported_os() throw();
```  
  
### Parameters  
 `_Message`  
 A descriptive message of the error.  
  
## See Also  
 [concurrency Namespace](../parallel/concurrency-namespace.md)

