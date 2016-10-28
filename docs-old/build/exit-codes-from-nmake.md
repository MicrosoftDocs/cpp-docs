---
title: "Exit Codes from NMAKE"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "NMAKE program, exit codes"
  - "exit codes"
ms.assetid: 75f6913c-1da5-4572-a2d3-8a4e058bed15
caps.latest.revision: 7
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
# Exit Codes from NMAKE
NMAKE returns the following exit codes:  
  
|Code|Meaning|  
|----------|-------------|  
|0|No error (possibly a warning)|  
|1|Incomplete build (issued only when /K is used)|  
|2|Program error, possibly due to one of the following:|  
||-   A syntax error in the makefile|  
||-   An error or exit code from a command|  
||-   An interruption by the user|  
|4|System error — out of memory|  
|255|Target is not up-to-date (issued only when /Q is used)|  
  
## See Also  
 [Running NMAKE](../build/running-nmake.md)