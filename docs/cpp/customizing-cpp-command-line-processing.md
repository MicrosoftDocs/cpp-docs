---
title: "Customizing C++ Command-Line Processing | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "_setenvp"
  - "_setargv"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "command line, processing"
  - "command-line processing"
  - "startup code, customizing command-line processing"
  - "environment, environment-processing routine"
  - "_setargv function"
  - "command line, processing arguments"
  - "suppressing environment processing"
  - "_setenvp function"
ms.assetid: aae01cbb-892b-48b8-8e1f-34f22421f263
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
# Customizing C++ Command-Line Processing
## Microsoft Specific  
 If your program does not take command-line arguments, you can save a small amount of space by suppressing use of the library routine that performs command-line processing. This routine is called **_setargv** and is described in [Wildcard Expansion](../cpp/wildcard-expansion.md). To suppress its use, define a routine that does nothing in the file containing the **main** function, and name it **_setargv**. The call to **_setargv** is then satisfied by your definition of **_setargv**, and the library version is not loaded.  
  
 Similarly, if you never access the environment table through the `envp` argument, you can provide your own empty routine to be used in place of **_setenvp**, the environment-processing routine. Just as with the **_setargv** function, **_setenvp** must be declared as **extern "C"**.  
  
 Your program might make calls to the **spawn** or `exec` family of routines in the C run-time library. If this is the case, you should not suppress the environment-processing routine, since this routine is used to pass an environment from the parent process to the child process.  
  
## END Microsoft Specific  
  
## See Also  
 [main: Program Startup](../cpp/main-program-startup.md)