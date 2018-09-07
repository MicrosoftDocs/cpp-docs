---
title: "Restrictions on Termination Handlers | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["termination handlers [C++], limitations", "restrictions, termination handlers", "try-catch keyword [C++], termination handlers"]
ms.assetid: 8b1cb481-303f-4e79-b409-57a002a9fa9e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Restrictions on Termination Handlers
You cannot use a **goto** statement to jump into a **__try** statement block or a **__finally** statement block. Instead, you must enter the statement block through normal flow of control. (You can, however, jump out of a **__try** statement block.) Also, you cannot nest an exception handler or termination handler inside a **__finally** block.  
  
 In addition, some kinds of code permitted in a termination handler produce questionable results, so you should use them with caution, if at all. One is a **goto** statement that jumps out of a **__finally** statement block. If the block is executing as part of normal termination, nothing unusual happens. But if the system is unwinding the stack, that unwinding stops, and the current function gains control as if there were no abnormal termination.  
  
 A **return** statement inside a **__finally** statement block presents roughly the same situation. Control returns to the immediate caller of the function containing the termination handler. If the system was unwinding the stack, this process is halted, and the program proceeds as if there had been no exception raised.  
  
## See also  
 [Writing a Termination Handler](../cpp/writing-a-termination-handler.md)   
 [Structured Exception Handling (C/C++)](../cpp/structured-exception-handling-c-cpp.md)