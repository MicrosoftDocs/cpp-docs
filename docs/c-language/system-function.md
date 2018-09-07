---
title: "system Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["system function"]
ms.assetid: 0786ccdc-20cd-4d96-b3d8-3230507c3066
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# system Function
**ANSI 4.10.4.5** The contents and mode of execution of the string by the **system** function  
  
 The **system** function executes an internal operating system command, or an .EXE, .COM (.CMD in Windows NT) or .BAT file from within a C program rather than from the command line.  
  
 The system function finds the command interpreter, which is typically CMD.EXE in the Windows NT operating system or COMMAND.COM in Windows. The system function then passes the argument string to the command interpreter.  
  
 For more information, see [system, _wsystem](../c-runtime-library/reference/system-wsystem.md).  
  
## See Also  
 [Library Functions](../c-language/library-functions.md)