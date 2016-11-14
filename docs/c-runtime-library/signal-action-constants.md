---
title: "signal Action Constants | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "SIG_IGN"
  - "SIG_DFL"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "signal action constants"
  - "SIG_IGN constant"
  - "SIG_DFL constant"
ms.assetid: c3cb4f15-d39e-4d9d-84f9-0d33e3eb5993
caps.latest.revision: 8
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
# signal Action Constants
The action taken when the interrupt signal is received depends on the value of `func`.  
  
## Syntax  
  
```  
#include <signal.h>  
```  
  
## Remarks  
 The `func` argument must be either a function address or one of the manifest constants listed below and defined in SIGNAL.H.  
  
 `SIG_DFL`  
 Uses system-default response. If the calling program uses stream I/O, buffers created by the run-time library are not flushed.  
  
 `SIG_IGN`  
 Ignores interrupt signal. This value should never be given for `SIGFPE`, since the floating-point state of the process is left undefined.  
  
 `SIG_SGE`  
 Indicates an error occurred in the signal.  
  
 `SIG_ACK`  
 Indicates an acknowledgement was received.  
  
 `SIG_ERR`  
 A return type from a signal indicating an error has occurred.  
  
## See Also  
 [signal](../c-runtime-library/reference/signal.md)   
 [Global Constants](../c-runtime-library/global-constants.md)