---
title: "Command-Line Error D8027 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "D8027"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "D8027"
ms.assetid: f228220f-0c7f-49a6-a6e0-1f7bd4745aa6
caps.latest.revision: 6
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
# Command-Line Error D8027
cannot execute 'component'  
  
 The compiler could not run the given compiler component or linker.  
  
### To fix by checking the following possible causes  
  
1.  Not enough memory to load the component. If NMAKE invoked the compiler, run the compiler outside of the makefile.  
  
2.  The current operating system could not run the component. Make sure the path points to the executable files appropriate to your operating system.  
  
3.  The component was corrupted. Recopy the component from the distribution disks, using the SETUP program.  
  
4.  An option was specified incorrectly. For example:  
  
    ```  
    cl /B1 file1.c  
    ```