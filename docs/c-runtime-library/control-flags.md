---
title: "Control Flags | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
f1_keywords: ["c.flags"]
dev_langs: ["C++"]
helpviewer_keywords: ["flags, control", "heap allocation, control flags", "debug heap, control flags"]
ms.assetid: 8dbd24a5-0633-42d1-9771-776db338465f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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