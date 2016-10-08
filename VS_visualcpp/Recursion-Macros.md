---
title: "Recursion Macros"
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
ms.assetid: c53e5ae7-619e-46b1-bdc2-86d8c7798b1d
caps.latest.revision: 8
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
# Recursion Macros
Use recursion macros to call NMAKE recursively. Recursive sessions inherit command-line and environment-variable macros and Tools.ini information. They do not inherit makefile-defined inference rules or **.SUFFIXES** and **.PRECIOUS** specifications. To pass macros to a recursive NMAKE session, either set an environment variable with SET before the recursive call, define a macro in the command for the recursive call, or define a macro in Tools.ini.  
  
|Macro|Definition|  
|-----------|----------------|  
|**MAKE**|Command used originally to invoke NMAKE.<br /><br /> The $(MAKE) macro gives the full path to nmake.exe.|  
|**MAKEDIR**|Current directory when NMAKE was invoked.|  
|**MAKEFLAGS**|Options currently in effect. Use as `/$(MAKEFLAGS)`.  Note, /F is not included.|  
  
## See Also  
 [Special NMAKE Macros](../VS_visualcpp/Special-NMAKE-Macros.md)