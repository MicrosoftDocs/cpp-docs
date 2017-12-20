---
title: "setjmp-longjump | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp-tools"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: b0e21902-095d-4198-8f9a-b6326525721a
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
---
# setjmp/longjump
When you include setjmpex.h or setjmp.h, all calls to [setjmp](../c-runtime-library/reference/setjmp.md) or [longjmp](../c-runtime-library/reference/longjmp.md) will result in an unwind that invokes destructors and finally calls.  This differs from x86, where including setjmp.h results in finally clauses and destructors not being invoked.  
  
 A call to `setjmp` preserves the current stack pointer, non-volatile registers, and MxCsr registers.  Calls to `longjmp` return to the most recent `setjmp` call site and resets the stack pointer, non-volatile registers, and MxCsr registers, back to the state as preserved by the most recent `setjmp` call.  
  
## See Also  
 [Calling Convention](../build/calling-convention.md)