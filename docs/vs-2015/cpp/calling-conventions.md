---
title: "Calling Conventions | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "calling conventions"
ms.assetid: 11b1e45c-8fd1-420b-bca0-a19e294c1d85
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Calling Conventions
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Calling Conventions](https://docs.microsoft.com/cpp/cpp/calling-conventions).  
  
The Visual C/C++ compiler provides several different conventions for calling internal and external functions. Understanding these different approaches can help you debug your program and link your code with assembly-language routines.  
  
 The topics on this subject explain the differences between the calling conventions, how arguments are passed, and how values are returned by functions. They also discuss naked function calls, an advanced feature that enables you to write your own prolog and epilog code.  
  
 For information on calling conventions for x64 processors, see [Calling Convention](../build/calling-convention.md).  
  
## Topics in this section  
  
-   [Argument Passing and Naming Conventions](../cpp/argument-passing-and-naming-conventions.md) (__`cdecl`, \_\_**stdcall**, \_\_**fastcall**, and others)  
  
-   [Calling Example: Function Prototype and Call](../cpp/calling-example-function-prototype-and-call.md)  
  
-   [Using naked function calls to write custom prolog/epilog code](../cpp/naked-function-calls.md)  
  
-   [Floating Point Coprocessor and Calling Conventions](../cpp/floating-point-coprocessor-and-calling-conventions.md)  
  
-   [Obsolete calling conventions](../cpp/obsolete-calling-conventions.md)  
  
## See Also  
 [Microsoft-Specific Modifiers](../cpp/microsoft-specific-modifiers.md)





