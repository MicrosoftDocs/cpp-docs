---
title: "Dot Directives | Microsoft Docs"
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
  - "NMAKE program, dot directives"
  - "dot directives in NMAKE"
ms.assetid: ab35da65-30b6-48b7-87d6-61503d7faf9f
caps.latest.revision: 8
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
# Dot Directives
Specify dot directives outside a description block, at the start of a line. Dot directives begin with a period ( . ) and are followed by a colon (:). Spaces and tabs are allowed. Dot directive names are case sensitive and are uppercase.  
  
|Directive|Purpose|  
|---------------|-------------|  
|**.IGNORE :**|Ignores nonzero exit codes returned by commands, from the place it is specified to the end of the makefile. By default, NMAKE halts if a command returns a nonzero exit code. To restore error checking, use **!CMDSWITCHES**. To ignore the exit code for a single command, use the dash (–) modifier. To ignore exit codes for an entire file, use /I.|  
|**.PRECIOUS :** *targets*|Preserves *targets* on disk if the commands to update them are halted; has no effect if a command handles an interrupt by deleting the file. Separate the target names with one or more spaces or tabs. By default, NMAKE deletes a target if a build is interrupted by CTRL+C or CTRL+BREAK. Each use of **.PRECIOUS** applies to the entire makefile; multiple specifications are cumulative.|  
|**.SILENT :**|Suppresses display of executed commands, from the place it is specified to the end of the makefile. By default, NMAKE displays the commands it invokes. To restore echoing, use **!CMDSWITCHES**. To suppress echoing of a single command, use the **@** modifier. To suppress echoing for an entire file, use /S.|  
|**.SUFFIXES :** `list`|Lists extensions for inference-rule matching; predefined to include the following extensions: .exe .obj .asm .c .cpp .cxx .bas .cbl .for .pas .res .rc .f .f90|  
  
 To change the **.SUFFIXES** list order or to specify a new list, clear the list and specify a new setting. To clear the list, specify no extensions after the colon:  
  
```  
.SUFFIXES :  
```  
  
 To add additional suffixes to the end of the list, specify  
  
```  
.SUFFIXES : suffixlist  
```  
  
 where *suffixlist* is a list of the additional suffixes, separated by one or more spaces or tabs. To see the current setting of **.SUFFIXES**, run NMAKE with /P.  
  
## See Also  
 [NMAKE Reference](../build/nmake-reference.md)