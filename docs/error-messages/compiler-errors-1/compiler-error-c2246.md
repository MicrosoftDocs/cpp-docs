---
title: "Compiler Error C2246 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2246"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2246"]
ms.assetid: 4f3e4f83-21f3-4256-af96-43e0bb060311
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2246
'identifier' : illegal static data member in locally defined class  
  
 A member of a class, structure, or union with local scope is declared `static`.  
  
 The following sample generates C2246:  
  
```  
// C2246.cpp  
// compile with: /c  
void func( void ) {  
   class A { static int i; };   // C2246  i is local to func  
   static int j;   // OK  
};  
```