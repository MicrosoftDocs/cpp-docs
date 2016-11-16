---
title: "high_method_prefix | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "high_method_prefix"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "high_method_prefix attribute"
ms.assetid: cacebf09-12f5-4919-ad40-939e206e340c
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
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
# high_method_prefix
**C++ Specific**  
  
 Specifies a prefix to be used in naming high-level properties and methods.  
  
## Syntax  
  
```  
high_method_prefix("Prefix")  
```  
  
#### Parameters  
 `Prefix`  
 Prefix to be used.  
  
## Remarks  
 By default, high-level error-handling properties and methods are exposed by member functions named without a prefix. The names are from the type library.  
  
 **END C++ Specific**  
  
## See Also  
 [#import Attributes](../preprocessor/hash-import-attributes-cpp.md)   
 [#import Directive](../preprocessor/hash-import-directive-cpp.md)