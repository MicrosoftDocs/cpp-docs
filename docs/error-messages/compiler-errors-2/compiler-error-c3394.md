---
title: "Compiler Error C3394 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3394"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3394"]
ms.assetid: 4e025d79-27ba-43c8-b0d9-839ecef98126
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3394
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