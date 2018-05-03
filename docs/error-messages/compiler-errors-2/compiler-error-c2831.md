---
title: "Compiler Error C2831 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2831"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2831"]
ms.assetid: c8c04288-0889-4265-a077-17f94cbcdcc9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2831
'operator operator' cannot have default parameters  
  
 Only three operators can have default parameters:  
  
-   [new](../../cpp/new-operator-cpp.md)  
  
-   Assignment =  
  
-   Left parenthesis (  
  
 The following sample generates C2831:  
  
```  
// C2831.cpp  
// compile with: /c  
#define BINOP <=  
class A {  
public:  
   int i;  
   int operator BINOP(int x = 1) {   // C2831  
   // try the following line instead  
   // int operator BINOP(int x) {  
      return i+x;  
   }  
};  
```