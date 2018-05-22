---
title: "raw_interfaces_only | Microsoft Docs"
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
  - "raw_interfaces_only"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "raw_interfaces_only attribute"
ms.assetid: 87056c6d-3f34-4248-af58-f5775a35bfb7
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# raw_interfaces_only
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [raw_interfaces_only](https://docs.microsoft.com/cpp/preprocessor/raw-interfaces-only).  
  
**C++ Specific**  
  
 Suppresses the generation of error-handling wrapper functions and [property](../cpp/property-cpp.md) declarations that use those wrapper functions.  
  
## Syntax  
  
```  
raw_interfaces_only  
```  
  
## Remarks  
 The `raw_interfaces_only` attribute also causes the default prefix used in naming the non-property functions to be removed. Normally, the prefix is **raw_**. If this attribute is specified, the function names are directly from the type library.  
  
 This attribute allows you to expose only the low-level contents of the type library.  
  
 **END C++ Specific**  
  
## See Also  
 [#import Attributes](../preprocessor/hash-import-attributes-cpp.md)   
 [#import Directive](../preprocessor/hash-import-directive-cpp.md)



