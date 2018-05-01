---
title: "exit Function | Microsoft Docs"
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
  - "Exit"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "exit function"
ms.assetid: 26ce439f-81e2-431c-9ff8-a09a96f32127
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# exit Function
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [exit Function](https://docs.microsoft.com/cpp/cpp/exit-function).  
  
The **exit** function, declared in the standard include file STDLIB.H, terminates a C++ program.  
  
 The value supplied as an argument to **exit** is returned to the operating system as the program's return code or exit code. By convention, a return code of zero means that the program completed successfully.  
  
> [!NOTE]
>  You can use the constants `EXIT_FAILURE` and `EXIT_SUCCESS`, defined in STDLIB.H, to indicate success or failure of your program.  
  
 Issuing a `return` statement from the **main** function is equivalent to calling the **exit** function with the return value as its argument.  
  
 For more information, see [exit](../c-runtime-library/reference/exit-exit-exit.md) in the *Run-Time Library Reference*.  
  
## See Also  
 [Program Termination](../cpp/program-termination.md)





