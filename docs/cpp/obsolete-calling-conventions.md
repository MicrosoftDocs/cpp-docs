---
title: "Obsolete Calling Conventions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-language"]
ms.topic: "language-reference"
f1_keywords: ["__fortran", "__pascal", "__syscall"]
dev_langs: ["C++"]
helpviewer_keywords: ["WINAPI [C++]", "__syscall keyword [C++]", "__pascal keyword [C++]", "__fortran keyword [C++]", "calling conventions, obsolete"]
ms.assetid: a91fc665-034a-48ce-b6bd-d27125f308a7
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# Obsolete Calling Conventions

## Microsoft Specific

The **__pascal**, **__fortran**, and **__syscall** calling conventions are no longer supported. You can emulate their functionality by using one of the supported calling conventions and appropriate linker options.

\<windows.h> now supports the WINAPI macro, which translates to the appropriate calling convention for the target. Use WINAPI where you previously used PASCAL or **__far \__pascal**.

**END Microsoft Specific**

## See also

[Argument Passing and Naming Conventions](../cpp/argument-passing-and-naming-conventions.md)