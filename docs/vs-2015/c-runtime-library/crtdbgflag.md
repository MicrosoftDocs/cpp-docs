---
title: "_crtDbgFlag | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_crtDbgFlag"
  - "crtDbgFlag"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "memory allocation, tracking flag"
  - "crtDbgFlag constant"
  - "_crtDbgFlag constant"
  - "debug heap, tracking memory on"
  - "debug heap, control flags"
  - "enable memory allocation tracking flag"
  - "memory, tracking on the debug heap"
ms.assetid: 9e7adb47-8ab9-4e19-81d5-e2f237979973
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# _crtDbgFlag
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [_crtDbgFlag](https://docs.microsoft.com/cpp/c-runtime-library/crtdbgflag).  
  
The **_crtDbgFlag** flag consists of five bit fields that control how memory allocations on the debug version of the heap are tracked, verified, reported, and dumped. The bit fields of the flag are set using the [_CrtSetDbgFlag](../c-runtime-library/reference/crtsetdbgflag.md) function. This flag and its bit fields are declared in Crtdbg.h. This flag is only available when the [_DEBUG](../c-runtime-library/debug.md) flag has been defined in the application.  
  
 For more information about using this flag in conjunction with other debug functions, see [Heap State Reporting Functions](http://msdn.microsoft.com/library/bf78ace6-28e4-4a04-97c6-39e0cdd00ba4).  
  
## See Also  
 [Control Flags](../c-runtime-library/control-flags.md)





