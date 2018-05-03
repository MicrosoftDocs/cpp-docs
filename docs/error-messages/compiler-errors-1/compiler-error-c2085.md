---
title: "Compiler Error C2085 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2085"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2085"]
ms.assetid: 0a86785c-8e6f-481b-8c7b-412220c1950d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2085
'identifier' : not in formal parameter list  
  
 The identifier was declared in a function definition but not in the formal parameter list. (ANSI C only)  
  
 The following sample generates C2085:  
  
```  
// C2085.c  
void func1( void )  
int main( void ) {}   // C2085  
```  
  
 Possible resolution:  
  
```  
// C2085b.c  
void func1( void );  
int main( void ) {}  
```  
  
 With the semicolon missing, `func1()` looks like a function definition, not a prototype, so `main` is defined within `func1()`, generating Error C2085 for identifier `main`.