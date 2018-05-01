---
title: "struct RUNTIME_FUNCTION | Microsoft Docs"
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
ms.assetid: 84386527-d3aa-41c5-871d-78e3e1913704
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# struct RUNTIME_FUNCTION
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [struct RUNTIME_FUNCTION](https://docs.microsoft.com/cpp/build/struct-runtime-function).  
  
  
Table-based exception handling requires a table entry for all functions that allocate stack space or call another function (for example, nonleaf functions). Function table entries have the format:  
  
|||  
|-|-|  
|ULONG|Function start address|  
|ULONG|Function end address|  
|ULONG|Unwind info address|  
  
 The RUNTIME_FUNCTION structure must be DWORD aligned in memory. All addresses are image relative, that is, they are 32-bit offsets from the starting address of the image that contains the function table entry. These entries are sorted, and put in the .pdata section of a PE32+ image. For dynamically generated functions [JIT compilers], the runtime to support these functions must either use RtlInstallFunctionTableCallback or RtlAddFunctionTable to provide this information to the operating system. Failure to do so will result in unreliable exception handling and debugging of processes.  
  
## See Also  
 [Unwind Data for Exception Handling, Debugger Support](../build/unwind-data-for-exception-handling-debugger-support.md)

