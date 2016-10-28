---
title: "Compiler Error C2939"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C2939"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2939"
ms.assetid: 455b050b-f2dc-4b5b-bd6a-e1f81d3d1644
caps.latest.revision: 10
ms.author: "corob"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Compiler Error C2939
'class' : type-class-id redefined as a local data variable  
  
 You cannot use a generic or template class as a local data variable.  
  
 This error can be caused if braces are improperly matched.  
  
 The following sample generates C2939:  
  
```  
// C2939.cpp  
template<class T>  
struct TC { };   
int main() {  
   int TC<int>;   // C2939  
   int TC;   // OK  
}  
```  
  
 C2939 can also occur when using generics:  
  
```  
// C2939b.cpp  
// compile with: /clr  
generic<class T>  
ref struct GC { };  
  
int main() {  
   int GC<int>;   // C2939  
   int GC;   // OK  
}  
```