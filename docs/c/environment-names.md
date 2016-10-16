---
title: "Environment Names"
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
  - "C"
ms.assetid: 9af409a5-e724-465a-9a21-88d3586c2e92
caps.latest.revision: 7
ms.author: "mithom"
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
# Environment Names
**ANSI 4.10.4.4** The set of environment names and the method for altering the environment list used by the [getenv](../crt/getenv--_wgetenv.md) function  
  
 The set of environment names is unlimited.  
  
 To change environment variables from within a C program, call the [_putenv](../crt/_putenv--_wputenv.md) function. To change environment variables from the command line in Windows, use the SET command (for example, SET LIB = D:\ LIBS).  
  
 Environment variables set from within a C program exist only as long as their host copy of the operating system command shell is running (CMD.EXE or COMMAND.COM). For example, the line  
  
```  
system( SET LIB = D:\LIBS );  
```  
  
 would run a copy of the command shell (CMD.EXE), set the environment variable LIB, and return to the C program, exiting the secondary copy of CMD.EXE. Exiting that copy of CMD.EXE removes the temporary environment variable LIB.  
  
 Likewise, changes made by the `_putenv` function last only until the program ends.  
  
## See Also  
 [Library Functions](../c/library-functions.md)   
 [_putenv, _wputenv](../crt/_putenv--_wputenv.md)   
 [getenv, _wgetenv](../crt/getenv--_wgetenv.md)