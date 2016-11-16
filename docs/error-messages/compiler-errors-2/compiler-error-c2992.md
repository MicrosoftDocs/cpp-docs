---
title: "Compiler Error C2992 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C2992"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2992"
ms.assetid: 01b16447-43fe-4e91-9a5a-af884a166a31
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
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
# Compiler Error C2992
'class' : invalid or missing type parameter list  
  
 The class is preceded by a `template` or **generic** keyword with missing or invalid parameters.  
  
## Example  
 The following sample generates C2992:  
  
```  
// C2992.cpp  
// compile with: /c  
template <class T>   
struct TC1 {  
   template <class U>  
   struct TC2;  
};  
  
template <class T>   struct TC1<T>::TC2 {};   // C2992  
  
// OK  
template <class T>  
template <class U>  
struct TC1<T>::TC2 {};  
 // C2992 can also occur when using generics:  
// C2992c.cpp  
// compile with: /clr /c  
generic <class T>  
ref struct GC1 {  
   generic <class U>  
   ref struct GC2;  
};  
  
generic <class T> ref struct GC1<T>::GC2 {};   // C2992  
  
// OK  
generic <class T>  
generic <class U>  
ref struct GC1<T>::GC2 {};  
```