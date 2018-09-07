---
title: "Compiler Error C3254 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3254"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3254"]
ms.assetid: 93427b10-fa72-4e43-80d1-1a6e122f9f40
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3254
'explicit override' : class contains explicit override 'override' but does not derive from an interface that contains the function declaration  
  
 When you [explicitly override](../../cpp/explicit-overrides-cpp.md) a method, the class that contains the override must derive, directly or indirectly, from the type that contains the function you are overriding.  
  
 The following sample generates C3254:  
  
```  
// C3254.cpp  
__interface I  
{  
   void f();  
};  
  
__interface I1 : I  
{  
};  
  
struct A /* : I1 */  
{  
   void I1::f()  
   {   // C3254, uncomment : I1 to resolve this C3254  
   }  
};  
  
int main()  
{  
}  
```