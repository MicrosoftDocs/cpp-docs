---
title: "Compiler Error C2781 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2781"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2781"]
ms.assetid: f29b9963-f55b-427c-8db6-50f37713df5a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2781
'declaration' : expects at least value1 argument - value2 provided  
  
 A function template with a variable parameter list has too few arguments.  
  
 The following sample generates C2781:  
  
```  
// C2781.cpp  
template<typename T>  
void f(T, T, ...){}  
  
int main() {  
   f(1);   // C2781  
  
   // try the following line instead  
   f(1,1);  
}  
```