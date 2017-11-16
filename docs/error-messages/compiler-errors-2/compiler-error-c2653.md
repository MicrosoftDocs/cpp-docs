---
title: "Compiler Error C2653 | Microsoft Docs"
ms.custom: ""
ms.date: "11/16/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: ["C2653"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2653"]
ms.assetid: 3f49e731-affd-43a0-a8d0-181db7650bc3
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2653
'identifier' : is not a class or namespace name  
  
Syntax requires a class, structure, union, or namespace name.  
  
The following sample generates C2653:  
  
```cpp  
// C2653.cpp  
// compile with: /c  
class yy {  
   void func1(int i);  
};  
  
void xx::func1(int m) {}   // C2653  
void yy::func1(int m) {}   // OK  
```  
  
C2653 is also possible if you try to define a *compound namespace*, a namespace that contains one or more scope-nested namespace names, when you use a version of Visual C++ prior to Visual Studio 2015 Update 3. Compound namespace definitions are not allowed in C++ prior to C++17. Starting in Visual C++ 2015 version 15.5, the compiler supports compound namespace definitions when the [/std:c++17](../../build/reference/std-specify-language-standard-version.md) compiler option is specified:  
```cpp  
// C2653b.cpp  
namespace a::b {int i;}   // C2653 prior to Visual C++ 2015 Update 3,  
                          // C2429 thereafter. Use /std:c++17 to fix (or /std:c++latest in 15.3)
namespace a {  
   namespace b {  
      int i;  
   }  
}  
  
int main() {  
   a::b::i = 2;  
}  
```  

In Visual Studio 2017 version 15.3, the /std:c++latest switch is required.
