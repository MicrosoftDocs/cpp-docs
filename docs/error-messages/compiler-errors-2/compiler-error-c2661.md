---
title: "Compiler Error C2661 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2661"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2661"]
ms.assetid: 60021467-71cd-451b-9877-23840c69309f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2661
'function' : no overloaded function takes number parameters  
  
 Possible causes:  
  
1.  Incorrect actual parameters in function call.  
  
2.  Missing function declaration.  
  
 The following sample generates C2661:  
  
```  
// C2661.cpp  
void func( int ){}  
void func( int, int ){}  
int main() {  
   func( );   // C2661 func( void ) was not declared  
   func( 1 );   // OK func( int ) was declared  
}  
```