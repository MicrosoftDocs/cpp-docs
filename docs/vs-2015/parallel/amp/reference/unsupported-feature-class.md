---
title: "unsupported_feature Class | Microsoft Docs"
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
  - "amprt/Concurrency::unsupported_feature"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "unsupported_feature class"
ms.assetid: 6b1ab917-df13-48c7-9648-7cb2465a0ff5
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# unsupported_feature Class
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

The exception that is thrown when an unsupported feature is used.  
  
## Syntax  
  
```  
class unsupported_feature : public runtime_exception;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[unsupported_feature::unsupported_feature Constructor](../Topic/unsupported_feature::unsupported_feature%20Constructor.md)|Constructs a new instance of the `unsupported_feature` exception.|  
  
## Inheritance Hierarchy  
 `exception`  
  
 `runtime_exception`  
  
 `unsupported_feature`  
  
## Requirements  
 **Header:** amprt.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
