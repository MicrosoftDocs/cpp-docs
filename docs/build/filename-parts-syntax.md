---
title: "Filename-Parts Syntax | Microsoft Docs"
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
  - "syntax, filename-parts"
  - "filename-parts syntax in NMAKE"
  - "NMAKE program, syntax"
ms.assetid: 48fe38e0-3f3b-40e6-894c-330ee775a656
caps.latest.revision: 7
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
# Filename-Parts Syntax
Filename-parts syntax in commands represents components of the first dependent filename (which may be an implied dependent). Filename components are the file's drive, path, base name, and extension as specified, not as it exists on disk. Use **%s** to represent the complete filename. Use **%&#124;**[*parts*]**F** (a vertical bar character follows the percent symbol) to represent parts of the filename, where *parts* can be zero or more of the following letters, in any order.  
  
|Letter|Description|  
|------------|-----------------|  
|No letter|Complete name (same as **%s**)|  
|**d**|Drive|  
|**p**|Path|  
|**f**|File base name|  
|**e**|File extension|  
  
 For example, if the filename is c:\prog.exe:  
  
-   %s will be c:\prog.exe  
  
-   %&#124;F will be c:\prog.exe  
  
-   %&#124;dF will be c  
  
-   %&#124;pF will be c:\  
  
-   %&#124;fF will be prog  
  
-   %&#124;eF will be exe  
  
## See Also  
 [Commands in a Makefile](../build/commands-in-a-makefile.md)