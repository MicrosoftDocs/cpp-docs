---
title: "Function Types | Microsoft Docs"
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
ms.assetid: 7e33d5f4-dabb-406d-afb3-13777b995028
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Function Types
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Function Types](https://docs.microsoft.com/cpp/build/function-types).  
  
  
There are basically two types of functions. A function that requires a stack frame is called a frame function. A function that does not require a stack frame is called a leaf function.  
  
 A frame function is a function that allocates stack space, calls other functions, saves nonvolatile registers, or uses exception handling. It also requires a function table entry. A frame function requires a prolog and an epilog. A frame function can dynamically allocate stack space and can employ a frame pointer. A frame function has the full capabilities of this calling standard at its disposal.  
  
 If a frame function does not call another function then it is not required to align the stack (referenced in Section [Stack Allocation](../build/stack-allocation.md)).  
  
 A leaf function is one that does not require a function table entry. It cannot call any functions, allocate space, or save any nonvolatile registers. It is allowed to leave the stack unaligned while it executes.  
  
## See Also  
 [Stack Usage](../build/stack-usage.md)

