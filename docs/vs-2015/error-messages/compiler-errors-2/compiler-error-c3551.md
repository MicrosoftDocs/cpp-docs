---
title: "Compiler Error C3551 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3551"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3551"
ms.assetid: c8ee23da-6568-40db-93a6-3ddb7ac47712
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3551
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3551](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3551).  
  
  
expected a late specified return type"  
  
 If you use the `auto` keyword as a placeholder for the return type of a function, you must provide a late-specified return type. In the following example, the late-specified return type of function `myFunction` is a pointer to an array of four elements of type `int`.  
  
```  
auto myFunction()->int(*)[4];   
```  
  
## See Also  
 [auto](../../cpp/auto-cpp.md)

