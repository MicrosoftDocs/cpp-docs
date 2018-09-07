---
title: "Compiler Warning (level 1) C4602 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4602"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4602"]
ms.assetid: c1f0300f-e2a2-4c9e-a7c3-4c7318d10509
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4602
\#pragma pop_macro : 'macro name' no previous #pragma push_macro for this identifier  
  
 If you use [pop_macro](../../preprocessor/pop-macro.md) for a particular macro, you must first have passed that macro name to [push_macro](../../preprocessor/push-macro.md). For example, the following sample generates C4602:  
  
```  
// C4602.cpp  
// compile with: /W1  
int main()  
{  
   #pragma pop_macro("x")   // C4602 x is not on the stack  
}  
```