---
title: "Preprocessor Operators | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "preprocessor operators"
  - "operators [C++], preprocessor"
ms.assetid: 884126d1-0ce2-48b6-9e06-8a2d7c4a9656
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Preprocessor Operators
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Preprocessor Operators](https://docs.microsoft.com/cpp/preprocessor/preprocessor-operators).  
  
Four preprocessor-specific operators are used in the context of the `#define` directive (see the following list for a summary of each). The stringizing, charizing, and token-pasting operators are discussed in the next three sections. For information on the **defined** operator, see [The #if, #elif, #else, and #endif Directives](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md).  
  
|Operator|Action|  
|--------------|------------|  
|[Stringizing operator (#)](../preprocessor/stringizing-operator-hash.md)|Causes the corresponding actual argument to be enclosed in double quotation marks|  
|[Charizing operator (#@)](../preprocessor/charizing-operator-hash-at.md)|Causes the corresponding argument to be enclosed in single quotation marks and to be treated as a character (Microsoft Specific)|  
|[Token-pasting operator (##)](../preprocessor/token-pasting-operator-hash-hash.md)|Allows tokens used as actual arguments to be concatenated to form other tokens|  
|[defined operator](../preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp.md)|Simplifies the writing of compound expressions in certain macro directives|  
  
## See Also  
 [Preprocessor Directives](../preprocessor/preprocessor-directives.md)   
 [Predefined Macros](../preprocessor/predefined-macros.md)   
 [C/C++ Preprocessor Reference](../preprocessor/c-cpp-preprocessor-reference.md)



