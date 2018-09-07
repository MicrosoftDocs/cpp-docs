---
title: "Precedence in Macro Definitions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["NMAKE program, precedence in macro definitions", "macros, precedence"]
ms.assetid: 0c13182d-83cb-4cbd-af2d-f4c916b62aeb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Precedence in Macro Definitions
If a macro has multiple definitions, NMAKE uses the highest-precedence definition. The following list shows the order of precedence, from highest to lowest:  
  
1.  A macro defined on the command line  
  
2.  A macro defined in a makefile or include file  
  
3.  An inherited environment-variable macro  
  
4.  A macro defined in the Tools.ini file  
  
5.  A predefined macro, such as [CC](../build/command-macros-and-options-macros.md) and [AS](../build/command-macros-and-options-macros.md)  
  
 Use /E to cause macros inherited from environment variables to override makefile macros with the same name. Use **!UNDEF** to override a command line.  
  
## See Also  
 [Defining an NMAKE Macro](../build/defining-an-nmake-macro.md)