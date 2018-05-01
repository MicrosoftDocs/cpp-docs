---
title: "Multithreaded Libraries Performance | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
  - "threading [C++], performance"
  - "libraries, multithreaded"
  - "performance, multithreading"
  - "multithreaded libraries"
ms.assetid: faa5d808-087c-463d-8f0d-8c478d137296
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Multithreaded Libraries Performance
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Multithreaded Libraries Performance](https://docs.microsoft.com/cpp/c-runtime-library/multithreaded-libraries-performance).  
  
The single-threaded CRT is no longer available. This topic discusses how to get the maximum performance from the multithreaded libraries.  
  
## Maximizing performance  
 The performance of the multithreaded libraries has been improved and is close to the performance of the now-eliminated single-threaded libraries. For those situations when even higher performance is required, there are several new features.  
  
-   Independent stream locking allows you to lock a stream and then use [_nolock Functions](../c-runtime-library/nolock-functions.md) that access the stream directly. This allows lock usage to be hoisted outside critical loops.  
  
-   Per-thread locale reduces the cost of locale access for multithreaded scenarios (see [_configthreadlocale](../c-runtime-library/reference/configthreadlocale.md)).  
  
-   Locale-dependent functions (with names ending in _l) take the locale as a parameter, removing substantial cost (for example, [printf, _printf_l, wprintf, _wprintf_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)).  
  
-   Optimizations for common codepages reduce the cost of many short operations.  
  
-   Defining [_CRT_DISABLE_PERFCRIT_LOCKS](../c-runtime-library/crt-disable-perfcrit-locks.md) forces all I/O operations to assume a single-threaded I/O model and use the _nolock forms of the functions. This allows highly I/O-based single-threaded applications to get better performance.  
  
-   Exposure of the CRT heap handle allows you to enable the Windows Low Fragmentation Heap (LFH) for the CRT heap, which can substantially improve performance in highly scaled scenarios.  
  
## See Also  
 [CRT Library Features](../c-runtime-library/crt-library-features.md)





