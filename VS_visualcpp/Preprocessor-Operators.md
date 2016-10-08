---
title: "Preprocessor Operators"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 884126d1-0ce2-48b6-9e06-8a2d7c4a9656
caps.latest.revision: 6
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Preprocessor Operators
Four preprocessor-specific operators are used in the context of the `#define` directive (see the following list for a summary of each). The stringizing, charizing, and token-pasting operators are discussed in the next three sections. For information on the **defined** operator, see [The #if, #elif, #else, and #endif Directives](../VS_visualcpp/#if--#elif--#else--and-#endif-Directives--C-C---.md).  
  
|Operator|Action|  
|--------------|------------|  
|[Stringizing operator (#)](../VS_visualcpp/Stringizing-Operator--#-.md)|Causes the corresponding actual argument to be enclosed in double quotation marks|  
|[Charizing operator (#@)](../VS_visualcpp/Charizing-Operator--#@-.md)|Causes the corresponding argument to be enclosed in single quotation marks and to be treated as a character (Microsoft Specific)|  
|[Token-pasting operator (##)](../VS_visualcpp/Token-Pasting-Operator--##-.md)|Allows tokens used as actual arguments to be concatenated to form other tokens|  
|[defined operator](../VS_visualcpp/#if--#elif--#else--and-#endif-Directives--C-C---.md)|Simplifies the writing of compound expressions in certain macro directives|  
  
## See Also  
 [Preprocessor Directives](../VS_visualcpp/Preprocessor-Directives.md)   
 [Predefined Macros](../VS_visualcpp/Predefined-Macros.md)   
 [C/C++ Preprocessor Reference](../VS_visualcpp/C-C---Preprocessor-Reference.md)