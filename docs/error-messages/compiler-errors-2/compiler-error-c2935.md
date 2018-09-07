---
title: "Compiler Error C2935 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2935"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2935"]
ms.assetid: e11ef90d-0756-4e43-8a09-4974c6aa72a3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2935
'class' : type-class-id redefined as a global function  
  
 You cannot use a generic or template class as a global function.  
  
 This error can be caused if braces are improperly matched.  
  
 The following sample generates C2935:  
  
```  
// C2935.cpp  
// compile with: /c  
template<class T>  
struct TC {};   
void TC<int>() {}   // C2935  
  
// OK  
struct TC2 {};   
void TC2() {}  
```  
  
 C2935 can also occur when using generics:  
  
```  
// C2935b.cpp  
// compile with: /clr /c  
generic<class T>   
ref struct GC { };  
void GC<int>() {}   // C2935  
void GC() {}   // OK  
```