---
title: "Compiler Error C2562 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2562"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2562"]
ms.assetid: 2c41e511-9952-4b98-9976-6b1523613e1b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2562
'identifier' : 'void' function returning a value  
  
 The function is declared as `void` but returns a value.  
  
 This error can be caused by an incorrect function prototype.  
  
 This error may be fixed if you specify the return type in the function declaration.  
  
 The following sample generates C2562:  
  
```  
// C2562.cpp  
// compile with: /c  
void testfunc() {  
   int i;  
   return i;   // C2562 delete the return to resolve  
}  
```