---
title: "Compiler Error C2745 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2745"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2745"]
ms.assetid: a1c45f13-7667-4678-aa16-265304a449a1
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2745
'token' : this token cannot be converted to an identifier  
  
 Identifiers must be comprised of legal characters.  
  
 The following sample generates C2745:  
  
```  
// C2745.cpp  
// compile with: /clr  
int main() {  
   int __identifier([));   // C2745  
}  
```