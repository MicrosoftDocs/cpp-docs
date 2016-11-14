---
title: "Compiler Error C2602 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C2602"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C2602"
ms.assetid: 6c07a40e-537e-4954-b5c5-1e0e58fe1952
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
# Compiler Error C2602
'class::Identifier' is not a member of a base class of 'class'  
  
 `Identifier` cannot be accessed because it is not a member inherited from any base class.  
  
 The following sample generates C2602:  
  
```  
// C2602.cpp  
// compile with: /c  
struct X {  
   int x;  
};  
struct A {  
   int a;  
};  
struct B : public A {  
   X::x;   // C2602 B is not derived from X  
   A::a;   // OK  
};  
```