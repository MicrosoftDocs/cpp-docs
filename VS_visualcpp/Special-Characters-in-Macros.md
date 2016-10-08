---
title: "Special Characters in Macros"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: c0a06cfc-7103-4ee2-a585-e8f6e85dccd7
caps.latest.revision: 7
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
# Special Characters in Macros
A number sign (#) after a definition specifies a comment. To specify a literal number sign in a macro, use a caret (^), as in ^#.  
  
 A dollar sign ($) specifies a macro invocation. To specify a literal $, use $$.  
  
 To extend a definition to a new line, end the line with a backslash (\\). When the macro is invoked, the backslash plus newline character is replaced with a space. To specify a literal backslash at the end of the line, precede it with a caret (^), or follow it with a comment specifier (#).  
  
 To specify a literal newline character, end the line with a caret (^), as in:  
  
```  
CMDS = cls^  
dir  
```  
  
## See Also  
 [Defining an NMAKE Macro](../VS_visualcpp/Defining-an-NMAKE-Macro.md)