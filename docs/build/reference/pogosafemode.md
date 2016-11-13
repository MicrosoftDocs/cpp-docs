---
title: "PogoSafeMode | Microsoft Docs"
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
  - "PogoSafeMode"
ms.assetid: 2daeeff7-44cb-417f-90eb-6b9edf658533
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
# PogoSafeMode
Specify whether to use fast mode or safe mode for application profiling.  
  
## Syntax  
  
```  
PogoSafeMode  
```  
  
## Remarks  
 Profile-guided optimization (PGO) has two possible modes during the profiling phase: fast mode and safe mode. When profiling is in fast mode, it uses the **INC** instruction to increase data counters. The **INC** instruction is faster but is not thread-safe. When profiling is in safe mode, it uses the **LOCK INC** instruction to increase data counters. The **LOCK INC** instruction has the same functionality as the **INC** instruction has, and is thread-safe, but it is slower than the **INC** instruction.  
  
 By default, PGO profiling operates in fast mode. `PogoSafeMode` is only required if you want to use safe mode.  
  
 To run PGO profiling in safe mode, you must either use the environment variable `PogoSafeMode` or the linker switch **-PogoSafeMode**, depending on the system. If you are performing the profiling on an x64 computer, you must use the linker switch. If you are performing the profiling on an x86 computer, you must define the environment variable to any value before you start the optimization process.  
  
## Example  
  
```  
set PogoSafeMode=1  
```  
  
## See Also  
 [Environment Variables for Profile-Guided Optimizations](../../build/reference/environment-variables-for-profile-guided-optimizations.md)   
 [Profile-Guided Optimizations](../../build/reference/profile-guided-optimizations.md)