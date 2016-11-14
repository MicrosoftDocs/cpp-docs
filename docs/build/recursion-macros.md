---
title: "Recursion Macros | Microsoft Docs"
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
  - "NMAKE program, recursion macros"
  - "recursion macros"
  - "macros, recursion"
ms.assetid: c53e5ae7-619e-46b1-bdc2-86d8c7798b1d
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
# Recursion Macros
Use recursion macros to call NMAKE recursively. Recursive sessions inherit command-line and environment-variable macros and Tools.ini information. They do not inherit makefile-defined inference rules or **.SUFFIXES** and **.PRECIOUS** specifications. To pass macros to a recursive NMAKE session, either set an environment variable with SET before the recursive call, define a macro in the command for the recursive call, or define a macro in Tools.ini.  
  
|Macro|Definition|  
|-----------|----------------|  
|**MAKE**|Command used originally to invoke NMAKE.<br /><br /> The $(MAKE) macro gives the full path to nmake.exe.|  
|**MAKEDIR**|Current directory when NMAKE was invoked.|  
|**MAKEFLAGS**|Options currently in effect. Use as `/$(MAKEFLAGS)`.  Note, /F is not included.|  
  
## See Also  
 [Special NMAKE Macros](../build/special-nmake-macros.md)