---
title: "Linker Tools Error LNK1332 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["LNK1332"]
dev_langs: ["C++"]
helpviewer_keywords: ["LNK1332"]
ms.assetid: b31d5ca0-c27f-4177-896b-2637dccbde24
caps.latest.revision: 4
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Linker Tools Error LNK1332
detected\<count> Windows Runtime types imported in one module and defined in another module  
  
 When it produced the current target, the linker detected <`count`> Windows Runtime types, each of which is imported in one module and also defined in another module.  
  
### To correct this error  
  
-   Correct each of the LNK2039 errors in the build according to the suggestion in the error message.  
  
## See Also  
 [Linker Tools Error LNK2039](../../error-messages/tool-errors/linker-tools-error-lnk2039.md)   
 [Linker Tools Errors and Warnings](../../error-messages/tool-errors/linker-tools-errors-and-warnings.md)