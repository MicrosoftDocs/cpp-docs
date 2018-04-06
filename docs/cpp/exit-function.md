---
title: "exit Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-language"]
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: ["Exit"]
dev_langs: ["C++"]
helpviewer_keywords: ["exit function"]
ms.assetid: 26ce439f-81e2-431c-9ff8-a09a96f32127
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# exit Function
The **exit** function, declared in the standard include file \<stdlib.h>, terminates a C++ program.  
  
 The value supplied as an argument to **exit** is returned to the operating system as the program's return code or exit code. By convention, a return code of zero means that the program completed successfully.  
  
> [!NOTE]
>  You can use the constants `EXIT_FAILURE` and `EXIT_SUCCESS`, defined in \<stdlib.h>, to indicate success or failure of your program.  
  
 Issuing a `return` statement from the **main** function is equivalent to calling the **exit** function with the return value as its argument.  
  
 For more information, see [exit](../c-runtime-library/reference/exit-exit-exit.md) in the *Run-Time Library Reference*.  
  
## See Also  
 [Program Termination](../cpp/program-termination.md)