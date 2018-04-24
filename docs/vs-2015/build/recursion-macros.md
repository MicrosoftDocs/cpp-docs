---
title: "Recursion Macros | Microsoft Docs"
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
  - "NMAKE program, recursion macros"
  - "recursion macros"
  - "macros, recursion"
ms.assetid: c53e5ae7-619e-46b1-bdc2-86d8c7798b1d
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Recursion Macros
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Recursion Macros](https://docs.microsoft.com/cpp/build/recursion-macros).  
  
  
Use recursion macros to call NMAKE recursively. Recursive sessions inherit command-line and environment-variable macros and Tools.ini information. They do not inherit makefile-defined inference rules or **.SUFFIXES** and **.PRECIOUS** specifications. To pass macros to a recursive NMAKE session, either set an environment variable with SET before the recursive call, define a macro in the command for the recursive call, or define a macro in Tools.ini.  
  
|Macro|Definition|  
|-----------|----------------|  
|**MAKE**|Command used originally to invoke NMAKE.<br /><br /> The $(MAKE) macro gives the full path to nmake.exe.|  
|**MAKEDIR**|Current directory when NMAKE was invoked.|  
|**MAKEFLAGS**|Options currently in effect. Use as `/$(MAKEFLAGS)`.  Note, /F is not included.|  
  
## See Also  
 [Special NMAKE Macros](../build/special-nmake-macros.md)

