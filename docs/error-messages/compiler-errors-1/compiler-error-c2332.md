---
title: "Compiler Error C2332 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2332"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2332"]
ms.assetid: fb05cd68-e271-4bea-9fb7-ef4edb0a26ac
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2332
'typedef' : missing tag name  
  
 The compiler found an incomplete type definition.  
  
 The following sample generates C2332:  
  
```  
// C2332.cpp  
// compile with: /c  
struct S {  
   int i;  
};  
  
typedef struct * pS;   // C2332  
typedef struct S* pS;   // OK  
  
int get_S_i(pS p) {  
   return p->i;  
}  
```