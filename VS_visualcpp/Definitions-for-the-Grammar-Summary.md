---
title: "Definitions for the Grammar Summary"
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
ms.assetid: cc752dc8-6f4e-4347-a556-e0d9ef4c46bd
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
# Definitions for the Grammar Summary
Terminals are endpoints in a syntax definition. No other resolution is possible. Terminals include the set of reserved words and user-defined identifiers.  
  
 Nonterminals are placeholders in the syntax. Most are defined elsewhere in this syntax summary. Definitions can be recursive. The following nonterminals are defined in the [Grammar Summary](../Topic/Grammar%20Summary%20\(C++\).md) of the *C++ Language Reference*:  
  
 `constant`, *constant-expression*, *identifier*, *keyword*, `operator`, `punctuator`  
  
 An optional component is indicated by the subscripted opt. For example, the following indicates an optional expression enclosed in curly braces:  
  
 **{** *expression*opt **}**  
  
## See Also  
 [Grammar Summary (C/C++)](../VS_visualcpp/Grammar-Summary--C-C---.md)