---
title: "Compiler Error C2761 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2761"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2761"
ms.assetid: 38c79a05-b56d-485b-820f-95e8c0cb926f
caps.latest.revision: 9
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
# Compiler Error C2761
'function' : member function redeclaration not allowed  
  
 You cannot redeclare a member function. You can define it, but not redeclare it.  
  
## Example  
 The following sample generates C2761.  
  
```  
// C2761.cpp  
class a {  
   int t;  
   void test();  
};  
  
void a::a;     // C2761  
void a::test;  // C2761  
  
```  
  
## Example  
 Nonstatic members of a class or structure cannot be defined.  The following sample generates C2761.  
  
```  
// C2761_b.cpp  
// compile with: /c  
struct C {  
   int s;  
   static int t;  
};  
  
int C::s;   // C2761  
int C::t;   // OK  
```