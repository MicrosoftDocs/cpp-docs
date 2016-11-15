---
title: "Calling Conventions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 7
author: "mikeblome"
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
# Calling Conventions
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