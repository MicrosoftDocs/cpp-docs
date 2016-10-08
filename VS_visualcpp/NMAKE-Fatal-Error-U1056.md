---
title: "NMAKE Fatal Error U1056"
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
ms.topic: error-reference
ms.assetid: da855728-b69e-413c-83ed-df912126215e
caps.latest.revision: 6
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
# NMAKE Fatal Error U1056
cannot find command processor  
  
 The command processor was not in the path specified in the **COMSPEC** or **PATH** environment variables.  
  
 NMAKE uses COMMAND.COM or CMD.EXE as a command processor when executing commands. It looks for the command processor first in the path set in **COMSPEC**. If **COMSPEC** does not exist, NMAKE searches the directories specified in **PATH**.