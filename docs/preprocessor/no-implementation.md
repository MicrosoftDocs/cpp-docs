---
title: "no_implementation | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "no_implementation"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "no_implementation attribute"
ms.assetid: bdc67785-e131-409c-87bc-f4d2f4abb07b
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