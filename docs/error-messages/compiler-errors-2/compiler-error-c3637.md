---
title: "Compiler Error C3637 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3637"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3637"
ms.assetid: 72391377-8519-43d9-870a-73a6423deb74
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Error C3637
'function' : a friend function definition cannot be a specialization of a function type  
  
 A friend function was defined incorrectly for a template or generic.  
  
 The following sample generates C3637:  
  
```  
// C3637.cpp  
template <class T>  
void f();  
  
struct S {  
   friend void f<int>() {}   // C3637  
};  
```  
  
 Possible resolution:  
  
```  
// C3637b.cpp  
// compile with: /c  
template <class T>  
void f();  
  
struct S {  
   friend void f() {}  
};  
```  
  
 C3637 can also occur when using generics:  
  
```  
// C3637c.cpp  
// compile with: /clr  
  
generic <class T>  
void gf();  
  
struct S {  
   friend void gf<int>() {}   // C3637  
};  
```  
  
 Possible resolution:  
  
```  
// C3637d.cpp  
// compile with: /clr /c  
generic <class T>  
void gf();  
  
struct S {  
   friend void gf() {}  
};  
```