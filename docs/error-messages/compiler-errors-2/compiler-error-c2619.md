---
title: "Compiler Error C2619 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2619"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2619"]
ms.assetid: c826f8ab-d66a-4b79-a0b2-93b0af8c41ac
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2619
'identifier': a static data member is not allowed in an anonymous struct or union  
  
 A member of an anonymous struct or union is declared `static`.  
  
 The following sample generates C2619, and demonstrates how to fix it by removing the static keyword.  
  
```  
// C2619.cpp  
int main() {  
   union { static int j; };  // C2619  
   union { int j; };  // OK  
}  
```