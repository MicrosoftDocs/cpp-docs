---
title: "Control Flags | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.flags"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "flags, control"
  - "heap allocation, control flags"
  - "debug heap, control flags"
ms.assetid: 8dbd24a5-0633-42d1-9771-776db338465f
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
# Control Flags
The debug version of the Microsoft C run-time library uses the following flags to control the heap allocation and reporting process. For more information, see [CRT Debugging Techniques](/visualstudio/debugger/crt-debugging-techniques).  
  
|Flag|Description|  
|----------|-----------------|  
|[_CRTDBG_MAP_ALLOC](../c-runtime-library/crtdbg-map-alloc.md)|Maps the base heap functions to their debug version counterparts|  
|[_DEBUG](../c-runtime-library/debug.md)|Enables the use of the debugging versions of the run-time functions|  
|[_crtDbgFlag](../c-runtime-library/crtdbgflag.md)|Controls how the debug heap manager tracks allocations|  
  
 These flags can be defined with a /D command-line option or with a `#define` directive. When the flag is defined with `#define`, the directive must appear before the header file include statement for the routine declarations.  
  
## See Also  
 [Global Variables and Standard Types](../c-runtime-library/global-variables-and-standard-types.md)