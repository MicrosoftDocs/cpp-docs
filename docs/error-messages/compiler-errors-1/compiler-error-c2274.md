---
title: "Compiler Error C2274 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2274"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2274"]
ms.assetid: 8e874903-f499-45ef-8291-f821eee4cc1c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2274
'type' : illegal as right side of '.' operator  
  
 A type appears as the right operand of a member-access (.) operator.  
  
 This error can be caused by trying to access a user-defined type conversion. Use the keyword `operator` between the period and `type`.  
  
 The following sample generates C2286:  
  
```  
// C2274.cpp  
struct MyClass {  
   operator int() {  
      return 0;  
   }  
};  
  
int main() {  
   MyClass ClassName;  
   int i = ClassName.int();   // C2274  
   int j = ClassName.operator int();   // OK  
}  
```