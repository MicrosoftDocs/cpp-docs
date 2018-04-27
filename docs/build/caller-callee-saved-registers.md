---
title: "Caller-Callee Saved Registers | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 0533bd4b-d6bb-4ce1-8201-495e16870cbb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Caller/Callee Saved Registers
The registers RAX, RCX, RDX, R8, R9, R10, R11 are considered volatile and must be considered destroyed on function calls (unless otherwise safety-provable by analysis such as whole program optimization).  
  
 The registers RBX, RBP, RDI, RSI, RSP, R12, R13, R14, and R15 are considered nonvolatile and must be saved and restored by a function that uses them.  
  
## See Also  
 [Calling Convention](../build/calling-convention.md)