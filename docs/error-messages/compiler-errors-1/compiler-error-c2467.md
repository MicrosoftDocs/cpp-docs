---
title: "Compiler Error C2467 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2467"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2467"]
ms.assetid: f9ead270-5d0b-41cc-bdcd-586a647c67a7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2467
illegal declaration of anonymous 'user-defined-type'  
  
 A nested user-defined type was declared. This is an error when compiling C source code with the ANSI compatibility option ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) enabled.  
  
 The following sample generates C2467:  
  
```  
//C2467.c  
// compile with: /Za   
int main() {  
   struct X {  
      union { int i; };   // C2467, nested declaration  
   };  
}  
```