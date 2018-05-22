---
title: "Compiler Error C2845 | Microsoft Docs"
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
  - "C2845"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2845"
ms.assetid: 31b28ee9-978f-403b-94d8-dbaacd24cce0
caps.latest.revision: 15
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2845
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2845](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2845).  
  
  
operator' : pointer arithmetic not allowed on this type  
  
 You cannot increment the pointer to a managed class.  
  
 **Managed Extensions for C++**  
  
 You cannot increment the pointer to a [__gc](../../misc/gc.md) class.  Also, string operators are only valid with **/clr** (not **/clr:oldSyntax**).  
  
 The following sample generates C2845:  
  
```  
// C2845b.cpp  
// compile with: /clr:oldSyntax  
using namespace System;  
__gc class X {};  
  
int main() {  
   X *pX = new X;  
   pX++;   // C2845  
  
   String * a = new String("abc");  
   String * b = new String("def");  
   Console::WriteLine(a + b);   // C2845 not with /clr:oldSyntax  
}  
```

