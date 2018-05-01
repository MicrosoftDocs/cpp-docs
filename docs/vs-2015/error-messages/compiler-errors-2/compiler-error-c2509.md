---
title: "Compiler Error C2509 | Microsoft Docs"
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
  - "C2509"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2509"
ms.assetid: 339c1fcd-ec4a-456c-9f18-a9b24d9921af
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2509
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2509](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2509).  
  
  
identifier' : member function not declared in 'class'  
  
 The function is not declared in the specified class.  
  
## Example  
 The following sample generates C2509.  
  
```  
// C2509.cpp  
// compile with: /c  
struct A {  
   virtual int vfunc() = 0;  
   virtual int vfunc2() = 0;  
};  
  
struct B : private A {  
   using A::vfunc;  
   virtual int vfunc2();  
};  
  
int B::vfunc() { return 1; }   // C2509  
int B::vfunc2() { return 1; }   // OK  
```

