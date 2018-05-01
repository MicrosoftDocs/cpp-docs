---
title: "Compiler Error C3394 | Microsoft Docs"
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
  - "C3394"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3394"
ms.assetid: 4e025d79-27ba-43c8-b0d9-839ecef98126
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3394
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3394](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3394).  
  
  
syntax error in constraint clause: found 'identifier' expected a type  
  
 A constraint was ill formed.  For more information, see [Constraints on Generic Type Parameters (C++/CLI)](../../windows/constraints-on-generic-type-parameters-cpp-cli.md).  
  
## Example  
 The following sample generates C3394:  
  
```  
// C3394.cpp  
// compile with: /clr /c  
ref class MyClass {};  
ref class R {  
   generic<typename T>  
   where T : static   // C3394  
   // try the following line instead  
   // where T : MyClass  
   void f() {}  
};  
```

