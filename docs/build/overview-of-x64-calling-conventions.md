---
title: "Overview of x64 Calling Conventions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: a05db5eb-0844-4d9d-8b92-b1b2434be0ea
caps.latest.revision: 12
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
# Overview of x64 Calling Conventions
Two important differences between x86 and [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] are the 64-bit addressing capability and a flat set of 16 64-bit registers for general use. Given the expanded register set, [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] uses the [__fastcall](../cpp/fastcall.md) calling convention and a RISC-based exception-handling model. The `__fastcall` convention uses registers for the first four arguments and the stack frame to pass additional arguments.  
  
 The following compiler option helps you optimize your application for [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)]:  
  
-   [/favor (Optimize for Architecture Specifics)](../build/reference/favor-optimize-for-architecture-specifics.md)  
  
## Calling convention  
 The [!INCLUDE[vcprx64](../assembler/inline/includes/vcprx64_md.md)] Application Binary Interface (ABI) uses a four register fast-call calling convention by default. Space is allocated on the call stack as a shadow store for callees to save those registers. There is a strict one-to-one correspondence between the arguments to a function call and the registers used for those arguments. Any argument that doesn’t fit in 8 bytes, or is not 1, 2, 4, or 8 bytes, must be passed by reference. There is no attempt to spread a single argument across multiple registers. The x87 register stack is unused. It may be used by the callee, but must be considered volatile across function calls. All floating point operations are done using the 16 XMM registers. Integer arguments are passed in registers RCX, RDX, R8, and R9. Floating point arguments are passed in XMM0L, XMM1L, XMM2L, and XMM3L. 16-byte arguments are passed by reference. Parameter passing is described in detail in [Parameter Passing](../build/parameter-passing.md). In addition to these registers, RAX, R10, R11, XMM4, and XMM5 are considered volatile. All other registers are non-volatile. Register usage is documented in detail in [Register Usage](../build/register-usage.md) and [Caller/Callee Saved Registers](../build/caller-callee-saved-registers.md).  
  
 The caller is responsible for allocating space for parameters to the callee, and must always allocate sufficient space to store four register parameters, even if the callee doesn’t take that many parameters. This simplifies support for unprototyped C-language functions, and vararg C/C++ functions. For vararg or unprototyped functions, any floating point values must be duplicated in the corresponding general-purpose register. Any parameters beyond the first four must be stored on the stack, above the shadow store for the first four, prior to the call. Vararg function details can be found in [Varargs](../build/varargs.md). Unprototyped function information is detailed in [Unprototyped Functions](../build/unprototyped-functions.md).  
  
## Alignment  
 Most structures are aligned to their natural alignment. The primary exceptions are the stack pointer and `malloc` or `alloca` memory, which are aligned to 16 bytes in order to aid performance. Alignment above 16 bytes must be done manually, but since 16 bytes is a common alignment size for XMM operations, this should work for most code. For more information about structure layout and alignment see [Types and Storage](../build/types-and-storage.md). For information about the stack layout, see [Stack Usage](../build/stack-usage.md).  
  
## Unwindability  
 Leaf functions are functions that do not change any non-volatile registers. A non-leaf function may change non-volatile RSP, for example, by calling a function or allocating additional stack space for local variables. In order to recover non-volatile registers when an exception is handled, non-leaf functions must be annotated with static data that describes how to properly unwind the function at an arbitrary instruction. This data is stored as *pdata*, or procedure data, which in turn refers to *xdata*, the exception handling data. The xdata contains the unwinding information, and can point to additional pdata or an exception handler function. Prologs and epilogs are highly restricted so that they can be properly described in xdata. The stack pointer must be aligned to 16 bytes in any region of code that isn’t part of an epilog or prolog, except within leaf functions. Leaf functions can be unwound simply by simulating a return, so pdata and xdata are not required. For details about the proper structure of function prologs and epilogs, see [Prolog and Epilog](../build/prolog-and-epilog.md). For more information about exception handling, and the exception handling and unwinding of pdata and xdata, see [Exception Handling (x64)](../build/exception-handling-x64.md).  
  
## See Also  
 [x64 Software Conventions](../build/x64-software-conventions.md)