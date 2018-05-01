---
title: "Compiler Error C2691 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2691"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2691"
ms.assetid: 6925f8f3-ea60-4909-91e6-b781492c645d
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2691
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2691](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2691).  
  
  
data type' : a managed or WinRTarray cannot have this element type  
  
 The type of a managed or WinRT array element can be a value type or a reference type.  
  
 The following sample generates C2691:  
  
```  
// C2691a.cpp  
// compile with: /clr  
class A {};  
  
int main() {  
   array<A>^ a1 = gcnew array<A>(20);   // C2691  
   array<int>^ a2 = gcnew array<int>(20);   // value type OK  
}  
```  
  
 The following sample generates C2691:  
  
```  
// C2691b.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
int main() {  
   int * a1 __gc[];   // C2691  
   int * a1 = new int [20];   // OK  
}  
```  
  
 C2691 can also occur if you attempt to define a jagged array using Managed Extensions for C++.  Jagged arrays are supported in the current syntax, see [Arrays](../../windows/arrays-cpp-component-extensions.md) for more information.  
  
 The following sample generates C2691:  
  
```  
// C2691c.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
int main() {  
   Int32 myJaggedArray[][] = new Int32 [50][];   // C2691  
}  
```

