---
title: "Compiler Error C2275 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2275"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2275"]
ms.assetid: c1eafa71-48de-46e0-82f3-b575538ef205
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2275
'identifier' : illegal use of this type as an expression  
  
 An expression uses the `->` operator with a `typedef` identifier.  
  
 The following sample generates C2275:  
  
```  
// C2275.cpp  
typedef struct S {  
    int mem;  
} *S_t;  
void func1( int *parm );  
void func2() {  
    func1( &S_t->mem );   // C2275, S_t is a typedef  
}  
```