---
title: "-BIND"
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
H1: /BIND
ms.assetid: 3772b330-1868-4c90-857d-c31faa867982
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
# -BIND
```  
/BIND[:PATH=path]  
```  
  
## Remarks  
 This option sets the addresses of the entry points in the import address table for an executable file or DLL. Use this option to reduce load time of a program.  
  
 Specify the program's executable file and DLLs in the *files* argument on the EDITBIN command line. The optional *path* argument to /BIND specifies the location of the DLLs used by the specified files. Separate multiple directories with a semicolon (**;**). If *path* is not specified, EDITBIN searches the directories specified in the PATH environment variable. If *path* is specified, EDITBIN ignores the PATH variable.  
  
 By default, the program loader sets the addresses of entry points when it loads a program. The amount of time this process takes varies, depending on the number of DLLs and the number of entry points referenced in the program. If a program has been modified with /BIND, and if the base addresses for the executable file and its DLLs do not conflict with DLLs that are already loaded, the operating system does not need to set these addresses. In a situation where the files are incorrectly based, the operating system relocates the program's DLLs and recalculates the entry-point addresses, which adds to the program's load time.  
  
## See Also  
 [EDITBIN Options](../VS_visualcpp/EDITBIN-Options.md)