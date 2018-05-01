---
title: "Compiler Error C2271 | Microsoft Docs"
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
  - "C2271"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2271"
ms.assetid: ea47bf57-f55d-4171-8e98-95a71d62820e
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2271
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2271](https://docs.microsoft.com/cpp/error-messages/compiler-errors-1/compiler-error-c2271).  
  
  
operator' : new/delete cannot have formal list modifiers  
  
 The operator (`new` or `delete`) is declared with a memory-model specifier.  
  
 The following sample generates C2271:  
  
```  
// C2271.cpp  
// compile with: /c  
void* operator new(size_t) const {   // C2271  
// try the following line instead  
// void* operator new(size_t) {  
   return 0;  
}  
  
struct X {  
   static void* operator new(size_t) const;   // C2271  
   // try the following line instead  
   // void * X::operator new(size_t) const;   // static member operator new  
};  
```

