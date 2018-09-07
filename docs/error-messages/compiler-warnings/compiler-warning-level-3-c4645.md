---
title: "Compiler Warning (level 3) C4645 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4645"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4645"]
ms.assetid: fd7c1ddf-f0d0-4e10-bab9-ccb4c3476298
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4645
function declared with __declspec(noreturn) has a return statement  
  
 A [return](../../cpp/return-statement-in-program-termination-cpp.md) statement was found in a function that is marked with the [noreturn](../../cpp/noreturn.md) `__declspec` modifier. The `return` statement was ignored.  
  
 The following sample generates C4645:  
  
```  
// C4645.cpp  
// compile with:  /W3  
void __declspec(noreturn) func() {  
   return;   // C4645, delete this line to resolve  
}  
  
int main() {  
}  
```