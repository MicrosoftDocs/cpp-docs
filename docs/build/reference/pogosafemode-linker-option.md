---
title: "/POGOSAFEMODE (Run PGO in thread safe mode) | Microsoft Docs"
ms.custom: ""
ms.date: "03/14/2018"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
dev_langs: ["C++"]
f1_keywords: ["POGOSAFEMODE"]
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# /POGOSAFEMODE (Run PGO in thread safe mode)

This linker option specifies thread safe mode for application profiling on x86 and x64 systems.

## Syntax

> **/POGOSAFEMODE**

## Remarks

Profile-guided optimization (PGO) has two possible modes during the profiling phase: *fast mode* and *safe mode*. When profiling is in fast mode, it uses the **INC** instruction to increase data counters. The **INC** instruction is faster but is not thread-safe. When profiling is in safe mode, it uses the **LOCK INC** instruction to increase data counters. The **LOCK INC** instruction has the same functionality as the **INC** instruction has, and is thread-safe, but it is slower than the **INC** instruction.

By default, PGO profiling operates in fast mode. **/POGOSAFEMODE** is only required if you want to use safe mode.

To run PGO profiling in safe mode, you must either use the environment variable **PogoSafeMode** or the linker switch **/POGOSAFEMODE**, depending on the system. If you are performing the profiling on an x64 computer, you must use the linker switch. If you are performing the profiling on an x86 computer, you may use the linker switch or define the environment variable to any value before you start the optimization process.

### To set this option in the Visual Studio IDE

## See also

[Environment Variables for Profile-Guided Optimizations](../../build/reference/environment-variables-for-profile-guided-optimizations.md)<br/>
[Profile-Guided Optimizations](../../build/reference/profile-guided-optimizations.md)<br/>
