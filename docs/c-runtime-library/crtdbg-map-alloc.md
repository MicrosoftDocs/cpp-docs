---
title: "_CRTDBG_MAP_ALLOC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
f1_keywords: ["CRTDBG_MAP_ALLOC", "_CRTDBG_MAP_ALLOC"]
dev_langs: ["C++"]
helpviewer_keywords: ["_CRTDBG_MAP_ALLOC macro", "memory allocation, in debug builds", "CRTDBG_MAP_ALLOC macro"]
ms.assetid: 435242b8-caea-4063-b765-4a608200312b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _CRTDBG_MAP_ALLOC
When the **_CRTDBG_MAP_ALLOC** flag is defined in the debug version of an application, the base version of the heap functions are directly mapped to their debug versions. The flag is used in Crtdbg.h to do the mapping. This flag is only available when the [_DEBUG](../c-runtime-library/debug.md) flag has been defined in the application.  
  
 For more information about using the debug version versus the base version of a heap function, see [Using the Debug Version Versus the Base Version](/visualstudio/debugger/debug-versions-of-heap-allocation-functions).  
  
## See Also  
 [Control Flags](../c-runtime-library/control-flags.md)