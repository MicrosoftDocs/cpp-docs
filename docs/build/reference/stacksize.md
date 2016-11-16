---
title: "STACKSIZE | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
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
# STACKSIZE
Sets the size of the stack in bytes.  
  
```  
STACKSIZE reserve[,commit]  
```  
  
## Remarks  
 An equivalent way to set the stack is with the [Stack Allocations](../../build/reference/stack-stack-allocations.md) (/STACK) option. See the documentation on that option for details about the *reserve* and `commit` arguments.  
  
 This option has no effect on DLLs.  
  
## See Also  
 [Rules for Module-Definition Statements](../../build/reference/rules-for-module-definition-statements.md)