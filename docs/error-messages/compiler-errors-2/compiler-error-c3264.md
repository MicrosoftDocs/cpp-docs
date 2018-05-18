---
title: "Compiler Error C3264 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3264"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3264"]
ms.assetid: 94ece687-2364-4f7a-8ebb-7afd3ae9d63d
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3264
'class' : a class-constructor cannot have a return type  
  
Class constructors cannot have return types.  
  
The following sample generates C3264:  
  
```  
// C3264_2.cpp  
// compile with: /clr  
  
ref class X {  
   public:  
      static int X()   { // C3264  
      }  
  
      /* use the code below to resolve the error  
      static X() {  
      }  
      */  
};  
int main() {  
}  
```  
