---
title: "Compiler Error C3192 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3192"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3192"]
ms.assetid: 8b0083d4-706f-46f6-858a-e1d9af464cf8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3192
syntax error : '^' is not a prefix operator (did you mean '*'?)  
  
 A handle cannot be used as a dereference operator.  
  
 The following sample generates C3192:  
  
```  
// C3192.cpp  
// compile with: /clr  
using namespace System;  
  
ref class MyClass {  
public:  
   MyClass () {}  
   MyClass(MyClass%) {}  
};  
  
int main() {  
   MyClass ^ s = gcnew MyClass;   
   MyClass b = ^s;   // C3192  
  
   // OK  
   MyClass b2 = *s;  
}  
```