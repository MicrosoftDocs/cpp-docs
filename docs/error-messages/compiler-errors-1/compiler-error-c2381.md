---
title: "Compiler Error C2381 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2381"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2381"]
ms.assetid: cc765f67-64ac-406f-93ef-ae7d548d58d7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2381
'function' : redefinition; __declspec(noreturn) differs  
  
 A function was declared and then defined but the definition used the [noreturn](../../cpp/noreturn.md) `__declspec` modifier. The use of `noreturn` constitutes a redefinition of the function; the declaration and definition need to agree on the use of `noreturn`.  
  
 The following sample generates C2381:  
  
```  
// C2381.cpp  
// compile with: /c  
void f1();  
void __declspec(noreturn) f1() {}   // C2381  
void __declspec(noreturn) f2() {}   // OK  
```