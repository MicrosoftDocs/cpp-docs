---
title: "struct RUNTIME_FUNCTION | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 84386527-d3aa-41c5-871d-78e3e1913704
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# struct RUNTIME_FUNCTION

Table-based exception handling requires a table entry for all functions that allocate stack space or call another function (for example, nonleaf functions). Function table entries have the format:

|||
|-|-|
|ULONG|Function start address|
|ULONG|Function end address|
|ULONG|Unwind info address|

The RUNTIME_FUNCTION structure must be DWORD aligned in memory. All addresses are image relative, that is, they are 32-bit offsets from the starting address of the image that contains the function table entry. These entries are sorted, and put in the .pdata section of a PE32+ image. For dynamically generated functions [JIT compilers], the runtime to support these functions must either use RtlInstallFunctionTableCallback or RtlAddFunctionTable to provide this information to the operating system. Failure to do so will result in unreliable exception handling and debugging of processes.

## See Also

[Unwind Data for Exception Handling, Debugger Support](../build/unwind-data-for-exception-handling-debugger-support.md)