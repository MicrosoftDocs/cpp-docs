---
title: "Compiler Error C3452 | Microsoft Docs"
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
  - "C3452"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3452"
ms.assetid: e5293dcf-cb70-4133-ae2a-0bb496950ba0
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3452
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3452](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3452).  
  
  
list argument member not constant  
  
 An argument was passed to an attribute that expected a constant, a value that can be evaluated at compile time.  
  
## Example  
 The following sample generates C3452.  
  
```  
// C3452.cpp  
// compile with: /c  
int i;  
[module( name="mod", type=dll, custom={i} ) ];   // C3452  
// try the following line instead  
// [module( name="mod", type=dll, custom={"a"} ) ];  
```

