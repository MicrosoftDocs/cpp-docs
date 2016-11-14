---
title: "Customizing C Command-Line Processing | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "_spawn functions"
  - "command line, processing"
  - "command-line processing"
  - "startup code, customizing command-line processing"
  - "environment, environment-processing routine"
  - "_setargv function"
  - "command line, processing arguments"
  - "suppressing environment processing"
  - "_exec function"
ms.assetid: c20fa11d-b35b-4f3e-93b6-2cd5a1c3c993
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
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
# Customizing C Command-Line Processing
If your program does not take command-line arguments, you can save a small amount of space by suppressing use of the library routine that performs command-line processing. This routine is called **_setargv** (or **_wsetargv** in the wide-character environment), as described in [Expanding Wildcard Arguments](../c-language/expanding-wildcard-arguments.md). To suppress its use, define a routine that does nothing in the file containing the **main** function and name it **_setargv** (or **_wsetargv** in the wide-character environment). The call to **_setargv** or **_wsetargv** is then satisfied by your definition of **_setargv** or **_wsetargv** , and the library version is not loaded.  
  
 Similarly, if you never access the environment table through the `envp` argument, you can provide your own empty routine to be used in place of **_setenvp** (or **_wsetenvp**), the environment-processing routine.  
  
 If your program makes calls to the **_spawn** or **_exec** family of routines in the C run-time library, you should not suppress the environment-processing routine, since this routine is used to pass an environment from the spawning process to the new process.  
  
## See Also  
 [main Function and Program Execution](../c-language/main-function-and-program-execution.md)