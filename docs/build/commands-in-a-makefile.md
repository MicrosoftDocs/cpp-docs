---
title: "Commands in a Makefile | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "commands, makefiles"
ms.assetid: 8085517e-42f4-493b-b8f8-44311fc08c64
caps.latest.revision: 7
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
# Commands in a Makefile
A description block or inference rule specifies a block of commands to run if the dependency is out-of-date. NMAKE displays each command before running it, unless /S, **.SILENT**, **!CMDSWITCHES**, or @ is used. NMAKE looks for a matching inference rule if a description block is not followed by a commands block.  
  
 A commands block contains one or more commands, each on its own line. No blank line can appear between the dependency or rule and the commands block. However, a line containing only spaces or tabs can appear; this line is interpreted as a null command, and no error occurs. Blank lines are permitted between command lines.  
  
 A command line begins with one or more spaces or tabs. A backslash ( \ ) followed by a newline character is interpreted as a space in the command; use a backslash at the end of a line to continue a command onto the next line. NMAKE interprets the backslash literally if any other character, including a space or tab, follows the backslash.  
  
 A command preceded by a semicolon (;) can appear on a dependency line or inference rule, whether or not a commands block follows:  
  
```  
project.obj : project.c project.h ; cl /c project.c  
```  
  
## What do you want to know more about?  
 [Command modifiers](../build/command-modifiers.md)  
  
 [Filename-parts syntax](../build/filename-parts-syntax.md)  
  
 [Inline files in a makefile](../build/inline-files-in-a-makefile.md)  
  
## See Also  
 [NMAKE Reference](../build/nmake-reference.md)