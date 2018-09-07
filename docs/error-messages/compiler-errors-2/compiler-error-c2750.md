---
title: "Compiler Error C2750 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2750"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2750"]
ms.assetid: 30450034-feb5-448c-9655-b8c5f3639695
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2750
'type' : cannot use 'new' on the reference type; use 'gcnew' instead  
  
 To create an instance of a CLR type, which causes the instance to be placed on the garbage-collected heap, you must use [gcnew](../../windows/ref-new-gcnew-cpp-component-extensions.md).  
  
 The following sample generates C2750:  
  
```  
// C2750.cpp  
// compile with: /clr  
ref struct Y1 {};  
  
int main() {  
   Y1 ^ x = new Y1;   // C2750  
  
   // try the following line instead  
   Y1 ^ x2 = gcnew Y1;  
}  
```