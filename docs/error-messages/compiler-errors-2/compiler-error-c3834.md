---
title: "Compiler Error C3834 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3834"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3834"]
ms.assetid: 059e0dc4-300b-4e74-b6c2-41a57831fe2a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3834
illegal explicit cast to a pinning pointer; use a pinned local variable instead  
  
 Explicit casts to a pinned pointer are not allowed.  
  
## Example  
 The following sample generates C3834.  
  
```  
// C3834.cpp  
// compile with: /clr  
int main() {  
   int x = 33;  
  
   pin_ptr<int> p = safe_cast<pin_ptr<int> >(&x);   // C3834  
   pin_ptr<int> p2 = &x;   // OK  
}  
```  
