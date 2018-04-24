---
title: "Compiler Error C3824 | Microsoft Docs"
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
  - "C3824"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3824"
ms.assetid: b6c6adf1-0a29-401c-a06e-616fd50d4c37
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3824
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3824](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3824).  
  
  
member': this type cannot appear in this context (function parameter, return type, or a static member)  
  
 Pinning pointers cannot be function parameters, return types, or declared `static`.  
  
 The following sample generates C3824:  
  
```  
// C3824a.cpp  
// compile with: /clr /c  
void func() {  
   static pin_ptr<int> a; // C3824  
   pin_ptr<int> b; // OK  
}  
```  
  
 **Managed Extensions for C++**  
  
 Local pointers declared with the `__pin` keyword cannot be declared `static` and cannot be interior pointers.  
  
 The following sample generates C3824:  
  
```  
// C3824b.cpp  
// compile with: /clr:oldSyntax /c  
#using <mscorlib.dll>  
  
__gc struct A {};  
  
void func() {  
   static A __pin* a;   // C3824  
   A __pin* b;   // OK  
}  
```

