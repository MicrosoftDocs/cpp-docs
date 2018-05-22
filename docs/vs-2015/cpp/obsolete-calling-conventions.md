---
title: "Obsolete Calling Conventions | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__fortran"
  - "__pascal"
  - "__syscall"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WINAPI"
  - "__syscall keyword [C++]"
  - "__pascal keyword [C++]"
  - "__fortran keyword [C++]"
  - "calling conventions, obsolete"
ms.assetid: a91fc665-034a-48ce-b6bd-d27125f308a7
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Obsolete Calling Conventions
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Obsolete Calling Conventions](https://docs.microsoft.com/cpp/cpp/obsolete-calling-conventions).  
  
Microsoft Specific  
 The **__pascal**, **__fortran**, and **__syscall** calling conventions are no longer supported. You can emulate their functionality by using one of the supported calling conventions and appropriate linker options.  
  
 WINDOWS.H now supports the **WINAPI** macro, which translates to the appropriate calling convention for the target. Use **WINAPI** where you previously used **PASCAL** or **__far \__pascal**.  
  
## END Microsoft Specific  
  
## See Also  
 [Argument Passing and Naming Conventions](../cpp/argument-passing-and-naming-conventions.md)





