---
title: "INVOKE | Microsoft Docs"
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
  - "Invoke"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "INVOKE directive"
ms.assetid: 12d9bb40-33b9-411e-b801-45a1d675967e
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# INVOKE
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [INVOKE](https://docs.microsoft.com/cpp/assembler/masm/invoke).  
  
  
Calls the procedure at the address given by *expression*, passing the arguments on the stack or in registers according to the standard calling conventions of the language type.  
  
## Syntax  
  
```  
  
INVOKE   
expression [[, arguments]]  
```  
  
## Remarks  
 Each argument passed to the procedure may be an expression, a register pair, or an address expression (an expression preceded by `ADDR`).  
  
## See Also  
 [Directives Reference](../../assembler/masm/directives-reference.md)

