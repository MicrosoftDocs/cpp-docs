---
title: "Command Modifiers | Microsoft Docs"
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
  - "NMAKE program, command modifiers"
  - "command modifiers"
ms.assetid: b661c432-210f-4f05-bc56-744a46e0fc0b
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
# Command Modifiers
You can specify one or more command modifiers preceding a command, optionally separated by spaces or tabs. As with commands, modifiers must be indented.  
  
|Modifier|Purpose|  
|--------------|-------------|  
|@*command*|Prevents display of the command. Display by commands is not suppressed. By default, NMAKE echoes all executed commands. Use /S to suppress display for the entire makefile; use **.SILENT** to suppress display for part of the makefile.|  
|**–**[`number` ]*command*|Turns off error checking for *command*. By default, NMAKE halts when a command returns a nonzero exit code. If –`number` is used, NMAKE stops if the exit code exceeds `number`. Spaces or tabs cannot appear between the dash and *number.* At least one space or tab must appear between `number` and *command*. Use /I to turn off error checking for the entire makefile; use **.IGNORE** to turn off error checking for part of the makefile.|  
|**!** *command*|Executes *command* for each dependent file if *command* uses **$\*\*** (all dependent files in the dependency) or **$?** (all dependent files in the dependency with a later timestamp than the target).|  
  
## See Also  
 [Commands in a Makefile](../build/commands-in-a-makefile.md)