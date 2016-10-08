---
title: "system Function"
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
ms.assetid: 0786ccdc-20cd-4d96-b3d8-3230507c3066
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
# system Function
**ANSI 4.10.4.5** The contents and mode of execution of the string by the **system** function  
  
 The **system** function executes an internal operating system command, or an .EXE, .COM (.CMD in Windows NT) or .BAT file from within a C program rather than from the command line.  
  
 The system function finds the command interpreter, which is typically CMD.EXE in the Windows NT operating system or COMMAND.COM in Windows. The system function then passes the argument string to the command interpreter.  
  
 For more information, see [system, _wsystem](../VS_visualcpp/system--_wsystem.md).  
  
## See Also  
 [Library Functions](../VS_visualcpp/Library-Functions.md)