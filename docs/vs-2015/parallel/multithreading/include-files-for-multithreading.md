---
title: "Include Files for Multithreading | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "threading [C++], include files"
  - "include files, multithreading"
  - "multithreading [C++], include files"
ms.assetid: 98d764f9-71f4-4da5-8f3a-8d2d26e96799
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Include Files for Multithreading
[!INCLUDE[blank_token](../../includes/blank-token.md)]

Standard include files declare C run-time library functions as they are implemented in the libraries. If you use the [Full Optimization](../../build/reference/ox-full-optimization.md) (/Ox) or [fastcall Calling Convention](../../build/reference/gd-gr-gv-gz-calling-convention.md) (/Gr) option, the compiler assumes that all functions should be called using the register calling convention. The run-time library functions were compiled using the C calling convention, and the declarations in the standard include files tell the compiler to generate correct external references to these functions.  
  
## See Also  
 [Multithreading with C and Win32](../../parallel/multithreading-with-c-and-win32.md)