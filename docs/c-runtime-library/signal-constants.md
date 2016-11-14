---
title: "signal Constants | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SIGTERM"
  - "SIGFPE"
  - "SIGABRT"
  - "SIGILL"
  - "SIGINT"
  - "SIGSEGV"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "SIGTERM constant"
  - "SIGABRT constant"
  - "SIGSEGV constant"
  - "SIGFPE constant"
  - "SIGINT constant"
  - "signal constants"
  - "SIGILL constant"
ms.assetid: a3b39281-dae7-4e44-8d68-e6a610c669dd
caps.latest.revision: 11
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
# signal Constants
## Syntax  
  
```  
#include <signal.h>  
```  
  
## Remarks  
 The `sig` argument must be one of the manifest constants listed below (defined in SIGNAL.H).  
  
 `SIGABRT`  
 Abnormal termination. The default action terminates the calling program with exit code 3.  
  
 `SIGABRT_COMPAT`  
 Same as SIGABRT. For compatibility with other platforms.  
  
 `SIGFPE`  
 Floating-point error, such as overflow, division by zero, or invalid operation. The default action terminates the calling program.  
  
 `SIGILL`  
 Illegal instruction. The default action terminates the calling program.  
  
 `SIGINT`  
 CTRL+C interrupt. The default action terminates the calling program with exit code 3.  
  
 `SIGSEGV`  
 Illegal storage access. The default action terminates the calling program.  
  
 `SIGTERM`  
 Termination request sent to the program. The default action terminates the calling program with exit code 3.  
  
 `SIG_ERR`  
 A return type from a signal indicating an error has occurred.  
  
## See Also  
 [signal](../c-runtime-library/reference/signal.md)   
 [raise](../c-runtime-library/reference/raise.md)   
 [Global Constants](../c-runtime-library/global-constants.md)