---
title: "Backward Compatibility | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "conceptual"
f1_keywords: ["c.programs"]
dev_langs: ["C++"]
helpviewer_keywords: ["CRT, compatibility", "backward compatibility, C run-time libraries", "compatibility, C run-time libraries", "backward compatibility"]
ms.assetid: cc3175cf-97fd-492f-b329-5791aea63090
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Backward Compatibility
For compatibility between product versions, the library OLDNAMES.LIB maps old names to new names. For instance, `open` maps to `_open`. You must explicitly link with OLDNAMES.LIB only when you compile with the following combinations of command-line options:  
  
-   `/Zl` (omit default library name from object file) and `/Ze` (the default — use Microsoft extensions)  
  
-   `/link` (linker-control), `/NOD` (no default-library search), and `/Ze`  
  
 For more information about compiler command-line options, see [Compiler Reference](../build/reference/compiler-options.md).  
  
## See Also  
 [Compatibility](../c-runtime-library/compatibility.md)