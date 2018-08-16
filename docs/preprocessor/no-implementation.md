---
title: "no_implementation | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["no_implementation"]
dev_langs: ["C++"]
helpviewer_keywords: ["no_implementation attribute"]
ms.assetid: bdc67785-e131-409c-87bc-f4d2f4abb07b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# no_implementation
**C++ Specific**  
  
Suppresses the generation of the .tli header, which contains the implementations of the wrapper member functions.  
  
## Syntax  
  
```  
no_implementation  
```  
  
## Remarks  
 
If this attribute is specified, the .tlh header, with the declarations to expose type-library items, will be generated without an `#include` statement to include the .tli header file.  
  
This attribute is used in conjunction with [implementation_only](../preprocessor/implementation-only.md).  
  
**END C++ Specific**  
  
## See Also  
 
[#import Attributes](../preprocessor/hash-import-attributes-cpp.md)   
[#import Directive](../preprocessor/hash-import-directive-cpp.md)