---
title: "Recursion Macros | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["NMAKE program, recursion macros", "recursion macros", "macros, recursion"]
ms.assetid: c53e5ae7-619e-46b1-bdc2-86d8c7798b1d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Recursion Macros
Use recursion macros to call NMAKE recursively. Recursive sessions inherit command-line and environment-variable macros and Tools.ini information. They do not inherit makefile-defined inference rules or **.SUFFIXES** and **.PRECIOUS** specifications. To pass macros to a recursive NMAKE session, either set an environment variable with SET before the recursive call, define a macro in the command for the recursive call, or define a macro in Tools.ini.  
  
|Macro|Definition|  
|-----------|----------------|  
|**MAKE**|Command used originally to invoke NMAKE.<br /><br /> The $(MAKE) macro gives the full path to nmake.exe.|  
|**MAKEDIR**|Current directory when NMAKE was invoked.|  
|**MAKEFLAGS**|Options currently in effect. Use as `/$(MAKEFLAGS)`.  Note, /F is not included.|  
  
## See Also  
 [Special NMAKE Macros](../build/special-nmake-macros.md)