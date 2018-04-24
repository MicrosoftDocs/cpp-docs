---
title: "Stack Usage | Microsoft Docs"
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
ms.assetid: 383f0072-0438-489f-8829-cca89582408c
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Stack Usage
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Stack Usage](https://docs.microsoft.com/cpp/build/stack-usage).  
  
  
All memory beyond the current address of RSP is considered volatile: The OS, or a debugger, may overwrite this memory during a user debug session, or an interrupt handler. Thus, RSP must always be set before attempting to read or write values to a stack frame.  
  
 This section discusses the allocation of stack space for local variables and the **alloca** intrinsic.  
  
-   [Stack Allocation](../build/stack-allocation.md)  
  
-   [Dynamic Parameter Stack Area Construction](../build/dynamic-parameter-stack-area-construction.md)  
  
-   [Function Types](../build/function-types.md)  
  
-   [malloc Alignment](../build/malloc-alignment.md)  
  
-   [alloca](../build/alloca.md)  
  
## See Also  
 [x64 Software Conventions](../build/x64-software-conventions.md)

