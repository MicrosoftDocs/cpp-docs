---
title: "Compiler Warning (level 3) C4102 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4102"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4102"]
ms.assetid: 349f308a-daf3-48c6-bd53-6c38b73f8880
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4102
'label' : unreferenced label  
  
 The label is defined but never referenced. The compiler ignores the label.  
  
 The following sample generates C4102:  
  
```  
// C4102.cpp  
// compile with: /W3  
int main() {  
   int a;  
  
   test:   // C4102, remove the unreferenced label to resolve  
  
   a = 1;  
}  
```