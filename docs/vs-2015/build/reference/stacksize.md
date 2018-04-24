---
title: "STACKSIZE | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "STACKSIZE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "STACKSIZE .def file statement"
ms.assetid: 4d8c79bd-1cb4-4e4d-90f2-b5a7a4d20e7a
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# STACKSIZE
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [STACKSIZE](https://docs.microsoft.com/cpp/build/reference/stacksize).  
  
  
Sets the size of the stack in bytes.  
  
```  
STACKSIZE reserve[,commit]  
```  
  
## Remarks  
 An equivalent way to set the stack is with the [Stack Allocations](../../build/reference/stack-stack-allocations.md) (/STACK) option. See the documentation on that option for details about the *reserve* and `commit` arguments.  
  
 This option has no effect on DLLs.  
  
## See Also  
 [Rules for Module-Definition Statements](../../build/reference/rules-for-module-definition-statements.md)

