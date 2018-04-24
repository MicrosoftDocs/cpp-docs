---
title: "Compiler Error C3556 | Microsoft Docs"
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
  - "C3556"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3556"
ms.assetid: 9b002dcc-494e-414f-9587-20c2a0a39333
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3556
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3556](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3556).  
  
  
expression': incorrect argument to 'decltype'  
  
 The compiler cannot deduce the type of the expression that is the argument to the `decltype(``expression``)` type specifier. In the following code example, the compiler cannot deduce the type of the `myFunction` argument because `myFunction` is overloaded.  
  
```  
void myFunction();  
void myFunction(int);  
decltype(myFunction); // C3556  
```

