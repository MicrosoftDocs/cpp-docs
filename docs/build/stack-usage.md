---
title: "Stack Usage | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 383f0072-0438-489f-8829-cca89582408c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Stack Usage
All memory beyond the current address of RSP is considered volatile: The OS, or a debugger, may overwrite this memory during a user debug session, or an interrupt handler. Thus, RSP must always be set before attempting to read or write values to a stack frame.  
  
 This section discusses the allocation of stack space for local variables and the **alloca** intrinsic.  
  
-   [Stack Allocation](../build/stack-allocation.md)  
  
-   [Dynamic Parameter Stack Area Construction](../build/dynamic-parameter-stack-area-construction.md)  
  
-   [Function Types](../build/function-types.md)  
  
-   [malloc Alignment](../build/malloc-alignment.md)  
  
-   [alloca](../build/alloca.md)  
  
## See Also  
 [x64 Software Conventions](../build/x64-software-conventions.md)