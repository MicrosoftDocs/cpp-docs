---
title: "Compiler Error C3240 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3240"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3240"
ms.assetid: 1a8dc213-b80c-47ae-ada0-e9554b635d1e
caps.latest.revision: 6
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
# Compiler Error C3240
'function' : must be a non-overloaded abstract member function of 'type'  
  
 A base type contained a function that was defined. Function must be virtual.  
  
## Example  
 The following sample generates C3240.  
  
```  
// C3240.cpp  
// compile with: /c  
__interface I {  
   void f();  
};  
  
struct A1 : I {   
   void f() {}  
};  
  
struct A2 : I {   
   void f() = 0;  
};  
  
template <class T>   
struct A3 : T {  
   void T::f() {}  
};  
  
template <class T>   
struct A4 : T {  
   void T::f() {}  
};  
  
A3<A1> x;   // C3240  
A3<I> x2;  
A4<A2> x3;  
```