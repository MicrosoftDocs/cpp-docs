---
title: "Compiler Error C2942 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2942"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2942"
ms.assetid: 13abf744-8fa1-450d-886d-e5717c04956e
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2942
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2942](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2942).  
  
  
class' : type-class-id redefined as a formal argument of a function  
  
 You cannot use a generic or template class as a formal argument. You cannot pass an argument directly to the constructor of a generic or template class.  
  
 The following sample generates C2942:  
  
```  
  
// C2942.cpp  
// compile with: /c  
template<class T>  
struct TC {};   
void f(int TC<int>) {}   // C2942  
  
// OK  
struct TC2 {};  
void f(TC2 i) {}  
```  
  
 C2942 can also occur when using generics:  
  
```  
// C2942b.cpp  
// compile with: /clr /c  
generic<class T>  
ref struct GC {};  
void f(int GC<int>) {}   // C2942  
ref struct GC2 { };  
void f(int GC2) {}  
```

