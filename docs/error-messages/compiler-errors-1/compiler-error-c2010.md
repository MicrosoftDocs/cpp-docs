---
title: "Compiler Error C2010 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2010"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2010"]
ms.assetid: 5795ed1d-e206-410b-b7b4-528d125c67b4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2010
'character' : unexpected in macro formal parameter list  
  
 The character is used incorrectly in the formal parameter list of a macro definition. Remove the character to resolve the error.  
  
 The following sample generates C2010:  
  
```  
// C2010.cpp  
// compile with: /c  
#define mymacro(a|) (2*a)   // C2010  
#define mymacro(a) (2*a)   // OK  
```