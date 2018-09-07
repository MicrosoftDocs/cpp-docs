---
title: "signal Constants | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
f1_keywords: ["SIGTERM", "SIGFPE", "SIGABRT", "SIGILL", "SIGINT", "SIGSEGV"]
dev_langs: ["C++"]
helpviewer_keywords: ["SIGTERM constant", "SIGABRT constant", "SIGSEGV constant", "SIGFPE constant", "SIGINT constant", "signal constants", "SIGILL constant"]
ms.assetid: a3b39281-dae7-4e44-8d68-e6a610c669dd
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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