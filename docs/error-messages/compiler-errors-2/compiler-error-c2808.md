---
title: "Compiler Error C2808 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2808"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2808"]
ms.assetid: 3d745102-d3b3-4735-a7d2-ad42d5bf3cfa
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2808
unary 'operator operator' has too many formal parameters  
  
 The unary operator has a nonvoid parameter list.  
  
 The following sample generates C2808:  
  
```  
// C2808.cpp  
// compile with: /c  
class X {  
public:  
   X operator! ( X );   // C2808 nonvoid parameter list  
   X operator! ( void );   // OK  
};  
  
```