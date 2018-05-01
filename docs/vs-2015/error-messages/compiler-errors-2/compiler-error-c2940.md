---
title: "Compiler Error C2940 | Microsoft Docs"
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
  - "C2940"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2940"
ms.assetid: af6bf2bf-8de6-4cfd-bbf0-4c6b32a30edf
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C2940
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C2940](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c2940).  
  
  
class' : type-class-id redefined as a local typedef  
  
 You cannot use a generic or template class as a local `typedef`.  
  
 The following sample generates C2940:  
  
```  
// C2940.cpp  
template<class T>  
struct TC {};   
int main() {  
   typedef int TC<int>;   // C2940  
   typedef int TC;   // OK  
}  
```  
  
 C2940 can also occur when using generics:  
  
```  
// C2940b.cpp  
// compile with: /clr  
generic<class T>  
ref struct GC { };  
  
int main() {  
   typedef int GC<int>;   // C2940  
   typedef int GC;  
}  
```

