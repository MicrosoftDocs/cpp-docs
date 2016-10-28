---
title: "Obsolete Calling Conventions"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
caps.latest.revision: 7
ms.author: "mblome"
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
# Obsolete Calling Conventions
## Microsoft Specific  
 The **__pascal**, **__fortran**, and **__syscall** calling conventions are no longer supported. You can emulate their functionality by using one of the supported calling conventions and appropriate linker options.  
  
 WINDOWS.H now supports the **WINAPI** macro, which translates to the appropriate calling convention for the target. Use **WINAPI** where you previously used **PASCAL** or **__far \__pascal**.  
  
## END Microsoft Specific  
  
## See Also  
 [Argument Passing and Naming Conventions](../cpp/argument-passing-and-naming-conventions.md)