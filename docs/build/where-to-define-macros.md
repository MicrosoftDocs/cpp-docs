---
title: "Where to Define Macros | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["defining macros", "macros, NMAKE", "NMAKE program, defining macros"]
ms.assetid: 0fc59ec5-5f58-4644-b7da-7b021f7001af
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Where to Define Macros
Define macros in a command line, command file, makefile, or the Tools.ini file.  
  
 In a makefile or the Tools.ini file, each macro definition must appear on a separate line and cannot start with a space or tab. Spaces or tabs around the equal sign are ignored. All [string characters](../build/defining-an-nmake-macro.md) are literal, including surrounding quotation marks and embedded spaces.  
  
 In a command line or command file, spaces and tabs delimit arguments and cannot surround the equal sign. If `string` has embedded spaces or tabs, enclose either the string itself or the entire macro in double quotation marks (" ").  
  
## See Also  
 [Defining an NMAKE Macro](../build/defining-an-nmake-macro.md)