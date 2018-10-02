---
title: "Compiler Error C3859 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3859"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3859"]
ms.assetid: 40e93b25-4393-4467-90de-035434a665c7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3859

virtual memory range for PCH exceeded; please recompile with a command line option of '-Zmvalue' or greater

Your precompiled header is too small for the amount of data the compiler is trying to put in it. Use the **/Zm** compiler flag to specify a larger value for the precompiled header file. For more information, see [/Zm (Specify Precompiled Header Memory Allocation Limit)](../../build/reference/zm-specify-precompiled-header-memory-allocation-limit.md).