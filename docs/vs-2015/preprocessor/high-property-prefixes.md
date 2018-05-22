---
title: "high_property_prefixes | Microsoft Docs"
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
  - "high_property_prefixes"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "high_property_prefixes attribute"
ms.assetid: 91c6cc2b-19b6-4aba-8831-d9e5cccb58b5
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# high_property_prefixes
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [high_property_prefixes](https://docs.microsoft.com/cpp/preprocessor/high-property-prefixes).  
  
**C++ Specific**  
  
 Specifies alternate prefixes for three property methods.  
  
## Syntax  
  
```  
high_property_prefixes("GetPrefix","PutPrefix","PutRefPrefix")  
```  
  
#### Parameters  
 `GetPrefix`  
 Prefix to be used for the **propget** methods.  
  
 `PutPrefix`  
 Prefix to be used for the **propput** methods.  
  
 `PutRefPrefix`  
 Prefix to be used for the **propputref** methods.  
  
## Remarks  
 By default, high-level error-handling **propget**, **propput**, and **propputref** methods are exposed by member functions named with prefixes **Get**, `Put`, and **PutRef**, respectively.  
  
 **END C++ Specific**  
  
## See Also  
 [#import Attributes](../preprocessor/hash-import-attributes-cpp.md)   
 [#import Directive](../preprocessor/hash-import-directive-cpp.md)



