---
title: "raw_interfaces_only | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["raw_interfaces_only"]
dev_langs: ["C++"]
helpviewer_keywords: ["raw_interfaces_only attribute"]
ms.assetid: 87056c6d-3f34-4248-af58-f5775a35bfb7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# raw_interfaces_only
**C++ Specific**  
  
Suppresses the generation of error-handling wrapper functions and [property](../cpp/property-cpp.md) declarations that use those wrapper functions.  
  
## Syntax  
  
```  
raw_interfaces_only  
```  
  
## Remarks  
 
The **raw_interfaces_only** attribute also causes the default prefix used in naming the non-property functions to be removed. Normally, the prefix is **raw_**. If this attribute is specified, the function names are directly from the type library.  
  
This attribute allows you to expose only the low-level contents of the type library.  
  
**END C++ Specific**  
  
## See Also  
 
[#import Attributes](../preprocessor/hash-import-attributes-cpp.md)   
[#import Directive](../preprocessor/hash-import-directive-cpp.md)