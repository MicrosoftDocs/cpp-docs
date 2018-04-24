---
title: "Compiler Error C3166 | Microsoft Docs"
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
  - "C3166"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3166"
ms.assetid: ec3e330d-c15d-4158-8268-09101486c566
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3166
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3166](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3166).  
  
  
pointer' : cannot declare a pointer to an interior __gc pointer as a member of 'type'  
  
 The compiler found an invalid pointer declaration (a [__nogc](../../misc/nogc.md) pointer to a [__gc](../../misc/gc.md) pointer.). This syntax may be supported in a future release.  
  
 C3166 is only reachable using **/clr:oldSyntax**.  
  
 The following sample generates C3166:  
  
```  
// C3166.cpp  
// compile with: /clr:oldSyntax  
#using <mscorlib.dll>  
using namespace System;  
  
__gc struct G {  
   int __gc* __nogc* p;   // C3166  
};  
  
public __gc class H {  
public:  
   Int32 __gc* __nogc* p;   // C3166  
};  
  
public __value struct I {  
   int __gc* __nogc* p;   // C3166  
};  
  
public __value class J {  
public:  
   int __gc* __nogc* p;   // C3166  
};  
  
int main() {  
   G* pG = new G;  
   H* pH = new H;  
}  
```

