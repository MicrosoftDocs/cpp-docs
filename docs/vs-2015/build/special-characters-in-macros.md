---
title: "Special Characters in Macros | Microsoft Docs"
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
helpviewer_keywords: 
  - "special characters, in NMAKE macros"
ms.assetid: c0a06cfc-7103-4ee2-a585-e8f6e85dccd7
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Special Characters in Macros
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Special Characters in Macros](https://docs.microsoft.com/cpp/build/special-characters-in-macros).  
  
  
A number sign (#) after a definition specifies a comment. To specify a literal number sign in a macro, use a caret (^), as in ^#.  
  
 A dollar sign ($) specifies a macro invocation. To specify a literal $, use $$.  
  
 To extend a definition to a new line, end the line with a backslash (\\). When the macro is invoked, the backslash plus newline character is replaced with a space. To specify a literal backslash at the end of the line, precede it with a caret (^), or follow it with a comment specifier (#).  
  
 To specify a literal newline character, end the line with a caret (^), as in:  
  
```  
CMDS = cls^  
dir  
```  
  
## See Also  
 [Defining an NMAKE Macro](../build/defining-an-nmake-macro.md)

