---
title: "Preprocessor Operators"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "preprocessor operators"
  - "operators [C++], preprocessor"
ms.assetid: 884126d1-0ce2-48b6-9e06-8a2d7c4a9656
caps.latest.revision: 6
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
# Preprocessor Operators
Four preprocessor-specific operators are used in the context of the `#define` directive (see the following list for a summary of each). The stringizing, charizing, and token-pasting operators are discussed in the next three sections. For information on the **defined** operator, see [The #if, #elif, #else, and #endif Directives](../c/sharpif--sharpelif--sharpelse--and-sharpendif-directives--c-c---.md).  
  
|Operator|Action|  
|--------------|------------|  
|[Stringizing operator (#)](../c/stringizing-operator--sharp-.md)|Causes the corresponding actual argument to be enclosed in double quotation marks|  
|[Charizing operator (#@)](../c/charizing-operator--sharp@-.md)|Causes the corresponding argument to be enclosed in single quotation marks and to be treated as a character (Microsoft Specific)|  
|[Token-pasting operator (##)](../c/token-pasting-operator--sharpsharp-.md)|Allows tokens used as actual arguments to be concatenated to form other tokens|  
|[defined operator](../c/sharpif--sharpelif--sharpelse--and-sharpendif-directives--c-c---.md)|Simplifies the writing of compound expressions in certain macro directives|  
  
## See Also  
 [Preprocessor Directives](../c/preprocessor-directives.md)   
 [Predefined Macros](../c/predefined-macros.md)   
 [C/C++ Preprocessor Reference](../c/c-c---preprocessor-reference.md)