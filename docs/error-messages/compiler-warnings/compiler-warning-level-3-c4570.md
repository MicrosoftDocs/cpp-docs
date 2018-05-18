---
title: "Compiler Warning (level 3) C4570 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4570"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4570"]
ms.assetid: feec1225-e6ad-4995-8d96-c22e864a77bd
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4570
'type' : is not explicitly declared as abstract but has abstract functions  
  
 A type that contains [abstract](../../windows/abstract-cpp-component-extensions.md) functions should itself be marked as abstract.  
  
## Example  
 The following sample generates C4570.  
  
```  
// C4570.cpp  
// compile with: /clr /W3 /c  
ref struct X {   // C4570  
// try the following line instead  
// ref class X abstract {  
   virtual void f() abstract;  
};  
```